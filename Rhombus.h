#pragma once
#include "QuadrangleFigureBase.h"
class Rhombus : public QuadrangleFigureBase
{
  public:
    Rhombus(std::string nameFigure, SideAndAngle* sideAndAngle) : QuadrangleFigureBase(nameFigure, sideAndAngle)
    {
    }
    bool getCorrect() override;
};
