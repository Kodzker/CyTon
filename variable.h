//
// Created by cyton_code on 09.04.2021.
//

#ifndef CYTON_VARIABLE_H
#define CYTON_VARIABLE_H

#include <string>

class variable {
private:
    std::string name;
    std::string var;
    std::string id;
public:
    variable() {
        this->~variable();
    }

    variable(std::string &name, std::string &var) {
        set_name(name);
        set_var(var);
    }

    ~variable() {
        this->name.clear();
        this->var.clear();
    }

    std::string &get_name() {
        return this->name;
    }

    std::string &get_var() {
        return this->var;
    }

    void set_name(std::string &text) {
        this->name = text;
    }

    void set_var(std::string &text) {
        this->var = text;
    }

    void _echo_() {
        std::cout << this->get_name() << ": " << this->get_var() << std::endl;
    }

    bool _equally_(variable &obj) {
        if (obj.get_name() == this->get_name() && obj.get_var() == this->get_var())
            return true;
        return false;
    }

    // удалить меня.
    void _del_() {
        this->~variable();
        delete this;
    }


};


#endif //CYTON_VARIABLE_H
