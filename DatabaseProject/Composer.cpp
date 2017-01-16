/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Composer.cpp
 * Author: shahriar
 * 
 * Created on January 14, 2017, 3:27 PM
 */

#include "Composer.h"
using namespace std;

Composer::Composer() {

}

Composer::Composer(const Composer& orig) {
}

Composer::~Composer() {
}

// Getter and Setters

void Composer::setRanking_(int ranking_) {
    this->ranking_ = ranking_;
}

int Composer::getRanking_() const {
    return ranking_;
}

void Composer::setFact_(std::string fact_) {
    this->fact_ = fact_;
}

std::string Composer::getFact_() const {
    return fact_;
}

void Composer::setComposerGenre_(std::string composerGenre_) {
    this->composerGenre_ = composerGenre_;
}

std::string Composer::getComposerGenre_() const {
    return composerGenre_;
}

void Composer::setComposerYearOfBirth_(int composerYearOfBirth_) {
    this->composerYearOfBirth_ = composerYearOfBirth_;
}

int Composer::getComposerYearOfBirth_() const {
    return composerYearOfBirth_;
}

void Composer::setLastName_(std::string lastName_) {
    this->lastName_ = lastName_;
}

std::string Composer::getLastName_() const {
    return lastName_;
}

void Composer::setFirstName_(std::string firstName_) {
    this->firstName_ = firstName_;
}

std::string Composer::getFirstName_() const {
    return firstName_;
}

// Methods
// This method increases a composer's rank by increment.

void Composer::Promote(int increment) {
    ranking_ = increment;
}
// This method decreases a composer's rank by decrement.

void Composer::Demote(int decrement) {
    this->ranking_ -= decrement;
}
// This method displays all the attributes of a composer.

void Composer::Display() {
    cout << endl;
    cout << "-------------------------------------------------------"<<endl;
    cout << "First name : " << getFirstName_() << endl;
    cout << "Last name : " << getLastName_() << endl;
    cout << "Year of Birth : " << getComposerYearOfBirth_() << endl;
    cout << "Genre: " << getComposerGenre_() << endl;
    cout << "Ranking: " << getRanking_() << endl;
    cout << "Facts: " << getFact_() << endl;
    cout << "-------------------------------------------------------"<<endl;
} 