#include"client_book.h"
int main(int)
{ 

	int x;
	client_book c;
	do
	{
		cout << "1-Add a new client\n"
			<< "2-Add a new project\n"
			<< "3-Add a new time sheet\n"
			<< "4-Display time sheet\n"
			<< "5-Dispaly all clients\n"
			<< "6-Display all projects\n"
			<< "7-Exit all program\n";
		cin >> x;
		switch (x)
		{
		case 1:
			c.add_client();
			cout << "Added Successfuly\n";
			break;
		case 2:
			c.add_project();
			cout << "Added Successfuly\n";
			break;
		case 3:
			c.set_time_sheet();
			cout << "Added Successfuly\n";
			system("cls");
			break;
		case 4:
			c.displat_time_sheet();
			break;
		case 5:
			c.display_all_client();
			break;
		case 6:
			c.display_all_ptojects();
			break;
		default:
			break;
		}
	} while (x != 7);


		

}