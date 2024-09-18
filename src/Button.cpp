#include "../include/Button.hpp"

Button::Button(std::string name, float x, float y, float width, float height,
               sf::Color color, sf::Color selectedColor, Asset<sf::Texture>* texture,
               Asset<sf::Texture>* selectedTexture, float rotation, float originX,
               float originY, sf::String text, Asset<sf::Font>* font, 
               unsigned int fontSize, sf::Color textColor, relativePosition textPosition) :
        Base(name, x, y, width, height, color, selectedColor,
             texture, selectedTexture, rotation, originX, originY)
{
        setText(text, *font, fontSize);
        setTextColor(textColor);
        setTextPosition(textPosition);
}

std::string Button::getType() const
{
    return "Button";
}

sf::Vector2f Button::getTextPosition()
{
    return textPosition;
}

void Button::setTextColor(sf::Color color)
{
    textColor = color;
}

void Button::setText(sf::String text, Asset<sf::Font>& font, unsigned int size)
{
    this->text.setString(text);
    this->font = font;
    this->text.setFont(this->font);
    this->text.setCharacterSize(size);
    this->textSize.x = this->text.getLocalBounds().width;
    this->textSize.y = this->text.getLocalBounds().height;
}

void Button::setText(sf::Text text)
{
    this->text = text;
    this->textSize.x = this->text.getLocalBounds().width;
    this->textSize.y = this->text.getLocalBounds().height;
}

void Button::setTextPosition(relativePosition position)
{
    textRelativePosition = position;
}

void Button::setTextPosition(sf::Vector2f position)
{
    this->textPosition = position;
}

void Button::setFunction(std::function<void()> onClick)
{
    this->onClick = onClick;
}

sf::Text Button::getText()
{
    return text;
}

void Button::draw(sf::RenderWindow& window)
{
    Base::draw(window);

    sf::Vector2f pos;

    switch (textRelativePosition)
    {
        case None:
             pos = textPosition;
             break;
        case Up:
             pos.x = (size.x - textSize.x) / 2;
             pos.y = 0;
             break;
        case Down:
             pos.x = (size.x - textSize.x) / 2;
             pos.y = size.y - textSize.y;
             break;
        case Left:
             pos.x = 0;
             pos.y = (size.y - textSize.y) / 2;
             break;
        case Right:
             pos.x = size.x - textSize.x;
             pos.y = (size.y - textSize.y) / 2;
             break;
        case Center:
             pos.x = (size.x - textSize.x) / 2;
             pos.y = (size.y - textSize.y) / 2;
             break;
        case UpLeft:
             pos = sf::Vector2f(0, 0);
             break;
        case UpRight:
             pos.x = size.x - textSize.x;
             pos.y = 0;
             break;
        case DownLeft:
             pos.x = 0;
             pos.y = size.y - textSize.y;
             break;
        case DownRight:
             pos.x = size.x - textSize.x;
             pos.y = size.y - textSize.y;
             break;
        default:
             break;
    }

    setTextPosition(pos);

    text.setPosition(sf::Vector2f(position.x + textPosition.x, position.y + textPosition.y));
    text.setFillColor(textColor);
    window.draw(text);
}

void Button::onEvent(sf::Event& event)
{
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

void Button::onKeyPressed(sf::Event::KeyEvent& key)
{
    if (isSelected && key.code == Controls["Use"].first || key.code == Controls["Use"].second)
    {
        onClick();
    }
}

void Button::onKeyReleased(sf::Event::KeyEvent& key)
{

}
