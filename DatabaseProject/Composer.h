/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Composer.h
 * Author: shahriar
 *
 * Created on January 14, 2017, 3:27 PM
 * Description: The class for a Composer record.
 * The default ranking is 10 which is the lowest possible.
 * Notice we use const in C++ instead of #define.
 */

#ifndef COMPOSER_H
#define COMPOSER_H
#include <iostream>


const int kDefaultRanking = 10;

class Composer {
public:
    Composer();
    Composer(const Composer& orig);
    virtual ~Composer();
    
    // Getter and Setters
    int getRanking_() const;
    std::string getFact_() const;
    std::string getComposerGenre_() const;
    int getComposerYearOfBirth_() const;
    std::string getLastName_() const;
    std::string getFirstName_() const; //destructor

    void setRanking_(int ranking_);
    void setFact_(std::string fact_);
    void setComposerGenre_(std::string composerGenre_);
    void setComposerYearOfBirth_(int composerYearOfBirth_);
    void setLastName_(std::string lastName_);
    void setFirstName_(std::string firstName_);
    
        
    // Methods
    // This method increases a composer's rank by increment.
    void Promote(int increment);
    // This method decreases a composer's rank by decrement.
    void Demote(int decrement);
    // This method displays all the attributes of a composer.
    void Display();   
    
   
private:
    std::string firstName_;
    std::string lastName_;
    int composerYearOfBirth_; // year of birth
    std::string composerGenre_; // Classical, romantic, etc
    std::string fact_;
    int ranking_;
    

};

#endif /* COMPOSER_H */

