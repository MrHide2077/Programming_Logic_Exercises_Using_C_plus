#include <iostream>
#include <string>
#include <cmath>
#include <numbers>
using namespace std;
int main() {
	cout << "Hello World!\n";
	cout << "LMAO dude, now I'm hacker. Go f**k everyone!\n";
	cout << "As you can see I'm new here. Just the beginning folks, now wait for C++ exercises soon!!.\n";
	cout << "Just wait...\n";
		//Trying to print numbers;
		cout << 1 << "\n";
		cout << 1 + 1 << "\n"; // \n is the most used to create a new blank line
		cout << 2 + 1 << "\n";
		cout << 3 + 1 << endl; // endl is also used to create a new blank line
		cout << 4 + 1 << "\t"; // same thing but \t is used to create a tab space
		cout << 5 + 1 << "\\"; // \\ is used to print a backslash
		cout << 6 + 1 << "\"" << "\n"; // \" is used to print a double quote
		cout << endl; // this is used to create a new line (empty)

		// Creating variables...  If you learned Java first, this thing will be easy to understand
		string myname = "Mr_Hyde";
		int mybirthday = 2010;
		double myprom = 90.2;
		char myletter = 'V';
		bool myboolean = true;
		cout << "My name is: " << myname << "\n";
		cout << "My birthday is in the year: " << mybirthday << "\n";
		cout << "My average grade is: " << myprom << "\n";
		cout << "My favorite letter is: " << myletter << "\n";
		cout << "I am a student: " << myboolean << "\n";
		mybirthday = 2002; // Yeah you can overwrite the value of the variable, but NOT the type
		cout << "Naaa, my real birthday is in the year: " << mybirthday << "\n";
		cout << endl;

		int x = 10;
		int y = 13;
		int result = x + y;	// First operations
		cout << "I'm " << result << " years old" << "\n";	

		int xy = 10, yx = 20, yz = 30; // Yeah you can declare multiple variables in one line, but it's not recommended
		cout << "The result of the operation of xy, yx and yz, is: "<< "\n" << xy + yx + yz << "\n";
		cout << endl;	

		//Now  let's talk about constants, this means you can "block" a variable just to be read and not modified
		const int myconst = 1945;
		cout << "What is may damn constant? " << endl << myconst << "\n";
		cout << endl;

		//Now let's make this interesting, let's talk about cin (Now we are gonna introduce data)
		int x_1, y_1;
		cout << "Now enter a number: ";
		cin >> x_1;
		cout << "Now enter another number: ";
		cin >> y_1;
		cout << "The sum of " << x_1 << " and " << y_1 << " is: " << x_1 + y_1 << "\n";
		cout << "I hope you're enjoying this...bye!\n";
		cout << endl;

		//Well.. this is helpful, but use ONLY when the variables are simple. Yeah I'm talkiing about "auto" keyword, this is used to automatically detect the type of the variable, but it can be dangerous if you don't know what the hell you're doing
		auto mydumbnumber = 10; // This is an integer
		auto mydamndouble = 9.5; // This is a double
		auto mydamststring = "Hi"; // This is a string, as you can see, the compiler automatically detects the type, but don't be a fool using this in more complex variables. And you have to assign a value to the variable first
		cout << mydumbnumber << "\n";
		cout << mydamndouble << "\n";	
		cout << mydamststring << "\n";	
		cout << endl;

		//Haha we're gonna talk about operators, you know... +,-,/,*, and blah blah blah. So pay god damn attention, because this is important. Let's start with the basic ones:
		int a, b;
		a = 20;
		b = 15;
		cout << "Addition :" << (a+b) << "\n";
		cout << "Subtraction :" << (a - b) << "\n";
		cout << "Multiplication :" << (a * b) << "\n";
		cout << "Division :" << (a / b) << "\n";	
		cout << "Modulus :" << (a % b) << "\n"; // This is used to get the remainder of a division"
		cout << "Increment :" << (a++) << "\n"; // This is used to increment a variable by 1
		cout << "Decrement :" << (a--) << "\n"; // This is used to decrement a variable by 1. If you came from languages like Java, this this is basically the same thing
		//Let's make it fun, let's talk about assignment operators, this is used to assign a value to a variable, but it can also be used to perform operations on the variable and assign the result to the variable. For example:
		cout << "Assignment operator (+=) :" << (a += 5) << "\n"; // This is used to add a value to a variable and assign the result to the variable
		cout << "Assignment operator (-=) :" << (b -= 5) << "\n"; // This is used to subtract a value from a variable and assign the result to the variable
		cout << "Assignment operator (*=) :" << (a *= 5) << "\n"; // This is used to multiply a variable by a value and assign the result to the variable
		cout << "Assignment operator (/=) :" << (b /= 5) << "\n"; // This is used to divide a variable by a value and assign the result to the variable
		cout << "Assignment operator (%=) :" << (a %= 5) << "\n"; // This is used to get the remainder of a variable divided by a value and assign the result to the variable
		cout << "Assignment operator (|=) :" << (b |= 5) << "\n"; // This is used to perform a bitwise OR operation on a variable and a value and assign the result to the variable
		cout << "Assignment operator (&=) :" << (a &= 5) << "\n"; // This is used to perform a bitwise AND operation on a variable and a value and assign the result to the variable
		cout << "Assignment operator (^=) :" << (b ^= 5) << "\n"; // This is used to perform a bitwise XOR operation on a variable and a value and assign the result to the variable
		cout << "Assignment operator (>>=) :" << (a >>= 5) << "\n"; // This is used to perform a bitwise right shift operation on a variable and a value and assign the result to the variable
		cout << "Assignment operator (<<=) :" << (b <<= 5) << "\n"; // This is used to perform a bitwise left shift operation on a variable and a value and assign the result to the variable	
		cout << endl;

		//Now comparison operators, this is used to compare two values and return a boolean value (true or false).
		int val1 = 10;
		int val2 = 20;
		cout << "Is val1 equal to val2? " << (val1 == val2) << "\n"; //It's means that if val1 is equal to val2, it will return true (1), otherwise it will return false (0)
		cout << "Is val1 not equal to val2? " << (val1 != val2) << "\n"; // It's means that if val1 is not equal to val2, it will return true (1), otherwise it will return false (0)
		cout << "Is val1 greater than val2? " << (val1 > val2) << "\n"; // It's means that if val1 is greater than val2, it will return true (1), otherwise it will return false (0)
		cout << "Is val1 less than val2? " << (val1 < val2) << "\n"; // It's means that if val1 is less than val2, it will return true (1), otherwise it will return false (0)
		cout << "Is val1 greater than or equal to val2? " << (val1 >= val2) << "\n"; // It's means that if val1 is greater than or equal to val2, it will return true (1), otherwise it will return false (0)
		cout << "Is val1 less than or equal to val2? " << (val1 <= val2) << "\n"; // It's means that if val1 is less than or equal to val2, it will return true (1), otherwise it will return false (0)
		cout << endl;

		//Well it's making interesting, but let's talk about logical operators, this is used to combine two or more conditions and return a boolean value (true or false).
		//We have three logical operators: AND (&&), OR (||) and NOT (!). Same as Java lol:
		int val3 = 10;
		int val4 = 20;
		cout << "Is val3 equal to 10 AND val4 equal to 20? " << ((val3 == 10) && (val4 == 20)) << "\n"; // It's means that if val3 is equal to 10 AND val4 is equal to 20, it will return true (1), otherwise it will return false (0)
		cout << "Is val3 equal to 10 OR val4 equal to 20? " << ((val3 == 10) || (val4 == 20)) << "\n"; // It's means that if val3 is equal to 10 OR val4 is equal to 20, it will return true (1), otherwise it will return false (0)
		cout << "Is val3 not equal to 10? " << (!(val3 == 10)) << "\n"; // It's means that if val3 is not equal to 10, it will return true (1), otherwise it will return false (0)		
		cout << endl;	
		
		//Yeah this will be easy to understand, C++ solve operations in a priority order, this means that it will solve the operations in the following order: 
		cout << "First priority: Parentheses ()\n";
		cout << "Second priority: Exponents ^\n";
		cout << "Third priority: Multiplication * and Division /\n";
		cout << "Fourth priority: Addition + and Subtraction -\n";
		cout << "Fifth priority: Assignment =\n";
		cout << "Sixth priority: Comparison ==, !=, >, <, >=, <=\n";
		cout << "Seventh priority: Logical AND &&\n";
		cout << "Eighth priority: Logical OR ||\n";	
		cout << endl;

		//Now somenthing different, String concatenation
		string str1 = "My name is: ";
		string str2 = "Mr_Hyde";
		cout << str1 + str2 << "\n"; // This is used to concatenate two strings (+)
		//And you can use append() method to concatenate two strings, but it's not recommended because it's slower than using + operator
		cout << str1.append(str2) << "\n"; // This is used to concatenate two strings (append())
		cout << endl;

		//Now length of a string, this is used to get the length of a string (number of characters in a string)
		string str3 = "Damn string length is: ";
		cout << str3 << str3.length() << "\n"; // This is used to get the length of a string (length())
		//Also you can use size() method to get the length of a string, but it's not recommended because it's slower than using length() method
		cout << str3 << str3.size() << "\n"; // This is used to get the length of a string (size())
		cout << endl;

		//Access string characters, this is used to access a specific character in a string (string[index])
		string mydamnstring1 = "FOOL";
		cout << "The selected character is... " << mydamnstring1[0] << "\n"; // This is used to access a specific character in a string (string[index])
		cout << "The selected character is... " << mydamnstring1[1] << "\n";
		cout << "The selected character is... " << mydamnstring1[2] << "\n";
		cout << "The selected character is... " << mydamnstring1[3] << "\n";
		cout << "The full word is... " << mydamnstring1 << "\n";
		cout << endl;
		//And of course, you can change the damn character in a string (string[index] = 'new character')
		mydamnstring1[0] = 'P'; //Don't forget this is now a char, use single quotes to change the character
		cout << "The modified word is... " << mydamnstring1 << "\n";
		cout << endl;

		//Hellyeah, now we are gonna see the damn at() method, this is used to access a specific character in a string (string.at(index))
		string mydamnstring2 = "Animal";
		cout << "The selected character is... " << mydamnstring2.at(0) << "\n"; // This is used to access a specific character in a string (string.at(index))
		cout << "The selected character is... " << mydamnstring2.at(1) << "\n";
		cout << "The selected character is... " << mydamnstring2.at(2) << "\n";
		cout << "The selected character is... " << mydamnstring2.at(3) << "\n";
		cout << "The full word is... " << mydamnstring2 << "\n";
		cout << endl;

		/*Well  it's time to make an aclaration, C++ cin recognices a space as the end of the input, this means that if you enter a string with spaces, it will only take the first word.
		That's why we use getline() function to read a string with spaces.*/
		string myfullname2;
		cout << "Enter your full name: ";
		cin >> myfullname2;
		cout << "Your full name is: " << myfullname2 << "\n"; // This will only print the first word of the input
		//But now with getline() function, we can read a string with spaces
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //This is used to ignore the newline character left in the input buffer by the previous cin statement, so that getline() can read the full line of input.
		cout << "Enter your really full name: "<<"\n";
		// This will only print the first word of the input, but we can use getline() function to read a string with spaces	
		getline (cin, myfullname2);
		cout << "Your really full name is: " << myfullname2 << "\n"; // This will print the full name of the input.
		cout << endl;

		//Math in C++!!
		//For now we are gonna use max() and min() functions, this is used to get the maximum and minimum value of two numbers
		int maxX = 7;
		int minY = 1;
		cout << "The maximum value is: " << max(maxX, minY) << "\n"; // This is used to get the maximum value of two numbers (max())
		cout << "The minimum value is: " << min(maxX, minY) << "\n"; // This is used to get the minimum value of two numbers (min())
		cout << endl;

		//C++ math library, this is used to perform mathematical operations in C++. We are gonna use pow() and sqrt() functions, this is used to calculate the power and square root of a number
		cout << "The square root of 216 is: " << sqrt(216) << "\n"; // This is used to calculate the square root of a number (sqrt())
		cout << "The rounded value of 3.1415 is: " << round(3.1415) << "\n"; // This is used to round a number to the nearest integer (round())
		cout << "The power of 316 raised to 3 is: " << pow(316, 3) << "\n"; // This is used to calculate the power of a number (pow())"
		cout << "The logarithm of 5 is: " << log(5) << "\n"; // This is used to calculate the logarithm of a number (log())
		cout << "The absolute value of -512 is: " << abs(-512) << "\n"; // This is used to calculate the absolute value of a number (abs())
		cout << endl;

		//I forgot something, if tou want to see the boolean value as true or false instead of 0 and 1, you can use boolalpha manipulator, this is used to print the boolean value as true or false instead of 0 and 1
		bool Hi = true;
		bool Bye = false;	
		cout << "The boolean value of Hi is: " << boolalpha << Hi << "\n"; // This is used to print the boolean value as true or false instead of 0 and 1 (boolalpha)
		cout << "The boolean value of Bye is: " << boolalpha << Bye << "\n"; // This is used to print the boolean value as true or false instead of 0 and 1 (boolalpha)	
		//And if you want to revert back to 0 and 1, you can use noboolalpha manipulator, this is used to print the boolean value as 0 and 1 instead of true or false
		cout << "The boolean value of Hi is: " << noboolalpha << Hi << "\n"; // This is used to print the boolean value as 0 and 1 instead of true or false (noboolalpha)
		cout << "The boolean value of Bye is: " << noboolalpha << Bye << "\n"; // This is used to print the boolean value as 0 and 1 instead of true or false (noboolalpha)
		cout << endl;	

		//Hahaha now things are gonna make more interesting, now if/else statements, this is used to perform a block of code if a condition is true, and another block of code if the condition is false
		//And again... this is very similar to Java, so if you learned Java first, this will be god damn easy to understand
		cout << "Enter a number: ";
		int xi;
		cin >> xi;
		if (xi < 100) {
			cout << "The value of xi is less than 100... true" << "\n";
		}
		else {
			cout << "Nop dude, the value of xi is greater than or equal to 100... false"<< "\n";
		}
		//And using boolean values, this is used to perform a block of code if a condition is true, and another block of code if the condition is false
		bool isgreater = (xi > 100);
		if (isgreater) {
			cout << "The value of xi is greater than 100... true" << "\n";
		}
		else if (xi == 50) {
			cout << "The value is in the middle" << "\n";
		}else{
			cout << "The value of xi is not greater than 100... false" << "\n";
		}

		//Short Hand If...Else (Ternary Operator). This is used to perform a block of code if a condition is true, and another block of code if the condition is false, but in a shorter way. The syntax is: condition ? true : false;
		int damntime = 10;
		damntime > 12 ? cout << "Good morning!" : cout << "Good evening!" << "\n"; // This is used to perform a block of code if a condition is true, and another block of code if the condition is false, but in a shorter way (Ternary Operator)" :
		//Remember the ternary operators are used just for simple things. Don't damn use this for harder things
		cout << endl;	
		//And right you can nest it
		string message = (damntime > 18) ? "Good evening"
			: (damntime < 12) ? "Good Morning"
			: "Good Evening";
		cout << message;
		cout << endl;

		//This time lets talk about switch statements, this is used to perform a block of code based on the value of a variable. The syntax is: switch (variable) { case value: // block of code break; default: // block of code }
		//Plz don't forgret to use the damn break statemente. If you don't use it, the fuck algoritm will execute every case
		//Let's try this shit
		int day = 1;
		switch (day) {
			case 1:
				cout << "Monday" << "\n";
				break;
			case 2:
				cout << "Tuesday" << "\n";
				break;
			case 3:
				cout << "Wednesday" << "\n";
				break;
			case 4:
				cout << "Thursday" << "\n";
				break;
			case 5:
				cout << "Friday" << "\n";
				break;
			case 6:
				cout << "Saturday" << "\n";
				break;
			case 7:
				cout << "Sunday" << "\n";
				break;
			case 8: 
				cout << "Not so smart right?" << "\n";
				break;
			default:
				cout << "Have a nice day dude!" << "\n";
			}

		//Damn now we are talkin serious. Loops, this is used to perform a block of code multiple times. We have three types of loops: for, while and do-while. Let's start with for loop, this is used to perform a block of code a specific number of times. The syntax is: for (initialization; condition; increment) { // block of code }
		//Let's start whith the "while" loop, this is used to perform a block of code while a condition is true. The syntax is: while (condition) { // block of code }
		//It's damn similar to Java
		int damnOption = 10;
		while (damnOption > 0) {
			cout << "Damn, this is a while loop!" << "\n";
			damnOption--;
			cout << damnOption << "\n";
		}
		cout << endl;
		//This thing will be running till the damnOption is 0, because the condition is true. When the damnOption is 0, the condition will be false and the loop will stop.

		//Now let's talk about the "do-while" loop, this is used to perform a block of code at least once, and then while a condition is true. The syntax is: do { // block of code } while (condition);
		int secondDamnOption = 10;
		do {
			cout << "Damn, this is crazy..." << (secondDamnOption *= std::numbers::pi) << "\n";
		} while (secondDamnOption>0);
		cout << endl;
		//For this example, the secondDamnOption will be multiplied by pi, and the damnOption will be greater than 0, so the loop will run forever. But if you change the condition to secondDamnOption < 0, the loop will run once and then stop. And use()

		//Now we already saw the break word in switch statements, but it can also be used in loops, this is used to break out of a loop. The syntax is: break; Let's try this shit
		int thirdoption = 30;
		for (int i = 0; i < thirdoption; i++) {
			cout << "Damn, this is another damn loop! :" << i << "\n";
			if (i==15) {
				cout << "Yeah, we arrive to the limit of the loop using break statement" << "\n";
				break;
			}
		}
		cout << endl;

		//And continue  keyword is used to skip the current iteration of a loop and continue with the next iteration. The syntax is: continue; Let's try this shit
		int fourthoption = 30;
		for (int i = 0; i < fourthoption; i++) {
			if (i == 15) {
				cout << endl;
				cout << "Skipping iteration, in the damn middle..." << i <<"\n";
				cout << endl;
				continue;
			}
			cout << "Damn, this is another damn loop! :" << i << "\n";
		}
		cout << endl;

		return 0;
	}
