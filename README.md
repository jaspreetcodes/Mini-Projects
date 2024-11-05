# Projects

This repository contains code files for the XRay Image classifier, celebrity classifier File Organizer (nodejs), some webgames like Drumkit and a dice game (using Javascript), a landing webpage, and a C library. The screenshots are posted in the "screenshots" folder.

The code files to the Minesweeper game are not uploaded due to it being a credited project developed as part of the curriculum. However some of the details along with the resulting game are mentioned bellow:

## Minesweeper
This Minesweeper Game Project focuses on the advanced, model-driven development of Minesweeper. Leveraging UML-RT modeling techniques through HCL RTist, the project emphasizes simplifying design and maintaining game scalability. Additionally, SDL2 animations are integrated to enhance user engagement. Developmental process of this project involved application of many features of HCL Rtist like multiplicity, dynamic ports, dynamic instantiation, attributes, state machines, capsules and many more as discussed in the class. In this game user determines the cells to uncover during the game play which may lead to uncovering of more than one cell based on the number of mines nearby or could cause the user to loose in case they step on a mine. The cell displays the number of mines adjacent to it and could be used as a hint by the user to flag the suspected cells.
### Result
![image](https://github.com/user-attachments/assets/809bc60a-9aa7-445f-bc41-e99ef2dd8ace)

The Figure above shows the final representation of the
Minesweeper game, upon winning the game. You can see the grid
on the left, with clicked squares, flagged squares, and no tripped
mines. On the right we see both the dataBox, and the infoBox.
Lastly, we can see the winning message below (“You Win!”). We
can see that is resembles the standard Minesweeper game and
contains all necessary information to fulfill completeness

### Implementation (Structure & Behaviour)
In our implementation of Minesweeper, we attempted to take advantage of the benefits of using a model-driven approach to creating the game. In particular, we hoped to abstract the code into a meaningful model, represented through connections and states, as opposed to function calls and variables. Using HCL RTist, we created a multitude of capsules to represent parts of the game, and connections between to model the control flow being used. Seen below is our “Top”, the parent capsule from which all other capsules belong within.
![image](https://github.com/user-attachments/assets/532a30ae-b833-41bd-ab5c-5ca9eae4af84)

The capsules seen within this are: the CellHarness Capsule, the
Cell Capsule, the renderBox capsule, the dataBox capsule, and the
infoBox capsule. Descriptions for each can be found in the table
below in table 1. There are static connections between capsules, as
well as a dynamically instantiated connection between adjacent
cells (i.e. cell 4 is connected to the previous cell 3, and the next
cell 5).

![image](https://github.com/user-attachments/assets/5cdf1fa8-77c4-49fd-b80e-df5f97122564)

The state machine for the Top is shown above in Figure 3. It
begins by asking the capsules to initialize themselves (if need be)
and prompting the user for a keyboard input to start the game.
While playing, the Top is responsible for interpreting user inputs,
and communicating them as need be. Lastly, it is responsible for
changes to the overall game state, including communicating
winning and losing the game, and ending the game.
Table 1: Capsule Definitions
Capsule Name Description
CellHarness Controls the cells and their actions with
one-another. Decides overall games
logic.
Cell Represents a single cell on the grid, and
all of it’s possible states.
renderBox Controls all rendering of the game
through requests sent to it.
dataBox Dynamic information counter, including
time and number of flags left.
infoBox Static information box containing
information to understand game states.

![image](https://github.com/user-attachments/assets/61febd04-f552-4415-b757-a4f72583189b)

The first 3 of these capsules were deemed the most important
to the project, and are their respective state machines are shown
below:
![image](https://github.com/user-attachments/assets/5ac9bc68-988f-4b36-a38c-9f226d62e846)


### Authors
Jaspreet Singh (23cf12@queensu.ca)
Nick Totman (nick.totman@queensu.ca)
