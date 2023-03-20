#include<iostream>
#include<string>
#include<math.h>

using namespace std;

// EXERCISE 1
/*
int main()
{
    // VARIABLES
    string name;
    char seatSection;
    int seatNumber;

    // ASKING INFO
    cout << "Enter your name" << endl;
    getline(cin, name);

    cout << "Enter your section" << endl;
    cin >> seatSection;

    cout << "Enter your seat number" << endl;
    cin >> seatNumber;

    // ROUGH FORMATTING
    cout << "|-------------------------|" << endl;
    cout << "| Name: " << name << "  |" << endl;
    cout << "| Section: " << seatSection << "   |" << endl;
    cout << "| Seat Number: " << seatNumber << "|" << endl;
    cout << "| Price: $50              |" << endl;
    cout << "|-------------------------|" << endl;

}
*/

// EXERCISE 2
/*
int main()
{
    // VARIABLES
    string name;
    char seatSection;
    int seatNumber;

    int price = 150;

    // ASKING INFO
    cout << "Enter your name" << endl;
    getline(cin, name);

    cout << "Enter your section" << endl;
    cin >> seatSection;

    cout << "Enter your seat number" << endl;
    cin >> seatNumber;
    
    // FORMATTING (WITH THE DREADED PRINTF :( )
    cout << endl << endl;

    cout << "|-----------------------|"<< endl;
    printf ("| Name: %-15s | \n", name.c_str());
    printf ("| Section: %1c            | \n", seatSection);
    printf ("| Seat Number: %003d      | \n", seatNumber);
    printf ("| Price: $%1d           | \n", price);
    cout << "|-----------------------|"<< endl;


}
*/

// EXERCISE 3
/*
int main()
{
    // VARIABLES
    string animalType;
    float startingPop, projectedPop, projectionYear;

    float currentYear = 2023;
    int multiplier = 2;

    // ASKING INFO
    cout << "What is the animal?" << endl;
    getline (cin, animalType);

    cout << "How many of the " << animalType << " are in the area currently? (Enter a positive number)." << endl;
    cin >> startingPop;

    cout << "What is the projected year? (Enter a year after 2023). " << endl;
    cin >> projectionYear;

    // FINDING THE INTEGER
    float power = (projectionYear - currentYear);

    // FORMATTING
    cout << endl << endl << "|----------------------------|" << endl;
    cout << "| Animal Type: " << animalType << "        |" << endl;
    cout << "| Starting Amount: " << startingPop << "       |" << endl;
    cout << "| Current Year: " << currentYear << "        |" << endl;
    cout << "| Projected Year: " << projectionYear << "      |" << endl;
    
    // CREATE INTEGER TO MULTIPLY THE STARTING POP BY
    float integer = pow(multiplier, power);

    // ADDING IN THE PROJECTED POP
    cout << "| Projected Population: " << (startingPop * integer) <<  " |" << endl;
    cout << "|----------------------------|" << endl;
    
}
*/