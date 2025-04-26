# Ant Game - CSCE1030 Homework 4

This project was created for CSCE 1030 (at Texas Academy of Math and Science/University of North Texas) as part of a homework assignment in Fall 2020

It was a timed coding assignment and was written entirely in Vim using C++

---

## How to Run

1. Make sure you are in the project folder
2. Compile and run using:

    ```bash
    make run
    ```
3. To clean up compiled files:
    ```bash
    make clean
    ```

## About the Game

The Ant Game is a simple strategy game played on a 3x10 hidden grid
- Anthony the Ant leads an army and must try to conquer enemy colonies
- Each column hides one queen ant at a random row
- Anthony’s goal is to find and defeat the queen in each column
- Players select a row in each column to strike
    - If the strike hits a queen, the army captures enemy ants and grows stronger
    - If the strike hits another part of the colony, Anthony’s army loses ants
- The player wins if Anthony defeats all the queens before running out of ants
- The player loses if Anthony’s army size drops to zero

The grid updates visually after every move to show progress

---

## Files

- `ak0896HW4main.cpp`: Main logic for running the game
- `ak0896HW4func.cpp`: Helper functions like initializing and modifying the grid
- `ak0896HW4.h`: Header file with definitions and constants
- `Makefile`: To compile, run, and clean the project
