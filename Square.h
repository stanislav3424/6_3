#pragma once
#include "QuadrangleFigureBase.h"
class Square : public QuadrangleFigureBase
{
  public:
    Square(std::string nameFigure, SideAndAngle* sideAndAngle) : QuadrangleFigureBase(nameFigure, sideAndAngle)
    {
    }
    bool getCorrect() override;
};
