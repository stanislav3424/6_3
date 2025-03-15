#pragma once
#include "TriangleFigureBase.h"
class EquilateralTriangle : public TriangleFigureBase
{
  public:
    EquilateralTriangle(std::string nameFigure, SideAndAngle* sideAndAngle)
        : TriangleFigureBase(nameFigure, sideAndAngle)
    {
    }
    bool getCorrect() override;
};
