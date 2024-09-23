#pragma once
#include "Base.hpp"
//#include "Container.hpp"

class Layout : public Base {
    friend class Base;
    friend void to_json(nlohmann::json& j, const Layout& cont);
    friend void from_json(nlohmann::json j, Layout& cont);
protected:
    Base* firstChild, *lastChild;
    Base* selected;
public:
    Layout(std::string name = "", float x = 0, float y = 0, float width = 0, float height = 0, 
              sf::Color color = sf::Color::White, sf::Color selectedColor = sf::Color::White);

    std::string getType() const;

    virtual void addChild(Base* object);

    virtual void setSelected(Base* object);

    virtual Base* getSelected();
    
    template <typename T>
    T* getChild(std::string name) {
        for (Base* object = firstChild; object != nullptr; object = object->next) {
            if (object->name == name) return (T*)object;
        }
        return 0;
    }

    virtual void draw(sf::RenderWindow& window);

    virtual void onEvent(sf::Event& event);

    virtual void onKeyPressed(sf::Event::KeyEvent& key);

    virtual void onKeyReleased(sf::Event::KeyEvent& key);
};
