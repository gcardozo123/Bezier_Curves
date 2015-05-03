#include "Controller.h"
#include "Widget.h"
#include <glm\vec2.hpp>
#include <vector>
#include "BezierCurve.h"

Controller::Controller()
{
	bezierObj = new BezierCurve();
}


Controller::~Controller()
{
}


void Controller::setCanvas0(Canvas0 *canvas0){
	this->canvas0 = canvas0;
}

void Controller::setCheckBoxControlPoints(CheckBoxControlPoints *checkBoxControlPoints){
	this->checkBoxControlPoints = checkBoxControlPoints;
}

void Controller::setCheckBoxL1(CheckBoxL1 *checkBoxL1){
	this->checkBoxL1 = checkBoxL1;
}

void Controller::setCheckBoxL2(CheckBoxL2 *checkBoxL2){
	this->checkBoxL2 = checkBoxL2;
}

void Controller::setCheckBoxL3(CheckBoxL3 *checkBoxL3){
	this->checkBoxL3 = checkBoxL3;
}

void Controller::setButtonAnimate(ButtonAnimate *buttonAnimate){
	this->buttonAnimate = buttonAnimate;
}

void Controller::setTextField0(TextField0 *textField0){
	this->textField0 = textField0;
}
void Controller::setButtonClear(ButtonClear *buttonClear){
	this->buttonClear = buttonClear;
}

void Controller::canvasOnMouseClick(float x, float y){
	glm::vec2 p(x, y);	
	bezierObj->controlPoints.push_back(p);
}

void Controller::buttonClearPressed(){
	bezierObj->controlPoints.clear();
	bezierObj->bezierSegments.clear();
}

void Controller::drawControlGraph(){
	canvas0->color(.0f, 1.0f, .0f);

	if (bezierObj->controlPoints.size() >= 2){

		for (int i = 0; i < bezierObj->controlPoints.size(); i++)
		{
			if (i + 1 < bezierObj->controlPoints.size()){
				float x1 = bezierObj->controlPoints.at(i).x;
				float y1 = bezierObj->controlPoints.at(i).y;

				float x2 = bezierObj->controlPoints.at(i + 1).x;
				float y2 = bezierObj->controlPoints.at(i + 1).y;
				
				canvas0->circleFillf(x1, y1, 3, 6);
				canvas0->circleFillf(x2, y2, 3, 6);
				canvas0->linef(x1, y1, x2, y2);
			}
		}

	}
}

void Controller::drawBezierCurve(){
	canvas0->color(0.9f, 0.9f, 0.0f);
	
	if (bezierObj->controlPoints.size() >= 4) {
		glm::vec2 p0 = bezierObj->cubicBezier(bezierObj->controlPoints.at(0),
			bezierObj->controlPoints.at(1), bezierObj->controlPoints.at(2), bezierObj->controlPoints.at(3), .0f);

		for (int i = 1; i < 100; i++)
		{
			float t = i / (float)100;
			glm::vec2 p1 = bezierObj->cubicBezier(bezierObj->controlPoints.at(0),
				bezierObj->controlPoints.at(1), bezierObj->controlPoints.at(2), bezierObj->controlPoints.at(3), t);
			bezierObj->bezierSegments.push_back(p1);
			canvas0->circleFillf(p1.x, p1.y, 1, 6);
			canvas0->linef(p0.x, p0.y, p1.x, p1.y);
			p0 = p1;
		}
	}
}
