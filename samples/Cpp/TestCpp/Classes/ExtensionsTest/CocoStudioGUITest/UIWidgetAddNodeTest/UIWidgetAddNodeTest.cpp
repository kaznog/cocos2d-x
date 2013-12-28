

#include "UIWidgetAddNodeTest.h"


// UIWidgetAddNodeTest

UIWidgetAddNodeTest::UIWidgetAddNodeTest()
{
    
}

UIWidgetAddNodeTest::~UIWidgetAddNodeTest()
{
}

bool UIWidgetAddNodeTest::init()
{
    if (UIScene::init())
    {
        Size widgetSize = _widget->getSize();
        
        // Add the alert
        gui::Label* alert = gui::Label::create();
        alert->setText("Widget Add Node");
        alert->setFontName("Marker Felt");
        alert->setFontSize(30);
        alert->setColor(Color3B(159, 168, 176));
        alert->setPosition(Point(widgetSize.width / 2.0f, widgetSize.height / 2.0f - alert->getSize().height * 1.75));
        _uiLayer->addChild(alert);
        
        // Create the ui node container
        Widget* widget = Widget::create();
        widget->setPosition(Point(widgetSize.width / 2.0f, widgetSize.height / 2.0f));
        _uiLayer->addChild(widget);
        
        Sprite* sprite = Sprite::create("cocosgui/ccicon.png");
        sprite->setPosition(Point(0, sprite->getBoundingBox().size.height / 4));
//        widget->addRenderer(sprite, 0);
        
        return true;
    }
    return false;
}