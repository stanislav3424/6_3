#pragma once

#include "DllFigure.h"
#include "QuadrangleFigureBase.h"

class DLLFIGURE_API Rhombus : public QuadrangleFigureBase
{
  public:
    Rhombus(std::string nameFigure, SideAndAngle* sideAndAngle) : QuadrangleFigureBase(nameFigure, sideAndAngle)
    {
    }
    bool getCorrect() override;
};
