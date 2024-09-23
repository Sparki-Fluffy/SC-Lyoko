#pragma once
#include <nlohmann/json.hpp>
#include "Base.hpp"

class Container {
    friend void to_json(nlohmann::json& j, const Container& cont);
    friend void from_json(nlohmann::json j, Container& cont);
protected:
    Base* firstChild, *lastChild;
    Base* selected;
public:
    Container();

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
};
