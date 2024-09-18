// Main file
#include "../include/LyokoInterface.hpp"

int main()
{
    App mainApp;
    /*Asset<sf::Font> font = Fonts["gun4f"];
    Asset<sf::Texture> texture = Textures[1];

    Menu cont
    (
        "Menu", VMenu, 100, 0, 0,
        texture.getSize().x * 5 + 400,
        texture.getSize().y * 5 + 400, sf::Color::Green
    );
    for (int i = 0; i < 5; i++)
    {
        Menu* m = new Menu
        (
            "Submenu " + std::to_string(i), HMenu, 100, 0, 0,
            texture.getSize().x * 5 + 400,
            texture.getSize().y, sf::Color::Red
        );
        cont.addChild(m);
        for (int j = 0; j < 5; j++)
        {
            m->addChild(new Button
                (
                    "Button cont " + std::to_string(j), 0, 100 * i,
                    texture.getSize().x, texture.getSize().y,
                    sf::Color::White, sf::Color::Red,
                    &texture, &texture,
                    0, 0, 0,
                    "hah", &font, 20, sf::Color::Red,
                    Center
                )
            );
            m->getChild<Button>("Button cont " + std::to_string(j))->setFunction(std::bind(&App::close, &mainApp));
        }
    }
    cont.select();
    cont.getChild<Menu>("Submenu 1")->select();
    cont.getChild<Menu>("Submenu 1")->getChild<Button>("Button cont 0")->select();*/
    Scene scene("Out");
    scene.loadFromFile("../scenes/out.json");
    //scene.addChild(&cont);
    //scene.saveToFile("../scenes/out.json");
    mainApp.setScene(scene);
    mainApp.run();
	return 0;
}
