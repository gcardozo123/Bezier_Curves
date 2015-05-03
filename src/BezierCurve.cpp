#include "BezierCurve.h"
#include <math.h> //pow
#include <glm\vec2.hpp>;

using namespace glm;
BezierCurve::BezierCurve()
{
}


BezierCurve::~BezierCurve()
{
}


vec2 BezierCurve::cubicBezier(vec2 p0, vec2 p1, vec2 p2, vec2 p3, float t){
	vec2 pFinal(.0f, .0f);
	float u = 1 - t;
	float tt = t*t;
	float uu = u*u;
	float uuu = uu * u;
	float ttt = tt * t;

	pFinal =	uuu * p0;
	pFinal += 3 * uu * t * p1;
	pFinal += 3 * u * tt * p2;
	pFinal += ttt * p3;

	return pFinal;
}