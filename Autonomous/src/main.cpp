#include "vex.h"
#include "constants.h"
motor motor_left = motor(PORT_MOTORLEFT, false);
motor motor_right = motor(PORT_MOTORRIGHT, true);

// Create the inertial instance
inertial inertial = inertial(PORT3);

smartdrive(
    motor_left,
    motor_right,
    inertial,
    wheelTravel = 320,
    trackWidth  = 320,
    wheelBase   = 130,
    distanceUnits   unit = mm,
    double          externalGearRatio = 1.0 );
