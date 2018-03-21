
//define pin varaibles 

const int trigPin = 25;
const int echoPin= 26;


long duration ;
long distance ;

void setup() {
 pinMode(trigPin,OUTPUT);
 pinMode(echoPin,INPUT);
 Serial.begin(9600);    

}

void loop() {
  //clears TrigPin
   digitalWrite(trigPin,LOW); 
   delayMicroseconds(2); 

   //sets the trigPin HIGH 
   digitalWrite(trigPin, HIGH) ;
   delayMicroseconds(10); 
   digitalWrite(trigPin, LOW) ;

  // Reads echoPin , returns duration 
 duration = pulseIn(echoPin , HIGH); 


 // calculate distance  
 distance = duration*0.034/2 ;

 Serial.print("Distance:") ; 
 Serial.println(distance) ; 

 
  
   

}
