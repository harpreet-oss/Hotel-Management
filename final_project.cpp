#include "pch.h"
#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
int total = 500;
int g_tot = 0;
int  r_no[5] = { 1,2,3,4,5 };
int room;
int tot[5] = { 0,0,0,0,0 };
int  r_charge[5];
char r_type[5][7];
char r_cust[5][20] = { "harpreet","N.A","N.A","N.A","N.A" };
char c_city[5][20];
char name[30];
int  c_mem[5];
char c_nat[5][20];
char r_avail[5];
int  r_per[5];
int  no[5];
int year[5];
int month[5];
int day[5];
int i;
void welcome();
void headerfile();
void getavail();
void putavail();
void features();
void allocate();
void putcust();
void cancel();
void restaurant();
void deallocate();

int main()
{

	int ch;
	char ans;
	welcome();
	headerfile();
	do
	{
		cout << "Welcome to the Main Menu " << endl;
		cout << "1. check whether room is available or not " << endl;
		cout << "2. Features of room " << endl;
		cout << "3. Check In" << endl;
		cout << "4. Show customer details " << endl;
		cout << "5. Restuarant " << endl;
		cout << "6. Cancellation" << endl;
		cout << "7. Check out" << endl;
		cout << "8. Exit" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "welcome to check either room is available or not:" << endl;
			getavail();
			putavail();
			break;
		case 2:
			features();
			break;
		case 3:
			allocate();
			break;
		case 4:
			putcust();
			break;
		case 5:
			restaurant();
			break;
		case 6:
			cancel();
			break;
		case 7:
			deallocate();
			break;
		case 8:
			exit(0);
		default:
			cout << "\n\n\nWrong choice!!!!\n\nPlease choose 1-6";
		}
		cout << "\n\nDo you want to continue:";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
}

void welcome()
{
	cout << "\n\n                            WELCOMES YOU..............";
	cout << "\n             .................PRABHRAI HOTEL...................";
	cout << "\n\t             Near Ranjit Avenue , G.T. Road, AMRITSAR City,\n\t\t\t\t Punjab 143401, INDIA";
	cout << "\n\n                              Ph. No.:011-277777777";
	cout << """\n\n                             AMENITIES .......\n";
	cout << "\n\t\t\t1. 100% Power backup.\n";
	cout << "\t\t\t2. Automatic lift.\n";
	cout << "\t\t\t3. Ample parking space.\n";
	cout << "\t\t\t4. Round the clock security.\n";
	cout << "\t\t\t5. Running hot and cold water.\n";
	cout << "\t\t\t6. Free internet service.\n";
	cout << "\t\t\t7. 24 hours room service.\n";
	cout << "\t\t\t8. Laundary service.\n";
}
void headerfile()
{
	cout << "\n                       :::::::::::::::::::::::::::::::::::::";
	cout << "\n                       ::                                 ::";
	cout << "\n                       ::     #######################     ::";
	cout << "\n                       ::     #                     #     ::";
	cout << "\n                       ::     #      WELCOME TO     #     ::";
	cout << "\n                       ::     #                     #     ::";
	cout << "\n                       ::     #  HOTEL MANAGEMENT   #     ::";
	cout << "\n                       ::     #                     #     ::";
	cout << "\n                       ::     #######################     ::";
	cout << "\n                       ::                                 ::";
	cout << "\n                       :::::::::::::::::::::::::::::::::::::\n\n";
}
void getavail()
{
	for (int i = 0; i < 5; i++)
	{
		if (r_no[i] == 1)
		{
			strcpy_s(r_type[i], "Sp Dlx");
			r_charge[i] = 1500;
			if (strcmp(r_cust[i], "N.A") == 0)
			{
				r_avail[i] = 'Y';
				r_per[i] = 0;

			}

		}

		else if (r_no[i] == 2)
		{
			strcpy_s(r_type[i], "Dlx");
			r_charge[i] = 1000;
			if (strcmp(r_cust[i], "N.A") == 0)
			{
				r_avail[i] = 'Y';
				r_per[i] = 0;
			}
		}
		else if (r_no[i] == 3)
		{
			strcpy_s(r_type[i], "Gen");
			r_charge[i] = 750;
			if (strcmp(r_cust[i], "N.A") == 0)
			{
				r_avail[i] = 'Y';
				r_per[i] = 0;
			}
		}
		else if (r_no[i] == 4)
		{
			strcpy_s(r_type[i], "Coupl");
			r_charge[i] = 1000;
			if (strcmp(r_cust[i], "N.A") == 0)
			{
				r_avail[i] = 'Y';
				r_per[i] = 0;
			}
		}
		else if (r_no[i] == 5)
		{
			strcpy_s(r_type[i], "C Dlx");
			r_charge[i] = 1500;
			if (strcmp(r_cust[i], "N.A") == 0)
			{
				r_avail[i] = 'Y';
				r_per[i] = 0;
			}
		}
	}
}
void putavail()
{
	cout << "\n                          ROOM AVAILABILITY";
	cout << "\n                         -------------------";
	cout << "\nRoom No| Type | Charge | Availability | Cust_Name | Period |" << endl;
	for (i = 0; i < 5; i++)
	{

		cout << r_no[i];
		cout << "\t";
		cout << r_type[i];
		cout << "\t";
		if (i == 0)
		{

			cout << r_charge[i];

		}
		if ((i == 1) || (i == 2))
		{

			cout << r_charge[i];


		}
		if (i == 3 || i == 4)
		{

			cout << r_charge[i];

		}

		if ((i == 1) || (i == 2))
		{

			cout << "	   " << r_avail[i] << "\t\t" << r_cust[i] << "\t\t" << r_per[i];
			cout << endl;

		}
		else if ((i == 3) || (i == 4))
		{

			cout << "	   " << r_avail[i] << "\t\t" << r_cust[i] << "\t\t" << r_per[i];
			cout << endl;
		}
		else
		{

			cout << "	   " << r_avail[i] << "\t\t" << r_cust[i] << "\t\t" << r_per[i];
			cout << endl;
		}

	}
}
void features()
{
	int typ;
	cout << "\nChoose the room type:\n1. Sp. Delux\n2. Delux";
	cout << "\n3. General\n4. Couple\n5. C. Delux\n";
	cin >> typ;
	if (typ > 5)
	{
		cout << "\nWrong choice!! Choose a number between 1-5:";
		features();
	}
	switch (typ)
	{
	case 1:
		cout << "\n Room number            >>>1";
		cout << "\n Advance                >>>750\n\n";
		cout << "\n                      FEATURES OF THIS ROOM                       ";
		cout << "\n------------------------------------------------------------------";
		cout << "\n\n Room Type            >>> Sp.delux";
		cout << "\n\n Room charges         >>> Rs.1500 per day";
		cout << "\n\n 1. Bed               >>>      2";
		cout << "\n\n 2.Capacity           >>>      5";
		cout << "\n\n 3.Balcony available     ";
		cout << "\n------------------------------------------------------------------";
		cout << "\n                     ADDITIONAL FEATURES                        ";
		cout << "\n------------------------------------------------------------------";
		cout << "\n\n 1.A/C  available ";
		cout << "\n\n 2.Geyser available";
		cout << "\n\n 3.TV available      ";
		cout << "\n------------------------------------------------------------------";
		cout << "\n NOTE :- Extra bed will cost Rs.50 per bed ";
		break;
	case 2:
		cout << "\n Room number            >>>2\n\n";
		cout << "\n Advance                >>>500\n\n";
		cout << "\n                      FEATURES OF THIS ROOM                       ";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n\n Room Type            >>> Delux                                      ";
		cout << "\n\n Room charges         >>>Rs.1000 per day";
		cout << "\n\n 1. Bed               >>>      2";
		cout << "\n\n 2.Capacity           >>>      5";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n                    ADDITIONAL FEATURES                        ";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n\n 1.A/C available   ";
		cout << "\n\n 2.Geyser available";
		cout << "\n\n 3.TV available      ";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n NOTE :- Extra bed will cost Rs.50 per bed ";
		break;
	case 3:
		cout << "\n Room number            >>>3\n\n";
		cout << "\n Advance                >>>400\n\n";
		cout << "\n                      FEATURES OF THIS ROOM                       ";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n\n Room Type            >>> General                                    ";
		cout << "\n\n Room charges         >>>Rs.750 per day";
		cout << "\n\n 1. Bed               >>>      2";
		cout << "\n\n 2.Capacity           >>>      5";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n                    ADDITIONAL FEATURES                        ";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n\n 1.Geyser available      ";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n NOTE :- Extra bed will cost Rs.50 per bed ";
		break;
	case 4:
		cout << "\n Room number            >>>4\n\n";
		cout << "\n Advance                >>>500\n\n";
		cout << "\n                      FEATURES OF THIS ROOM                       ";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n\n Room Type            >>> Couple                                     ";
		cout << "\n\n Room charges         >>>Rs.1000 per day";
		cout << "\n\n 1. Bed               >>>      1";
		cout << "\n\n 2.Capacity           >>>      2";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n                    ADDITIONAL FEATURES                        ";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n\n 1.Geyser available";
		cout << "\n\n 2.TV available      ";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n NOTE :- Extra bed will cost Rs.50 per bed ";
		break;
	case 5:
		cout << "\n Room number            >>>5\n\n";
		cout << "\n Advance                >>>750\n\n";
		cout << "\n                      FEATURES OF THIS ROOM                       ";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n\n Room Type            >>> Couple Delux                                    ";
		cout << "\n\n Room charges         >>>Rs.1500 per day";
		cout << "\n\n 1. Bed               >>>      1";
		cout << "\n\n 2.Capacity           >>>      2";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n                    ADDITIONAL FEATURES                        ";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n\n 1.A/C available   ";
		cout << "\n\n 2.Geyser available";
		cout << "\n\n 3.TV available      ";
		cout << "\n-------------------------------------------------------------------";
		cout << "\n NOTE :- Extra bed will cost Rs.50 per bed ";
		break;
	}
}
void allocate()
{
	getavail();
	cout << "\n Enter the room number in which you want to stay:";
	cin >> room;
	if (r_avail[room - 1] == 'Y')
	{
		
		cout << "\n Enter Name of customer living :";
		cin >> r_cust[room - 1];
		cout << "\n Enter city name :";
		cin >> c_city[room - 1];
		cout << "\n Enter nationality :";
		cin >> c_nat[room - 1];
		cout << "\n For how many days cust want the room :";
		cin >> r_per[room - 1];
		cout << "\n Enter no. of member in your group :";
		cin >> c_mem[room - 1];
		if ((room == 1) || (room == 2) || (room == 3))
			if ((c_mem[room - 1] < 1) || (c_mem[room - 1] > 5))
			{
				cout << "\n %d members cannot be allocated this room.Allowed members are between 1-5.", c_mem[room - 1];
				system("pause");
				allocate();
			}
			else if ((room == 4) || (room == 5))
				if ((c_mem[room - 1] < 1) || (c_mem[room - 1] > 2))
				{
					cout << c_mem[room - 1] << "  members cannot be allocated this room.Allowed members are between 1-2.", c_mem[room - 1];
					system("pause");
					allocate();
				}
		cout << "\n Enter the date of arrival :";
		cout << "\n------------------------------";
		cout << "\n Year : ";
		cin >> year[room - 1];
		cout << "\n Month :";
		cin >> month[room - 1];
		cout << "\n Day :";
		cin >> day[room - 1];
		if ((year[room - 1] > 9999) || (month[room - 1] > 12) || (month[room - 1] < 1) || (day[room - 1] < 1) || (((month[room - 1] == 1) || (month[room - 1] == 3) || (month[room - 1] == 5) || (month[room - 1] == 7) || (month[room - 1] == 8) || (month[room - 1] == 10) || (month[room - 1] == 12)) && (day[room - 1] > 31)) || (((month[room - 1] == 4) || (month[room - 1] == 6) || (month[room - 1] == 9) || (month[room - 1] == 11)) && (day[room - 1] > 30)) || ((month[room - 1] == 2) && ((year[room - 1] % 400 == 0) || ((year[room - 1] % 4 == 0) && (year[room - 1] % 100 != 0))) && (day[room - 1] > 29)) || ((month[room - 1] == 2) && (year[room - 1] % 4 != 0) && (day[room - 1] > 28)))
		{
			cout << "\n\n!!!!!INVALID DATE........";
			system("pause");
			allocate();
		}
		else
		{
			cout << "\n... Room is allocated to " << endl;
			cout << "Name:  " << r_cust[room - 1] << endl;
			cout << "room " << room << " is alloted to " << c_mem[room - 1] << " members";
			r_avail[room - 1] = 'N';
			system("pause");
		}
	}
	else
	{
		cout << "\n ERROR : Room cannot be allocated ...";
		cout << "\n Room is not available...";
		system("pause");
	}
}
void putcust()
{
	int j;
	cout << "\nEnter the room number :";
	cin >> room;
	j = strcmp(r_cust[room - 1], "N.A");
	if (j == 0)
	{
		printf("\n Data not available ");
		system("pause");
	}
	else
	{
		cout << "\n Room No        :"<< r_no[room - 1];
		cout << "\n Customer Name  :";
		cout << r_cust[room - 1];
		cout << "\n Period         :"<< r_per[room - 1];
		cout << "\n City           :";
		cout << c_city[room - 1];
		cout << "\n Nationality    :";
		cout << c_nat[room - 1];
		cout << "\n No of member   :"<< c_mem[room - 1];
		cout << "\n Arrival Date   :"<<day[room - 1], month[room - 1], year[room - 1];
		system("pause");
	}
}

void restaurant()
{
	int count = 0, z = 0, fc[113], answ;
	char ans;
	int price[113] = { 245,245,245,245,240,240,240,240,235,235,250,235,235,220,
	215,230,215,240,250,250,250,250,250,250,250,255,245,245,245,245,250,240,
	240,360,290,360,290,370,295,360,290,360,290,250,360,290,360,290,250,370,
	290,360,290,250,250,280,245,290,235,265,240,290,300,256,240,265,270,255,
	255,240,240,235,220,25,30,25,30,35,35,25,30,35,25,35,25,25,30,100,105,105,
	100,105,100,105,125,105,105,100,105,110,115,100,100,100,105,105,105,105,
	125,105,120,120,100 };
	char food[113][30] = { "SHAHI PANEER","KADAI PANEER","CHEESE KORMA",
	"MALAI KOFTA","MATAR PANEER","PALAK PANEER","MIX VEG.","ALOO GOBI",
	"ALOO JEERA","CHANA MASALA","MATAR MUSHROOM","RAJMA MAKHANI","DAL MAKHANI",
	"MIXED RAITA","BUNDI RAITA","PINEAPPLE RAITA","SALAD(GREEN)","DUM ALOO",
	"MUSHROOM PANEER","MUTTON MASALA","MUTTON MUGHLAI","MUTTON KORMA",
	"MUTTON DO PYAZA","MUTTON SAGH","MUTTON DAHI","MUTTON ROGAN JOSH",
	"MUTTON CURRY","KADAI MUTTON","KEEMA LEVER","KEEMA MATAR","KEEMA EGG",
	"BRAIN CURRY","EGG CURRY","BUTTER CHICKEN","BUTTER CHICKEN(1/2)",
	"KADAI CHICKEN","KADAI CHICKEN(1/2)","BUTTER CHICKEN(BL)",
	"BUTTER CHICKEN(BL)(1/2)","CHICKEN MUGHLAI","CHICKEN MUGHLAI(1/2)",
	"CHICKEN MASALA","CHICKEN MASALA(1/2)","CHICKEN MASALA(1/4)",
	"CHICKEN SAGH","CHICKEN SAGH(1/2)","CHICKEN DAHI","CHICKEN DAHI(1/2)",
	"CHICKEN DAHI(1/4)","CHICKEN KORMA","CHICKEN KORMA(1/2)",
	"CHICKEN DO PYAZA","CHICKEN DO PYAZA(1/2)","FISH CURRY","CHICKEN CURRY",
	"CHICKEN CURRY(1/2)","CHICKEN CURRY(1/4)","CHILLI CHICKEN","TANDOORI ALOO",
	"CHICKEN TIKKA","SEEKH KABAB","FISH TIKKA","CHICKEN TANDOORI",
	"CHICKEN TANDOORI(1/2)","PANEER TIKKA","CHICKEN SEEKH KABAB",
	"CHICKEN HARA KABAB","CHICKEN BIRYANI","MUTTON BIRYANI","PANEER PULAO",
	"VEG.PULAO","JEERA RICE","STEAMED RICE","RUMALI ROTI","ROTI","NAN",
	"ALOO NAN","PANEER NAN","KEEMA NAN","PARANTHA","ALOO PARANTHA",
	"PANEER PARANTHA","PUDINA PARANTHA","BUTTER NAN","LACHCHA PARANTHA",
	"MISSI ROTI","KHASTA ROTI","VEG.BURGER","PANEER BURGER","CHEESE SANDWICH",
	"VEG.PATTI","CHICKEN PATTI","TEA","COFFEE","COLD COFFEE","PINEAPPLE",
	"STRAWBERRY","CHOCOLATE","BLACK FOREST","DOUBLE STORIED","TRIPLE STORIED",
	"SOFT CONE","VANILLA","STRAWBERRY","CHOCOLATE","CHOCO CHIPS","MANGO",
	"TUTTI FRUITY","LICHI","PISTA BADAM","CHOCOLATE PISTA BADAM","CHOCO DIP",
	"CHOCOLATE LICHI" };

	cout << "\n                        *********";
	cout << "\n                        MENU CARD";
	cout << "\n                        *********";
	cout << "\n\n                      VEGETARIAN";
	cout << endl;
	for (i = 0; i < 113; count++, i++)
	{

		cout << i + 1 << " " << food[i] << endl;
		cout << price[i];
		if (count == 17)
		{
			count = 0;
			cout << "\n                              PRESS ANY KEY TO CONTINUE";
			system("pause");

		}
		if (i == 18)
		{
			cout << "\n\n       MUTTON\n";
			count += 3;
		}
		if (i == 32)
		{
			cout << "\n\n       CHICKEN\n";
			count += 3;
		}
		if (i == 57)
		{
			cout << "\n\n       BAR-BE-QUE\n";
			count += 3;
		}
		if (i == 72)
		{
			cout << "\n\n       ROTI-NAN-PARANTHA\n";
			count += 3;
		}
		if (i == 91)
		{
			cout << "\n\n       BEVERAGES\n";
			count += 3;
		}
		if (i == 100)
		{
			cout << "\n\n       ICE-CREAMS\n";
			count += 3;
		}
	}
	system("pause");

	cout << "\n\nPRESS 0 TO GO BACK TO MENU CARD\nPRESS 1 TO CONTINUE ";
	cin >> answ;
	switch (answ)
	{
	case 0:
		restaurant();
		break;

	case 1:
		do
		{
			cout << "ENTER THE FOOD CODE YOU WANT TO HAVE :: ";
			cin >> fc[z];
			z++;
			cout << "DO YOU WANT MORE(Y/N) ::";
			cin >> ans;
		}
		while ((ans == 'y') || (ans == 'Y'));
		cout << "\nEnter your room number:";
		cin >> room;
		cout << "\nEnter your name:";
		cin >> name;
		if (strcmp(name, r_cust[room - 1]) != 0)
		{
			cout << "\nWrong name...:";
			system("pause");
		}
		system("pause");
		for (i = 0; i < z; i++)
		{
			cout << food[fc[i] - 1] << endl;
			cout << price[fc[i] - 1] << endl;
			tot[room - 1] += price[fc[i] - 1];
		}
		cout << "TOTAL\t\t\t\t" << tot[room - 1];
		break;
		default:
		cout << "\nWrong choice entered!!!";
		system("pause");
		restaurant();
	}
}
void cancel()
{
	cout << "\nEnter the room number:";
	cin >> room;
	if (r_cust[room - 1] == "N.A")
	{
		cout << "\nThe room is empty........";
		system("pause");
	}
	else
	{
		cout << "\nEnter the name of the person staying in the room:";
		cin >> name;
		if (strcmp(name, r_cust[room - 1]) == 0)
		{
			cout << "\nReservation for room number %d is cancelled......", room;
			strcpy_s(r_cust[room - 1], "N.A");
			system("pause");
		}
		else
		{
			cout << "\nInvalid name........";
			system("pause");
		}
	}
	cout << "\n\nYour total bill is :", total;
}
void deallocate()
{
	cout << "\nEnter the room number:";
	cin >> room;
	if (r_cust[room - 1] == "N.A")
	{
		cout << "\nThe room is empty........";
		system("pause");
	}
	else
	{
		cout << "\nEnter the name of the person staying in the room:";
		cin >> name;
		if (strcmp(name, r_cust[room - 1]) == 0)
		{
			cout << "\nRoom number %d is deallocated......", room;
			strcpy_s(r_cust[room - 1], "N.A");
			system("pause");
		}
		else
		{
			cout << "\nInvalid name........";
			system("pause");
		}
	}
	g_tot = (r_per[room - 1] * r_charge[room - 1]) - total + tot[room - 1];
	cout << "\n\nYour total bill is " << g_tot;
	cout << "\n\n\nThanks for staying in this hotel.........";
}
