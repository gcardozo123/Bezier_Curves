#pragma once
#include<glm\vec2.hpp>
#include <vector>

using namespace glm;
class BezierCurve
{
public:
	BezierCurve();
	~BezierCurve();

	vec2 cubicBezier(vec2 p0, vec2 p1, vec2 p2, vec2 p3, float t);
	void drawControlGraph();
	void drawBezierCurve();
	void drawBezierSegments();


	std::vector<glm::vec2> controlPoints;
	std::vector<glm::vec2> bezierSegments;


};

