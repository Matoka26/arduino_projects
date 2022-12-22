const int red = D0;
const int green = D1;
const int blue = D2;
int counter=0;

void setup() 
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(D3, INPUT_PULLUP);
}


void simplu(int led1,int led2,int led3){
  analogWrite(led1,1023);
  analogWrite(led2,0);
  analogWrite(led3,0);
}

void dublu(int led1,int led2,int led3){
  analogWrite(led1,1023);
  analogWrite(led2,1023);
  analogWrite(led3,0);
}

void nimic(int led1,int led2,int led3){
  analogWrite(led1,0);
  analogWrite(led2,0);
  analogWrite(led3,0);
}

void loop() 
{ if(counter==0){ nimic(red,green,blue);}
     else if(counter==1){simplu(red,green,blue);}
     else if(counter==2){dublu(red,green,blue);}
     else if(counter==3){simplu(green,red,blue);}
     else if(counter==4){dublu(green,blue,red);}
     else if(counter==5){simplu(blue,green,red);}
     else if(counter==6){dublu(red,blue,green);}

    int buttonReading = digitalRead(D3);
  if (buttonReading == 0) {
    counter++;
    counter %= 7;
  }
  delay(200);
}
