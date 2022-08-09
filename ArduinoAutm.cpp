#define dirpin 2
#define steppin 3
#define sens1 4
#define sens2 5
int count=0;
int count2=0;
void setup() {
  pinMode(steppin, OUTPUT);
pinMode(dirpin, OUTPUT);
 pinMode(sens1, INPUT);
 pinMode(sens2, INPUT);
 digitalWrite(dirpin, HIGH);
digitalWrite(LED_BUILTIN, LOW);
  // put your setup code here, to run once:

}

void loop() {
  
  int step2=300;
  int step1=400;
  int sensed=digitalRead(sens2);
  int i;
  if(digitalRead(sens1)==0){
    if(digitalRead(sens2)==0){
               if(count>1){
      for(i=0;i<step2;i++){
         if(digitalRead(sens1)==1){
      break;
      }
       digitalWrite(steppin, HIGH);
  delay(2);
  digitalWrite(steppin, LOW);
  delay(2); 
        }
               }
        else{
          for(i=0;i<step1;i++){
             if(digitalRead(sens1)==1){
      break;
      }
       digitalWrite(steppin, HIGH);
  delay(1.5);
  digitalWrite(steppin, LOW);
  delay(1.5);
  count++; 
        }
                 }       
      }
      if(sensed==1){
        while(digitalRead(sens2)==1){
         digitalWrite(steppin, HIGH);
  delay(3);
  digitalWrite(steppin, LOW);
  delay(3);
  count=0;
  if(digitalRead(sens1)==1)
  break;
        }}
    }
     while(digitalRead(sens1)==0){
  }   
    }
