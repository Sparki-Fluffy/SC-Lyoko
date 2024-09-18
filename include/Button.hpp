#pragma once
#include <functional>
#include "Base.hpp"

class Button : public Base
{
    friend void to_json(nlohmann::json& j, const Button& button);
    friend void from_json(nlohmann::json j, Button& button);
    sf::Text text;
    Asset<sf::Font> font;
    sf::Vector2f textPosition;
    sf::Vector2f textSize;

    relativePosition textRelativePosition;
    sf::Color textColor;
    
    std::function<void()> onClick;
public:
    Button(std::string name = "", float x = 0, float y = 0, float width = 0, float height = 0, 
           sf::Color color = sf::Color::White, sf::Color selectedColor = sf::Color::White,
           Asset<sf::Texture>* texture = nullptr, Asset<sf::Texture>* selectedTexture = nullptr,
           float rotation = 0, float originX = 0, float originY = 0, sf::String text = "",
           Asset<sf::Font>* font = nullptr, unsigned int fontSize = 0, 
           sf::Color textColor = sf::Color::White, relativePosition textPosition = Center);

    Button(Button& object) = default;

    std::string getType() const;

    sf::Vector2f getTextPosition();

    void setTextColor(sf::Color color);

    void setText(sf::String text, Asset<sf::Font>& font, unsigned int size);

    void setText(sf::Text text);

    void setTextPosition(relativePosition position);

    void setTextPosition(sf::Vector2f position);

    sf::Text getText();

    void setFunction(std::function<void()> onClick);

    void draw(sf::RenderWindow& window);

    void onEvent(sf::Event& event);

    void onKeyPressed(sf::Event::KeyEvent& key);

    void onKeyReleased(sf::Event::KeyEvent& key);
};
