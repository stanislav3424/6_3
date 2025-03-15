#pragma once
#include "TriangleFigureBase.h"
class RightAngledTriangle : public TriangleFigureBase
{
  public:
    RightAngledTriangle(std::string nameFigure, SideAndAngle* sideAndAngle)
        : TriangleFigureBase(nameFigure, sideAndAngle)
    {
    }
    bool getCorrect() override;
};
