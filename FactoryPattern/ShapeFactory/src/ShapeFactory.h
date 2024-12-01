//
//  ShapeFactory.h
//  ShapeFactory
//
//  Created by Gustavo Barros da Silveira on 30/11/24.
//

#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include <memory>
#include <string>
#include "Shape.h"
#include "ShapeType.h"

class ShapeFactory {
public:
    static std::unique_ptr<Shape> createShape(ShapeType shapeType);
};

#endif // SHAPE_FACTORY_H
