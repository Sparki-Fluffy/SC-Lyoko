#pragma once
#include "Base.hpp"
#include "Button.hpp"
#include "Menu.hpp"

inline void from_json(nlohmann::json j, Base& base)
{
    base.name = j["name"].get<std::string>();
    std::cout << base.name << "\n";
    base.position.x = j["posX"].get<float>();
    base.position.y = j["posY"].get<float>();

    base.size.x = j["width"].get<float>();
    base.size.y = j["height"].get<float>();
    base.rotation = j["rotation"].get<float>();
    base.origin.x = j["originX"].get<float>();
    base.origin.y = j["originY"].get<float>();

    std::string s = j["texture"].get<std::string>();
    
    if (s != "") base.texture = Textures[s];

    s = j["selectedTexture"].get<std::string>();

    if (s != "") base.selectedTexture = Textures[s];

    base.color = sf::Color(j["color"].get<sf::Uint32>());
    base.selectedColor = sf::Color(j["selectedColor"].get<sf::Uint32>());

    base.isSelected = j["isSelected"].get<bool>();
    base.hasSelectedTexture = j["hasSelectedTexture"].get<bool>();
}

inline void from_json(nlohmann::json j, Button& button)
{
    nlohmann::from_json(j, (Base&)button);
    button.text.setString(sf::String(j["text"]["string"].get<std::string>()));
    button.text.setCharacterSize(j["text"]["characterSize"].get<unsigned int>());
    button.textSize.x = j["textWidth"].get<float>();
    button.textSize.y = j["textHeight"].get<float>();
    button.textPosition.x = j["textPosX"].get<float>();
    button.textPosition.y = j["textPosY"].get<float>();
    button.textRelativePosition = j["textRelPos"];
    button.textColor = sf::Color(j["textColor"].get<int>());
    std::string s = j["font"].get<std::string>();
    if (s != "")
    {
        button.font = Fonts[s];
        button.text.setFont(button.font);
    }
}

inline void from_json(nlohmann::json j, Layout& layout)
{
    nlohmann::from_json(j, (Base&)layout);
    for (auto child : j["children"].items())
    {
        std::string t = child.value()["type"].get<std::string>();

        if (t == "Base")
        {
            Base *b = new Base();
            nlohmann::from_json(child.value(), *b);
            layout.add(b);
        }
            
        else if (t == "Button")
        {
            Button* b = new Button();
            nlohmann::from_json(child.value(), *b);
            layout.add(b);
        }

        else if (t == "Layout")
        {
            Layout* c = new Layout();
            nlohmann::from_json(child.value(), *c);
            layout.add(c);
        }

        else if (t == "Menu")
        {
            Menu* m = new Menu();
            nlohmann::from_json(child.value(), *m);
            layout.add(m);
        }
    }
}

inline void from_json(nlohmann::json j, Menu& menu)
{
    nlohmann::from_json(j, (Layout&)menu);
    menu.spacing = j["spacing"].get<float>();
    menu.menuType = j["menuType"];
}
