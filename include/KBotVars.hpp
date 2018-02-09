/*
All Motors are declared here.
*/
//Note 4 and 5 Need only one IME Because they work as one
static const unsigned int LeftBaseLiftMotor               = 1;
static const unsigned int RightTopLiftMotor               = 2;// 6C
static const unsigned int RightBottomLiftMotor            = 3;// 5C
static const unsigned int LeftTopBottomLiftMotors         = 4;// Left Top And Bottom Lift Motors A and B on power Expander 2C
static const unsigned int LeftBaseFrontBackMotors         = 5;// Left Front And Back Base Motors C and D on power Expander 1C
static const unsigned int RightBaseBackMotor              = 6;// 3C
static const unsigned int RightBaseFrontMotor             = 7;// 4C
static const unsigned int IntakeLiftMotor                 = 8;// 7C
static const unsigned int IntakeMotor                     = 9;// 8C
static const unsigned int RightBaseLiftMotor              = 10;

/*
All Sensors are declared here.
LCD UART 2
*/

//static const unsigned String lcdPort = 'uart2';

//IME Chain
static const unsigned int IME_LeftBaseFrontBackMotors     = 1;
static const unsigned int IME_LeftTopBottomLiftMotors     = 2;
static const unsigned int IME_RightBaseBackMotor          = 3;
static const unsigned int IME_RightBaseFrontMotor         = 4;
static const unsigned int IME_RightBottomLiftMotor        = 5;
static const unsigned int IME_RightTopLiftMotor           = 6;
static const unsigned int IME_IntakeLiftMotor             = 7;
static const unsigned int IME_IntakeMotor                 = 8;

static const unsigned int IME_Count                       = 8;

//Output = Orange; Input = Yellow
//Digital Ports
static const unsigned int ArduinoDigitalPinOne            = 1;
static const unsigned int RightFrontUntrasonicOutput      = 2;//O
static const unsigned int RightFrontUntrasonicInput       = 3;//Y
static const unsigned int LeftSidetUntrasonicOutput       = 4;
static const unsigned int LeftSideUntrasonicInput         = 5;
static const unsigned int RightSideUltrasonicInput        = 6;
static const unsigned int RightSideUltrasonicOutput       = 7;
static const unsigned int LeftFrontUltrasonicInput        = 8;
static const unsigned int LeftLimitSwitch                 = 9;
static const unsigned int RightLimitSwitch                = 10;
static const unsigned int LeftFrontUltrasonicOutput       = 11;
static const unsigned int ArduinoDigitalPinTwo            = 12;

//Analog Ports

//static const unsigned int RobotGyro                       = 11;
static const unsigned int BasePot                         = 1;//Analog



//Arcade Drive
//Two Drivers

//Driver 1 = Base and base pickup
//Driver 2 = Everything else


/*
for arduino

Arduino is just for camera.

Camera
i2c

DigialPinOutOne = 2
DigialPinOutTwo = 3


Pi
12 = GPIO20(38)
1 = GPIO21(40)

*/
