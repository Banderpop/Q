// ConsoleApplication9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<string>
#include<cstring>
#include<climits>
#include<cctype>
#include<fstream>
#include<cstdlib>
using namespace std;
void q()
{
	double x= 100;
	int year = 0;
	double d =0 ;
	double c;
	while (true)
	{
		d += 10;
		c = x * 0.05;
		x += c;
		year++;
		if (c > d)
			break;

	}
	cout << year;
}//done
void count()
{
	string month[12]{ "January","February","March","April","May","June","July","August","September","October","November","December" };
	int count[3][12];
	int sales[3]{ 0,0,0 };
	int sum = 0;
	for (int x = 0; x < 3; x++)
	{
		for (int i = 0; i < 12; i++)
		{
			cout << "Please enter the sales volume on " << month[i] << " :";
			cin >> count[x][i];
		}

		for (int i = 0; i < 12; i++)
		{
			sales[x] += count[x][i];
		}
		cout << endl;
	}
		cout << "The sales volume in first year is " << sales[0] << endl;
		cout << "The sales volume in second year is" << sales[1] << endl;
		cout << "The sales volume in third year is" << sales[2] << endl;
		cout << "The sales volume of three years is" << sales[0] + sales[1] + sales[2] << endl;
}//not finish
void car()
{
	struct car {
		string producer;
		int years;
	};
	car* data = new car[100];
	int count = 0;
	cout << "How many cars do you wish to catalog ?";
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cout << "Car #" << i + 1 << " :" << endl;
		cout << "Please enter the make : ";
		cin >> data[i].producer;
		cout << "Please enter the year made : ";
		cin >> data[i].years;
	}
	cout << "Here is your collection : " << endl;
	for (int i = 0; i < count; i++)
	{
		cout << data[i].years << " " << data[i].producer << endl;
	}
	delete []data;
}//done
void enterchar()
{
	char* words = new char[10];
	char done[5] = "done";
	int count = 0;
	int ptr;
	cout << " Enter words (to stop, type the word done):" << endl;
	while (true)
	{
		cin.get(words, 10);
		ptr = strcmp(done, words);
		if (strcmp == 0)
			break;
		else
			count++;
	}
	cout << "You entered a total of " << count << " words." << endl;
}//not finish
void count1()
{
	char ch;
	cout << "Type, and I shall repeat.\n";
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			cout << ch;
		else
			cout << ++ch;
		cin.get(ch);
	}
	cout << "\nPlease excuse the slight confusion.\n";
}//done
void practice0()
{
	cout << "This program may reformat your hard disk\n"
		"and destroy all your data.\n"
		"Do you wish to continue? <y/n>";
	char ch;
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
		cout << "You were warned!\a\a\n";
	else if (ch == 'n' || ch == 'N')
		cout << "A wise choice.....bye\n";
	else
		cout << "That wasn't a y or n! Apparently you "
		"can't follow\ninstructions, so "
		"I 'll trash your disk anyway.\a\a\a\n";
}//done
void rows()
{
	int count = 0;
	int row = 4;
	int star = 1;
	cout << "Enter number of rows : ";
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		for (int x =0 ; x < row;x++ )
			cout << ".";
		row -= 1;
		for (int y = 0; y < star; y++)
			cout << "*";
		star += 1;
		cout << endl;
	}
	
}//done
#if 0
void x1()
{
	char ch;
	char space = ' ';
	char a = 'A';
	char x;
	int i, j, n, k, l;
	printf("请输入一个大写字母: \n");
	scanf("%c", &ch);
	n = ch - 64;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= n - i; j++)
		{
			putchar(space);
		}
		a = 'A';
		for (k = 0; k <= i; k++)
		{
			printf("%c", a);
			a++;
		}

		x = ch + i - n;
		for (l = i; l > 0; l--)
		{
			printf("%c", x);
			x--;
		}
		printf("\n");
	}
}
#endif // 0
void ifelse()
{
	const int Fave = 27;
	int n;
	cout << "Enter a number in the range 1-100 to find ";
	cout << "my favorite number: ";
	do
	{
		cin >> n;
		if (n < Fave)
			cout << "Too low -- guess again : ";
		else if (n > Fave)
			cout << "Too high -- guess again : ";
		else
			cout << Fave << " is right!\n";
	} while (n != Fave);
}
void x2()
{
	const int ArSize = 6;
	float naaq[ArSize];
	cout << "Enter the NAAQs (New Age Awareness Quotients) "
		<< "of\nyour neighbors. Program terminates "
		<< "when you make\n" << ArSize << " entries "
		<< "or enter a negative value.\n";
	int i = 0;
	float temp;
	cout << "First value: ";
	cin >> temp;
	while (i < ArSize && temp >= 0)
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize)
		{
			cout << "Next value: ";
			cin >> temp;
		}
	}
	if (i == 0)
		cout << "No data--bye\n";
	else
	{
		cout << "Enter your NAAQ: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;
		cout << count;
		cout << " of your neighbors have greater awareness of\n"
			<< "the New Age than you do.\n";
	}
}
void more()
{
	const char * qualify[4] =
	{
		"10,000-meter race.\n",
		"mud tug-of-war.\n",
		"masters canoe jousting.\n",
		"pie-throwing festival.\n"
	};
	int age;
	cout << "Enter your age in years: ";
	cin >> age;
	int index;
	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;
	cout << "You qualify for the " << qualify[index];
}
bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}
void x3()
{
	bool is_int(double);
	double num;
	cout << "Yo, dude! Enter an integer value: ";
	cin >> num;
	while (!is_int(num))
	{
		cout << "Out of ranger -- Please try again: ";
		cin >> num;
	}
	int val = int(num);
	cout << "You've entered the integer " << val << "\nbye\n";
}
void x4()
{
	cout << "Enter text for analysis, and type @"
		" to terminate input.\n";
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;
	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch))
			chars++;
		else if (isspace(ch))
			whitespace++;
		else if (isdigit(ch))
			digits++;
		else if (ispunct(ch))
			punct++;
		else
			others++;
		cin.get(ch);
	}
	cout << chars << " letters, "
		<< whitespace << " whitespace,"
		<< digits << " punctuations, "
		<< others << " others.\n";
}
void condit()
{
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "The larger of " << a << " and " << b;
	int c = a > b ? a : b;
	cout << " is " << c << endl;
}
void switch0()
{
	void showmenu();
	void report();
	void comfort();
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5)
	{
		switch(choice)
		{
			case 1:cout << "\a\n";
				break;
			case 2:report();
				break;
			case 3: cout << "The boss was in all day.\n";
				break;
			case 4:comfort();
				break;
			default:cout << "That's not a choice.\n";
		}
		showmenu();
		cin >> choice;
	}
	cout << "Bye!\n";
}
void showmenu()
{
	cout << "Please enter 1,2,3,4, or 5:\n"
		"1) alarm            2) report\n"
		"3) alibi            4) comfort\n"
		"5) quit\n";
}
void report()
{
	cout << "It's been an excellent week for business.\n"
		"Sales are up 120%. Expenses are down 35%.\n";
}
void comfort()
{
	cout << "Your employees think you are the finest CEO\n"
		"in the industry. The board of dorectors think\n"
		"you are the finest CEO in the industry.\n";
}
void switch1()
{
	char choice;
	cin >> choice;
	while (choice != 'Q' && choice != 'q')
	{
		switch (choice)
		{
		case 'a':
		case 'A':cout << "\a\n";
			break;
		case'r':
		case'R':report();
			break;
		case 'l':
		case 'L':cout << "The boss was in all day .\n";
			break;
		case'c':
		case 'C':comfort();
			break;
		default:cout << "That's not a choice.\n";
		}
		showmenu();
		cin >> choice;
	}
}
void enum0()
{
	enum  {red,orange,yellow,green,blue,violet,indigo};
	cout << "Enter color code (0-6): ";
	int code;
	cin >> code;
	while (code >= red && code <= indigo)
	{
		switch (code)
		{
		case red:cout << "Her lips were red.\n"; break;
		case orange: cout << "Her hair was orange.\n"; break;
		case yellow: cout << "Her shoes were yellow.\n"; break;
		case green: cout << "Her nails were green.\n"; break;
		case blue:cout << "Her swearsuit was blue.\n"; break;
		case violet:cout << "Her eyes were violet.\n"; break;
		case indigo:cout << "Her mood was indigo.\n"; break;
		}
		cout << "Enter color code (0-6): ";
		cin >> code;
	}
	cout << "Bye\n";
}
void jump()
{
	const int ArSize = 80;
	char line[ArSize];
	int spaces = 0;
	cout << "Enter a line of text:\n";
	cin.get(line, ArSize);
	cout << "Complete line:\n" << line << endl;
	cout << "Line through first period:\n";
	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\n" << spaces << " spaces\n";
	cout << "Done.\n";
}
void cinfish()
{
	const int Max = 5;
	double fish[Max];
	cout << "Please enter the weights of your fish.\n";
	cout << "You may enter up to " << Max
		<< " fish <q to terminate>.\n";
	cout << "fish #1: ";
	int i = 0;
	while (i<Max && cin >> fish[i])
	{
		if (++i < Max)
			cout << "fish#" << i + 1 << ": ";
	}
	double total = 0.0;
	for (int j = 0; j < i; j++)
		total += fish[j];
	if (i == 0)
		cout << "No fish\n";
	else
		cout << total / i << " = average weight of "
		<< i << " fish\n";
	cout << "Done.\n;";
}
void cinfish1()
{
	const int Max = 5;
	int golf[Max];
	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << Max << " rounds.\n";
	int i;
	for (i = 0; i < Max; i++)
	{
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> golf[i]))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Please enter a number: ";
		}
	}
	double total = 0.0;
	for (i = 0; i < Max; i++)
		total += golf[i];
	cout << total / Max << " = average score "
		<< Max << " rounds\n";
}
void outfile()
{
	char automobile[50];
	int year ;
	double a_price;
	double d_price;
	ofstream  outFile;
	outFile.open("carinfo.txt");
	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913*a_price;
	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;
	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;
	outFile.close();
}//done
void test1()
{
	for(int i =0;i<1000;i++)
	{
		int number;
		number = 1+rand()%10;
		cout << "   " << number;
	}
}
void test2()
{
	bool isnum;
	char x;
	cout << "Enter '@' to stop." << endl;
	cin.get(x);
	while (x != '@')
	{
		if (!isalpha(x))
		{
			cin.get(x);
				continue;
		}
		if (islower(x))
		{
			x = toupper(x);
			cout << x;
		}
		else
		{
			x = tolower(x);
			cout << x;
		}
		cin.get(x);
	}
}//done
void test3()
{
	int i = 0;
	double count = 0;
	int x = 0;
	double donation[10];
	cout << "You can only enter 10 number :";
	for (; i < 10; i++)
	{
		cin>>(donation[i]);
		if (isdigit(donation[i]) == false)
			break;
	}
	for (int c = i; c >= 0; c--)
	{
		count += donation[c];
		count /= c;
	}
	for (int c = 0; c < i; c++)
	{
		if (count < donation[c])
			x++;
	}
	cout << "The average is " << count << " ,there is " 
		<< x << " number greater than average";

}
int main()
{
	test3();
}