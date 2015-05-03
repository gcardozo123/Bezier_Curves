#pragma once
#include <glm\vec2.hpp>
#include <vector>

#define SEGMENTS 100;

class Canvas0;
class CheckBoxControlPoints;
class CheckBoxL1;
class CheckBoxL2;
class CheckBoxL3;
class ButtonAnimate;
class TextField0;
class ButtonClear;
class BezierCurve;

class Controller
{
public:
	Controller();
	~Controller();


	void setCanvas0(Canvas0 *canvas0);
	void setCheckBoxControlPoints(CheckBoxControlPoints *checkBoxControlPoints);
	void setCheckBoxL1(CheckBoxL1 *checkBoxL1);
	void setCheckBoxL2(CheckBoxL2 *checkBoxL2);
	void setCheckBoxL3(CheckBoxL3 *checkBoxL3);
	void setButtonAnimate(ButtonAnimate *buttonAnimate);
	void setTextField0(TextField0 *textField0);
	void setButtonClear(ButtonClear *buttonclear);

	void canvasOnMouseClick(float x, float y);
	void buttonClearPressed();
	void drawControlGraph();
	void drawBezierCurve();

private:
	Canvas0 *canvas0;
	CheckBoxControlPoints *checkBoxControlPoints;
	CheckBoxL1 *checkBoxL1;
	CheckBoxL2 *checkBoxL2;
	CheckBoxL3 *checkBoxL3;
	ButtonAnimate *buttonAnimate;
	TextField0 *textField0;
	ButtonClear *buttonClear;

	BezierCurve *bezierObj;

};

