#define LED_R 13
#define TRACO 400
#define PONTO 150
#define ESPERA 200

void lerMorse(char morse_code[], int size){
  for(int i = 0; i < size; i++){
    digitalWrite(LED_R, HIGH);
    switch(morse_code[i]){
      case '.':
        delay(PONTO);
        break;
       case '-':
        delay(TRACO);
        break;
       default:
        digitalWrite(LED_R,LOW);
        delay(ESPERA);
        break;
    }
    delay(ESPERA);
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_R, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  char morse_code[] = ". ..- / - . / .- -- ---";
  lerMorse(morse_code, sizeof(morse_code)/sizeof(morse_code[0]));
}
