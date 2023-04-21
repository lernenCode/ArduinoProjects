/*  Entradas/ Saidas  */
#include <LiquidCrystal.h>
/*LCD*/        const int rs = 6, en = 4, d4 = 0, d5 = 1, d6 = 2, d7 = 3; LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
/*button*/     const int button = 5; int stateButton = 0;

/*  Sprites  */
//https://maxpromer.github.io/LCD-Character-Creator/
/*Sprite walk01*/ byte walk1[8] =   {B00000,B00000,B00000,B00000,B01110,B01000,B01110,B01010};
/*Sprite walk02*/ byte walk2[8] =   {B00000,B00000,B00000,B00000,B01110,B01000,B01110,B10001};
/*Sprite Ground*/ byte wall0[8] =   {B11111,B11111,B11111,B11111,B11111,B11111,B11111,B11111};
/*Start Char*/    void startChar()  {lcd.createChar(1, walk1); lcd.createChar(2, walk2); lcd.createChar(3, wall0);}

/*  Variaveis  */
/*Millis*/    long tempo;
/*Points*/	  int points = 0;
/*Posi Y*/    int heroPos = 1;
/*Posi Y*/	  int wallPos = 16;
/*Frame*/ 	  float speedgame = 10;
/*Frame*/ 	  float startspeedgame;
/*Random*/	  long randNumber = 1;

/*	Booleans	*/
bool chooseWall = false;
bool chooseCoin = false;
bool coinLow;
bool wallLow;
bool wallMist;
bool gameover;

/*	Funcoes	*/
void pontos(){while(millis() >= tempo+speedgame){tempo = millis(); points++; if(speedgame >= 0.1){speedgame = speedgame - 0.1;}}}
void animateWalk(int x, int y){lcd.setCursor(x,y); lcd.write(1); while(millis() >= tempo+speedgame){tempo = millis();} lcd.setCursor(x,y); lcd.write(2);}
void gameOver(){gameover = true; lcd.clear(); lcd.print("Impostor Win"); lcd.setCursor(0,1); lcd.setCursor(0,1); lcd.print("Pontuacao: "); lcd.print(points); points = 0;}
void paredeAlta() {while(millis() >= tempo+speedgame && wallPos > -1){ wallPos--; lcd.setCursor(wallPos,0); lcd.write(3); lcd.print("              "); tempo = millis();} wallLow = false; wallMist = false;}
void paredeBaixa(){while(millis() >= tempo+speedgame && wallPos > -1){ wallPos--; lcd.setCursor(wallPos,1); lcd.write(3); lcd.print("              "); tempo = millis();} wallLow = true;  wallMist = false;}

void setup() { startChar(); lcd.begin(16, 2); pinMode(button,INPUT); startspeedgame = speedgame;}

void loop()
{
  if(gameover != true)
  {
    /*Contar pontuação*/
    pontos();
    
    /*Animar*/
    animateWalk(1,heroPos);

    /*pre-procedural*/
    if(chooseWall == true){randNumber = random(2); chooseWall = false; }
    if(randNumber == 1){paredeAlta();}if(randNumber == 0){paredeBaixa();}
    
    /*Ciclar*/
  	if(wallPos < 0){lcd.setCursor(0,0); lcd.print(" "); lcd.setCursor(0,1); lcd.print(" "); chooseWall = true; wallPos = 16;}
    
    /*Game Over*/
  	if(wallLow == true && heroPos == 1 && wallPos == 1){gameOver();}
  	if(wallLow == false && heroPos == 0 && wallPos == 1){gameOver();}
  } else if(digitalRead(button) == HIGH){lcd.clear(); gameover = false; speedgame = startspeedgame;}
  
  /*Verficar botao*/
  if(digitalRead(button) == HIGH && stateButton == 0){lcd.setCursor(1,heroPos); lcd.print(" "); heroPos++; stateButton = 1;} 
  if(digitalRead(button) == LOW) {stateButton = 0;}
  if(heroPos >1){heroPos = 0;}
}