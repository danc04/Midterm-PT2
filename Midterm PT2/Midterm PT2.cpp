#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;


//class for player info
class myPlayer {
public:
    string firstname;
    string lastname;
    string teamname;
    string position;
    int shooting;
    int playmaking;
    int rebounding;
    int defense;
};

//void function that adds new players to vector of players using myPlayer class public info
void addPlayer(vector<myPlayer>& players) {
    myPlayer newPlayer;  //newPlayer data type that saves data for new player added
    cout << setfill('-') << setw(40) << '-';
    cout << setfill(' ') << setw(40) << ' ' << endl;
    cout << setw(39) << "Enter Required Fields For New Player" << "|" << endl;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << setfill(' ') << setw(39) << "First Name: " << "|" << endl;
    cin >> newPlayer.firstname;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << setfill(' ') << setw(39) << "Last Name: " << "|" << endl;
    cin >> newPlayer.lastname;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << setfill(' ') << setw(39) << "Position: " << "|" << endl;
    cin >> newPlayer.position;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << setfill(' ') << setw(39) << "Team: " << "|" << endl;
    cin >> newPlayer.teamname;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << setfill(' ') << setw(39) << "Shooting: " << "|" << endl;
    cin >> newPlayer.shooting;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << setfill(' ') << setw(39) << "Playmaking: " << "|" << endl;
    cin >> newPlayer.playmaking;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << setfill(' ') << setw(39) << "Rebounding: " << "|" << endl;
    cin >> newPlayer.rebounding;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << setfill(' ') << setw(39) << "Defense: " << "|" << endl;
    cin >> newPlayer.defense;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << "Your New Player Is Saved" << endl << endl;


    //Output the new player's data
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << left << setfill(' ');
    cout << '|' << "First Name: " << setw(25) << newPlayer.firstname << " " << '|' << endl;
    cout << '|' << "Last Name: " << setw(26) << newPlayer.lastname << " " << '|' << endl;
    cout << '|' << "Team: " << setw(32) << newPlayer.teamname << '|' << endl;
    cout << '|' << left << "Position: " << setw(28) << newPlayer.position << '|' << endl;
    cout << '|' << "Shooting: " << setw(28) << newPlayer.shooting << '|' << endl;
    cout << '|' << "Playmaking: " << setw(26) << newPlayer.playmaking << '|' << endl;
    cout << '|' << "Rebounding: " << setw(26) << newPlayer.rebounding << '|' << endl;
    cout << '|' << "Defense: " << setw(29) << newPlayer.defense << '|' << endl;
    cout << setfill('-') << setw(40) << '-' << endl;
}

//void function for starting screen of game
void printHeader() {
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << setfill(' ') << setw(25) << "NBA CSC 211" << endl;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << setfill(' ') << setw(23) << "Welcome!" << endl;
    cout << "Let's Begin Your Career In The NBA" << endl;
    cout << "Fill In Required" << endl;
    cout << setfill('-') << setw(40) << '-';
    cout << left;
    cout << setfill(' ') << setw(40) << ' ' << endl;
    cout << '|' << setw(38) << "First Name: " << '|' << endl;
    cout << '|' << setw(38) << "Last Name: " << '|' << endl;
    cout << '|' << setw(38) << "Team: " << '|' << endl;
    cout << '|' << setw(38) << "Position: " << '|' << endl;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << '|' << setw(38) << setfill(' ') << "Statistics (MAX 99) " << setfill(' ') << '|' << endl;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << setfill(' ');
    cout << '|' << setw(38) << "Shooting: " << '|' << endl;
    cout << '|' << setw(38) << "Playmaking: " << '|' << endl;
    cout << '|' << setw(38) << "Rebounding: " << '|' << endl;
    cout << '|' << setw(38) << "Defense: " << '|' << endl;
    cout << setfill('-') << setw(40) << '-' << endl << endl;
}


//void function that will output main menu
void printMenu() {
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << '|' << right << setfill(' ') << setw(20) << "MENU" << setw(19) << '|' << endl;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << '|' << setfill(' ') << setw(38) << left << "Type L to view all player stats" << setw(19) << '|' << endl;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << '|' << setfill(' ') << setw(38) << left << "Type P to view Team" << setw(19) << '|' << endl;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << '|' << setfill(' ') << setw(38) << left << "Type K to view Specific Player" << setw(19) << '|' << endl;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << '|' << setfill(' ') << setw(38) << left << "Type O to edit Player" << setw(19) << '|' << endl;
    cout << setfill('-') << setw(40) << '-' << endl;
    cout << '|' << setfill(' ') << setw(38) << left << "Type U to add New Player" << setw(19) << '|' << endl;
    cout << setfill('-') << setw(40) << '-' << endl << endl;
}

int main() {
    //open input file NBACSC
    ifstream inFile("NBACSC.txt");
    //If file not opened, add error message
    if (!inFile) {
        cout << "Error opening file" << endl;
        return 1;
    }


    //vector storing player info
    vector<myPlayer> players;
    //temp data type to store each player info temporarily
    myPlayer temp;
    
    //read player data from input file
    while (inFile >> temp.firstname >> temp.lastname >> temp.position >> temp.teamname >> temp.shooting >> temp.playmaking >> temp.rebounding >> temp.defense) {
        players.push_back(temp);
    }
    inFile.close();

    //print header screen and menu screen
    printHeader();
    printMenu();

    //char menuAction to act as buttons that lead to different actions
    char menuAction;
    cin >> menuAction;

    //If types L, user will be able to see all player data from input file
    if (menuAction == 'L') {

        //for loop displaying all players data
        for (int i = 0; i < players.size(); ++i) {

            //reference named person that store player data to vector "players"
            const myPlayer& person = players[i];

            cout << setfill('-') << setw(40) << '-';
            cout << left;
            cout << setfill(' ') << setw(40) << ' ' << endl;
            cout << '|' << "First Name: " << setw(25) << person.firstname << " " << '|' << endl;
            cout << '|' << "Last Name: " << setw(26) << person.lastname << " " << '|' << endl;
            cout << '|' << "Team: " << setw(32) << person.teamname << '|' << endl;
            cout << '|' << left << "Position: " << setw(28) << person.position << '|' << endl;
            cout << '|' << "Shooting: " << setw(28) << person.shooting << '|' << endl;
            cout << '|' << "Playmaking: " << setw(26) << person.playmaking << '|' << endl;
            cout << '|' << "Rebounding: " << setw(26) << person.rebounding << '|' << endl;
            cout << '|' << "Defense: " << setw(29) << person.defense << '|' << endl;
            cout << setfill('-') << setw(40) << '-' << endl;
        }
    }

    //If P is typed, else if statement will execute, prompting the user to enter a team name to view
    else if (menuAction == 'P') {
        string teamName;
        cout << "Enter the team name to view team player stats: ";

        //user will enter a team name that they want to view the players in
        cin >> teamName;
        bool foundTeam = false;
        for (int i = 0; i < players.size(); ++i) {

            //reference named person that store player data to vector "players"
            const myPlayer& person = players[i];

            //if teamname that is listed matches a team name that is on any players data, then if statement will execute
            if (person.teamname == teamName) {
                foundTeam = true;
                cout << "Players on the " << teamName << ":" << endl;
                cout << setfill('-') << setw(40) << '-' << endl;
                cout << left << setfill(' ');
                cout << '|' << "First Name: " << setw(25) << person.firstname << " " << '|' << endl;
                cout << '|' << "Last Name: " << setw(26) << person.lastname << " " << '|' << endl;
                cout << '|' << "Team: " << setw(32) << person.teamname << '|' << endl;
                cout << '|' << left << "Position: " << setw(28) << person.position << '|' << endl;
                cout << '|' << "Shooting: " << setw(28) << person.shooting << '|' << endl;
                cout << '|' << "Playmaking: " << setw(26) << person.playmaking << '|' << endl;
                cout << '|' << "Rebounding: " << setw(26) << person.rebounding << '|' << endl;
                cout << '|' << "Defense: " << setw(29) << person.defense << '|' << endl;
                cout << setfill('-') << setw(40) << '-' << endl;
            }
        }
        if (!foundTeam) {
            cout << "Players on Team Not Found." << endl;
        }
    }

    //K action to view a specific player's stats
    else if (menuAction == 'K') {
        string specificPlayer;
        cout << "Enter Player's Last Name To View Stats" << endl;

        //user prompted to input last name that will match a player in the input file
        cin >> specificPlayer;
        bool foundPlayer = false;
        for (int i = 0; i < players.size(); ++i) {
            const myPlayer& person = players[i];
            if (person.lastname == specificPlayer) {
                foundPlayer = true;
                cout << setfill('-') << setw(40) << '-' << endl;
                cout << left << setfill(' ');
                cout << '|' << "First Name: " << setw(25) << person.firstname << " " << '|' << endl;
                cout << '|' << "Last Name: " << setw(26) << person.lastname << " " << '|' << endl;
                cout << '|' << "Team: " << setw(32) << person.teamname << '|' << endl;
                cout << '|' << left << "Position: " << setw(28) << person.position << '|' << endl;
                cout << '|' << "Shooting: " << setw(28) << person.shooting << '|' << endl;
                cout << '|' << "Playmaking: " << setw(26) << person.playmaking << '|' << endl;
                cout << '|' << "Rebounding: " << setw(26) << person.rebounding << '|' << endl;
                cout << '|' << "Defense: " << setw(29) << person.defense << '|' << endl;
                cout << setfill('-') << setw(40) << '-' << endl;
            }
        }
        if (!foundPlayer) {
            cout << "Player Not Found." << endl;
        }
    }



    //O action to edit a player's stats
    else if (menuAction == 'O') {
        string specificLastName;
        cout << setfill('-') << setw(40) << '-' << endl;
        cout << setfill(' ');
        cout << "Enter last name of player to update data: ";
        cin >> specificLastName;
        bool foundPlayer = false;
        for (int i = 0; i < players.size(); ++i) {
            myPlayer& person = players[i];
            if (person.lastname == specificLastName) {
                foundPlayer = true;
                cout << setfill('-') << setw(40) << '-' << endl;
                cout << '|' << setfill(' ') << "Enter updated information for " << person.firstname << " " << specificLastName << setw(2) << ":" << " "  << endl;
                cout << setfill('-') << setw(40) << '-' << endl;
                cout << left << setfill(' ');
                cout << '|' << "First Name: " << setw(25) << person.firstname << " " << '|' << endl;
                cin >> person.firstname;
                cout << setfill('-') << setw(40) << '-' << endl;
                cout << '|' << setfill(' ')<<  "Last Name: " << setw(26) << person.lastname << " " << '|' << endl;
                cin >> person.lastname;
                cout << setfill('-') << setw(40) << '-' << endl;
                cout << '|' << setfill(' ')<< "Team: " << setw(32) << person.teamname << '|' << endl;
                cin >> person.teamname;
                cout << setfill('-') << setw(40) << '-' << endl;
                cout << '|' << left << setfill(' ') << "Position: " << setw(28) << person.position << '|' << endl;
                cin >> person.position;
                cout << setfill('-') << setw(40) << '-' << endl;

                cout << '|' << setfill(' ')<<  "Shooting: " << setw(28) << person.shooting << '|' << endl;
                cin >> person.shooting;
                cout << setfill('-') << setw(40) << '-' << endl;

                cout << '|' << setfill(' ')<< "Playmaking: " << setw(26) << person.playmaking << '|' << endl;
                cin >> person.playmaking;
                cout << setfill('-') << setw(40) << '-' << endl;

                cout << '|' << setfill(' ')<<"Rebounding: " << setw(26) << person.rebounding << '|' << endl;
                cin >> person.rebounding;
                cout << setfill('-') << setw(40) << '-' << endl;

                cout << '|' << setfill(' ')<< "Defense: " << setw(29) << person.defense << '|' << endl;
                cin >> person.defense;
                cout << setfill('-') << setw(40) << '-' << endl;

                cout << '|' << setfill(' ') << setw(39) << "Player data updated successfully" << '|' << endl;
                cout << setfill('-') << setw(40) << '-' << endl;
            }
        }
        if (!foundPlayer) {
            cout << setfill('-') << setw(40) << '-' << endl;
            cout << setfill(' ');
            cout << "Player with last name " << specificLastName << " not found." << endl;
            cout << setfill('-') << setw(40) << '-' << endl;
        }
    }


    //U action to add player
    else if (menuAction == 'U') {
        //run void function
        addPlayer(players);


    }


    return 0;
}