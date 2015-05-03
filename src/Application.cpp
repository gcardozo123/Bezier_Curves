#include "Application.h"
#include "Controller.h"

Application::Application(void) : Kernel() {
   setWindowSize(1280, 720);
   lockWindowSize(true);
   setFramesPerSecond(60);

   setWindowTitle("Guilherme Recchi Cardozo. Bezier Curves.");
}

Application::~Application(void) {
}

void Application::init(void) {
   _mainPanel = new scv::Panel(scv::Point(0, 0), scv::Point(1280, 720));

   addComponent(_mainPanel);

   controller = new Controller();

   Canvas0 *canvas0 = new Canvas0(scv::Point(17,134), scv::Point(1257, 638));
   addComponent(canvas0);
   controller->setCanvas0(canvas0);
   canvas0->setController(controller);

   CheckBoxControlPoints *checkBoxControlPoints = new CheckBoxControlPoints(scv::Point(469,7), 0, "Grafo de Controle");
   addComponent(checkBoxControlPoints);
   controller->setCheckBoxControlPoints(checkBoxControlPoints);
   checkBoxControlPoints->setController(controller);

   CheckBoxL1 *checkBoxL1 = new CheckBoxL1(scv::Point(469,26), 0, "L1");
   addComponent(checkBoxL1);
   controller->setCheckBoxL1(checkBoxL1);
   checkBoxL1->setController(controller);

   CheckBoxL2 *checkBoxL2 = new CheckBoxL2(scv::Point(469,46), 0, "L2");
   addComponent(checkBoxL2);
   controller->setCheckBoxL2(checkBoxL2);
   checkBoxL2->setController(controller);

   CheckBoxL3 *checkBoxL3 = new CheckBoxL3(scv::Point(469,64), 0, "L3");
   addComponent(checkBoxL3);
   controller->setCheckBoxL3(checkBoxL3);
   checkBoxL3->setController(controller);

   ButtonAnimate *buttonAnimate = new ButtonAnimate(scv::Point(23,14), scv::Point(110, 79), "Animate");
   addComponent(buttonAnimate);
   controller->setButtonAnimate(buttonAnimate);
   buttonAnimate->setController(controller);

   ButtonClear *buttonClear = new ButtonClear(scv::Point(113, 14), scv::Point(200, 79), "Clear");
   addComponent(buttonClear);
   controller->setButtonClear(buttonClear);
   buttonClear->setController(controller);

   Label0 *label0 = new Label0(scv::Point(20,660), scv::Point(96, 673), "Messages:");
   addComponent(label0);

   Separator0 *separator0 = new Separator0(scv::Point(-96,86), (scv::Separator::Orientation)0, 1788);
   addComponent(separator0);

   TextField0 *textField0 = new TextField0(scv::Point(15,685), 1244, "TextField 1");
   addComponent(textField0);
   controller->setTextField0(textField0);
   textField0->setController(controller);
}

void Application::onMouseClick(const scv::MouseEvent &evt) {
}
void Application::onMouseHold(const scv::MouseEvent &evt) {
}
void Application::onMouseOver(const scv::MouseEvent &evt) {
}
void Application::onMouseUp(const scv::MouseEvent &evt) {
}
void Application::onMouseWheel(const scv::MouseEvent &evt) {
}

void Application::onKey(const scv::KeyEvent &evt) {
}
void Application::onChar(const unsigned int &character, const int &modifier) {
}

void Application::onSizeChange(void) {
   _mainPanel->setSize(getWidth(), getHeight());
}
void Application::onPositionChange(void) {
}
