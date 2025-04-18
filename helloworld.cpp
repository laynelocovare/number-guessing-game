#include <iostream>
#include <cstdlib> 
#include <ctime>

int main()
{     
        using std::cout;
        using std::cin;
        
        srand((unsigned)time(0));

        int guess;
        int number = (rand() % 100) + 1;

        cout << "Guess The Number\n";
        cout << "This number I have in my head is between 1 and 100!\n";
        cout << "Your Guess: ";
        cin >> guess;

        while (guess != number)
        {
                if (guess > number)
                {
                        cout << "The number I'm thinking of is lower than this!\n";
                        cout << "Guess again: ";
                        cin >> guess;
                }
                else if (guess < number)
                {
                        cout << "The number I'm thinking of is higher than this!\n";
                        cout << "Guess again: ";
                        cin >> guess;
                }
        }

        if (guess == number)
        {
                cout << "YOU GOT THE NUMBER!!!\n"; 
        }

        return 0;
}