#pragma once
#include "Base.hpp"
#include "Button.hpp"
#include "Layout.hpp"
#include "Menu.hpp"

inline void to_json(nlohmann::json& j, const Base& base) {
    j = {
        { "type", base.getType() },
        { "name", base.name },
        { "posX", base.position.x },
        { "posY", base.position.y },
        { "width", base.size.x },
        { "height", base.size.y },
        { "rotation", base.rotation },
        { "originX", base.origin.x },
        { "originY", base.origin.y },
        { "color", base.color.toInteger() },
        { "selectedColor", base.selectedColor.toInteger() },
        { "isSelected", base.isSelected },
        { "hasSelectedTexture", base.hasSelectedTexture },
        { "texture", base.texture->getName() },
        { "selectedTexture", base.selectedTexture->getName() }
    };
}

inline void to_json(nlohmann::json& j, const Button& button) {
    nlohmann::to_json(j, (const Base&)button);
    j.update(
                {
                    { "text", { 
                        { "string", button.text.getString() },
                        { "characterSize", button.text.getCharacterSize() }
                    } },
                    { "textWidth", button.textSize.x },
                    { "textHeight", button.textSize.y },
                    { "textPosX", button.textPosition.x },
                    { "textPosY", button.textPosition.y },
                    { "textRelPos", (int)button.textRelativePosition },
                    { "textColor", button.textColor.toInteger() },
                    { "font", button.font.getName() }
                }
            );
}

inline void to_json(nlohmann::json& j, const Layout& layout) {
    nlohmann::to_json(j, (const Base&)layout);
    nlohmann::json jChildren;

    for (Base* object = layout.firstChild; object != nullptr; object = object->next) {
        nlohmann::json jChild;
        std::string t = object->getType();

        if (t == "Base") {
            nlohmann::to_json(jChild, (const Base&)*object);
        }
            
        else if (t == "Button") {
            nlohmann::to_json(jChild, (const Button&)*object);
        }

        else if (t == "Layout") {
            nlohmann::to_json(jChild, (const Layout&)*object);
        }

        else if (t == "Menu") {
            nlohmann::to_json(jChild, (const Menu&)*object);
        }
        jChildren.push_back(jChild);
    }
    
    j.push_back({ "children", jChildren }); 
}

inline void to_json(nlohmann::json& j, const Menu& menu) {
    nlohmann::to_json(j, (const Layout&)menu);
    j.update({ { "spacing", menu.spacing }, { "menuType", (int)menu.menuType } });
}
