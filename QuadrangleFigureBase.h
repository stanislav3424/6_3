#pragma once
#include "FigureBase.h"

class QuadrangleFigureBase : public FigureBase
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
