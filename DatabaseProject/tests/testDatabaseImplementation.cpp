/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   testDatabaseImplementation.cpp
 * Author: shahriar
 *
 * Created on January 14, 2017, 4:50 PM
 */

#include <stdlib.h>
#include <iostream>
#include "Database.h"
using namespace std;

/*
 * Simple C++ Test Suite
 */

void test1() {
    std::cout << "testDatabaseImplementation test 1" << std::endl;
    Database myDB;

    // Remember that AddComposer returns a reference to the new record.
    Composer& comp1 = myDB.AddComposer("Ludwig van", "Beethoven", "Romantic", 1770,
            "Beethoven was completely deaf during the latter part of his life - he never "
            "heard a performance of his 9th symphony.");
    comp1.Promote(7);

    Composer& comp2 = myDB.AddComposer("Johann Sebastian", "Bach", "Baroque", 1685,
            "Bach had 20 children, several of whom became famous musicians as well.");
    comp2.Promote(5);

    Composer& comp3 = myDB.AddComposer("Wolfgang Amadeus", "Mozart", "Classical", 1756,
            "Mozart feared for his life during his last year - there is some evidence "
            "that he was poisoned.");
    comp3.Promote(2);

    cout << endl << "all Composers: " << endl << endl;
    myDB.DisplayAll();
}

void test2() {
    std::cout << "testDatabaseImplementation test 2" << std::endl;
    std::cout << "%TEST_FAILED% time=0 testname=test2 (testDatabaseImplementation) message=error message sample" << std::endl;
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% testDatabaseImplementation" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% test1 (testDatabaseImplementation)" << std::endl;
    test1();
    std::cout << "%TEST_FINISHED% time=0 test1 (testDatabaseImplementation)" << std::endl;

    std::cout << "%TEST_STARTED% test2 (testDatabaseImplementation)\n" << std::endl;
    test2();
    std::cout << "%TEST_FINISHED% time=0 test2 (testDatabaseImplementation)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

