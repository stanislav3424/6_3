#include <iostream>
#include <vector>

#include "SideAndAngle.h"
#include "FigureBase.h"
#include "QuadrangleFigureBase.h"
#include "TriangleFigureBase.h"
#include "EquilateralTriangle.h"
#include "IsoscelesTriangle.h"
#include "RightAngledTriangle.h"
#include "Rhombus.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"

void print_info(const std::vector<FigureBase*>& figuresArr)
{
    for (auto& figure : figuresArr)
    {
        std::string charSide[4]{"a", "b", "c", "d"};
        std::string charAngle[4]{"A", "B", "C", "D"};

        std::cout << figure->getName() << std::endl;
        std::cout << (figure->getCorrect() ? "Correct" : "Incorrect") << std::endl;
        int sides = figure->getNumberOfSide();
        std::cout << "Number of sides: ";
        std::cout << sides << std::endl;

        if (sides == 0)
        {
            std::cout << std::endl;
            continue;
        }

        std::cout << "Sides: ";
        for (int indexSide{}; indexSide < sides; ++indexSide)
        {
            std::cout << charSide[indexSide] << "=";
            std::cout << figure->getSide(indexSide) << " ";
        }

        std::cout << std::endl;
        std::cout << "Angles: ";
        for (int indexAngle{}; indexAngle < sides; ++indexAngle)
        {
            std::cout << charAngle[indexAngle] << "=";
            std::cout << figure->getAngle(indexAngle) << " ";
        }
        std::cout << std::endl;
        std::cout << std::endl;
    }
}

FigureBase* createFigure(const std::string& nameFigure, SideAndAngle* sideAndAngle)
{
    if (nameFigure == "Triangle")
    {
        return new TriangleFigureBase(nameFigure, sideAndAngle);
    }
    else if (nameFigure == "Quadrilateral")
    {
        return new QuadrangleFigureBase(nameFigure, sideAndAngle);
    }
    else if (nameFigure == "Right triangle")
    {
        return new RightAngledTriangle(nameFigure, sideAndAngle);
    }
    else if (nameFigure == "Isosceles triangle")
    {
        return new IsoscelesTriangle(nameFigure, sideAndAngle);
    }
    else if (nameFigure == "Equilateral triangle")
    {
        return new EquilateralTriangle(nameFigure, sideAndAngle);
    }
    else if (nameFigure == "Rectangle")
    {
        return new Rectangle(nameFigure, sideAndAngle);
    }
    else if (nameFigure == "Square")
    {
        return new Square(nameFigure, sideAndAngle);
    }
    else if (nameFigure == "Parallelogram")
    {
        return new Parallelogram(nameFigure, sideAndAngle);
    }
    else if (nameFigure == "Rhombus")
    {
        return new Rhombus(nameFigure, sideAndAngle);
    }
    return new FigureBase(nameFigure, sideAndAngle);
}

void addFigure(std::vector<FigureBase*>& figuresArr, const std::string& nameFigure, SideAndAngle* sideAndAngle)
{
    figuresArr.push_back(createFigure(nameFigure, sideAndAngle));
}

int main()
{
    std::vector<FigureBase*> figuresArr;

    addFigure(figuresArr, "Figure", new SideAndAngle[0]{});
    addFigure(figuresArr, "Triangle", new SideAndAngle[3]{{10, 50}, {20, 60}, {30, 70}});
    addFigure(figuresArr, "Right triangle", new SideAndAngle[3]{{10, 50}, {20, 60}, {30, 90}});
    addFigure(figuresArr, "Right triangle", new SideAndAngle[3]{{10, 50}, {20, 40}, {30, 90}});
    addFigure(figuresArr, "Isosceles triangle", new SideAndAngle[3]{{10, 50}, {20, 60}, {10, 50}});
    addFigure(figuresArr, "Equilateral triangle", new SideAndAngle[3]{{30, 60}, {30, 60}, {30, 60}});
    addFigure(figuresArr, "Quadrilateral", new SideAndAngle[4]{{10, 50}, {20, 60}, {30, 70}, {40, 80}});
    addFigure(figuresArr, "Rectangle", new SideAndAngle[4]{{10, 90}, {20, 90}, {10, 90}, {20, 90}});
    addFigure(figuresArr, "Square", new SideAndAngle[4]{{20, 90}, {20, 90}, {20, 90}, {20, 90}});
    addFigure(figuresArr, "Parallelogram", new SideAndAngle[4]{{20, 30}, {30, 40}, {20, 30}, {30, 40}});
    addFigure(figuresArr, "Rhombus", new SideAndAngle[4]{{30, 30}, {30, 40}, {30, 30}, {30, 40}});

    print_info(figuresArr);

    for (auto figure : figuresArr)
    {
        delete figure;
    }

    return 0;
}