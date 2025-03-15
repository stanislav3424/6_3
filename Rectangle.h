#pragma once
#include "QuadrangleFigureBase.h"
class Rectangle : public QuadrangleFigureBase
{
  public:
    Rectangle(std::string nameFigure, SideAndAngle* sideAndAngle) : QuadrangleFigureBase(nameFigure, sideAndAngle)
    {
    }
    bool getCorrect() override;
};
