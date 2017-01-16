/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Database.h
 * Author: shahriar
 *
 * Created on January 14, 2017, 3:29 PM
 */

#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>
#include "Composer.h"
using namespace std;

// Our database holds 100 composers, and no more.
const int kMaxComposers = 100;

class Database {
public:
    Database();
    Database(const Database& orig);
    virtual ~Database();
    
    
    void SetNextSlot_(int nextSlot_);
    int GetNextSlot_() const;

    // Add a new composer using operations in the Composer class.
    // For convenience, we return a reference (pointer) to the new record.
    Composer& AddComposer(std::string firstName, std::string lastName,
                          std::string genre, int yearOfBirth, std::string fact);
    // Search for a composer based on last name. Return a reference to the
    // found record.
    Composer& GetComposer(std::string lastName);
    
    // Display all composers in the database.
    void DisplayAll();
    
    // Sort database records by rank and then display all.
    void DisplayByRank();

    void sort(bool high2low);
    
    //promote a composer
    void promote(int& rank, std::string lastname);
    
private:
    // Store the individual records in an array.
    Composer composers_[kMaxComposers];
    // Track the next slot in the array to place a new record.
    int nextSlot_;

};

#endif /* DATABASE_H */

