//
//  Triangle.h
//  ShapeFactory
//
//  Created by Gustavo Barros da Silveira on 30/11/24.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape {
public:
    void draw() const override;
};

#endif // TRIANGLE_H
