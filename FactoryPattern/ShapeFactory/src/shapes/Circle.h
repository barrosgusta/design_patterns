//
//  Circle.h
//  ShapeFactory
//
//  Created by Gustavo Barros da Silveira on 30/11/24.
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
    void draw() const override;
};

#endif // CIRCLE_H
