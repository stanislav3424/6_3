#pragma once

#include "DllFigure.h"
#include "FigureBase.h"

class DLLFIGURE_API QuadrangleFigureBase : public FigureBase
{
  private:
  public:
    QuadrangleFigureBase(std::string nameFigure, SideAndAngle* sideAndAngle)
        : FigureBase(nameFigure, sideAndAngle)
    {
        setNumberOfSides(4);
    }
    bool getCorrect() override;
};
