int red = 9;
int yellow = 10 ;
int green = 11 ;
int ON = 1000;
int OFF = 1000;

void setup() {
pinMode (red,OUTPUT);
pinMode (yellow, OUTPUT);
pinMode (green, OUTPUT);
} 
void loop(){
digitalWrite (red ,HIGH);
delay(ON);
for(int i=0 ; i < 3 ; i++)
{digitalWrite (yellow,HIGH);
delay(ON);
digitalWrite (yellow,LOW);
delay(ON);
}
digitalWrite (red ,LOW);
delay(OFF);
digitalWrite (green ,HIGH);
delay(ON);
digitalWrite (green ,LOW);
delay(OFF);
}