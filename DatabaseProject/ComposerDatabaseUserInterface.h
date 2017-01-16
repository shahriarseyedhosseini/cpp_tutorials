/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ComposerDatabaseUserInterface.h
 * Author: shahriar
 *
 * Created on January 14, 2017, 5:34 PM
 */

#ifndef COMPOSERDATABASEUSERINTERFACE_H
#define COMPOSERDATABASEUSERINTERFACE_H

#include "Composer.h"

class ComposerDatabaseUserInterface {
public:
    ComposerDatabaseUserInterface();
    ComposerDatabaseUserInterface(const ComposerDatabaseUserInterface& orig);
    virtual ~ComposerDatabaseUserInterface();
    
    int displayMainMenue();
    void displayNewComposerForm(std::string &firstName, std::string &lastName, std::string &genre, int &yob, std::string &fact);
    void getComposerLastNameFromUser(std::string &lastName);
    void displayComposer(Composer &composer);
    void getNewComposerRanking(int &ranking, std::string &lastName);
};

#endif /* COMPOSERDATABASEUSERINTERFACE_H */

