#include <iostream>
#include "include/StringCount.h"
//----------------------------------------------------------
int main(int argc, char* argv[])
{
    //int size_str_aux = 0;
    StringCount var_strCount;
    var_strCount.getStringFromPrompt();

    var_strCount.countString();
    //size_str_aux = var_strCount->countString(var_strCount->str_user);
    var_strCount.printString();
    //delete var_strCount;
    return 0;
}