/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: shahriar
 *
 * Created on January 14, 2017, 3:21 PM
 */

#include <cstdlib>
#include "Composer.h"
#include "ComposerDatabaseUserInterface.h"
#include "Database.h"

using namespace std ;

/*
 * 
 */
int main ( int argc , char** argv ) {

    Database myDB ;
    ComposerDatabaseUserInterface userInterface ;
    int action = -1 ;
    string firstName ;
    string lastName ;
    string genre ;
    int yob ;
    string fact ;
    int ranking ;
    Composer composer ;

    myDB.SetNextSlot_ ( 0 ) ;


    while ( action != 0 ) {
        action = userInterface.displayMainMenue ( ) ;

        switch ( action ) {
            case 5: //List all composers by Rank
                myDB.DisplayByRank ( ) ;
                break ;

            case 4: //List all composers
                myDB.DisplayAll ( ) ;
                break ;

            case 3: //Promote/demote a composer's rank
                userInterface.getNewComposerRanking ( ranking , lastName ) ;
                myDB.promote ( ranking , lastName ) ;
                break ;

            case 2: //Retrieve a composer's data
                userInterface.getComposerLastNameFromUser ( lastName ) ;
                try {
                    composer = myDB.GetComposer ( lastName ) ;
                    userInterface.displayComposer ( composer ) ;

                } catch ( const char* msg ) {
                    cerr << msg << endl ;
                }
                break ;

            case 1: //Add a new composer
                userInterface.displayNewComposerForm ( firstName , lastName , genre , yob , fact ) ;
                composer = myDB.AddComposer ( firstName , lastName , genre , yob , fact ) ;
                break ;
            case 0:
                break ;
        }
    }
    cout << "Bye!" << endl;

    return 0 ;
}


