//
// Created by cyton_code on 09.04.2021.
//

#ifndef CYTON_PY_CPP_H
#define CYTON_PY_CPP_H
namespace py_cpp {


namespace python {
    // данная функция предназначена для вывода на экран объекта его методами.
    void print(auto &obj) {
        obj._echo_();
    }


    // данная функция просит у объекта количество его содержимого используя его методы.
    // actually: VAR_LIST, List
    int len(auto &obj) {
        return obj._len_();
    }


    // данная функция возвращает количество элементов, ориентируясь на вектора.
    template<typename T>
    int len(vector<T> &obj) {
        return obj.size();
    }
}
namespace fantasy {
    // есть ли var в vars:
    bool is_there(auto &var,/*in*/ auto &vars) {
        return vars._search_(var.get_name());
    }
}
#endif //CYTON_PY_CPP_H
