#include "../include/Menu.hpp"

Menu::Menu(std::string name, MenuType menuType, float spacing, float x, float y, float width, float height, sf::Color color, sf::Color selectedColor) : 
    Layout(name, x, y, width, height, color, selectedColor) { 
    std::cout << "hhhhhhhhhhhhhhh\n";
    setMenuType(menuType);
    setSpace(spacing);
}

std::string Menu::getType() const {
    return "Menu";
}

void Menu::setSpace(float spacing) {
    this->spacing = spacing;
}

void Menu::setMenuType(MenuType menuType) {
    this->menuType = menuType;
    if (menuType == VMenu) {
        moveNext = Controls["MoveDown"];
        movePrev = Controls["MoveUp"];
    }
    else {
        moveNext = Controls["MoveRight"];
        movePrev = Controls["MoveLeft"];
    }
}

float Menu::getSpace() {
    return spacing;
}

void Menu::onKeyPressed(sf::Event::KeyEvent& key) {
    if (selected->next != nullptr && (key.code == moveNext.first || key.code == moveNext.second)) {
        setSelected(selected->next);
    }

    else if (selected->previous != nullptr && (key.code == movePrev.first || key.code == movePrev.second)) {
        setSelected(selected->previous);
    }
}

void Menu::recalculateChilds() {
    int i = 0;

    if (menuType == VMenu) {
        for (Base* object = firstChild; object != nullptr; object = object->next, i++) {
            object->setPosition(object->position.x, (object->size.y + spacing) * i);
        }
    }
    else {
        for (Base* object = firstChild; object != nullptr; object = object->next, i++) {
            object->setPosition((object->size.x + spacing) * i, object->position.y);
        }
    }
}

void Menu::draw(sf::RenderWindow& window) {
    recalculateChilds();
    Layout::draw(window);
}

void Menu::onKeyReleased(sf::Event::KeyEvent& key) {

}
