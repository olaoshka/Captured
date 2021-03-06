//
// Created by Святослав Кряжев on 25.11.2018.
//

#include "GraphicsController.h"


GraphicsController::GraphicsController(std::shared_ptr<sf::RenderWindow> window, std::shared_ptr<MouseController> mouse)
                            : window(window), size(window->getSize()),
                              data(nullptr),
                              mouse(mouse), cursor(mouse),
                              texturePack("./textures/packs/Neon.json"),
                              hexSpace(window->getSize(), 59, texturePack)
                               {
    texturePack.load();

    background.set_up(texturePack.get(BACKGROUND, -1));
    centralize(background);

    grid.set_up(texturePack.get(GRID, -1));
    centralize(grid);

    player.set_up(texturePack.get(PLAYER, id));
    centralize(player);

    lightT.loadFromFile("./Contents/light.png");
    reflectionT.loadFromFile("./Contents/reflection.png");

    light.set_up(lightT);
    centralize(light);

    reflection.set_up(reflectionT);
    centralize(reflection);

    cursor.set_texture(texturePack.get(CURSOR, -1));
}

GraphicsController::~GraphicsController() {}

void GraphicsController::centralize(Object &object) {
    auto size = window->getSize();
    object.setPosition(size.x / 2.f, size.y / 2.f);
}

void GraphicsController::update(std::shared_ptr<DataPacket> data) {
    this->data = data;
    hexSpace.drop();
    hexSpace.rebuild(data);
}

void GraphicsController::set_direction(Move direction) {
    current = direction;
    centralize(grid);
    //hexSpace.freak(direction);
    hexSpace.set_movement(direction, sqrt(3.f) * 59 / 20);
    grid.set_movement(direction, sqrt(3.f) * 59 / 20);
}

Move GraphicsController::get_direction() {
    return current;
}

void GraphicsController::draw() {
    cursor.update();

    window->draw(background);

    window->draw(grid);
    grid.move();

    window->draw(hexSpace);
    hexSpace.move();

    //window->draw(reflection);
    //window->draw(light);
    //window->draw(player);


    window->draw(cursor);

}

void GraphicsController::set_id(int id) {
    this->id = id;
};