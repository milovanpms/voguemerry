char buzzer = 6;
void setup () {
}

void loop () {
 for(int note=500;note<3000;note++)
 tone(buzzer,note,125);
 delay (1);
} // test arthur
