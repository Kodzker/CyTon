//
// Created by cyton_code on 11.04.2021.
//

#ifndef CYTON_CONTAINER_H
#define CYTON_CONTAINER_H


class container {
private:
    std::string name;
    std::string type = (std::string &) "void";
public:
    virtual std::string &get_name() = 0; // вернуть имя

    virtual std::string &get_type() = 0; // вернуть тип

    virtual void _del_() = 0; // удалить этот объект

    virtual void _init_(std::string &_name) {
        this->_add_(_name, (std::string &) "void");
    } // нужен для указания имени при создании, так как метода изменять имя не будет

    virtual void _add_(std::string &_name, std::string &_type) {
        //, std::vector<std::string> &var) {
        this->name = _name;
        this->type = _type;
    } // объявление переменной, всегда вызывается даже неявно.

    // изменение типа будет доступно, как и имени, но уже после появления id
};


#endif //CYTON_CONTAINER_H
