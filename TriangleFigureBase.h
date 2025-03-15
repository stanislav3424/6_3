#pragma once
#include "FigureBase.h"

class TriangleFigureBase : public FigureBase
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
