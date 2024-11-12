#!/bin/bash

# Step 1: Configure the project with CMake
cmake -S . -B build

# Step 2: Build the project
cmake --build build

# Step 3: Run the executable
if [ -f ./build/my_project ]; then
    ./build/my_project
else
    echo "Executable not found. Build may have failed."
fi


