#pragma once
#include "TriangleFigureBase.h"
class IsoscelesTriangle : public TriangleFigureBase
{
  public:
    IsoscelesTriangle(std::string nameFigure, SideAndAngle* sideAndAngle)
        : TriangleFigureBase(nameFigure, sideAndAngle)
    {
    }
    bool getCorrect() override;
};
