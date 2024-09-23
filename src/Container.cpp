#include "../include/Container.hpp"

Container::Container() {
    firstChild = nullptr;
    lastChild = nullptr;
    selected = nullptr;
}

void Container::addChild(Base* object) {
    object->parent = this;
    if (firstChild == nullptr) {
        firstChild = object;
        lastChild = object;
    }
    else {
        lastChild->next = object;
        object->previous = lastChild;
        lastChild = object;
    }
}

void Container::setSelected(Base* object) {
    std::string tname = "";
    std::string type = selected->getType();
    Container* s;
    if (type == "Container" || type == "Layout" || type == "Menu") {
        s = (Container*)selected;
        if (s->getSelected() != nullptr) {
            std::cout << (long long)s->selected << "\n";
            std::cout << "sssssss " << selected->getName() << "\n";
            tname = s->getSelected()->getName();
        }
        s->getSelected()->deselect();
    }

    selected->deselect();
    selected = object;
    selected->select();

    if (tname != "") {
        s = (Container*)selected;
        s->getChild<Base>(tname)->select();
    }
}

Base* Container::getSelected() {
    return selected;
}
