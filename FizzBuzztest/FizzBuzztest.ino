#define FIZZ    (5)
#define BUZZ       (3)
#define FIZZBUZZ (15)

int g_count = 1;
char txt[128];
#define WAIT_TIME           (500) // [ms]

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  if(g_count>100){
    delay(3000);
    sprintf(txt, "\n\n\n\n\n\n\n", g_count);
    Serial.print(txt);
    g_count=1;
  }
  // put your main code here, to run repeatedly:
  if((g_count%15) == 0){
    sprintf(txt, "%d FizzBuzz\n", g_count);
    Serial.print(txt);
  }else if((g_count%3) == 0){
    sprintf(txt, "%d Buzz\n", g_count);
    Serial.print(txt);
  }else if((g_count%5) == 0){
    sprintf(txt, "%d Fizz\n", g_count);
    Serial.print(txt);
  }else{
    sprintf(txt, "%d\n", g_count);
    Serial.print(txt);
  }
  
  g_count ++;
  delay(WAIT_TIME);
}
