#include <iostream>
#include <Windows.h>
#include <cstdlib>

#define lungime 121
#define latime 31

using namespace std;

char mapaMeniu[latime][lungime] =
{
	"########################################################################################################################",
	"########################################################################################################################",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                      MENU                                                                                            #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#             ***********************                                                                                  #",
	"#             |                     |                                                                                  #",
	"#             |    1 Player         |                                                                                  #",
	"#             |        ->press 1    |                                                                                  #",
	"#             |                     |                                                                                  #",
	"#             |    2 Players        |                                                                                  #",
	"#             |        ->press 2    |                                                                                  #",
	"#             |                     |                                                                                  #",
	"#             |    Exit             |                                                                                  #",
	"#             |        ->press Esc  |                                                                                  #",
	"#             |                     |                                                                                  #",
	"#             |                     |                                                                                  #",
	"#             |    Best score       |                                                                                  #",
	"#             |                     |                                                                                  #",
	"#             |                     |                                                                                  #",
	"#             ***********************                                                                                  #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#             #######################                                                                                  #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"########################################################################################################################"
};
char Mapa2[latime][lungime] =
{
	"########################################################################################################################",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"#                                                                                                                      #",
	"########################################################################################################################"
};

int gameSpeed = 100;
bool RUNgame = true, meniu = true;
bool _player1 = false, _player2 = false;

int main()
{
	while (meniu == true)
	{
		system("cls");
		for (int i = 0; i < latime; i++)
			cout << mapaMeniu[i] << endl;
		

		for (int i = 0; i<latime; i++)
		{
			for (int j = 0; j<lungime; j++)
			{
				switch (mapaMeniu[i][j])
				{
				case '#':
				{
					mapaMeniu[i][j] = 219;
				}
				break;
				case '*':
				{
					mapaMeniu[i][j] = 222;
				}
				break;
				case '|':
				{
					mapaMeniu[i][j] = 223;
				}
				break;
				}
				if (GetAsyncKeyState(0x31) != 0)
				{
					meniu = false;
					_player1 = true;
				}
				if (GetAsyncKeyState(0x32) != 0)
				{
					meniu = false;
					_player2 = true;
				}
				if (GetAsyncKeyState(VK_ESCAPE) != 0)
					return 1;
			}
		}
		Sleep(3000);
	}




	return 0;
}
