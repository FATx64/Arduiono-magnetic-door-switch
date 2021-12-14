/* Kelompok 2
 *  - Ahmad Ansori Palembani (191420078)
 *  - Muhammad Fharid Akbar  (191420072)
 *  - Panji Darmawan         (191420088)
 *  - Ramadani		        (191420017)
 *  - M Ridho Fadillah		(191420144)
 */


// Ports
const int LED = 3;
const int sensor = 4;

// State of sensor
int state;

void setup()
{
    Serial.begin(9600);
    pinMode(sensor, INPUT_PULLUP);
}

void loop()
{
    state = digitalRead(sensor);
    Serial.println(state);
    if (state == HIGH) {
      digitalWrite(LED, HIGH);
      delay(100);
      digitalWrite(LED, LOW);
      delay(100);
    } else {
      digitalWrite(LED, LOW);
    }
}
