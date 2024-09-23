#pragma once
#include "Base.hpp"
#include "Button.hpp"
#include "Menu.hpp"

inline void from_json(nlohmann::json j, Base& base) {
    base.name = j["name"].get<std::string>();

    base.position.x = j["posX"].get<float>();
    base.position.y = j["posY"].get<float>();

    base.size.x = j["width"].get<float>();
    base.size.y = j["height"].get<float>();
    base.rotation = j["rotation"].get<float>();
    base.origin.x = j["originX"].get<float>();
    base.origin.y = j["originY"].get<float>();

    //sf::Sprite sprite;
    //sf::Texture texture;
    //sf::Texture selectedTexture;

    base.color = sf::Color(j["color"].get<sf::Uint32>());
    base.selectedColor = sf::Color(j["selectedColor"].get<sf::Uint32>());

    base.isSelected = j["isSelected"].get<bool>();
    base.hasSelectedTexture = j["hasSelectedTexture"].get<bool>();

    //Container* parent = nullptr;
    
    //Base* previous = nullptr;
    //Base* next = nullptr;
}

inline void from_json(nlohmann::json j, Button& button) {
    nlohmann::from_json(j, (Base&)button);
    button.text.setString(sf::String(j["text"]["string"].get<std::string>()));
    button.text.setCharacterSize(j["text"]["characterSize"].get<unsigned int>());
    button.textSize.x = j["textWidth"].get<float>();
    button.textSize.y = j["textHeight"].get<float>();
    button.textPosition.x = j["textPosX"].get<float>();
    button.textPosition.y = j["textPosY"].get<float>();
    button.textRelativePosition = j["textRelPos"];
    button.textColor = sf::Color(j["textColor"].get<int>());
}

inline void from_json(nlohmann::json j, Layout& layout) {
    nlohmann::from_json(j, (Base&)layout);
    for (auto child : j["children"].items()) {
        std::string t = child.value()["type"].get<std::string>();

        if (t == "Base") {
            Base b;
            nlohmann::from_json(child.value(), b);
            layout.addChild(&b);
        }
            
        else if (t == "Button") {
            Button b;
            nlohmann::from_json(child.value(), b);
            layout.addChild(&b);
        }

        else if (t == "Layout") {
            Layout c;
            nlohmann::from_json(child.value(), c);
            layout.addChild(&c);
        }

        else if (t == "Menu") {
            Menu m;
            nlohmann::from_json(child.value(), m);
            layout.addChild((Layout*)&m);
        }
    }
}

inline void from_json(nlohmann::json j, Menu& menu) {
    nlohmann::from_json(j, (Layout&)menu);
    menu.spacing = j["spacing"].get<float>();
    menu.menuType = j["menuType"];
}
