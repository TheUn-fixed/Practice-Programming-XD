#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stddef.h>
#define p printf
#define s scanf

//This program converts Decimal to Binary and vv

//Initialization of Long Integers
long long int num, decimal_num, binary_num, decimal =0, binary = 0, quotient, rem, base = 1, octal = 0, octal_num, hexa = 0, hexa_num, hexa_digit;
//Initialization of Number System input
char ns_input;
//Initialization of Number System ouput
char ns_output;
//Initialization of Yes or No Character
char close;

//Object: Title
void title()
{
	
	p("Number Sytsem Conversion\n\n");
	
}

//Object: Input
void input()
{
	
	p("\nNumber: ");
		s("%lld", &num);
		
}

//Character Code for the Number System
void charcode()
{
	
	p("Character Code and Example");
		p("\n\nD for Decimal\t\t54\n");
		p("B for Binary\t\t110110\n");
		p("O for Octal\t\t66\n");
		p("H for Hexadecimal\t36\n\n");
	
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
		s(" %llx", &hexa_digit);
	
}

//Stop Execution
void stop()
{
	
	p("\nWould you like to convert another number? Y or N\t");
		s(" %c", &close);	
		
	
}

//Function Main
main()
{
	
	//Objects start
	title();
	charcode();
	number_system_input();
	//Objects end
	
	//Decimal to Any Other Number System Conversion
	if (toupper(ns_input) == 'D')
	{
		
		//Prompt to choose what output
		p("\nWhat Number System do you want to convert to? ");
			s(" %c", &ns_output);
		
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
		
			p("\nThe Decimal Equivalent is: %lld\n", decimal_num);
			p("The Binary Equivalent is: %lld\n", binary);
			
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
		
			p("\nThe Decimal Equivalent is: %lld\n", decimal_num);
			p("The Octal Equivalent is: %lld\n", octal);
			
		}
		
		//Decimal to Hexadecimal Conversion
		else if (toupper(ns_output) == 'H')
		{
			
			input();
			decimal_num = num;
		
			//While Loop Here
			while (num > 0)
			{
		
				rem = num % 10;
				hexa += rem * base;
				num /= 10;
				base *= 10;
			
			}
		
			p("\nThe Decimal Equivalent is: %lld\n", decimal_num);
			p("The Hexadecimal Equivalent is: %llx\n", hexa);
			
		}
		
		//Invalid Input
		else
		{
			
			p("\nInvalid Input!\n");
			
		}
		
	
	}
	
	//Binary to Any Other Number System Conversion
	else if (toupper(ns_input) == 'B')
	{
		
		//Prompt to choose what output
		p("\nWhat Number System do you want to convert to? ");
			s(" %c", &ns_output);
		
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
		
			p("\nThe Binary Equivalent is: %lld\n", binary_num);
			p("The Decimal Equivalent is: %lld\n", decimal);
			
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
		
			p("\nThe Binary Equivalent is: %lld\n", binary_num);
			p("The Octal Equivalent is: %llo\n", octal);
			
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
		
			p("\nThe Binary Equivalent is: %lld\n", binary_num);
			p("The Hexadecimal Equivalent is: %llx\n", hexa);
			
		}
		
		//Invalid Input
		else 
		{
			p("\nInvalid Input!\n");
			
		}	

		
	}
	
	//Octal to Any Other Number System Conversion
	else if (toupper(ns_input) == 'O')
	{
		
		//Prompt to choose what output
		p("\nWhat Number System do you want to convert to? ");
			s(" %c", &ns_output);
		
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
		
			p("\nThe Octal Equivalent is: %lld\n", octal_num);
			p("The Decimal Equivalent is: %lld\n", decimal);
			
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
		
			p("\nThe Octal Equivalent is: %lld\n", octal_num);
			p("The Binary Equivalent is: %lld\n", binary);
			
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
			
			p("\nThe Octal Equivalent is: %lld\n", octal_num);
			p("The Hexadecimal Equivalent is: %lld\n", hexa);
				
			
		}
		
		//Invalid Input
		else
		{
			
			p("\nInvalid Input!\n");	
			
		}
		
	}
	
	//Hexadecimal to Any Other Number System Conversion
	else if (toupper(ns_input) == 'H')
	{
			
		//Prompt to choose what output
		p("\nWhat Number System do you want to convert to? ");
			s(" %c", &ns_output);		
			
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
			
			p("\nThe Hexadecimal Equivalent is: %llx\n", hexa_num);
			p("The Decimal Equivalent is: %llx\n", decimal);
			
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
		
			p("\nThe Hexadecimal Equivalent is: %llx\n", hexa_num);
			p("The Binary Equivalent is: %lld\n", binary);
						
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
			
			p("The Hexadecimal Equivalent is: %lld\n", hexa_num);
			p("The Octal Equivalent is: %lld\n", octal);
		}
		
		//Invalid Input
		else
		{
			
			p("\nInvalid Input!\n");
			
		}
		
	}
	
	//Invalid Input
	else 
	{
		
		p("\nInvalid Input!\n");
		
	}
	
	stop();
	
	while (toupper(close) != 'N' && toupper(close) == 'Y')
	{
		
		long long int decimal =0, binary = 0, base = 1, octal = 0, hexa = 0;
		
		//Objects start
		number_system_input();
		//Objects end
	
		//Decimal to Any Other Number System Conversion
		if (toupper(ns_input) == 'D')
		{
		
			//Prompt to choose what output
			p("\nWhat Number System do you want to convert to? ");
				s(" %c", &ns_output);
		
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
			
				p("\nThe Decimal Equivalent is: %lld\n", decimal_num);
				p("The Binary Equivalent is: %lld\n", binary);
			
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
		
				p("\nThe Decimal Equivalent is: %lld\n", decimal_num);
				p("The Octal Equivalent is: %lld\n", octal);
			
			}
		
			//Decimal to Hexadecimal Conversion
			else if (toupper(ns_output) == 'H')
			{
			
				input();
				decimal_num = num;
		
				//While Loop Here
				while (num > 0)
				{
		
					rem = num % 10;
					hexa += rem * base;
					num /= 10;
					base *= 10;
			
				}
		
				p("\nThe Decimal Equivalent is: %lld\n", decimal_num);
				p("The Hexadecimal Equivalent is: %llx\n", hexa);
			
			}
		
			//Invalid Input
			else
			{
			
				p("\nInvalid Input!\n");
			
			}
		
	
		}
	
		//Binary to Any Other Number System Conversion
		else if (toupper(ns_input) == 'B')
		{
		
			//Prompt to choose what output
			p("\nWhat Number System do you want to convert to? ");
				s(" %c", &ns_output);
		
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
		
				p("\nThe Binary Equivalent is: %lld\n", binary_num);
				p("The Decimal Equivalent is: %lld\n", decimal);
			
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
		
				p("\nThe Binary Equivalent is: %lld\n", binary_num);
				p("The Octal Equivalent is: %llo\n", octal);
			
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
		
				p("\nThe Binary Equivalent is: %lld\n", binary_num);
				p("The Hexadecimal Equivalent is: %llx\n", hexa);
			
			}
		
			//Invalid Input
			else 
			{
				p("\nInvalid Input!\n");
			
			}	
	
		
		}
	
		//Octal to Any Other Number System Conversion
		else if (toupper(ns_input) == 'O')
		{
			
			//Prompt to choose what output
			p("\nWhat Number System do you want to convert to? ");
				s(" %c", &ns_output);
		
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
		
				p("\nThe Octal Equivalent is: %lld\n", octal_num);
				p("The Decimal Equivalent is: %lld\n", decimal);
			
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
		
				p("\nThe Octal Equivalent is: %lld\n", octal_num);
				p("The Binary Equivalent is: %lld\n", binary);
			
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
				
				p("\nThe Octal Equivalent is: %lld\n", octal_num);
				p("The Hexadecimal Equivalent is: %lld\n", hexa);
				
			
			}
		
			//Invalid Input
			else
			{
			
				p("\nInvalid Input!\n");	
			
			}
		
		}
	
		//Hexadecimal to Any Other Number System Conversion
		else if (toupper(ns_input) == 'H')
		{
			
			//Prompt to choose what output
			p("\nWhat Number System do you want to convert to? ");
				s(" %c", &ns_output);		
			
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
			
				p("\nThe Hexadecimal Equivalent is: %llx\n", hexa_num);
				p("The Decimal Equivalent is: %llx\n", decimal);
				
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
		
				p("\nThe Hexadecimal Equivalent is: %llx\n", hexa_num);
				p("The Binary Equivalent is: %lld\n", binary);
						
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
			
				p("The Hexadecimal Equivalent is: %lld\n", hexa_num);
				p("The Octal Equivalent is: %lld\n", octal);
			}
		
			//Invalid Input
			else
			{
			
				p("\nInvalid Input!\n");
			
			}
		
		}
	
		//Invalid Input
		else 
		{
		
			p("\nInvalid Input!\n");
		
		}
	
		stop();
	
	}
			
	if (toupper(close) =='N')
	{
				
		p("\nHave a Good Day!");
		
		return 0;
		
	}
	
	else if (toupper(close) != 'N' && toupper(close) != 'Y')
	{
			
		p("\nError!\n\nProgram Terminated\n\nPress any key to close window");
		
			return 0;
		
	}
		
}
