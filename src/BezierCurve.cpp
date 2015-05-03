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
	pFinal.x = pow((1 - t), 3) * p0.x + 
			   3 * pow((1 - t), 2) * p1.x + 
			   3 * (1 - t) * t * t * p2.x + 
			   t * t * t * p3.x;
	
	pFinal.y = pow((1 - t), 3) * p0.y +
		3 * pow((1 - t), 2) * p1.y +
		3 * (1 - t) * t * t * p2.y +
		t * t * t * p3.y;

	return pFinal;
}