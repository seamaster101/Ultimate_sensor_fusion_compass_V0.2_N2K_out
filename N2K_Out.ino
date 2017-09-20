

void N2K_Out(){
  
 NMEA2000.ParseMessages();
   // N2kEngineRapid();
  //SendN2kTemperature();
  //SendN2kBattery();
  //SendN2kRudder();
  //SendN2kFluids();
   SendN2kHeading();
//digitalWrite(myLed, !digitalRead(myLed));
}


