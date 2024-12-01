//
//  main.cpp
//  FactoryPattern
//
//  Created by Gustavo Barros da Silveira on 30/11/24.
//

#include <iostream>
#include "ShapeFactory.h"

int main(int argc, const char * argv[]) {
    try {
        // The ShapeFactory is not really needed here, but it is used to demonstrate the Factory Method pattern
        // You could just use std::make_unique<Circle>() instead
        auto circle = ShapeFactory::createShape(ShapeType::Circle);
        circle->draw();
        
        auto rectangle = ShapeFactory::createShape(ShapeType::Rectangle);
        rectangle->draw();
        
        auto square = ShapeFactory::createShape(ShapeType::Square);
        square->draw();
        
        auto triangle = ShapeFactory::createShape(ShapeType::Triangle);
        triangle->draw();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
