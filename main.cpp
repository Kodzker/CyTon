#include "syntax.h"
start {
    begin;
    // bool math = true;
    string tmp, text;
    while (true){
        // if(math) math =false;
        text.clear();
        cin >> text;
        if ("exit" == text){
            break;
        }
        // else if ("math"==text && !math){ // if math
            // math = true;
            // cout << endl << text << endl;
        // }else{
        // }
        tmp = text;
    }
    end;
}

/**
 *язык принимает пока что команды:
 * name = 1 // присвоение текста или числа,

 *  чтобы явно указать текста нужно задать настройку - но это позже
 *
 *
 * math {}
 * exit
 * */
