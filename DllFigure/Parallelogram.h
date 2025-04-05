#pragma once

#include "DllFigure.h"
#include "QuadrangleFigureBase.h"

class DLLFIGURE_API Parallelogram : public QuadrangleFigureBase
{
  public:
    Parallelogram(std::string nameFigure, SideAndAngle* sideAndAngle) : QuadrangleFigureBase(nameFigure, sideAndAngle)
    {
    }
    bool getCorrect() override;
};
