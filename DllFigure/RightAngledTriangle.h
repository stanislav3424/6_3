#pragma once

#include "DllFigure.h"
#include "TriangleFigureBase.h"

class DLLFIGURE_API RightAngledTriangle : public TriangleFigureBase
{
  public:
    RightAngledTriangle(std::string nameFigure, SideAndAngle* sideAndAngle)
        : TriangleFigureBase(nameFigure, sideAndAngle)
    {
    }
    bool getCorrect() override;
};
