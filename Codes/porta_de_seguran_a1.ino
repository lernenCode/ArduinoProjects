// Autor: luiz
// Estudo: keypad 4x4

//       𝑲𝑬𝒀𝑷𝑨𝑫 🅴 𝙇𝘾𝘿

#include <Adafruit_LiquidCrystal.h>
#include <Keypad.h> // Biblioteca do codigo

Adafruit_LiquidCrystal lcd(0);

const byte rows = 4; // Linhas do teclado
const byte columns = 4; // Colunas do teclado
int estado = 0;
int digito = 0;
String digitada;
char tecla;

String senha = "9236";

bool Ativo;
//  𝐌𝐚𝐭𝐫𝐢𝐳 𝐝𝐞 𝐜𝐚𝐫𝐚𝐜𝐭𝐞𝐫𝐞𝐬 (𝐦𝐚𝐩𝐞𝐚𝐦𝐞𝐧𝐭𝐨 𝐝𝐨 𝐭𝐞𝐜𝐥𝐚𝐝𝐨)
const char matriz[rows][columns] =
{
  {'1', '2', '3', 'a'},
  {'4', '5', '6', 'b'},
  {'7', '8', '9', 'c'},
  {'*', '0', '#', 'd'}
};

byte pinRows[rows] = {9, 8, 7, 6}; //Pinos de Linhas
byte pinColumns[columns] = {5, 4, 3, 2}; //Pinos de colunas
Keypad pad = Keypad(makeKeymap(matriz), pinRows, pinColumns, rows, columns);

void start() {
  lcd.begin(16, 2);  //Iniciar lcd colunas/linhas || Iniciar serial keypad
  Serial.begin(9600);
  lcd.setCursor(4,0);lcd.print("LERN-DEV");lcd.setCursor(2,1);lcd.print("LuizVinicius"); delay(900); lcd.clear(); estado = 0; lcd.print("Digite a senha");
}

//        𝑳𝑬𝑫 𝑹𝑮𝑩
int vm = 10;          //  LedRGB porta vermelha
int az = 11;          //  LedRGB porta Azul
int vd = 12;          //  LedRGB porta Verde

/*Fabrica D'Cores*/       void defineColor  (int r,int g,int b){digitalWrite(vm, r);digitalWrite(az, g);digitalWrite(vd, b);}
/*Desligado*/             void desligado()  {defineColor(0,0,0);}
/*Verde*/                 void verde()    {defineColor(0,0,1);}
/*Azul*/                  void azul()     {defineColor(0,1,0);}
/*Ciano*/                 void ciano()    {defineColor(0,1,1);}
/*Vermelho*/              void vermelho()   {defineColor(1,0,0);}
/*Amarelo*/               void amarelo()    {defineColor(1,0,1);}
/*Magenta*/               void magenta()    {defineColor(1,1,0);}
/*Branco*/                void branco()   {defineColor(1,1,1);}

void setup() {
  start();
}

void loop()
{
  tecla = pad.getKey();
  
  if(tecla != NO_KEY)
  {
    lcd.setCursor(digito,1);
    digito = digito +1;
    lcd.print(tecla);
    estado = 1;
    
    if(tecla == '*' && estado != 4)
    {
      lcd.clear();
      if(verificaSenha(senha,digitada)){
        estado = 3; leds(estado); 
        lcd.print("Senha correta");
      } 
      
      else {
        estado = 2; leds(estado); 
        lcd.print("Senha negada");
      }
      
      digitada = "";
    }
    
    else{
      digitada+=tecla;
    }
    
    if(estado == 2){
      lcd.clear();
      digito = 0;
      leds(estado);
      delay(900);
      lcd.print("Digite novamente");
    }
  
    if(estado == 3){
      lcd.clear();
      digito = 0;
      leds(estado);
      delay(900);
      lcd.print("Bem vindo :) ");
    }

    if(estado == 3 && tecla == '#'){
      estado = 4;
      leds(estado);
      lcd.clear();
      lcd.print("Nova senha");
      digitada = "";
      digito = 0;
    }

    if(estado == 4 && tecla == '*'){
      senha = digitada;
      lcd.print("senha alterada");
      delay(500);
      estado = 3;
    }
  }
}

// fazer verificação da senha
bool verificaSenha(String sa, String sd)
{
  bool resultado = false;
  if(sa.compareTo(sd) == 0)
  {resultado=true;}
  else {resultado = false;}
  return resultado;
}

// 0 = porta fechada | 1 = digitando | 2 = Senha negada | 3 = Senha correta | 4 = Alterando senha
void leds(int e) 
{
  if(e==0){amarelo();}
  if(e==2){vermelho();}
  if(e==3){verde();}
  if(e==4){azul();}
} 