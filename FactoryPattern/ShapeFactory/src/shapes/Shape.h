//
//  Shape.h
//  ShapeFactory
//
//  Created by Gustavo Barros da Silveira on 30/11/24.
//

#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function
    virtual ~Shape() = default;   // Virtual destructor
};

#endif // SHAPE_H

