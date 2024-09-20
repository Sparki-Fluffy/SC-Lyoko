#include "../include/Base.hpp"
Base::Base(std::string name, float x, float y, float width, float height, 
           sf::Color color, sf::Color selectedColor, Asset<sf::Texture>* texture,
           Asset<sf::Texture>* selectedTexture, float rotation, float originX, float originY)
{
    setName(name);
    setPosition(x, y);
    setScale(width, height);
    setColor(color);
    setSelectedColor(selectedColor);
    if (texture != nullptr) setTexture(*texture);
    if (selectedTexture != nullptr) setSelectedTexture(*selectedTexture);
    setRotation(rotation);
    setOrigin(originX, originY);
}

void Base::setName(std::string name)
{
    this->name = name;
}

void Base::setPosition(sf::Vector2f position)
{
    this->position = position;
}

void Base::setPosition(float x, float y)
{
    position = sf::Vector2f(x, y);
}

void Base::setScale(sf::Vector2f factor)
{
    this->size = factor;
}

void Base::setScale(float factorX, float factorY)
{
    this->size = sf::Vector2f(factorX, factorY);
}

void Base::setRotation(float angle)
{
    this->rotation = angle;
}

void Base::scale(sf::Vector2f factor)
{
    setScale(this->size.x * factor.x, this->size.y * factor.y);
}

void Base::scale(float factorX, float factorY)
{
    setScale(this->size.x * factorX, this->size.y * factorY);
}

void Base::setOrigin(sf::Vector2f origin)
{
    this->origin = origin;
}

void Base::setOrigin(float x, float y)
{
    this->origin = sf::Vector2f(x, y);
}

std::string Base::getType() const
{
    return "Base";
}

std::string Base::getName()
{
    return name;
}

sf::Vector2f& Base::getScale()
{
    return size;
}

sf::Vector2f& Base::getPosition()
{
    return position;
}

float Base::getRotation()
{
    return rotation;
}

sf::Vector2f& Base::getOrigin()
{
    return origin;
}

void Base::setColor(sf::Color color)
{
    this->color = color;
}

void Base::setSelectedColor(sf::Color color)
{
    this->selectedColor = color;
}

void Base::setTexture(Asset<sf::Texture>& texture)
{
    this->texture = texture;
}

void Base::setSelectedTexture(Asset<sf::Texture>& texture)
{
    this->selectedTexture = texture;
}

sf::Color& Base::getColor()
{
    return color;
}

sf::Color& Base::getSelectedColor()
{
    return selectedColor;
}

Asset<sf::Texture>& Base::getTexture()
{
    return texture;
}

Asset<sf::Texture>& Base::getSelectedTexture()
{
    return selectedTexture;
}

sf::Sprite& Base::getSprite()
{
    return sprite;
}

void Base::move(sf::Vector2f offset)
{
    setPosition(this->position + offset);
}

void Base::move(float offsetX, float offsetY)
{
    setPosition(this->position.x + offsetX, this->position.y + offsetY);
}

void Base::rotate(float angle)
{
    setRotation(this->rotation + angle);
}

void Base::select()
{
    isSelected = true;
}

void Base::deselect()
{
    isSelected = false;
}

void Base::selectNext()
{
    if (previous != nullptr)
    {
        deselect();
        next->select();
    }
}

void Base::selectPrev()
{
    if (previous != nullptr)
    {
        deselect();
        previous->select();
    }
}

void Base::draw(sf::RenderWindow& window)
{
    sprite.setPosition(position);
    sprite.setRotation(rotation);
    sprite.setOrigin(origin);

    if (!isSelected)
    {
        sprite.setColor(color);
        sprite.setTexture(texture);
    }
    else
    {
        if (hasSelectedTexture) sprite.setTexture(selectedTexture);
        else sprite.setTexture(texture);
        sprite.setColor(selectedColor);
    }
    sprite.setTextureRect(sf::IntRect(0, 0, size.x, size.y));

    window.draw(sprite);
}

void Base::onEvent(sf::Event& event)
{

}

void Base::onKeyPressed(sf::Event::KeyEvent& key)
{

}

void Base::onKeyReleased(sf::Event::KeyEvent& key)
{

}
