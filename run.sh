#!/bin/bash

# Define the source files
clang -g src/main.c src/tide_analyzer.c src/discrete_fourier_transform.c -o main_executable

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful. Running the program now..."
    ./main_executable
else
    echo "Compilation failed. Please check the error messages above."
fi
