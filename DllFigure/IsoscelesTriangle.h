#pragma once

#include "DllFigure.h"
#include "TriangleFigureBase.h"

class DLLFIGURE_API IsoscelesTriangle : public TriangleFigureBase
{
  public:
    IsoscelesTriangle(std::string nameFigure, SideAndAngle* sideAndAngle)
        : TriangleFigureBase(nameFigure, sideAndAngle)
    {
    }
    bool getCorrect() override;
};
