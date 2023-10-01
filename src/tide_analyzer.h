/*
File:         tide_analyzer.h
Purpose:      Contains prototypes
Author:			  Nolan McCleary
Student #s:		33634312
CS Accounts:  ncm88
Date:		    Sepm 20, 2023
*/

/********************************************************************
YOU MAY EDIT THIS FILE (BUT YOU DON'T NEED TO)
******************************************************************/

#pragma once

#include <stdio.h>

/* Insert function prototypes here */
FILE* open_file(FILE* file_pointer, char* fileName, char* mode);
void process_file(double array_to_populate[], FILE* pointer_to_data_file);
void run_analysis();