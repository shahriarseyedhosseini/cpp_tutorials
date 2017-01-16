/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Database.cpp
 * Author: shahriar
 * 
 * Created on January 14, 2017, 3:29 PM
 */
#include "Composer.h"
#include "Database.h"
#include <vector>

Database::Database ( ) {
}

Database::Database ( const Database& orig ) {
}

Database::~Database ( ) {
}

void Database::SetNextSlot_ ( int nextSlot_ ) {
    this->nextSlot_ = nextSlot_ ;
}

int Database::GetNextSlot_ ( ) const {
    return nextSlot_ ;
}

// Add a new composer using operations in the Composer class.
// For convenience, we return a reference (pointer) to the new record.

Composer& Database::AddComposer ( std::string firstName , std::string lastName ,
                                  std::string genre , int yearOfBirth , std::string fact ) {
    Composer composer ;
    if ( GetNextSlot_ ( ) != kMaxComposers ) {
        composer.setFirstName_ ( firstName ) ;
        composer.setLastName_ ( lastName ) ;
        composer.setComposerGenre_ ( genre ) ;
        composer.setComposerYearOfBirth_ ( yearOfBirth ) ;
        composer.setFact_ ( fact ) ;
        composer.setRanking_ ( 0 ) ;
        composers_[GetNextSlot_ ( )] = composer ;
        SetNextSlot_ ( GetNextSlot_ ( ) + 1 ) ;
    }
    return composers_[GetNextSlot_ ( ) - 1] ;
}

// Search for a composer based on last name. Return a reference to the
// found record.

Composer& Database::GetComposer ( std::string lastName ) {
    int currentSizeOfDatabase = Database::GetNextSlot_ ();
    //Composer& returnValue = composers_[0];
    for ( int i = 0 ; i < currentSizeOfDatabase ; i++ ) {
        if ( composers_[i].getLastName_ ( ) == lastName ) {
            cout << "Found the composer by lastname = " << lastName << endl ;
            return composers_[i] ;
        }
    }
    throw "No such composer found";
}

// Display all composers in the database.

void Database::DisplayAll ( ) {
    cout << "----------------------------------" << endl ;
    cout << "listing out all the composers" << endl ;
    cout << "Total count = " << Database::GetNextSlot_ ( ) << endl ;
    cout << "----------------------------------" << endl ;
    for ( int i = 0 ; i < nextSlot_ ; i++ ) {
        composers_[i].Display ( ) ;
    }
}


// Sort database records by rank and then display all.

void Database::DisplayByRank ( ) {
    Database::sort ( true ) ;
    Database::DisplayAll ( ) ;
}

void Database::promote ( int& rank , std::string lastname ) {
    Composer &composer = Database::GetComposer ( lastname ) ;
    composer.Promote ( rank ) ;
}

// I had difficulties on this.
void Database::sort ( bool high2low ) {
    int max = Database::GetNextSlot_ ( ) - 1 ;
    for ( int i = 0 ; i < max ; i++ ) {
        for ( int j = 0 ; j < max ; j++ ) {
            if ( composers_[j + 1].getRanking_ ( ) > composers_[j].getRanking_ ( ) ) {
                Composer *temp = new Composer();// I had difficulties on this.
                *temp = composers_[j] ;
                composers_[j] = composers_[j + 1] ;
                composers_[j + 1] = *temp ;
            }
        }
    }
}
