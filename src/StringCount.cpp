//Calcule o tamanho de um string informado pelo usuário (não usar nenhuma função para isso, tal como strlen() ou lenght());

//biblioteca padrao
#include <iostream>
#include <stdlib.h> //gets
//includes
#include "include/StringCount.h"
//---------------------------------------------------------
/**
 *  Validates the typed string
 * 
 * */
void StringCount::checkString(void)
{
    if(this->str_user == "")
    {
        std::cout << "Attention: Incorrect entry!\n" << "Try again!" << std::endl;
        getStringFromPrompt();
    }
}
//---------------------------------------------------------
void StringCount::getStringFromPrompt(void)
{
    std::cout << "Enter some text" << std::endl;
    //recebe o texto digitado
    std::getline (std::cin, this->str_user);
    //check if string entered is valid
    checkString();
}
//---------------------------------------------------------
/*
*   Count and get entered string size.
*
**/
void StringCount::countString(void)
{
    //local variables
    this->length = 0;
    int i;
    try
    {   
        //Initializing for loop.
        for(i=0;this->str_user[i]!='\0';++i)
        {
            //if(this->str_user[i] != ' ')//white spaces
            this->length++;//Counting 
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
//---------------------------------------------------------
/*
*  Print the size of the text.
*
**/
void StringCount::printString()
{
    std::cout << "Variable size is " << this->length << std::endl;
}
//---------------------------------------------------------
//eof.

