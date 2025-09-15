#include <iostream>
#include <fstream>
#include <string>
#include "/public/read.h"
using namespace std;


//specific date
//specific word
//specific person
//top 10
//most recent and oldest
//specific country
int main() {
    int choice;
    string specificWord;
    ifstream trump_file("trumpInsults");
    string throwaway_row = readline(trump_file);
    string number =  readline(trump_file, ',');
    string date = readline(trump_file, ',');
    string target = readline(trump_file, ',');
    string insult =  readline(trump_file, ',');
    string tweet = readline(trump_file, ',');
    if (!trump_file) {
        cout << "Bad File!\n";
        return 0;
    }
    cout << "1.) Would you like to see Trumps tweet from a specific date?\n2.) Would you like to see a Trump tweet that contains a specific word?\n3.) Would you like to see Trumps Top 10 tweets\n5.) Would you like to the the most recent tweet from Trump\n6.) Would you like to see the oldest tweet from Trump\n6.) Would you like to see a Trump tweet about immigrants?" << endl;
    cin >> choice;
    if (choice == 1) {
        cout << "What date would you like? (write in a year-month-date format" << endl;
    }
    if (choice == 2) {
        cout << "What specific word would you like to see in the tweet" << endl;
        cin >> specificWord;
        if (!cin) {
            cout << "BAD INPUT!" << endl;
            return 0;
        }
    }

}
