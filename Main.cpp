#include <iostream>
#include <string>

void start();//Switches the program on and sets all start values.
void stop();//Switches the program off.
void run();//Boots the program.
void mainMenu();//Well...It a main menu screen.
void login(std::string);
void logout();//Logs user out of program
void findCommand(std::string);
void processCommand(std::string,std::string);

bool isRunning = false;//Controls if program is running.
bool isCommand = false;//When false, no longer looking for command.
bool isValue = false;//Assigns a value attached to command.  
bool adminMode = false;//User gains access to all options.

int menuType = 1;//0 = sign out menu

char inputType = 'c';//0 = Regular char, # = System Commands, ; = End of command

std::string userName;

void start()
{
	if (isRunning)
		return;
	system("color 0A");
	isRunning = true;
	run();
}

void stop()
{
	if (!isRunning)
		return;
	isRunning = false;
}

void run()
{
	while (isRunning) {
		system("cls");
		switch (menuType)
		{
		case 0:
			//Log out/ Exit the game for testing.
			logout();
			break;
		case 1:
			//Main Menu
			mainMenu();
			break;
		default:
			//Reset to the main menu if menuType does not exist
			std::cout << "Error: Menu type " << menuType << " does not exist." << std::endl;
			std::cout << "Menu type will be set to the Main Menu" << std::endl;
			menuType = 1;
			break;
		}
	}
}

void mainMenu()
{
	if(userName.size() > 0)
		std::cout << "Signed in as: " << userName << std::endl << std::endl;
	std::cout << "[Main Menu]" << std::endl;
	std::cout << "01: Inventory" << std::endl;
	std::cout << "02: Money" << std::endl;
	std::cout << "03: Stats" << std::endl;
	std::cout << "Select: " << std::endl;
	
	std::string selection = "";
	std::getline(std::cin, selection);
	findCommand(selection);
}

void login(std::string un)
{
	if (un.size() > 0)
		userName = un;
	else
	{
		std::cout << "No user name was entered." << std::endl;
		std::cin.get();
	}
}

void logout()
{
	userName = "";
	std::cout << userName << " Logged Out." << std::endl;
}

void findCommand(std::string cmd)
{
	//This method will read the command it process it the way it was intended.
	
	int size = cmd.size();
	std::string commandText = "";
	std::string valueText = "";

	for (int i = 0;i < size;i++)
	{
		switch (cmd[i])
		{
		case '#':
			inputType = cmd[i];
			isCommand = true;
			break;

		case ';':
			processCommand(commandText, valueText);
			commandText = "";
			valueText = "";
			break;
			
		case ':':
			isValue = true;
			break;
		default:
			if (isCommand && !isValue)
				commandText += cmd[i];
			else if (isCommand && isValue)
				valueText += cmd[i];
		}
		
	}
}

void processCommand(std::string cmd,std::string val)
{
	if (cmd == "logout")
		logout();
	if (cmd == "login")
		login(val);
	if (cmd == "exit")
		stop();
	isCommand = false;
	isValue = false;
}

int main()
{
	start();
	return 0;
}
