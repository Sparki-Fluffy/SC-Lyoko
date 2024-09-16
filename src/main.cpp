// Main file
#include "../include/LyokoInterface.hpp"
/*void close(sf::RenderWindow* window) {
    window->close();
}*/

int main()
{
    /*sf::Font font;
    if (!font.loadFromFile("../resource/fonts/gunshipv4/gun4f.ttf")) {

    }

    sf::Text text, text2;
        
    text.setFont(font);    
    text.setString("Hello");
    text.setCharacterSize(20);
    
    text2.setFont(font);
    text2.setString("hah");
    text2.setCharacterSize(20);

    sf::String path = "../resource/img/Bottom-panel-2-vers.png";
    sf::Texture texture;
    texture.loadFromFile(path);*/

    Asset<sf::Font>* font = Fonts[0];
    Asset<sf::Texture>* texture = Textures[1];
	const uint8_t FPS = 60;
    App mainApp;
    Menu cont
    (
        "Menu", VMenu, 100, 0, 0,
        texture->get().getSize().x * 5 + 400,
        texture->get().getSize().y * 5 + 400, sf::Color::Green
    );
    for (int i = 0; i < 5; i++) {
        Menu* m = new Menu
        (
            "Submenu " + std::to_string(i), HMenu, 100, 0, 0,
            texture->get().getSize().x * 5 + 400,
            texture->get().getSize().y, sf::Color::Red
        );
        cont.addChild(m);
        for (int j = 0; j < 5; j++) {
            m->addChild(new Button
                (
                    "Button cont " + std::to_string(j), 0, 100 * i,
                    texture->get().getSize().x, texture->get().getSize().y,
                    sf::Color::White, sf::Color::Red,
                    texture, nullptr,
                    0, 0, 0,
                    "hah", font, 20, sf::Color::Red,
                    Center
                )
            );
            m->getChild<Button>("Button cont " + std::to_string(j))->setFunction(std::bind(&App::close, &mainApp));
        }
    }
    cont.select();
    cont.getChild<Menu>("Submenu 1")->select();
    cont.getChild<Menu>("Submenu 1")->getChild<Button>("Button cont 0")->select();
    std::cout << (long long)cont.getChild<Menu>("Submenu 1")->getChild<Button>("Button cont 0") << "\n";
    Scene scene("Out");
    //scene.loadFromFile("../scenes/out.json");
    scene.addChild(&cont);
   // scene.saveToFile("../scenes/out.json");
    mainApp.setScene(scene); 
    mainApp.run();
	return 0;
}
