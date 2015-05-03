#include "Controller.h"
#include "Widget.h"
#include <glm\vec2.hpp>
#include <vector>

Controller::Controller()
{

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
	
	this->controlPoints.push_back(p);
	//std::cout << x << " , " << y << std::endl;
}

void Controller::buttonClearPressed(){
	controlPoints.clear();
}

void Controller::drawControlGraph(){
	if (controlPoints.size() >= 2){

		for(int i = 0; i < controlPoints.size(); i++)
		{
			if (i + 1 < controlPoints.size()){
				float x1 = controlPoints.at(i).x;
				float y1 = controlPoints.at(i).y;

				float x2 = controlPoints.at(i + 1).x;
				float y2 = controlPoints.at(i + 1).y;

				canvas0->linef(x1, y1, x2, y2);
			}
		}

	}
	
}