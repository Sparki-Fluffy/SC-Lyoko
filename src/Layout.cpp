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

void Layout::add(Base* object)
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

Base* Layout::get(std::string name)
{
    return get<Base>(name);
}

Base* Layout::get(unsigned int index)
{
    return get<Base>(index);
}

void Layout::setSelected(Base* object)
{
    std::string tname = "";
    std::string type = selected->getType();
    Layout* s;
    if (type == "Layout" || type == "Menu")
    {
        s = (Layout*)selected;
        tname = s->selected->getName();
        s->selected->deselect();
    }

    selected->deselect();
    selected = object;
    selected->select();

    if (tname != "")
    {
        s = (Layout*)selected;
        s->get(tname)->select();
    }
}

Base* Layout::getSelected()
{
    if (selected != nullptr)
        return selected;
    return new Base();
}

void Layout::select()
{
    Base::select();
    firstChild->select();
    selected = firstChild;
}

void Layout::deselect()
{
    Base::deselect();
    selected->deselect();
}

void Layout::selectNext()
{
    Base::selectNext();
}

void Layout::selectPrev()
{
    Base::selectPrev();
}

void Layout::draw(sf::RenderWindow& window)
{
    Base::draw(window);

    for (Base* object = firstChild; object != nullptr; object = object->next)
    {
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
    if (key.code == Controls["MoveUp"].first ||
        key.code == Controls["MoveUp"].second ||
        key.code == Controls["MoveRight"].first ||
        key.code == Controls["MoveRight"].second)
    {
        selectNext();
    }

    else if (key.code == Controls["MoveDown"].first || 
             key.code == Controls["MoveDown"].second ||
             key.code == Controls["MoveLeft"].first ||
             key.code == Controls["MoveLeft"].second)
    {
        selectPrev();
    }
}

void Layout::onKeyReleased(sf::Event::KeyEvent& key)
{

}
