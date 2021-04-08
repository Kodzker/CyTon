//
// Created by cyton_code on 09.04.2021.
//

#ifndef CYTON_VAR_H
#define CYTON_VAR_H


class VAR {
    std::string name;
    std::string var;
public:
    VAR() {
        this->~VAR();
    }

    VAR(std::string &name, std::string &var) {
        set_name(name);
        set_var(var);
    }

    ~VAR() {
        this->name.clear();
        this->var.clear();
    }

    std::string get_name() {
        return this->name;
    }

    std::string get_var() {
        return this->var;
    }

    void set_name(std::string &text) {
        this->name = text;
    }

    void set_var(std::string &text) {
        this->var = text;
    }

    void echo() {
        std::cout << this->get_name() << " " << this->get_var() << std::endl;
    }
};


#endif //CYTON_VAR_H
