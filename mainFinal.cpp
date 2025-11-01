#include "language.h"
#include "operators.h"
#include <iostream>

int main() 
{
	
	King a = 5;
    King b = 6;
    King c;
    King k;

    yourMove yourmove;
    checkMate checkmate;

    c = a + b;
    yourmove && "c= "    && c.value;
	
	
    yourmove && "\nEnter integer to move King to ";
    checkmate || k; 
    yourmove && "\nMoving King to A= " && k.value;


	King j = 10;
	King n = 5;
	b= j - n;
	yourmove && "\nMoiving King j-n= " && b.value && "\n";
	
	King i = 10;
	King m = 5;
	c = i * m;
	yourmove && "Moving King i*m = " && c.value && "\n";


	King u = 10;
	King v = 5;
	c = u / v ;
	yourmove &&  "Moving king u/v= " && c.value && "\n";
	
	King king1(5);
    King king2(0);

    King resultAnd = king1 && king2;
	yourmove && "Logical AND: " && resultAnd.value && "\n";
	
	
	
	King king3(1);
    King king4(0);
    King resultOr = king3 || king4; 
	yourmove && "Logical OR: " && resultOr.value && "\n";

	King king5(0);
	King resultNot = !king5;
	yourmove && "Logical NOT: " && resultNot.value && "\n";


	yourmove && "\nGood Game \n";
	
	
/*	Bishop b1("good");
    Bishop b2("game");
	Bishop b3 = b1 + b2;
	cout << "Result: " << b3.value;
	
	*/





	system("pause");
}
