Assignment 7 – Snake Game (OOP Final Project)
 
 Student ID: 113703020

Game Description

This is a classic Snake Game implemented as a 2D console application using C++.  
The game follows the MVC (Model-View-Controller) design pattern and Object-Oriented Programming principles.

- The snake starts at the center of the screen.
- Use W/A/S/D keys to control movement (↑←↓→).
- The snake grows longer when it eats food.
- The game ends when the snake hits a wall or its own body.



Project Structure

### Model
- GameObject: Abstract base class for all game objects.
- SnakeGameObject: Represents the snake. Handles movement, growth, and collision.
- Position, Icon, Color: Structs for position and appearance.

### View
- View: Responsible for rendering the screen using ANSI escape sequences.
- AnsiPrint: Used for colored output on terminal.

###Controller
- SnakeController: Handles input, updates objects, manages game loop.



## File List

- src/
  - main.cpp
  - SnakeController.cpp / .h
  - snakeGameObject.cpp / .h
  - unit.cpp / .h
  - view.cpp / .h
  - gameObject.cpp / .h
  - icon.cpp / .h
  - iconFactory.cpp / .h
  - gameObjectFactory.cpp / .h
  - color.cpp / .h
  - AnsiPrint.cpp / .h
  - position.h
  - iCollider.h
- Makefile
- README.md
- UML_Class_Diagram.png
- Flowchart.png`


Compilation & Run

### Compile with Makefile:

bash
make
