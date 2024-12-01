//
//  Square.h
//  ShapeFactory
//
//  Created by Gustavo Barros da Silveira on 30/11/24.
//

#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape {
public:
    void draw() const override;
};

#endif // SQUARE_H
