
#include <iostream>
#include <string>
using namespace std;

void helloWorldFunc() 
{
	int x;
	cout << "Hur många loopar vill du köra?: ";
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		cout << "Hello World!\n";
	}
}

void helloWorldWhile()
{
	int i = 0;
	int x;
	cout << "Hur många loopar vill du köra?: ";
	cin >> x;
	while (x > i) 
	{
		cout << "Hello World (While)\n";
		i = i + 1;
	}
}

void helloWorldDo()
{	
	int x;
	int i = 0;
	cout << "Hur många loopar vill du köra?: ";		
	cin >> x;	//input värdet blir till x
	do {
		cout << "Hello World (do)\n";
		i = i + 1;
	} 
	while (i < x);
}



void info()
{
    string name;
    int age;
    char gender;
    string adress;
    bool married;
    float height;
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Gender (m/f): ";
    cin >> gender;
    cout << "Adress: ";
    getline(cin >> ws, adress);
    cout << "Married? (true/false): ";
    cin >> boolalpha >> married;
    cout << "Height (meters): ";
    cin >> height;

    cout << "\n";
    cout << name << endl;
    cout << age << endl;
    cout << gender << endl;
    cout << adress << endl;
    cout << boolalpha << married << endl;
    cout << height << endl;
}

int info2()
{
    char name[20];
    int age;
    char gender[2];
    char adress[50];
    int married;
    float height;
    printf("%s", "name: ");
    scanf_s("%s", name, 20);
    printf("%s", "age: ");
    scanf_s("%i", &age);
    printf("%s", "gender (m/f): ");
    scanf_s("%s", gender, 2);
    printf("%s", "adress: ");
    scanf_s(" %[^\n]", adress, 50);
    printf("%s", "married (1, true or 0 false): ");
    scanf_s("%i", &married);
    printf("%s", "height (m): ");
    scanf_s("%f", &height);

    printf("\nname: %s\n", name);
    printf("age: %i\n", age);
    printf("gender: %s\n", gender);
    printf("adress: %s\n", adress);
    printf("married: %i\n", married);
    printf("height: %f", height);
    return 0;
}

bool prime()
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number <= 0)
    {
        cout << "the integer is not positive";
        return false;
    }

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << "the number is not prime";
            return false;
        }
    }
    cout << "the number is prime!";
    return true;
}

void bounce(int x)
{
    if (x < 0)
    {
        cout << "Error! Input cannot be negative.";
    }
    else if (x == 0)
    {
        cout << x;
        return;
    }
    else
    {
        cout << x;
        bounce(x - 1);
        cout << x;
    }
}

void pyramidNum()
{
    int number;
    int pirre = 1;
    printf("Enter number: ");
    scanf_s("%i", &number);
    for (int i = 0; i < number; i++)
    {
        for (int j = 1; j < pirre; j++)
        {
            printf("%i", j);
        }
        printf("%i", pirre);
        printf("\n");
        pirre = pirre + 1;
    }
}

void pyramidChar()
{

    char inp;
    char bokstav = 65;
    printf("Enter a capital letter: ");
    scanf_s("%c", &inp, 2);

    for (int i = 1; i <= (inp - 65) + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", bokstav);
        }
        bokstav++;
        printf("%s", "\n");
    }
}


int main()
{
    //anropar på functionerna
	//helloWorldFunc();
	//helloWorldWhile();
	//helloWorldDo();
    //info();
    //info2();
    //prime();
    //bounce(5);
    //pyramidNum();
    pyramidChar();
}