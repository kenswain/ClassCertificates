//
//  main.c
//  ClassCertificates
//
//  Created by Ken Swain on 2/12/14.
//  Copyright (c) 2014 Ken Swain. All rights reserved.
//

#include <stdio.h>

void congratulateStudent(char *student, char *course, int numDays)
{
    printf("%s has done as much %s programming as I can fit into %d days.\n", student, course, numDays);
}

int main(int argc, const char * argv[])
{

    congratulateStudent("Kate", "Cocoa", 5);
    congratulateStudent("Bo", "Objective-C", 2);
    congratulateStudent("Mike", "Python", 5);
    congratulateStudent("liz", "iOS", 5);
    
    return 0;
}

