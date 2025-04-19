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
 
         for (int i = 1; i < 5; i++)
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
 
                 else if (i <= 5 && guess == number)
                 {
                         break;
                 }
 
                 else if (guess != number)
                 {
                         break;
                 }
         }
 
         if (guess == number)
         {
                 cout << "YOU GOT THE NUMBER!!!\n"; 
         }
         else
         {
                 cout << "You didnt get the number :(\n";
         }
 
         return 0;
 }
