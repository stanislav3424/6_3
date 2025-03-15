#pragma once
#include "QuadrangleFigureBase.h"
class Parallelogram : public QuadrangleFigureBase
{
  public:
    Parallelogram(std::string nameFigure, SideAndAngle* sideAndAngle) : QuadrangleFigureBase(nameFigure, sideAndAngle)
    {
    }
    bool getCorrect() override;
};
