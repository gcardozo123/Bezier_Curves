#ifndef __WIDGET_H__
#define __WIDGET_H__

#include <SCV/SCV.h>

class Controller;
class Canvas0 : public scv::Canvas {
public:
   Canvas0(scv::Point p1, scv::Point p2);

   virtual void onMouseClick(const scv::MouseEvent &evt);
   virtual void onMouseHold (const scv::MouseEvent &evt);
   virtual void onMouseOver (const scv::MouseEvent &evt);
   virtual void onMouseUp   (const scv::MouseEvent &evt);
   virtual void onMouseWheel(const scv::MouseEvent &evt);

   virtual void onKey       (const scv::KeyEvent &evt);
   virtual void onChar      (const unsigned int &character, const int &modifier);

   virtual void onSizeChange(void);
   virtual void onPositionChange(void);

   virtual void render(void);
   virtual void update(void);

   void setController(Controller *controller);
   
private:
	Controller *controller;

};

class CheckBoxControlPoints : public scv::CheckBox {
public:
   CheckBoxControlPoints(scv::Point p, bool state, const std::string str);

   virtual void onMouseClick(const scv::MouseEvent &evt);
   virtual void onMouseHold (const scv::MouseEvent &evt);
   virtual void onMouseOver (const scv::MouseEvent &evt);
   virtual void onMouseUp   (const scv::MouseEvent &evt);
   virtual void onMouseWheel(const scv::MouseEvent &evt);

   virtual void onKey       (const scv::KeyEvent &evt);
   virtual void onChar      (const unsigned int &character, const int &modifier);

   virtual void onSizeChange(void);
   virtual void onPositionChange(void);

   virtual void onValueChange(void);

   void setController(Controller *controller);
private:
	Controller *controller;

};

class CheckBoxL1 : public scv::CheckBox {
public:
   CheckBoxL1(scv::Point p, bool state, const std::string str);

   virtual void onMouseClick(const scv::MouseEvent &evt);
   virtual void onMouseHold (const scv::MouseEvent &evt);
   virtual void onMouseOver (const scv::MouseEvent &evt);
   virtual void onMouseUp   (const scv::MouseEvent &evt);
   virtual void onMouseWheel(const scv::MouseEvent &evt);

   virtual void onKey       (const scv::KeyEvent &evt);
   virtual void onChar      (const unsigned int &character, const int &modifier);

   virtual void onSizeChange(void);
   virtual void onPositionChange(void);

   virtual void onValueChange(void);

   void setController(Controller *controller);
private:
	Controller *controller;

};

class CheckBoxL2 : public scv::CheckBox {
public:
   CheckBoxL2(scv::Point p, bool state, const std::string str);

   virtual void onMouseClick(const scv::MouseEvent &evt);
   virtual void onMouseHold (const scv::MouseEvent &evt);
   virtual void onMouseOver (const scv::MouseEvent &evt);
   virtual void onMouseUp   (const scv::MouseEvent &evt);
   virtual void onMouseWheel(const scv::MouseEvent &evt);

   virtual void onKey       (const scv::KeyEvent &evt);
   virtual void onChar      (const unsigned int &character, const int &modifier);

   virtual void onSizeChange(void);
   virtual void onPositionChange(void);

   virtual void onValueChange(void);

   void setController(Controller *controller);
private:
	Controller *controller;


};

class CheckBoxL3 : public scv::CheckBox {
public:
   CheckBoxL3(scv::Point p, bool state, const std::string str);

   virtual void onMouseClick(const scv::MouseEvent &evt);
   virtual void onMouseHold (const scv::MouseEvent &evt);
   virtual void onMouseOver (const scv::MouseEvent &evt);
   virtual void onMouseUp   (const scv::MouseEvent &evt);
   virtual void onMouseWheel(const scv::MouseEvent &evt);

   virtual void onKey       (const scv::KeyEvent &evt);
   virtual void onChar      (const unsigned int &character, const int &modifier);

   virtual void onSizeChange(void);
   virtual void onPositionChange(void);

   virtual void onValueChange(void);

   void setController(Controller *controller);
private:
	Controller *controller;


};

class ButtonAnimate : public scv::Button {
public:
   ButtonAnimate(scv::Point p1, scv::Point p2, std::string str);

   virtual void onMouseClick(const scv::MouseEvent &evt);
   virtual void onMouseHold (const scv::MouseEvent &evt);
   virtual void onMouseOver (const scv::MouseEvent &evt);
   virtual void onMouseUp   (const scv::MouseEvent &evt);
   virtual void onMouseWheel(const scv::MouseEvent &evt);

   virtual void onKey       (const scv::KeyEvent &evt);
   virtual void onChar      (const unsigned int &character, const int &modifier);

   virtual void onSizeChange(void);
   virtual void onPositionChange(void);

   void setController(Controller *controller);
private:
	Controller *controller;


};

class ButtonClear : public scv::Button {
public:
	ButtonClear(scv::Point p1, scv::Point p2, std::string str);

	virtual void onMouseClick(const scv::MouseEvent &evt);
	void setController(Controller *controller);
private:
	Controller *controller;
};

class Label0 : public scv::Label {
public:
   Label0(scv::Point p1, scv::Point p2, std::string str);

   virtual void onMouseClick(const scv::MouseEvent &evt);
   virtual void onMouseHold (const scv::MouseEvent &evt);
   virtual void onMouseOver (const scv::MouseEvent &evt);
   virtual void onMouseUp   (const scv::MouseEvent &evt);
   virtual void onMouseWheel(const scv::MouseEvent &evt);

   virtual void onKey       (const scv::KeyEvent &evt);
   virtual void onChar      (const unsigned int &character, const int &modifier);

   virtual void onSizeChange(void);
   virtual void onPositionChange(void);

};

class Separator0 : public scv::Separator {
public:
   Separator0(scv::Point p, Separator::Orientation align, unsigned int size);

   virtual void onMouseClick(const scv::MouseEvent &evt);
   virtual void onMouseHold (const scv::MouseEvent &evt);
   virtual void onMouseOver (const scv::MouseEvent &evt);
   virtual void onMouseUp   (const scv::MouseEvent &evt);
   virtual void onMouseWheel(const scv::MouseEvent &evt);

   virtual void onKey       (const scv::KeyEvent &evt);
   virtual void onChar      (const unsigned int &character, const int &modifier);

   virtual void onSizeChange(void);
   virtual void onPositionChange(void);

};

class TextField0 : public scv::TextField {
public:
   TextField0(scv::Point p, unsigned int width, std::string str);

   virtual void onMouseClick(const scv::MouseEvent &evt);
   virtual void onMouseHold (const scv::MouseEvent &evt);
   virtual void onMouseOver (const scv::MouseEvent &evt);
   virtual void onMouseUp   (const scv::MouseEvent &evt);
   virtual void onMouseWheel(const scv::MouseEvent &evt);

   virtual void onKey       (const scv::KeyEvent &evt);
   virtual void onChar      (const unsigned int &character, const int &modifier);

   virtual void onSizeChange(void);
   virtual void onPositionChange(void);

   virtual void onStringChange(void);

   void setController(Controller *controller);
private:
	Controller *controller;

};

#endif