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

static const unsigned int IME_LeftBaseFrontBackMotors     = 1;
static const unsigned int IME_LeftTopBottomLiftMotors     = 2;
static const unsigned int IME_RightBaseBackMotor          = 3;
static const unsigned int IME_RightBaseFrontMotor         = 4;
static const unsigned int IME_RightBottomLiftMotor        = 5;
static const unsigned int IME_RightTopLiftMotor           = 6;
static const unsigned int IME_IntakeLiftMotor             = 7;
static const unsigned int IME_IntakeMotor                 = 8;

static const unsigned int IME_Count                       = 8;

static const unsigned int LeftLimitSwitch                 = 9;
static const unsigned int RightLimitSwitch                = 10;
static const unsigned int RobotGyro                       = 11;
static const unsigned int BasePot                         = 1;//Analog

static const unsigned int UltrasonicOutput                = 12;
static const unsigned int UltrasonicInput                 = 8;

//Arcade Drive
//Two Drivers

//Driver 1 = Base and base pickup
//Driver 2 = Everything else


/*
for arduino
Left Ultrasonic
Echo = 4
Trig = 3


Right Ultrasonic
Echo = 5
Trig = 6

Middle Ultrasonic
Echo = 12
Trig = 13

Camera
i2c

Left in/out = 7
Right in/out = 8
Forward in/out = 9
Back in/out = 10
Stop in/out = 11
*/
