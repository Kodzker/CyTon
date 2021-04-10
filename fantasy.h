//
// Created by cyton_code on 09.04.2021.
//

#ifndef CYTON_FANTASY_H
#define CYTON_FANTASY_H

#include <vector>
#include "exc/NameItsNotDefined.h"
#include "variables.h"

namespace python {
    // данная функция предназначена для вывода на экран объекта его методами.
    void print(auto &obj) {
        obj._echo_();
    }

    // данная функция просит у объекта количество его содержимого используя его методы.
    // actually: variables, List
    int len(auto &obj) {
        return obj._len_();
    }


    // данная функция возвращает количество элементов, ориентируясь на вектора.
    template<typename T>
    int len(std::vector<T> &obj) {
        return obj.size();
    }


    void clear(auto &obj) {
        obj._clear_();
    }

    void del(auto &obj) {
        obj._del_();
    }

    template<typename typ>
    void swap(typ &obj1, typ &obj2) {
        typ tmp1, tmp2;

        tmp1 = obj1;
        tmp2 = obj2;

        obj1 = tmp2;
        obj2 = tmp1;
    }

}
namespace fantasy {
    // есть ли var в vars:
    bool is_there(auto &var,/*in*/ auto &vars) {
        return vars._search_(var.get_name());
    }

    bool equally(auto &obj, auto &obj2) {
        return obj._equally_(obj2);
    }
}


#endif //CYTON_FANTASY_H
