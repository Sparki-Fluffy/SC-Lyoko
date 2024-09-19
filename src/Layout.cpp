#include "../include/Layout.hpp"

Layout::Layout(std::string name, float x, float y, float width, float height, sf::Color color, sf::Color selectedColor) : 
    Base(name, x, y, width, height, color, selectedColor)
{
    firstChild = nullptr;
    lastChild = nullptr;
    selected = nullptr;
}

std::string Layout::getType() const
{
    return "Layout";
}

void Layout::addChild(Base* object)
{
    object->parent = this;
    if (firstChild == nullptr)
    {
        firstChild = object;
        lastChild = object;
    }
    else
    {
        lastChild->next = object;
        object->previous = lastChild;
        lastChild = object;
    }
}

void Layout::setSelected(Base* object)
{
    std::string tname = "";
    std::string type = selected->getType();
    Layout* s;
    if (type == "Layout" || type == "Layout" || type == "Menu")
    {
        s = (Layout*)selected;
        if (s->getSelected() != nullptr)
        {
            tname = s->getSelected()->getName();
        }
        s->getSelected()->deselect();
    }

    selected->deselect();
    selected = object;
    selected->select();

    if (tname != "")
    {
        s = (Layout*)selected;
        s->getChild<Base>(tname)->select();
    }
}

Base* Layout::getSelected()
{
    return selected;
}

void Layout::draw(sf::RenderWindow& window)
{
    Base::draw(window);

    for (Base* object = firstChild; object != nullptr; object = object->next)
    {
        if (object->isSelected) selected = object;
        object->draw(window);
    }
}

void Layout::onEvent(sf::Event& event)
{
    if (selected != nullptr)
    {
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

void Layout::onKeyPressed(sf::Event::KeyEvent& key)
{
    if (selected->next != nullptr && (key.code == Controls["MoveUp"].first ||
                                      key.code == Controls["MoveUp"].second ||
                                      key.code == Controls["MoveRight"].first ||
                                      key.code == Controls["MoveRight"].second))
    {
        setSelected(selected->next);
    }

    else if (selected->previous != nullptr && (key.code == Controls["MoveDown"].first || 
                                               key.code == Controls["MoveDown"].second ||
                                               key.code == Controls["MoveLeft"].first ||
                                               key.code == Controls["MoveLeft"].second))
    {
        setSelected(selected->previous);
    }
}

void Layout::onKeyReleased(sf::Event::KeyEvent& key)
{

}
