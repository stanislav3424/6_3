#pragma once

#include "DllFigure.h"
#include "FigureBase.h"

class DLLFIGURE_API TriangleFigureBase : public FigureBase
{
  private:
  public:
    TriangleFigureBase(std::string nameFigure, SideAndAngle* sideAndAngle)
        : FigureBase(nameFigure, sideAndAngle)
    {
        setNumberOfSides(3);
    }
    bool getCorrect() override;
};
