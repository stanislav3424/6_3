#pragma once

#include "DllFigure.h"
#include "QuadrangleFigureBase.h"

class DLLFIGURE_API Rectangle : public QuadrangleFigureBase
{
  public:
    Rectangle(std::string nameFigure, SideAndAngle* sideAndAngle) : QuadrangleFigureBase(nameFigure, sideAndAngle)
    {
    }
    bool getCorrect() override;
};
