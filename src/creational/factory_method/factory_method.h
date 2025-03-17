#pragma once
#include <iostream>

class Button {
public:
    virtual ~Button() = default;
    virtual void render() = 0;
    virtual void onClick() = 0;
};

class WindowsButton : public Button {
public:
    void render() override {
        std::cout << "WindowsButton" << std::endl;
    }

    void onClick() override {
        std::cout << "WindowsButton clicked" << std::endl;
    }
};
class HTMLButton : public Button {
public:
    void render() override {
        std::cout << "HTMLButton" << std::endl;
    }

    void onClick() override {
        std::cout << "HTMLButton clicked" << std::endl;
    }
};

class Dialog {
public:
    virtual ~Dialog() = default;
    void render() {
        Button *button = createButton();
        button->render();
        button->onClick();
        delete button;
    }
    virtual Button* createButton() = 0;
};

class WindowsDialog : public Dialog {
public:
    Button* createButton() override {
        return new WindowsButton();
    }
};

class WebDialog : public Dialog {
public:
    Button* createButton() override {
        return new HTMLButton();
    }
};





