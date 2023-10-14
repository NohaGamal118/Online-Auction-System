#include <iostream>
#include <string>
#include<stdlib.h>
using namespace std;
//To store the information of existing members
struct users
{
	string e_mail;
	string password;
	int ID;
	string buying_requests;
}c[10];
//To store the information of new members
struct new_members
{
	string e_mail, password, name, delivery_address;
	string phone_num;
	int ID;
	int points = 0;
	string buying_requests;
}s[100];
//To store item information 
struct item
{
	int member_ID;
	int number;
	string category, status;
	int price;
	string start_date, end_date;
}item[50];
//To store the information required to buy an item
struct request
{
	string category_name;
	int item_num;
	int new_price;
	int ID;
}r[100];
//To store the information required to insert an item
struct insert
{
	int ID, number;
	string category, start_date, end_date;
	int price;
}n[50];
//To store the information required to give feedback
struct feedback
{
	string feedback1;
	int rate;
}f[100];
//To store the information for category to now top category
struct category
{
	string category_name;
	int points = 0;
}t[50];
void beginning();
void signup();
void signin();
void search();
void market_place();
void view();
void request();
void go_back();
void tob_category();
int i;
void main()
{
	beginning();
}

//It is a function that show the beginning of the system
void beginning()
{
	int choise1 = 0;
	while (true)
	{
		cout << "press 1 to sign up\n";
		cout << "press 2 to sign in\n";
		cout << "press 3 to exit\n";
		cout << "enter your choise:";
		cin >> choise1;
		if (choise1 == 1)
		{
			signup();
		}
		else if (choise1 == 2)
		{
			signin();
		}
		else if (choise1 == 3)
		{
			exit(0);
		}
		else
			cout << "Wrong choise\n";
	}
}
//It is a function that takes information about any new member so that he can use the system
void signup()
{
	for (int i = 0; i < 100; i++)
	{
		cout << "enter username :";
		cin >> s[i].e_mail;
		cout << "enter your password :";
		cin >> s[i].password;
		cout << "enter your name:";
		cin >> s[i].name;
		cout << "enter your delivery_adress:";
		cin >> s[i].delivery_address;
		cout << "enter your phone number:";
		cin >> s[i].phone_num;
		s[i].ID++;
		cout << "you make your email succesfully, your ID:" << s[i].ID << endl;
		view();
	}
}
//It is a function that takes the member's information to log in to his email
void signin()
{
	c[0].e_mail = { "n111@auction.com" };
	c[0].password = { "n111" };
	c[0].ID = { 101 };
	c[1].e_mail = { "b111@auction.com" };
	c[1].password = { "b111" };
	c[1].ID = { 102 };
	string user_email, user_password;
	int user_ID = 0;
	cout << "enter your e_mail:";
	cin >> user_email;
	cout << "enter your password:";
	cin >> user_password;
	cout << "enter your ID:";
	cin >> user_ID;
	if (user_email == c[0].e_mail && user_password == c[0].password && user_ID == c[0].ID)
	{
		cout << "WLCOME TO THE ONLINE AUCTION\n";
		cout << "yor points:" << s[i].points << endl;
		view();
	}
	else if (user_email == c[1].e_mail && user_password == c[1].password && user_ID == c[1].ID)
	{
		cout << "WLCOME TO THE ONLINE AUCTION\n";
		cout << "yor points:" << s[i].points << endl;
		view();
	}
	else
	{
		cout << "invalid email or password or ID\n";
		signin();
	}
}
//It is a function that chooses the member to search for items by category or by category and 
price
void search()
{
	int number_of_items = 15;
	int choise2 = 0;
	string item_category;
	int item_price = 0;
	int j = 0;
	item[0].member_ID = { 10 };
	item[0].number = { 1 };
	item[0].category = { "Car" };
	item[0].status = { "avilable" };
	item[0].price = { 200000 };
	item[0].start_date = { "7 / 6 / 2020" };
	item[0].end_date = { "27 / 6 / 2020" };
	item[1].member_ID = { 15 };
	item[1].number = { 2 };
	item[1].category = { "T_shirt" };
	item[1].status = { "avilable" };
	item[1].price = { 250 };
	item[1].start_date = { "7 / 6 / 2020" };
	item[1].end_date = { "27 / 6 / 2020" };
	item[2].member_ID = { 20 };
	item[2].number = { 3 };
	item[2].category = { "Trouser" };
	item[2].status = { "avilable" };
	item[2].price = { 300 };
	item[2].start_date = { "7 / 6 / 2020" };
	item[2].end_date = { "27 / 6 / 2020" };
	item[3].member_ID = { 50 };
	item[3].number = { 4 };
	item[3].category = { "Wheel chair" };
	item[3].status = { "sold" };
	item[3].price = { 500 };
	item[3].start_date = { "6 / 5 / 2020" };
	item[3].end_date = { "21 / 5 / 2020" };
	item[4].member_ID = { 70 };
	item[4].number = { 5 };
	item[4].category = { "Shoes" };
	item[4].status = { "avilable" };
	item[4].price = { 300 };
	item[4].start_date = { "7 / 6 / 2020" };
	item[4].end_date = { "27 / 6 / 2020" };
	item[5].member_ID = { 55 };
	item[5].number = { 6 };
	item[5].category = { "Mobile phone" };
	item[5].status = { "avilable" };
	item[5].price = { 5000 };
	item[5].start_date = { "7 / 6 / 2020" };
	item[5].end_date = { "27 / 6 / 2020" };
	item[6].member_ID = { 60 };
	item[6].number = { 7 };
	item[6].category = { "Bag" };
	item[6].status = { "sold" };
	item[6].price = { 250 };
	item[6].start_date = { "7 / 5 / 2020" };
	item[6].end_date = { "25 / 5 / 2020" };
	item[7].member_ID = { 62 };
	item[7].number = { 8 };
	item[7].category = { "laptop" };
	item[7].status = { "avilable" };
	item[7].price = { 15000 };
	item[7].start_date = { "7 / 6 / 2020" };
	item[7].end_date = { "27 / 6 / 2020" };
	item[8].member_ID = { 95 };
	item[8].number = { 9 };
	item[8].category = { "car" };
	item[8].status = { "sold" };
	item[8].price = { 250000 };
	item[8].start_date = { "7 / 5 / 2020" };
	item[8].end_date = { "26 / 5 / 2020" };
	item[9].member_ID = { 15 };
	item[9].number = { 10 };
	item[9].category = { "camera" };
	item[9].status = { "avilable" };
	item[9].price = { 3000 };
	item[9].start_date = { "7 / 6 / 2020" };
	item[9].end_date = { "27 / 6 / 2020" };
	item[10].member_ID = { 11 };
	item[10].number = { 11 };
	item[10].category = { "book" };
	item[10].status = { "sold" };
	item[10].price = { 200 };
	item[10].start_date = { "1 / 5 / 2020" };
	item[10].end_date = { "27 / 5 / 2020" };
	item[11].member_ID = { 100 };
	item[11].number = { 12 };
	item[11].category = { "book" };
	item[11].status = { "avilable" };
	item[11].price = { 150 };
	item[11].start_date = { "7 / 6 / 2020" };
	item[11].end_date = { "27 / 6 / 2020" };
	item[12].member_ID = { 69 };
	item[12].number = { 13 };
	item[12].category = { "chair" };
	item[12].status = { "avilable" };
	item[12].price = { 500 };
	item[12].start_date = { "7 / 6 / 2020" };
	item[12].end_date = { "27 / 6 / 2020" };
	item[13].member_ID = { 48 };
	item[13].number = { 14 };
	item[13].category = { "Bag" };
	item[13].status = { "available" };
	item[13].price = { 300 };
	item[13].start_date = { "7 / 6 / 2020" };
	item[13].end_date = { "27 / 6 / 2020" };
	item[14].member_ID = { 101 };
	item[14].number = { 15 };
	item[14].category = { "car" };
	item[14].status = { "sold" };
	item[14].price = { 260000 };
	item[14].start_date = { "1 / 5 / 2020" };
	item[14].end_date = { "30 / 5 / 2020" };
	cout << "NOW, YOU CAN SEARCH FOR THE ITEMS YOU WANT\n";
	cout << "if you want to search by category, press 1\n";
	cout << "if you want to search by category and price, press 2\n";
	cout << "please enter your choise:";
	cin >> choise2;
	if (choise2 == 1)
	{
		cout << "enter category:";
		cin >> item_category;
		for (int j = 0; j < 15; j++)
		{
			if (item_category == item[j].category)
			{
				cout << "member ID:" << item[j].member_ID << endl;
				cout << "number:" << item[j].number << endl;
				cout << "category:" << item[j].category << endl;
				cout << "status:" << item[j].status << endl;
				cout << "price:" << item[j].price << endl;
				cout << "start_date:" << item[j].start_date << endl;
				cout << "end_date:" << item[j].end_date << endl;
				break;
			}
		}
	}
	else if (choise2 == 2)
	{
		cout << "enter category:";
		cin >> item_category;
		cout << "enter price:";
		cin >> item_price;
		for (int j = 0; j < 15; j++)
		{
			if (item_category == item[j].category && item_price == item[j].price)
			{
				cout << "member ID:" << item[j].member_ID << endl;
				cout << "number:" << item[j].number << endl;
				cout << "category:" << item[j].category << endl;
				cout << "status:" << item[j].status << endl;
				cout << "price:" << item[j].price << endl;
				cout << "start_date:" << item[j].start_date << endl;
				cout << "end_date:" << item[j].end_date << endl;
				break;
			}
		}
	}
	else
	{
		cout << "NO SEARCH RESULTS\n";
	}
	view();
}
//It is a function that shows the items available for sale
void market_place()
{
	int choise6 = 0;
	cout << "member_ID: 10 number: 1 category: Car status : 
		avilable \n";
		cout << "price : 200000 start_date : 7 / 6 / 2020 end_date : 27 / 6 
		/ 2020 \n";
		cout << "";
	cout << "member_ID: 15 number: 2 category: T_shirt status : 
		avilable \n";
		cout << "price : 250 start_date : 7 / 6 / 2020 end_date : 27 / 6 
		/ 2020 \n";
		cout << "";
	cout << "member_ID: 20 number: 3 category: Trouser status : 
		avilable \n";
		cout << " price : 300 start_date : 7 / 6 / 2020 end_date : 27 / 6 
		/ 2020 \n";
		cout << "";
	cout << "member_ID: 70 number: 5 category: Shoes status : 
		avilable \n";
		cout << " price : 300 start_date : 7 / 6 / 2020 end_date : 27 / 6 
		/ 2020 \n";
		cout << "";
	cout << "member_ID: 55 number: 6 category: Mobile phone status : 
		avilable \n";
		cout << "price : 5000 start_date : 7 / 6 / 2020 end_date : 27 / 6 
		/ 2020 \n";
		cout << "";
	cout << "member_ID: 62 number: 8 category: laptop status : 
		avilable \n";
		cout << " price : 15000 start_date : 7 / 6 / 2020 end_date : 27 / 6 
		/ 2020 \n";
		cout << "";
	cout << "member_ID: 11 number: 10 category: camera status : 
		avilable \n";
		cout << "price : 3000 start_date : 7 / 6 / 2020 end_date : 27 / 6 
		/ 2020 \n";
		cout << "";
	cout << "member_ID: 100 number: 12 category: book status : 
		avilable \n";
		cout << "price : 150 start_date : 7 / 6 / 2020 end_date : 27 / 6 
		/ 2020 \n";
		cout << "";
	cout << "member_ID: 69 number: 13 category: chair status : 
		avilable \n";
		cout << "price : 500 start_date : 7 / 6 / 2020 end_date : 27 / 6 
		/ 2020 \n";
		cout << "";
	cout << "member_ID: 48 number: 14 category: Bag status : 
		avilable \n";
		cout << " price : 300 start_date : 7 / 6 / 2020 end_date : 27 / 6 
		/ 2020 \n";
		cout << "if you want to buy any item, press 1\n";
	cout << "if you want to leave market place , press 2\n";
	cout << "enter your choise:";
	cin >> choise6;
	if (choise6 == 1)
	{
		request();
	}
	else if (choise6 == 2)
	{
		view();
	}
	else
	{
		cout << "WRONG CHOISE\n";
	}
}
//It is a function that makes buying requisition
void request()
{
	string category_name;
	int choise8 = 0;
	r[0].category_name = { "Wheel chair" };
	r[1].category_name = { "Bag" };
	r[2].category_name = { "car" };
	r[3].category_name = { "book" };
	r[4].category_name = { "T_shirt" };
	r[5].category_name = { "Trouser" };
	r[6].category_name = { "Shoes" };
	r[7].category_name = { "Mobile phone" };
	r[8].category_name = { "laptop" };
	r[9].category_name = { "camera" };
	r[10].category_name = { "chair" };
	cout << "if you need item and agree on price , press1\n";
	cout << "if you need item and disagree on price, press2\n";
	cout << "enter your choise:";
	cin >> choise8;
	if (choise8 == 1)
	{
		cout << "enter category name:";
		cin >> r[i].category_name;
		cout << "enter member ID:";
		cin >> r[i].ID;
		cout << "enter item number:";
		cin >> r[i].item_num;
		c[i].buying_requests;
		s[i].buying_requests;
	}
	else if (choise8 == 2)
	{
		cout << "enter category name:";
		cin >> r[i].category_name;
		cout << "enter member ID:";
		cin >> r[i].ID;
		cout << "enter item number:";
		cin >> r[i].item_num;
		cout << "enter new price:";
		cin >> r[i].new_price;
		c[i].buying_requests;
		s[i].buying_requests;
	}
	else
	{
		cout << "WRONG CHOICE\n";
		request();
	}
	cout << "your request has been successfully received\n";
}
//It is a function that returns to the previous list
void go_back()
{
	char choise7;
	cout << "if you need go back, press b\n";
	cin >> choise7;
	switch (choise7)
	{
	case 'b':view();
	case'B':view();
	default:
		break;
	}
}
//It is a function that shows top category in spicific mounth
void tob_category()
{
	t[0].category_name = { "Wheel chair" };
	t[1].category_name = { "Bag" };
	t[2].category_name = { "car" };
	t[3].category_name = { "book" };
	t[4].category_name = { "T_shirt" };
	t[5].category_name = { "Trouser" };
	t[6].category_name = { "Shoes" };
	t[7].category_name = { "Mobile phone" };
	t[8].category_name = { "laptop" };
	t[9].category_name = { "camera" };
	t[10].category_name = { "chair" };
	if (t[0].points > t[1].points)
	{
		cout << "top category:" << t[0].points;
	}
	else if (t[0].points < t[1].points)
	{
		cout << "top category:" << t[1].points;
	}
	else if (t[1].points > t[2].points)
	{
		cout << "top category:" << t[1].points;
	}
	else if (t[1].points < t[2].points)
	{
		cout << "top category:" << t[2].points;
	}
	else if (t[2].points > t[3].points)
	{
		cout << "top category:" << t[2].points;
	}
	else if (t[2].points < t[3].points)
	{
		cout << "top category:" << t[3].points;
	}
	else if (t[3].points > t[4].points)
	{
		cout << "top category:" << t[3].points;
	}
	else if (t[3].points < t[4].points)
	{
		cout << "top category:" << t[4].points;
	}
	else if (t[4].points > t[5].points)
	{
		cout << "top category:" << t[4].points;
	}
	else if (t[4].points < t[5].points)
	{
		cout << "top category:" << t[5].points;
	}
	else if (t[5].points > t[6].points)
	{
		cout << "top category:" << t[5].points;
	}
	else if (t[5].points < t[6].points)
	{
		cout << "top category:" << t[6].points;
	}
	else if (t[6].points > t[7].points)
	{
		cout << "top category:" << t[6].points;
	}
	else if (t[6].points < t[7].points)
	{
		cout << "top category:" << t[7].points;
	}
	else if (t[7].points > t[8].points)
	{
		cout << "top category:" << t[7].points;
	}
	else if (t[7].points < t[8].points)
	{
		cout << "top category:" << t[8].points;
	}
	else if (t[8].points > t[9].points)
	{
		cout << "top category:" << t[8].points;
	}
	else if (t[8].points < t[9].points)
	{
		cout << "top category:" << t[9].points;
	}
	else if (t[9].points > t[10].points)
	{
		cout << "top category:" << t[9].points;
	}
	else if (t[9].points < t[10].points)
	{
		cout << "top category:" << t[10].points;
	}
	else
	{
		cout << "no items were sold\n";
	}
}
//It is a function that shows options to any member can sell and buy
void view()
{
	int points = 0;
	int choise3 = 0;
	int choise4 = 0;
	char choise5;
	string category_name;
	int number_of_items = 15;
	cout << "press 1 to go to market place\n";
	cout << "press 2 to make buying requist\n";
	cout << "press 3 to insert item into market place\n";
	cout << "press 4 to show buying request\n";
	cout << "press 5 to show top category was sold \n";
	cout << "press 6 to give feedback\n";
	cout << "press 7 to sign out\n";
	cout << "enter your choise\n";
	cin >> choise3;
	if (choise3 == 1)
	{
		cout << "WELCOME TO THE MARKET PLACE\n";
		cout << "if you want to search about any item, press 1\n";
		cout << "if you want to show market place, press 2\n";
		cout << "press 3 to leave market place\n";
		cin >> choise4;
		if (choise4 == 1)
		{
			search();
		}
		else if (choise4 == 2)
		{
			market_place();
			view();
		}
		else if (choise4 == 3)
		{
			view();
		}
		else
		{
			cout << "WRONG CHOICE\n";
			go_back();
		}
	}
	else if (choise3 == 2)
	{
		request();
		go_back();
	}
	else if (choise3 == 3)
	{
		cout << "enter item data\n";
		cout << "your ID:";
		cin >> n[i].ID;
		cout << "category number:";
		cin >> n[i].number;
		cout << "category name:";
		cin >> n[i].category;
		cout << "starting bid price:";
		cin >> n[i].price;
		cout << "start date:";
		cin >> n[i].start_date;
		cout << "end date:";
		cin >> n[i].end_date;
		number_of_items++;
		cout << "you insert an item succesfully\n";
		go_back();
	}
	else if (choise3 == 4)
	{
		char choise9;
		int member_ID = 0;
		cout << "buying requests\n" << c[i].buying_requests <<
			s[i].buying_requests << endl;
		if (member_ID == r[i].ID)
		{
			cout << "if you are agree press g\n";
			cin >> choise9;
			switch (choise9)
			{
			case 'g':cout << "Sold successfully\n";
				if (category_name == r[0].category_name)
				{
					t[0].points++;
				}
				else if (category_name == r[1].category_name)
				{
					t[1].points++;
				}
				else if (category_name == r[2].category_name)
				{
					t[2].points++;
				}
				else if (category_name == r[3].category_name)
				{
					t[3].points++;
				}
				else if (category_name == r[4].category_name)
				{
					t[4].points++;
				}
				else if (category_name == r[5].category_name)
				{
					t[5].points++;
				}
				else if (category_name == r[6].category_name)
				{
					t[6].points++;
				}
				else if (category_name == r[7].category_name)
				{
					t[7].points++;
				}
				else if (category_name == r[8].category_name)
				{
					t[8].points++;
				}
				else if (category_name == r[9].category_name)
				{
					t[9].points++;
				}
				else if (category_name == r[10].category_name)
				{
					t[10].points++;
				}
				else
				{
					cout << "not found\n";
				}
			default:view();
				break;
			}
		}
		else
		{
			cout << "you have no requests\n";
		}
		go_back();
	}
	else if (choise3 == 5)
	{
		tob_category();
		go_back();
	}
	else if (choise3 == 6)
	{
		cout << "enter your feedback\n";
		cout << "user ID:";
		cin >> s[i].ID;
		cout << "your feedback:";
		cin >> f[i].feedback1;
		cout << "rate(1 to 5):";
		cin >> f[i].rate;
		if (f[i].rate == 3 || f[i].rate == 4 || f[i].rate == 5)
		{
			s[i].points++;
		}
		view();
	}
	else if (choise3 == 7)
	{
		cout << "if you want to sign out, press y\n";
		cin >> choise5;
		switch (choise5)
		{
		case 'y':beginning();
		case'Y':beginning();
		default: view();
			break;
		}
	}
	else
	{
		cout << "WRONG CHOICE\n";
		view();
	}
}
