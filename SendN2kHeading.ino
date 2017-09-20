

void SendN2kHeading() {
  static unsigned long HeadingUpdated = millis();
  tN2kMsg N2kMsg;

  if ( HeadingUpdated + headingUpdatePeriod < millis() ) {
    HeadingUpdated = millis();
     
    SetN2kMagneticHeading(N2kMsg, 0, DegToRad(Yaw), DegToRad(0), DegToRad(0)  );
    NMEA2000.SendMsg(N2kMsg, DEV_COMP);

    SetN2kRateOfTurn(N2kMsg, 0, DegToRad(gz/4));
    NMEA2000.SendMsg(N2kMsg, DEV_COMP);

    SetN2kAttitude(N2kMsg, 0, DegToRad(Yaw), DegToRad(Pitch), DegToRad(Roll));
    NMEA2000.SendMsg(N2kMsg, DEV_COMP);

  }
}


