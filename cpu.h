#ifndef CPU_H
#define CPU_H

class King;
class Queen;
class Bishop;
class Pawn;



//Register template 
template <class T>

class Register
{
private:
	T value; // The value stored in the register

public:
	// Default constructor
	Register()
	{
	}
	
	// Getter method to retrieve the value of the register
	T get_value(void)
	{
		return value;
	}
	
	// Setter method to set the value of the register
	void set_value(T v)
	{
		value = v;
	}
	
};


// Template class for a CPU which uses Registers to perform operations
template <class T>
class Cpu
{

private:
	Register <T>  t;
	
	Register<T> accumulator;
	
public:

	
	Cpu()
	{
		t.set_value (0);
	
	}
	
	Cpu(T v)
	{
		t.set_value(v);
	}
	
	// Load a value into the accumulator register
	T load(T value) {
        accumulator.set_value(value);
    }
    
	// Store the value from the accumulator register into memory
	T store(T &memory)
	{
        memory = accumulator.get_value();
    }

	 // Add two values and return the sum
	T add(T left, T right)
	{
		T sum = 0;

		sum = left + right;
		return sum;
	}

 	// Subtract the right value from the left value and return the result
	T subtract(T left, T right)
	{
		T sum = 0;

		sum = left - right;
		return sum;
	}
	
	 // Multiply two values and return the product
	T multiply(T left, T right)
	{	
    	T product = left * right;
    	return product;
    
	}
	// Divide the left value by the right value and return the quotient
	T divide(T left, T right)
	{
		T product = left / right;
    	return product; 
	}
	
	// Perform logical AND operation and return the result
	  T logical_and(T left, T right) 
	{
        return left && right;  
    }

	// Perform logical OR operation and return the result
    T logical_or(T left, T right)
	{
        return left || right;  
    }

	 // Perform logical NOT operation and return the result
    T logical_not(T value)
	{
        return !value;  
    }
    
    
    // Compare if left value is greater than right value
	T greater (T left, T right)
	{
		bool result = false;

		store(left);  /* store data into the register */
		if (t.get_value() > right)
		{
			result = true;
		}
		return result;
	}




};

#endif
