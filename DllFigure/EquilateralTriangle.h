#pragma once

#include "DllFigure.h"
#include "TriangleFigureBase.h"

class DLLFIGURE_API EquilateralTriangle : public TriangleFigureBase
{
  public:
    EquilateralTriangle(std::string nameFigure, SideAndAngle* sideAndAngle)
        : TriangleFigureBase(nameFigure, sideAndAngle)
    {
    }
    bool getCorrect() override;
};
