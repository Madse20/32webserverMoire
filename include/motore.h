

uint8_t M1Richtung;
uint8_t M2Richtung;

void motore()
{

    if (M1Richtung < 5)
    {
        digitalWrite(M2in1, LOW);
        digitalWrite(M2in2, HIGH);
    }
    else
    {
        digitalWrite(M2in1, HIGH);
        digitalWrite(M2in2, LOW);
    }

    if (M2Richtung < 5)
    {
        digitalWrite(M1in1, HIGH);
        digitalWrite(M1in2, LOW);
    }
    else
    {
        digitalWrite(M1in1, LOW);
        digitalWrite(M1in2, HIGH);
    }

    ledcWrite(pwmChannel1, M1speed);
    ledcWrite(pwmChannel2, M2speed);
   delay(5);
}