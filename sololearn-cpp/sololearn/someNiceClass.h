#ifndef SOMENICECLASS_H
#define SOMENICECLASS_H


class someNiceClass
{
    public:
        someNiceClass(int a, int b);  //constructor
        ~someNiceClass(); //destructor
        void nicePrint();
        void cnicePrint();
    protected:
    private:
        int simpleVar;
        const int constVar;
};

#endif // SOMENICECLASS_H
