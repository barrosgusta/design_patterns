//
//  ShapeFactory.cpp
//  ShapeFactory
//
//  Created by Gustavo Barros da Silveira on 30/11/24.
//

#include "ShapeFactory.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "ShapeType.h"
#include <stdexcept>

std::unique_ptr<Shape> ShapeFactory::createShape(const ShapeType shapeType) {
    switch (shapeType) {
        case ShapeType::Circle:
            return std::make_unique<Circle>();
        case ShapeType::Rectangle:
            return std::make_unique<Rectangle>();
        case ShapeType::Square:
            return std::make_unique<Square>();
        case ShapeType::Triangle:
            return std::make_unique<Triangle>();
        default:
            throw std::invalid_argument("Unknown shape type");
    }
}
