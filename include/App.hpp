#pragma once
#include <SFML/Graphics.hpp>
#include "Scene.hpp"
class App {
private:
    sf::RenderWindow window;
    Scene scene;
    sf::VideoMode videoMode;
    sf::String title;
    sf::Uint32 style;
    uint8_t framerate;
public:
    App(sf::VideoMode videoMode = sf::VideoMode::getDesktopMode(), sf::String title = "Window", sf::Uint32 style = sf::Style::Fullscreen, uint8_t framerate = 60); 

    App(const App& other);

    void setVideoMode(sf::VideoMode videoMode);

    void setTitle(sf::String title);

    void setStyle(sf::Uint32 style);

    void setFramerate(uint8_t framerate);

    void setScene(Scene& scene);

    void run();

    void close();
};
