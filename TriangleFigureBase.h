#pragma once
#include "FigureBase.h"
#include "CustomException.h"

class TriangleFigureBase : public FigureBase
{
  private:
  public:
    TriangleFigureBase(std::string nameFigure, SideAndAngle* sideAndAngle)
        : FigureBase(nameFigure, sideAndAngle)
    {
        setNumberOfSides(3);
        if (!getCorrect())
        {
            throw CustomException("The angles are not equal to 180");
        }
    }
    bool getCorrect() override;
};
