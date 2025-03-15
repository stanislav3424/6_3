#include "IsoscelesTriangle.h"

bool IsoscelesTriangle::getCorrect()
{
    //�������������� ����������� (������� a � c �����, ���� A � C �����);
    bool equalSides = sideAndAngle[0].side_length == sideAndAngle[2].side_length;
    bool equalAngles = sideAndAngle[0].angle_deg == sideAndAngle[2].angle_deg;
    return TriangleFigureBase::getCorrect() && equalSides && equalAngles;
}
