#pragma once
#include <fstream>
#include "Serialize.hpp"
#include "Deserialize.hpp"

class Scene : public Layout
{
public:
    Scene(std::string name = "");

    std::string getType() const;

    void loadFromFile(const std::string& filename);

    void saveToFile(const std::string& filename);

    void draw(sf::RenderWindow& window);

    void onEvent(sf::Event& event);

    void onKeyPressed(sf::Event::KeyEvent& key);

    void onKeyReleased(sf::Event::KeyEvent& key);
};
