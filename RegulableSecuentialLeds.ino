
int pin;

int value;

void setup (){
//Assign the 10 leds to the 10 outputs
  pinMode (1,OUTPUT);
  pinMode (2,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (4,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (7,OUTPUT);
  pinMode (8,OUTPUT);
  pinMode (9,OUTPUT);
  pinMode (10,OUTPUT);

}

void loop () {

  //assign the potentiometer to Analog input 1 and the type int variable "value" take the value of the potentiometer
 
  value=analogRead(A0);
  


for (int i=1;i<6;i++){

  pin=i;
  
  digitalWrite(pin,HIGH);
  delay(value/4);
  
  //value variable updates its value
  value=analogRead(A0);
  
  digitalWrite(pin,LOW);
  delay(value/4);

//value variable updates its value
value=analogRead(A0);

}

for (int x=10;x>5;x--){

  pin=x;
  
  digitalWrite(pin,HIGH);
  delay(value/4);
  
  //value variable updates its value
  value=analogRead(A0);
  
  
  digitalWrite(pin,LOW);
  delay(value/4);
  
  //value variable updates its value
  value=analogRead(A0);
  
  //this solve one little bug in the ejecution of the secuential order
  
if(pin==6){
  pin=1;
}

}


}
