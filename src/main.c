//-----------------//
//CONTROLLER-------//
//----------TESTER!//
//-----------------//
#include <easy/easy.h>



int Menu_Main(void)
{
	printf("This Program will check if your controller Buttons work\nPress A\n");


	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_A)) {
			break;
		}


		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}


	}

	printf("Button A Works!\nPress B\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_B)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Button B Works!\nPress X\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_X)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Button X Works!\nPress Y\n");


	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_Y)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Button Y Works!\nPress D-Pad Left\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_LEFT)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("D-Pad Left Works!\nPress D-Pad Right\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_RIGHT)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("D-Pad Right Works!\nPress D-Pad Up\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_UP)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("D-Pad Up Works!\nPress D-Pad Down\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_DOWN)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("D-Pad Down Works!\nPress Left Shoulder Button 1\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_L)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Left Shoulder Button 1 Works!\nPress Right Shoulder Button 1\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_R)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Right Shoulder Button 1 Works!\nPress Left Shoulder Button 2\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_ZL)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Left Shoulder Button 2 Works!\nPress Right Shoulder Button 2\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_ZR)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Right Shoulder Button 2 Works!\nPress Plus (Start)\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_PLUS)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Plus (Start) Works!\nPress Minus (Select)\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_MINUS)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Minus (Select) Works!\nPress Joystick L\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_STICK_L)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Joystick L Works!\nPress Joystick R\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_STICK_R)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Joystick R Works!\nPress Joystick L Left\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_STICK_L_EMULATION_LEFT)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Joystick L Left Works!\nPress Joystick L Right\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_STICK_L_EMULATION_RIGHT)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Joystick L Right Works!\nPress Joystick L Up\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_STICK_L_EMULATION_UP)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Joystick L Up Works!\nPress Joystick L Down\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_STICK_L_EMULATION_DOWN)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Joystick L Down Works!\nPress Joystick R Left\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_STICK_R_EMULATION_LEFT)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Joystick R Left Works!\nPress Joystick R Right\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_STICK_R_EMULATION_RIGHT)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Joystick R Right Works!\nPress Joystick R Up\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_STICK_R_EMULATION_UP)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Joystick R Up Works!\nPress Joystick R Down\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_STICK_R_EMULATION_DOWN)) {
			break;
		}
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
	printf("Joystick R Down Works!\nLooks Like Your Wii u Gamepad Buttons all work!\nPress Home To leave\n");

	while(1)
	{
		update_buttons();
		if (button_pressed(VPAD_BUTTON_HOME)) {//This will make the Program exit back to HBL
			printf("Goodbye!\nI will miss you!\n");
    			sleep( 3 );
    			return 0;
		}

	}
}
