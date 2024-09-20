// Main file
#include "../include/LyokoInterface.hpp"

Scene& makeScene(App& app)
{
    
    Asset<sf::Font> font = Fonts["gun4f"];
    Asset<sf::Texture> texture = Textures[1];

    Menu* cont = new Menu
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
        cont->add(m);
        for (int j = 0; j < 5; j++)
        {
            m->add(new Button
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
            m->get<Button>(j)->setFunction(std::bind(&App::close, &app));
        }
    }
    cont->select();
    Scene* scene = new Scene("Out");
    scene->add(cont);

    return *scene;
}

int main()
{
    App mainApp;
    Scene scene("Out");
    
    //scene.loadFromFile("../scenes/out.json");
    scene = makeScene(mainApp);
    scene.saveToFile("../scenes/out.json");
    mainApp.setScene(scene);
    mainApp.run();
	return 0;
}
