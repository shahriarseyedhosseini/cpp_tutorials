/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   testComposerImplementation.cpp
 * Author: shahriar
 *
 * Created on January 14, 2017, 4:51 PM
 */

#include <stdlib.h>
#include <iostream>

#include "Composer.h"

/*
 * Simple C++ Test Suite
 */

void test1() {
    std::cout << "testComposerImplementation test 1" << std::endl;
    Composer composer;
    
    composer.setFirstName("Ludwig Van");
    composer.setLastName("Beethoven");
    composer.setComposerYearOfBirth(1770);
    composer.setComposerGenre("Romantic");
    composer.setFact("Beethoven was completely deaf during the latter part of "
        "his life - he never heard a performance of his 9th symphony.");
    composer.Promote(2);
    composer.Demote(1);
    composer.Display();
}

void test2() {
    std::cout << "testComposerImplementation test 2" << std::endl;
    std::cout << "%TEST_FAILED% time=0 testname=test2 (testComposerImplementation) message=error message sample" << std::endl;
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% testComposerImplementation" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% test1 (testComposerImplementation)" << std::endl;
    test1();
    std::cout << "%TEST_FINISHED% time=0 test1 (testComposerImplementation)" << std::endl;

    std::cout << "%TEST_STARTED% test2 (testComposerImplementation)\n" << std::endl;
    test2();
    std::cout << "%TEST_FINISHED% time=0 test2 (testComposerImplementation)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

