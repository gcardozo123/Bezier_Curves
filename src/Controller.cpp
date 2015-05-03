#include "Controller.h"
#include "Widget.h"

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


