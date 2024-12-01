//
//  Rectangle.h
//  ShapeFactory
//
//  Created by Gustavo Barros da Silveira on 30/11/24.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
public:
    void draw() const override;
};

#endif // RECTANGLE_H
