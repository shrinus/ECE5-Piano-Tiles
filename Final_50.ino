#include <VGAX.h>
#include <math.h>


//font generated from 2BITFONT - by Sandro Maffiodo
#define FNT_UFONT_HEIGHT 6
#define FNT_UFONT_SYMBOLS_COUNT 95

//data size=570 bytes
const unsigned char fnt_ufont_data[FNT_UFONT_SYMBOLS_COUNT][1+FNT_UFONT_HEIGHT] PROGMEM={
{ 1, 128, 128, 128,   0, 128,   0, }, //glyph '!' code=0
{ 3, 160, 160,   0,   0,   0,   0, }, //glyph '"' code=1
{ 5,  80, 248,  80, 248,  80,   0, }, //glyph '#' code=2
{ 5, 120, 160, 112,  40, 240,   0, }, //glyph '$' code=3
{ 5, 136,  16,  32,  64, 136,   0, }, //glyph '%' code=4
{ 5,  96, 144, 104, 144, 104,   0, }, //glyph '&' code=5
{ 2, 128,  64,   0,   0,   0,   0, }, //glyph ''' code=6
{ 2,  64, 128, 128, 128,  64,   0, }, //glyph '(' code=7
{ 2, 128,  64,  64,  64, 128,   0, }, //glyph ')' code=8
{ 3,   0, 160,  64, 160,   0,   0, }, //glyph '*' code=9
{ 3,   0,  64, 224,  64,   0,   0, }, //glyph '+' code=10
{ 2,   0,   0,   0,   0, 128,  64, }, //glyph ',' code=11
{ 3,   0,   0, 224,   0,   0,   0, }, //glyph '-' code=12
{ 1,   0,   0,   0,   0, 128,   0, }, //glyph '.' code=13
{ 5,   8,  16,  32,  64, 128,   0, }, //glyph '/' code=14
{ 4,  96, 144, 144, 144,  96,   0, }, //glyph '0' code=15
{ 3,  64, 192,  64,  64, 224,   0, }, //glyph '1' code=16
{ 4, 224,  16,  96, 128, 240,   0, }, //glyph '2' code=17
{ 4, 224,  16,  96,  16, 224,   0, }, //glyph '3' code=18
{ 4, 144, 144, 240,  16,  16,   0, }, //glyph '4' code=19
{ 4, 240, 128, 224,  16, 224,   0, }, //glyph '5' code=20
{ 4,  96, 128, 224, 144,  96,   0, }, //glyph '6' code=21
{ 4, 240,  16,  32,  64,  64,   0, }, //glyph '7' code=22
{ 4,  96, 144,  96, 144,  96,   0, }, //glyph '8' code=23
{ 4,  96, 144, 112,  16,  96,   0, }, //glyph '9' code=24
{ 1,   0, 128,   0, 128,   0,   0, }, //glyph ':' code=25
{ 2,   0, 128,   0,   0, 128,  64, }, //glyph ';' code=26
{ 3,  32,  64, 128,  64,  32,   0, }, //glyph '<' code=27
{ 3,   0, 224,   0, 224,   0,   0, }, //glyph '=' code=28
{ 3, 128,  64,  32,  64, 128,   0, }, //glyph '>' code=29
{ 4, 224,  16,  96,   0,  64,   0, }, //glyph '?' code=30
{ 4,  96, 144, 176, 128, 112,   0, }, //glyph '@' code=31
{ 4,  96, 144, 240, 144, 144,   0, }, //glyph 'A' code=32
{ 4, 224, 144, 224, 144, 224,   0, }, //glyph 'B' code=33
{ 4, 112, 128, 128, 128, 112,   0, }, //glyph 'C' code=34
{ 4, 224, 144, 144, 144, 224,   0, }, //glyph 'D' code=35
{ 4, 240, 128, 224, 128, 240,   0, }, //glyph 'E' code=36
{ 4, 240, 128, 224, 128, 128,   0, }, //glyph 'F' code=37
{ 4, 112, 128, 176, 144, 112,   0, }, //glyph 'G' code=38
{ 4, 144, 144, 240, 144, 144,   0, }, //glyph 'H' code=39
{ 3, 224,  64,  64,  64, 224,   0, }, //glyph 'I' code=40
{ 4, 240,  16,  16, 144,  96,   0, }, //glyph 'J' code=41
{ 4, 144, 160, 192, 160, 144,   0, }, //glyph 'K' code=42
{ 4, 128, 128, 128, 128, 240,   0, }, //glyph 'L' code=43
{ 5, 136, 216, 168, 136, 136,   0, }, //glyph 'M' code=44
{ 4, 144, 208, 176, 144, 144,   0, }, //glyph 'N' code=45
{ 4,  96, 144, 144, 144,  96,   0, }, //glyph 'O' code=46
{ 4, 224, 144, 224, 128, 128,   0, }, //glyph 'P' code=47
{ 4,  96, 144, 144, 144,  96,  16, }, //glyph 'Q' code=48
{ 4, 224, 144, 224, 160, 144,   0, }, //glyph 'R' code=49
{ 4, 112, 128,  96,  16, 224,   0, }, //glyph 'S' code=50
{ 3, 224,  64,  64,  64,  64,   0, }, //glyph 'T' code=51
{ 4, 144, 144, 144, 144,  96,   0, }, //glyph 'U' code=52
{ 3, 160, 160, 160, 160,  64,   0, }, //glyph 'V' code=53
{ 5, 136, 168, 168, 168,  80,   0, }, //glyph 'W' code=54
{ 4, 144, 144,  96, 144, 144,   0, }, //glyph 'X' code=55
{ 3, 160, 160,  64,  64,  64,   0, }, //glyph 'Y' code=56
{ 4, 240,  16,  96, 128, 240,   0, }, //glyph 'Z' code=57
{ 2, 192, 128, 128, 128, 192,   0, }, //glyph '[' code=58
{ 5, 128,  64,  32,  16,   8,   0, }, //glyph '\' code=59
{ 2, 192,  64,  64,  64, 192,   0, }, //glyph ']' code=60
{ 5,  32,  80, 136,   0,   0,   0, }, //glyph '^' code=61
{ 4,   0,   0,   0,   0, 240,   0, }, //glyph '_' code=62
{ 2, 128,  64,   0,   0,   0,   0, }, //glyph '`' code=63
{ 3,   0, 224,  32, 224, 224,   0, }, //glyph 'a' code=64
{ 3, 128, 224, 160, 160, 224,   0, }, //glyph 'b' code=65
{ 3,   0, 224, 128, 128, 224,   0, }, //glyph 'c' code=66
{ 3,  32, 224, 160, 160, 224,   0, }, //glyph 'd' code=67
{ 3,   0, 224, 224, 128, 224,   0, }, //glyph 'e' code=68
{ 2,  64, 128, 192, 128, 128,   0, }, //glyph 'f' code=69
{ 3,   0, 224, 160, 224,  32, 224, }, //glyph 'g' code=70
{ 3, 128, 224, 160, 160, 160,   0, }, //glyph 'h' code=71
{ 1, 128,   0,   128, 128, 128, 0, }, //glyph 'i' code=72
{ 2,   0, 192,  64,  64,  64, 128, }, //glyph 'j' code=73
{ 3, 128, 160, 192, 160, 160,   0, }, //glyph 'k' code=74
{ 1, 128, 128, 128, 128, 128,   0, }, //glyph 'l' code=75
{ 5,   0, 248, 168, 168, 168,   0, }, //glyph 'm' code=76
{ 3,   0, 224, 160, 160, 160,   0, }, //glyph 'n' code=77
{ 3,   0, 224, 160, 160, 224,   0, }, //glyph 'o' code=78
{ 3,   0, 224, 160, 160, 224, 128, }, //glyph 'p' code=79
{ 3,   0, 224, 160, 160, 224,  32, }, //glyph 'q' code=80
{ 3,   0, 224, 128, 128, 128,   0, }, //glyph 'r' code=81
{ 2,   0, 192, 128,  64, 192,   0, }, //glyph 's' code=82
{ 3,  64, 224,  64,  64,  64,   0, }, //glyph 't' code=83
{ 3,   0, 160, 160, 160, 224,   0, }, //glyph 'u' code=84
{ 3,   0, 160, 160, 160,  64,   0, }, //glyph 'v' code=85
{ 5,   0, 168, 168, 168,  80,   0, }, //glyph 'w' code=86
{ 3,   0, 160,  64, 160, 160,   0, }, //glyph 'x' code=87
{ 3,   0, 160, 160, 224,  32, 224, }, //glyph 'y' code=88
{ 2,   0, 192,  64, 128, 192,   0, }, //glyph 'z' code=89
{ 3,  96,  64, 192,  64,  96,   0, }, //glyph '{' code=90
{ 1, 128, 128, 128, 128, 128,   0, }, //glyph '|' code=91
{ 3, 192,  64,  96,  64, 192,   0, }, //glyph '}' code=92
{ 3,  96, 192,   0,   0,   0,   0, }, //glyph '~' code=93
{ 4,  48,  64, 224,  64, 240,   0, }, //glyph '£' code=94
};

//text for the different screens
static const char str0[] PROGMEM="Welcome to \n      PIANO TILES!\n\n Press any button to play";
static const char str1[] PROGMEM="Thanks for playing\n\npress any button to \nplay again>";
static const char strS[] PROGMEM="GREAT JOB!\nYOU TOOK LESS THAN \n5 SECONDS!";
static const char strA[] PROGMEM="Good Job!\nYou took less than \n10 seconds!";
static const char strB[] PROGMEM="Good Try!\nYou took less than \n20 seconds.";
static const char strC[] PROGMEM="You should Try again!\nYou took more than \n20 seconds.";
static const char strD[] PROGMEM="You took more than \n30 seconds.";
static const char strE[] PROGMEM="You did terrible!\nYou took more than \n40 seconds";

//initialize a VGAx object vga and a bute for the background color
//black is 00
VGAX vga;
byte bgColor = 00;

//initialize a boolean array to store the states of the buttons at any instance in time
bool pins[4] = {false,false,false,false};

//a "song" consisting of 50 values for each column at each instatnce in time
//the song has a set of 6 4s at the end to prevent indexing errors
const int song[50 + 6] = {3, 1, 2, 0, 1, 2, 3, 0, 2, 0, 1, 3, 2, 0, 1, 3, 1, 3, 0, 2, 3, 2, 3, 0, 1,
                          2, 0, 1, 0, 3, 2, 0, 3, 1, 2, 0, 1, 2, 0, 3, 2, 0, 1, 3, 1, 0, 2, 0, 3, 2,
                          4, 4, 4, 4, 4, 4};
 

//the rect function acts as a wrapper for VGAX.fillrect and takes a collumn, a y position and a color as input
void rect(int x, int y, byte color) {
  vga.fillrect(x * 30, y, 30, 10, color);
}

// function draws the starting screen on the display.
void drawMenu(){
  vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, str0, 10, 10, 01);
}

// function draws the ending screen on the display.
void drawEnd(){
  vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, str1, 10, 10, 01);
}
 
// in the setup loop,
  // intialising the VGA library.
  // setting pins 10-13 as input to record button pressed.
void setup() {
  vga.begin();
  vga.clear(bgColor);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);

}


//processInputs checks each of the button pins and stores their state into the corresponding index in the pins array
void processInputs() {
  for(int i = 0; i < 4; i ++){
    pins[i] = digitalRead(10 + i);
  }
}


int state = 1;
int startTime;
int time;
int current_y = 0;


void loop() {
  processInputs();  

  //state 1 prints the starting screen
  if(state == 1) {
    drawMenu();
  }

  // if any button is pressed in state 1, it moves it into state 2 which is a transition state
  if( state == 1 && (pins[0] || pins[1] || pins[2] || pins[3])){
    state++;
  }

  // in state 2, when the button is unpressed, 
      //StartTime is Recorded, 
      //the variable current_y is initialised, 
      // the state is incremented.
  if(state == 2 && !(pins[0] || pins[1] || pins[2] || pins[3])){
    startTime = vga.millis();
    vga.clear(00);
    state++;
    current_y = 0;
  }

  if(state == 3) {
    // at any given time, there are 6 rectangles on the screen.
    // we use a for loop to print any given state.    
    for(int i = 0; i < 6; i++){
      rect(song[current_y + i], 50 - 10 * i, 11);
    }

    // this checks if the button corresponding to the rectangle at the bottom of the screen is pressed.
    // if yes, it increments y and clears the screen.
    if(pins[song[current_y]]){
      current_y++;
      vga.clear(00);
    }

    // when the the song ends, state is incremented to state 4
    if(song[current_y] ==4){
      state++;
    }
  }

  // in state 4, Final Time is calculated and the state is incremented to 5
  if(state == 4){
    time = vga.millis() - startTime;
    state++;
  }

  //in state 5, after the player releases all buttons,
    // it displays how good or bad the player did!
    // the state is incremented.
  if(state == 5 && !(pins[0] || pins[1] || pins[2] || pins[3])){
    vga.clear(00);
    switch(time / 5000) {
      case 0 :
        vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, strS, 10, 10, 01);
        break;
      case 1 :
        vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, strA, 10, 10, 01);
        break;
      case 2 :
         vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, strB, 10, 10, 01);
         break;
      case 3 :
        vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, strB, 10, 10, 01);
         break;
      case 4 :
         vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, strC, 10, 10, 01);
         break;
      case 5 :
         vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, strC, 10, 10, 01);
         break;
      case 6 :
         vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, strD, 10, 10, 01);
         break;
      case 7 :
         vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, strD, 10, 10, 01);
         break;
      default :
         vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, strE, 10, 10, 01);
   }
   state++;
  }
  
  //state 6 is a transition state
  if(state == 6 && (pins[0] || pins[1] || pins[2] || pins[3])){
    state ++;
  }

  // in state 7,  it prints the ending screen.
  if(state == 7 && !(pins[0] || pins[1] || pins[2] || pins[3])){
    vga.clear(00);
    drawEnd();
    state++;
  }
  //state 8 is a transition state
  if(state == 8 && (pins[0] || pins[1] || pins[2] || pins[3])){
    state ++;
  }
  //redirects theplayer to state 1 (play again) when the button is unpressed
  if (state == 9 && !(pins[0] || pins[1] || pins[2] || pins[3])){
    vga.clear(00);
    state = 1;
  }

}