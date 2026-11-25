#include <iostream>

class Button {
public:
    virtual ~Button() {}
    virtual void Draw() const = 0;
};

class WinButton : public Button {
public:
    void Draw() const override {
        std::cout << "Dibujando Button Windows" << std::endl;
    }
};

class MacButton : public Button {
public:
    void Draw() const override {
        std::cout << "Dibujando Button Mac" << std::endl;
    }
};

class LinuxButton : public Button {
public:
    void Draw() const override {
        std::cout << "Dibujando Button Linux" << std::endl;
    }
};

class CheckBox {
public:
    virtual ~CheckBox() {}
    virtual void Draw() const = 0;
};

class WinCheckBox : public CheckBox {
public:
    void Draw() const override {
        std::cout << "Dibujando CheckBox Windows" << std::endl;
    }
};

class MacCheckBox : public CheckBox {
public:
    void Draw() const override {
        std::cout << "Dibujando CheckBox Mac" << std::endl;
    }
};

class LinuxCheckBox : public CheckBox {
public:
    void Draw() const override {
        std::cout << "Dibujando CheckBox Linux" << std::endl;
    }
};

class GUIFactory {
public:
    virtual ~GUIFactory() {}
    virtual Button* CrearButton() const = 0;
    virtual CheckBox* CrearCheckBox() const = 0;
};

class WinFactory : public GUIFactory {
public:
    Button* CrearButton() const override {
        return new WinButton();
    }
    CheckBox* CrearCheckBox() const override {
        return new WinCheckBox();
    }
};

class MacFactory : public GUIFactory {
public:
    Button* CrearButton() const override {
        return new MacButton();
    }
    CheckBox* CrearCheckBox() const override {
        return new MacCheckBox();
    }
};

class LinuxFactory : public GUIFactory {
public:
    Button* CrearButton() const override {
        return new LinuxButton();
    }
    CheckBox* CrearCheckBox() const override {
        return new LinuxCheckBox();
    }
};

void Aplicacion(const GUIFactory& factory) {
    const Button* button = factory.CrearButton();
    const CheckBox* checkbox = factory.CrearCheckBox();
    button->Draw();
    checkbox->Draw();
    delete button;
    delete checkbox;
}

int main() {
    std::cout << "Cliente: Windows" << std::endl;
    GUIFactory* winFactory = new WinFactory();
    Aplicacion(*winFactory);
    delete winFactory;

    std::cout << std::endl;

    std::cout << "Cliente: Mac" << std::endl;
    GUIFactory* macFactory = new MacFactory();
    Aplicacion(*macFactory);
    delete macFactory;

    std::cout << std::endl;

    std::cout << "Cliente: Linux" << std::endl;
    GUIFactory* linuxFactory = new LinuxFactory();
    Aplicacion(*linuxFactory);
    delete linuxFactory;

    return 0;
}
