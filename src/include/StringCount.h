#ifndef STRING_COUNT_H
#define STRING_COUNT_H
//---------------------------------------------------------
#include <iostream>
//---------------------------------------------------------
class StringCount
{
    //Metodos
    public:
        StringCount()
        {
            //Constructor
            this->str_user = "";
        }
        ~StringCount()
        {
            //Destructor
        }
    public:
        void        getStringFromPrompt(void);
        void        printString(void);
        void        checkString(void);
        void         countString(void);
    //

        std::string entrada_usuario;
        std::string str_user;
        int length;
};
#endif