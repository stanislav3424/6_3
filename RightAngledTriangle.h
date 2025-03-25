#pragma once
#include "TriangleFigureBase.h"
class RightAngledTriangle : public TriangleFigureBase
{
  public:
    RightAngledTriangle(std::string nameFigure, SideAndAngle* sideAndAngle)
        : TriangleFigureBase(nameFigure, sideAndAngle)
    {
        if (!getCorrect())
        {
            throw CustomException("The parameters do not match the name of the geometric figure");
        }
    }
    bool getCorrect() override;
};
