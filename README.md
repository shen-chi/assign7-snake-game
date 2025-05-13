# 2025 OOP Assignment #6
- Due: 2025/5/27 23:59:59
- Author: 111703003 廖經翔
- Contact: 111703003@g.nccu.edu.tw
---

## 2D Console Game (Part2)

Obejctive: Building a console-based Rack-Paper-Scissor Royale

Inspiration: https://aslangames.itch.io/rock-paper-scissors-royal
![image](https://github.com/user-attachments/assets/880e5d43-cd23-4b9d-9d5a-5ed0ea09d7bd)

## Game Concepts

- Entities & Types
Every game object is one of three types: Rock, Paper, or Scissor.

- Assimilation Rule
When two objects collide, the winning type “assimilates” (converts) the losing one:

1. Paper assimilates Rock → the Rock becomes Paper
2. Rock assimilates Scissor → the Scissor becomes Rock
3. Scissor assimilates Paper → the Paper becomes Scissor

- Player Role
The player controls a single **Rock**. At any time, they can switch which Rock they control and move it around the grid.

- Win/Loss Conditions
1. Goal: For the “Rock” faction, assimilate as many Scissors as possible while avoiding Papers.
2. Endgame: The simulation ends when one of the three types is completely eliminated.
### Description

  RPS is a game that player can control one of the **RPSType** (Rock, Paper, and Scissors).
Naturally, when **Paper** collides with **Rock**, **Paper** will assimilate(同化) **Rock**.
That is, **Rock** will becomes **Paper**. Other condition follows the role of Rock-Paper-Scissors.

  The player plays a role as a **Rock**. For each frame, the player can command one of all the **Rocks** to move by any direction. For the Kingdom of **Rock** , the player should assimilate **Scissors** and avoid **Paper** as much as possible.
The game ends if one of RPS disappers.

In this assignment, you are required to:
1. Create  `RPSGameObject` and implement the Collision feature.
2. Handle player's input  to ** move (W, A, S, D)** and **switch (Tab)** between RPSObjects.
3. Determine the winner and print out.

### Sample Output
![image](https://github.com/user-attachments/assets/651bcafa-f3cb-4a75-a663-c54e7c015b0d)
![image](https://github.com/user-attachments/assets/c98e44e0-f485-44a4-aa99-f839f256583e)

### Scoreing Criteria
|Description|Score|
|-----|-----|
|Submit the assignment|20|
|Able to compile|20|
|Draw static GameObject correctly|20|
|Draw dynamic GameObject correctly|10|
|Implement IconFactory|10|
|Implement GameObjectFactory|10|
|Handling key input to control GameObjects|10|

### Reminder

1. The default include path is set to `include/`, any header file below `include` can be included directly.
2. You can add new files for more features, but the required part noted by `//TODO` must be implemented.
3. After finishing this assignment, you can start to think what games you can make with the architecture.

### UML Class Diagram
<img width="815" alt="image" src="https://github.com/user-attachments/assets/8faa7f01-0e0c-478d-94cf-80ee6888c480" />
