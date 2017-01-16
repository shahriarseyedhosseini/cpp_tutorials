/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ComposerDatabaseUserInterface.cpp
 * Author: shahriar
 * 
 * Created on January 14, 2017, 5:34 PM
 */
#include <iostream>
#include "ComposerDatabaseUserInterface.h"
using namespace std;

ComposerDatabaseUserInterface::ComposerDatabaseUserInterface() {
}

ComposerDatabaseUserInterface::ComposerDatabaseUserInterface(const ComposerDatabaseUserInterface& orig) {
}

ComposerDatabaseUserInterface::~ComposerDatabaseUserInterface() {
}

int ComposerDatabaseUserInterface::displayMainMenue() {
    int selection = -1;
    cout<< endl;
    cout<< "---------------------------------------------" << endl;
    cout<< "    Composer Database" << endl;
    cout<< "---------------------------------------------" << endl;
    cout<< "1) Add a new composer" << endl;
    cout<< "2) Retrieve a composer's data" << endl;
    cout<< "3) Promote/demote a composer's rank" << endl;
    cout<< "4) List all composers" << endl;
    cout<< "5) List all composers by rank" << endl;
    cout<< "0) Quit" << endl;
    cout<<endl;
    cout<< "Please enter your choice: ";
    while (!(cin>>selection) || selection <0 || selection > 5) {
        cout << "Please enter a valid choice: ";
        cin.clear();
        cin.ignore();
    }
    return selection;
}

void ComposerDatabaseUserInterface::displayNewComposerForm(std::string &firstName, std::string &lastName, std::string &genre, int &yob, std::string &fact) {
    cout << endl;
    cout << "First Name: ";
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName;
    cout << "Genre: ";
    cin >> genre;
    cout << "Year of birth: ";
    while(!(cin >> yob)) {
        cout << "Please enter a valid year of Birth: ";
        cin.clear();
        cin.ignore();
    }
    cout << "Facts: ";
    cin >> fact;
    cout << endl;
}

void ComposerDatabaseUserInterface::getComposerLastNameFromUser(std::string& lastName) {
    cout << "Please enter composer last name: ";
    cin >> lastName;
    cout << endl;
}

void ComposerDatabaseUserInterface::displayComposer(Composer &composer) {
    composer.Display();
}

void ComposerDatabaseUserInterface::getNewComposerRanking(int &ranking, std::string &lastName) {
    cout << endl;
    cout << "Please enter Composer Last Name: ";
    cin >> lastName;
    cout << "Please enter new ranking: ";
    while (!(cin >> ranking)) {
        cout << "Please enter valid new ranking: ";
        cin.clear();
        cin.ignore();
    }
}



