#ifndef LANGUAGE_H
#define LANGUAGE_H



#include <stack>
#include <iostream>
#include "cpu.h"


using namespace std;


// Class representing  King=integer
class King
{

public:
	//stack to hold integers
	stack <int> kingStack;
	
	//instance of cpu class
	Cpu<int> cpu;


	int value;

	King()
	{
		value = 0;
	}

	//When a King (int) is created, the value is pushed onto the stack
	King(int v)
	{
		value = v;
		kingStack.push(value);
	}

	  // Overloaded operator + for addition
	King operator + ( King  v)
	{
		int result = 0;

		int left = kingStack.top();
		kingStack.pop();

		int right = v.kingStack.top();
		v.kingStack.pop();

		result = cpu.add(left, right);

		
		return (result);
	}

	// Overloaded operator - for subtraction
	King operator - ( King  v)
	{
		int result = 0;

		int left = kingStack.top();
		kingStack.pop();

		int right = v.kingStack.top();
		v.kingStack.pop();

		result = cpu.subtract(left, right);


		return (result);
	}
	
	// Overloaded operator * for multiplication
	King operator * ( King  v)
	{
		int result = 0;

		int left = kingStack.top();
		kingStack.pop();

		int right = v.kingStack.top();
		v.kingStack.pop();

		result = cpu.multiply(left, right);

		
		return (result);
	}
	
	 // Overloaded operator / for division
	King operator / ( King  v)
	{
		int result = 0;

		int left = kingStack.top();
		kingStack.pop();

		int right = v.kingStack.top();
		v.kingStack.pop();

		result = cpu.divide(left, right);

		
		return (result);
	}
	
	// Overloaded operator > for greater than comparison
	bool operator > (King  v)
	{
		int result = 0;

		if (!kingStack.empty())
		{
			int left = kingStack.top();
			kingStack.pop();

			if (!v.kingStack.empty())
			{
				int right = v.kingStack.top();
				v.kingStack.pop();
				result = cpu.greater(left, right);
			}
			else
			{
				throw "Error! nothing to get, King Memory is empty.\n";
			}
		}
		else
		{
			throw "Error! nothing to get, King Memory is empty.\n";

		}
		return (result);
	}
	
	// Overloaded operator && for logical AND
	King operator&&(King& other)  {
        int left = kingStack.top();
        kingStack.pop();

        int right = other.kingStack.top();


        int result = left && right;

        King resultKing(result); 
        return resultKing;
    }
	
	 // Overloaded operator || for logical OR
	  King operator||( King& other)  {
        int left = kingStack.top();
        kingStack.pop();

        int right = other.kingStack.top();

        int result = left || right;

        King resultKing(result);  
        return resultKing;
    }
	
	// Overloaded operator ! for logical NOT
	 King operator!()  {
        int currentValue = kingStack.top();
        kingStack.pop();

        int result = !currentValue;

        King resultKing(result);  
        return resultKing;
    }
	
	// Friend function to overload << for outputting King's value
	friend ostream& operator<<(ostream& out, const King& king) {
        out << king.value;
        return out;
    }

	// Friend function to overload >> for inputting King's value
    friend istream& operator>>(istream& in, King& king) {
        in >> king.value;
        king.kingStack.push(king.value);
        return in;
    }

};



class Queen {
private:

public:
	
	stack <float> queenStack;
	
	Cpu<float> cpu;
	
	float value;
	
	Queen()
	{
		value = 0.0;
	}


	Queen(float v)
	{
		value = v;
		queenStack.push(value);
	}

	Queen operator + ( Queen  v)
	{
		float result = 0;

		float left = queenStack.top();
		queenStack.pop();

		float right = v.queenStack.top();
		v.queenStack.pop();

		result = cpu.add(left, right);

		
		return (result);
	}

	Queen operator - ( Queen  v)
	{
		float result = 0;

		float left = queenStack.top();
		queenStack.pop();

		float right = v.queenStack.top();
		v.queenStack.pop();

		result = cpu.subtract(left, right);


		return (result);
	}
	
	
		Queen operator * ( Queen  v)
	{
		float result = 0;

		float left = queenStack.top();
		queenStack.pop();

		float right = v.queenStack.top();
		v.queenStack.pop();

		result = cpu.multiply(left, right);

		
		return (result);
	}
	
	
	Queen operator / ( Queen  v)
	{
		float result = 0;

		float left = queenStack.top();
		queenStack.pop();

		float right = v.queenStack.top();
		v.queenStack.pop();

		result = cpu.divide(left, right);

		
		return (result);
	}
	
	Queen operator&&(Queen& other)  {
        float left = queenStack.top();
        queenStack.pop();

        float right = other.queenStack.top();


        float result = left && right;

        Queen resultQueen(result); 
        return resultQueen;
    }
	
	
	  Queen operator||( Queen& other)  {
        float left = queenStack.top();
        queenStack.pop();

        float right = other.queenStack.top();

        float result = left || right;

        Queen resultQueen(result);  
        return resultQueen;
    }
	
	 Queen operator!()  {
        float currentValue = queenStack.top();
        queenStack.pop();

        float result = !currentValue;

        Queen resultQueen(result);  
        return resultQueen;
    }
	
	 friend ostream& operator<<(ostream& out, const Queen& queen) {
        out << queen.value;
        return out;
    }

    friend istream& operator>>(istream& in, Queen& queen) {
        in >> queen.value;
        queen.queenStack.push(queen.value);
        return in;
    }
	

	
	
	
};




class Pawn {
private:

public:
	stack <char> pawnStack;
	
	Cpu<char> cpu;
		
	char value;
	
	Pawn()
	{
		value = '\0';
	}

	Pawn(char v)
	{
		value = v;
		pawnStack.push(value);
	}
	
	

	
	
	
	Pawn operator + (Pawn  v)
	{
		char result = 0;

		char left = pawnStack.top();
		pawnStack.pop();

		char right = v.pawnStack.top();
		v.pawnStack.pop();

		result = cpu.add(left, right);

		
		return (result);
	}

	Pawn operator - ( Pawn  v)
	{
		char result = 0;

		char left = pawnStack.top();
		pawnStack.pop();

		char right = v.pawnStack.top();
		v.pawnStack.pop();

		result = cpu.subtract(left, right);


		return (result);
	}
	
	
		Pawn operator * ( Pawn  v)
	{
		char result = 0;

		char left = pawnStack.top();
		pawnStack.pop();

		char right = v.pawnStack.top();
		v.pawnStack.pop();

		result = cpu.multiply(left, right);

		
		return (result);
	}
	
	
	Pawn operator / ( Pawn  v)
	{
		char result = 0;

		char left = pawnStack.top();
		pawnStack.pop();

		char right = v.pawnStack.top();
		v.pawnStack.pop();

		result = cpu.divide(left, right);

		
		return (result);
	}
	
	Pawn operator&&(Pawn& other)  {
        char left = pawnStack.top();
        pawnStack.pop();

        char right = other.pawnStack.top();


        char result = left && right;

        Pawn resultPawn(result); 
        return resultPawn;
    }
	
	
	  Pawn operator||( Pawn& other)  {
        char left = pawnStack.top();
        pawnStack.pop();

        char right = other.pawnStack.top();

        char result = left || right;

        Pawn resultPawn(result);  
        return resultPawn;
    }
	
	 Pawn operator!()  {
        char currentValue = pawnStack.top();
        pawnStack.pop();

        char result = !currentValue;

        Pawn resultPawn(result);  
        return resultPawn;
    }
	
	 friend ostream& operator<<(ostream& out,  Pawn& pawn) {
        out << pawn.value;
        return out;
    }

    friend istream& operator>>(istream& in, Pawn& pawn) {
        in >> pawn.value;
        pawn.pawnStack.push(pawn.value);
        return in;
    }
	
	
	
};



class Bishop {
private:


public:
	stack <std::string> bishopStack;
	
	Cpu<std::string> cpu;
	
	std::string value;
    
	Bishop()
	{
		value = "";
	}

	Bishop(std::string v) : value(v) {
        bishopStack.push(value);
    }

    Bishop operator+(Bishop v) {
        std::string result;

        std::string left = bishopStack.top();
        bishopStack.pop();

        std::string right = v.bishopStack.top();
        v.bishopStack.pop();

        result = cpu.add(left, right);

        return Bishop(result);
    }
	
	 friend ostream& operator<<(ostream& out, const Bishop& bishop) {
        out << bishop.value;
        return out;
    }

    friend istream& operator>>(istream& in, Bishop& bishop) {
        in >> bishop.value;
        bishop.bishopStack.push(bishop.value);
        return in;
    }
	

};




#endif
