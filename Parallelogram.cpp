#include "Parallelogram.h"

bool Parallelogram::getCorrect()
{
    bool equalSides = (sideAndAngle[0].side_length == sideAndAngle[2].side_length) &&
                      (sideAndAngle[1].side_length == sideAndAngle[3].side_length);
    bool equalAngles = (sideAndAngle[0].angle_deg == sideAndAngle[2].angle_deg) &&
                       (sideAndAngle[1].angle_deg == sideAndAngle[3].angle_deg);
    return QuadrangleFigureBase::getCorrect() && equalSides && equalAngles;
}
