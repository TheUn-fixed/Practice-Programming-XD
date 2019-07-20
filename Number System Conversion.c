#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stddef.h>
#define p printf
#define s scanf

//This program converts Decimal to Binary and vv

//Initialization of Long Integers
long int num, decimal_num, binary_num, decimal =0, binary = 0, quotient, rem, base = 1, octal = 0, octal_num, hexa = 0, hexa_num, hexa_digit;
//Initialization of Number System input
char ns_input;
//Initialization of Number System ouput
char ns_output;

//Object: Title
void title()
{
	
	p("Number Sytsem Conversion\n\n");
	
}

//Object: Input
void input()
{
	
	p("\nNumber: ");
		s("%ld", &num);
		
}

//Object: Number System Input 
void number_system_input()
{
	
	p("\nWhat Number System will you input? ");
		s(" %c", &ns_input);
	
}

//Object: Hexa Input
void input_hexa()
{
	
	p("\nNumber: ");
		s(" %lx", &hexa_digit);
	
}

//Function Main
main()
{
	
	//Objects start
	title();
	number_system_input();
	//Objects end
	
	//Prompt to choose what output
	p("\nWhat Number System do you want to convert to? ");
		s(" %c", &ns_output);
	
	
	//Decimal to Any Other Number System Conversion
	if (toupper(ns_input) == 'D')
	{
		
		
		//Decimal to Binary Conversion
		if (toupper(ns_output) == 'B')
		{
		
			input();
			decimal_num = num;
		
			//While Loop Here
			while (num > 0)
			{
		
				rem = num % 2;
				binary += rem * base;
				num /= 2;
				base *= 10;
			
			}
		
			p("\nThe Decimal Equivalent is: %ld\n", decimal_num);
			p("The Binary Equivalent is: %ld\n", binary);
			
		}
		
		//Decimal to Octal Conversion
		else if (toupper(ns_output) == 'O')
		{
			
			input();
			decimal_num = num;
		
			//While Loop Here
			while (num > 0)
			{
		
				rem = num % 8;
				octal += rem * base;
				num /= 8;
				base *= 10;
			
			}
		
			p("\nThe Decimal Equivalent is: %ld\n", decimal_num);
			p("The Octal Equivalent is: %ld\n", octal);
			
		}
		
		//Decimal to Hexadecimal Conversion
		else if (toupper(ns_output) == 'H')
		{
			
			input();
			decimal_num = num;
		
			//While Loop Here
			while (num > 0)
			{
		
				rem = num % 16;
				hexa += rem * base;
				num /= 16;
				base *= 10;
			
			}
		
			p("\nThe Decimal Equivalent is: %ld\n", decimal_num);
			p("The Hexadecimal Equivalent is: %ld\n", hexa);
			
		}
		
		//Invalid Input
		else
		{
			
			p("\nInvalid Input!");
			
		}
		
	
	}
	
	//Binary to Any Other Number System Conversion
	else if (toupper(ns_input) == 'B')
	{
		
		//Binary to Decimal Conversion 
		if (toupper(ns_output) == 'D')
		{
		
			input();
			binary_num = num;
		
			while (num > 0)
			{
		
				rem = num % 10;
				decimal += rem * base;
				num /= 10;
				base *= 2;
			
			}
		
			p("\nThe Binary Equivalent is: %ld\n", binary_num);
			p("The Decimal Equivalent is: %ld\n", decimal);
			
		}
		
		//Binary to Octal Conversion
		else if (toupper(ns_output) == 'O')
		{
			
			input();
			binary_num = num;

			while (num > 0)
			{
				
				rem = num % 10;
				octal += rem * base;
				base *= 2;
				num /= 10;
				
			}
		
			p("\nThe Binary Equivalent is: %ld\n", binary_num);
			p("The Octal Equivalent is: %lo\n", octal);
			
		}
		
		//Binary to Hexadecimal Conversion
		else if (toupper(ns_output) == 'H')
		{
			
			input();
			binary_num = num;
		
			while (num > 0)
			{
		
				rem = num % 10;
				hexa += rem * base;
				base *= 2;
				num /= 10;
			
			}
		
			p("\nThe Binary Equivalent is: %ld\n", binary_num);
			p("The Hexadecimal Equivalent is: %lx\n", hexa);
			
		}
		
		//Invalid Input
		else 
		{
			p("\nInvalid Input!");
			
		}	

		
	}
	
	//Octal to Any Other Number System Conversion
	else if (toupper(ns_input) == 'O')
	{
		
		//Octal to Decimal Conversion
		if (toupper(ns_output) == 'D')
		{
		
			input();
			octal_num = num;
		
			while (num > 0)
			{
		
				rem = num % 10;
				decimal += rem * base;
				num /= 10;
				base *= 8;
			
			}
		
			p("\nThe Octal Equivalent is: %ld\n", octal_num);
			p("The Decimal Equivalent is: %ld\n", decimal);
			
		}
		
		//Octal to Binary Conversion
		else if (toupper(ns_output) == 'B')
		{
			
			input();
			int octalDigitToBinary[8] = {0, 1, 10, 11, 100, 101,110, 111};
			octal_num = num;
		
			while (num > 0)
			{
		
				rem = num % 10;
				binary += octalDigitToBinary[rem] * base;
				num /= 10;
				base *= 1000;
			
			}
		
			p("\nThe Octal Equivalent is: %ld\n", octal_num);
			p("The Binary Equivalent is: %ld\n", binary);
			
		}
		
		//Octal to Hexadecimal Conversion
		else if (toupper(ns_output) == 'H')
		{
			
			input();
			octal_num = num;
				
			while (num > 0)
			{
		
				rem = num % 10;
				decimal += rem * base;
				num /= 10;
				base *= 8;
				
				if (num == 0)
				{
					
					break;
					
				}
				
			}
			
			base = 1;
			
			while (decimal > 0)
			{
		
				rem = decimal % 16;
				hexa += rem * base;
				decimal /= 16;
				base *= 10;
			
			}
			
			p("\nThe Octal Equivalent is: %ld\n", octal_num);
			p("The Hexadecimal Equivalent is: %ld\n", hexa);
				
			
		}
		
		//Invalid Input
		else
		{
			
			p("\nInvalid Input!");	
			
		}
		
	}
	
	//Hexadecimal to Any Other Number System Conversion
	else if (toupper(ns_input) == 'H')
	{
			
		//Hexadecimal to Decimal Conversion	
		if (toupper(ns_output) == 'D')
		{
		
			input_hexa();
			hexa_num = hexa_digit;
			
			while (hexa_digit > 0)
			{
		
				rem = hexa_digit % 10;
				decimal += rem * base;
				hexa_digit /= 10;
				base *= 16;
			
			}
			
			p("\nThe Hexadecimal Equivalent is: %lx\n", hexa_num);
			p("The Decimal Equivalent is: %lx\n", decimal);
			
		}
		
		//Hexadecimal to Binary Conversion
		else if (toupper(ns_output) == 'B')
		{
			
			input_hexa();
			hexa_num = hexa_digit;
		
			while (hexa_digit > 0)
			{
		
				rem = hexa_digit % 10;
				decimal += rem * base;
				hexa_digit /= 10;
				base *= 16;
				
				if (hexa_digit == 0)
				{
					
					break;
					
				}
			}
			
			base = 1;
			
			while (decimal > 0)
			{
		
				rem = decimal % 2;
				binary += rem * base;
				decimal /= 2;
				base *= 10;
			
			}
		
			p("\nThe Hexadecimal Equivalent is: %ld\n", hexa_num);
			p("The Binary Equivalent is: %ld\n", binary);
						
		}
		
		//Hexadecimal to Octal Conversion
		else if (toupper(ns_output) == 'O')
		{
			
			input_hexa();
			hexa_num = hexa_digit;
		
			while (hexa_digit > 0)
			{
		
				rem = hexa_digit % 10;
				decimal += rem * base;
				hexa_digit /= 10;
				base *= 16;
				
				if (hexa_digit == 0)
				{
					
					break;
					
				}
			}
			
			base = 1;
			
			while (decimal > 0)
			{
		
				rem = decimal % 8;
				octal += rem * base;
				decimal /= 8;
				base *= 10;
			
			}			
			
			p("The Hexadecimal Equivalent is: %ld\n", hexa_num);
			p("The Octal Equivalent is: %ld\n", octal);
		}
		
		//Invalid Input
		else
		{
			
			p("Invalid Input!");
			
		}
		
	}
	
	
	return 0;
	
}
