#pragma once
#include<glm\vec2.hpp>

using namespace glm;
class BezierCurve
{
public:
	BezierCurve();
	~BezierCurve();

	vec2 cubicBezier(vec2 p0, vec2 p1, vec2 p2, vec2 p3, float t);
};

