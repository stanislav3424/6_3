#pragma once

#include "DllFigure.h"
#include "QuadrangleFigureBase.h"

class  DLLFIGURE_API Square : public QuadrangleFigureBase
{
  public:
    Square(std::string nameFigure, SideAndAngle* sideAndAngle) : QuadrangleFigureBase(nameFigure, sideAndAngle)
    {
    }
    bool getCorrect() override;
};
