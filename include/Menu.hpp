#pragma once
#include "Layout.hpp"

enum MenuType : int {
    VMenu = 0, HMenu
};

class Menu : public Layout {
    friend void to_json(nlohmann::json& j, const Menu& menu);
    friend void from_json(nlohmann::json j, Menu& menu);
protected:
    float spacing;
    MenuType menuType;
    std::pair<sf::Keyboard::Key, sf::Keyboard::Key> moveNext, movePrev;
public:
    Menu(std::string name = "", MenuType menuType = VMenu, float spacing = 0,
         float x = 0, float y = 0, float width = 0, float height = 0,
         sf::Color color = sf::Color::White, sf::Color selectedColor = sf::Color::White);

    std::string getType() const;

    void setSpace(float space);

    void setMenuType(MenuType menuType);

    float getSpace();

    void recalculateChilds();

    void draw(sf::RenderWindow& window);

    void onKeyPressed(sf::Event::KeyEvent& key);

    void onKeyReleased(sf::Event::KeyEvent& key);
};
