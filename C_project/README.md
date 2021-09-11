# Ninja Game 

Command prompt game in c with some ascii art for asthetics , .

## Deployment

Go to cmd or bash and run these commands to play the game.

(ONLY  &nbsp; WORKS &nbsp;  ON &nbsp;  WINDOWS &nbsp;  DEVICES)
```bash
gcc ninjaGame.c -o ninjaGame
./ninjaGame
```

## Functions in Code

```c
//Separate Functions for every processes
// in the game. 

void display_score();
void init();
int zero_lives();
void set_game_state_over();
char get_input();
void update_player(char);
void update_wall();
void increment_score();
void decrement_lives();
void draw();
void draw_wall();
void draw_ninja();

```
## Specialization and Design

- No Graphics used
- Live score updation
- 3 Lives given to the player
- reward for high score 
- Ascii arts
- Pixel manipulation
- 3 seconds countdown to restart
- Walls, spikes , ninja
- Controls: 
- j -> jump
- q -> Quit 
  
## Optimizations

Ascii arts for asthetics.

  
## Goals
To make a running game for fun.



  
## Screenshots

![App Screenshot](https://via.placeholder.com/468x300?text=App+Screenshot+Here)

  
## Author

- [@JaspreetSingh](https://github.com/jaspreetcodes)

  
## Support

For support, email jaspreetsingh2k20@gmail.com or follow my github @jaspreetcodes .

  