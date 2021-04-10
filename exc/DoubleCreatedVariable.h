//
// Created by cyton_code on 11.04.2021.
//

#ifndef CYTON_DOUBLE_CREATED_VARIABLE_H
#define CYTON_DOUBLE_CREATED_VARIABLE_H


class DoubleCreatedVariable : std::exception {
public:
    // ваша переменная не может создаваться два раза.
    DoubleCreatedVariable() = default;
};


#endif //CYTON_DOUBLE_CREATED_VARIABLE_H
