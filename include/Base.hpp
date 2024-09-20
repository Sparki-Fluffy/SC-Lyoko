#pragma once
#include <SFML/Graphics.hpp>
#include <map>
#include <iostream>
#include "AssetManager.hpp"
class Button;
class Container;
class Layout;

enum relativePosition : int { None = 0, Up, Down, Left, Right, Center, UpLeft, UpRight, DownLeft, DownRight};

static std::map<sf::String, std::pair<sf::Keyboard::Key, sf::Keyboard::Key>> Controls = {
        { "MoveUp", { sf::Keyboard::Up, sf::Keyboard::W } },
        { "MoveDown", { sf::Keyboard::Down, sf::Keyboard::S } },
        { "MoveLeft", { sf::Keyboard::Left, sf::Keyboard::A } },
        { "MoveRight", { sf::Keyboard::Right, sf::Keyboard::D } },
        { "Use", { sf::Keyboard::Enter, sf::Keyboard::Space } }
};

class Base {
    friend class Button;
    friend class Container;
    friend class Menu;
    friend class Layout;
    friend class Scene;
    friend void to_json(nlohmann::json& j, const Base& base);
    friend void from_json(nlohmann::json j, Base& base);
    friend void to_json(nlohmann::json& j, const Container& cont);
    friend void to_json(nlohmann::json& j, const Layout& cont);
protected:
    std::string name;

    sf::Vector2f position;
    sf::Vector2f size;
    float rotation;
    sf::Vector2f origin;

    sf::Sprite sprite;
    Asset<sf::Texture> texture;
    Asset<sf::Texture> selectedTexture;

    sf::Color color = sf::Color::White;
    sf::Color selectedColor = sf::Color::White;

    bool isSelected = false;
    bool hasSelectedTexture = false;

    Layout* parent = nullptr;
    
    Base* previous = nullptr;
    Base* next = nullptr;
public:
    Base(std::string name = "", float posX = 0, float posY = 0, float width = 0, float height = 0, 
         sf::Color color = sf::Color::White, sf::Color selectedColor = sf::Color::White,
         Asset<sf::Texture>* texture = nullptr, Asset<sf::Texture>* selectedTexture = nullptr,
         float rotation = 0, float originX = 0, float originY = 0);

    Base(Base& object) = default;

    void setName(std::string name);

    void setPosition(sf::Vector2f position);

    void setPosition(float x, float y);

    void setScale(sf::Vector2f factor);

    void setScale(float factorX, float factorY);

    void setRotation(float angle);

    void scale(sf::Vector2f factor);

    void scale(float factorX, float factorY);

    void setOrigin(sf::Vector2f origin);

    void setOrigin(float x, float y);

    virtual std::string getType() const;

    std::string getName();

    sf::Vector2f& getScale();

    sf::Vector2f& getPosition();

    float getRotation();

    sf::Vector2f& getOrigin();

    void setColor(sf::Color color);

    void setSelectedColor(sf::Color color);

    void setTexture(Asset<sf::Texture>& texture);

    void setSelectedTexture(Asset<sf::Texture>& texture);

    sf::Color& getColor();

    sf::Color& getSelectedColor();

    Asset<sf::Texture>& getTexture();

    Asset<sf::Texture>& getSelectedTexture();

    sf::Sprite& getSprite();

    virtual void move(sf::Vector2f offset);

    virtual void move(float offsetX, float offsetY);

    virtual void rotate(float angle);

    virtual void select();

    virtual void deselect();

    virtual void selectNext();

    virtual void selectPrev();

    virtual void draw(sf::RenderWindow& window);

    virtual void onEvent(sf::Event& event);

    virtual void onKeyPressed(sf::Event::KeyEvent& key);

    virtual void onKeyReleased(sf::Event::KeyEvent& key);
};
