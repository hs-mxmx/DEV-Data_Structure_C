#ifndef CELDACHAR_H
#define CELDACHAR_H
#include <iostream>
using namespace std;
class Celdachar
{
	private:
        char valor;
		Celdachar *siguiente;
		friend class Pilachar;
        friend class Cola;
	public:
		Celdachar(char v,Celdachar *sig = NULL);
        ~Celdachar();
};

typedef Celdachar *pCeldachar;

#endif // CELDACHAR_H
