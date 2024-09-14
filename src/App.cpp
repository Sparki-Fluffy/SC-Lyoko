#include "../include/App.hpp"
App::App(sf::VideoMode videoMode, sf::String title, sf::Uint32 style, uint8_t framerate) {
    setVideoMode(videoMode);
    setTitle(title);
    setStyle(style);
    setFramerate(framerate);
}

App::App(const App& other) {
    this->scene = other.scene;
    this->videoMode = other.videoMode;
    this->style = other.style;
    this->framerate = other.framerate;
}

void App::setVideoMode(sf::VideoMode videoMode) {
    this->videoMode = videoMode;
}

void App::setTitle(sf::String title) {
    this->title = title;
}

void App::setStyle(sf::Uint32 style) {
    this->style = style;
}

void App::setFramerate(uint8_t framerate) {
    this->framerate = framerate;
}

void App::setScene(Scene& scene) {
    this->scene = scene;
}

void App::run() {
    window.create(videoMode, title, style);
    window.setFramerateLimit(framerate);

    sf::Event event;
    while (window.isOpen())
	{
        while (window.pollEvent(event))
        {
            scene.onEvent(event);

            if (event.type == sf::Event::Closed)
                close();
        }

        window.clear(sf::Color::Black);
        scene.draw(window);
        window.display();
	}
}

void App::close() {
    window.close();
}
