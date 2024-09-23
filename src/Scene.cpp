#include "../include/Scene.hpp"

Scene::Scene(std::string name) : Layout(name) {
}

std::string Scene::getType() const {
    return "Scene";
}

void Scene::draw(sf::RenderWindow& window) {
    for (Base* object = firstChild; object != nullptr; object = object->next) {
        if (object->isSelected) selected = object;
        object->draw(window);
    }
}

void Scene::loadFromFile(const std::string& filename) {
    nlohmann::json j;
    std::ifstream jsonIn(filename);
    j = nlohmann::json::parse(jsonIn);
    nlohmann::from_json(j, (Layout&)*this);
}

void Scene::saveToFile(const std::string& filename) {
    nlohmann::json j;
    std::ofstream jsonOut(filename);
    nlohmann::to_json(j, (const Layout&)*this);
    jsonOut << std::setw(4) << j;
}

void Scene::onEvent(sf::Event& event) {
    if (selected != nullptr) {
        selected->onEvent(event);
        switch (event.type)
        {
            case sf::Event::KeyPressed:   
                onKeyPressed(event.key);
                break;
            case sf::Event::KeyReleased:
                onKeyReleased(event.key);
                break;
            default:
                break;
        }
    }
}

void Scene::onKeyPressed(sf::Event::KeyEvent& key) {

}

void Scene::onKeyReleased(sf::Event::KeyEvent& key) {

}
