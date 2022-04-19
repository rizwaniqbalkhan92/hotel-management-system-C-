#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << " \t\t\t\t\t\t   KAARCHI ROYAL HOTEL ";
    int rooms_quantity = 0, snackes_quantity = 0, drinks_quantity = 0, broast_quantity = 0, mutton_quantity = 0, kabab_quantity = 0;
    int rooms_sold = 0, snackes_sold = 0, drinks_sold = 0, broast_sold = 0, mutton_sold = 0, kabab_sold = 0;
    int rooms_total = 0, snackes_total = 0, drinks_total = 0, broast_total = 0, mutton_total = 0, kabab_total = 0;

    int user_type;
    int userSelection;
    int quantity;
    string admin;
    cout << "\nHELLO ..!,  Enter Your Name : \n";
    cin >> admin;
    cout << "Your Name is : " << admin << "\n";
    cout << "\n\t THE QUANTITY OF ALL ITEMS AVAILABLE HERE\n";
    cout << " Number Of Rooms Available : ";
    cin >> rooms_quantity;
    cout << " Number Of Snacks Available : ";
    cin >> snackes_quantity;
    cout << " Number Of Drinks Available : ";
    cin >> drinks_quantity;
    cout << " Number Of Broast Available : ";
    cin >> broast_quantity;
    cout << " Number Of Mutton Available : ";
    cin >> mutton_quantity;
    cout << " Number Of Kabab Available : ";
    cin >> kabab_quantity;
m:
    cout << " \t\t\t\t\t\t   CHOOSE THE ITEM FROM MENU";
    cout << "\n1) Rooms ";
    cout << "\n2) Snacks  ";
    cout << "\n3) Drinks ";
    cout << "\n4) Broast ";
    cout << "\n5) Mutton ";
    cout << "\n6) Kabab ";
    cout << "\n7) Detail and Information ";
    cout << "\n8) Exit ";

    cout << "\n\t\t\t ENTER THE NUMBER FROM THE MENU \n";
    cin >> userSelection;

    switch (userSelection)
    {
    case 1:
        cout << "\n\n Enter the number of rooms you want ?";
        cin >> quantity;
        if (rooms_quantity - rooms_sold >= quantity)
        {
            rooms_sold = rooms_sold + quantity;
            rooms_total = rooms_total + quantity * 4000;
            cout << "\n\n\t" << quantity << " room/rooms alloted you and price would be " << rooms_total;
            break;
        }
        else
        {
            cout << "\n\n\t Only" << rooms_quantity - rooms_sold << " room/rooms available only in hotel ";
            break;
        }
    case 2:
        cout << "\n\n Enter the number of Snacks you want ?";
        cin >> quantity;
        if (snackes_quantity - snackes_sold >= quantity)
        {
            snackes_sold = snackes_sold + quantity;
            snackes_total = snackes_total + quantity * 500;
            cout << "\n\n\t" << quantity << " room/rooms alloted you and price would be " << snackes_total;
            break;
        }
        else
        {
            cout << "\n\n\t Only " << snackes_quantity - snackes_sold << "snacks available in hotel ";
            break;
        }
    case 3:
        cout << "\n\n Enter the number of Drinks you want ?";
        cin >> quantity;
        if (drinks_quantity - drinks_sold >= quantity)
        {
            drinks_sold = drinks_sold + quantity;
            drinks_total = drinks_total + quantity * 80;
            cout << "\n\n\t" << quantity << " Drinks alloted you and price would be " << drinks_total;
            break;
        }
        else
        {
            cout << "\n\n\t Only" << drinks_total - drinks_sold << " Drinks available in hotel ";
            break;
        }
    case 4:
        cout << "\n\n Enter the number of Broast you want ?";
        cin >> quantity;
        if (broast_quantity - broast_sold >= quantity)
        {
            broast_sold = broast_sold + quantity;
            broast_total = broast_total + quantity * 4000;
            cout << "\n\n\t" << quantity << " Broast alloted you and price would be " << broast_total;
            break;
        }
        else
        {
            cout << "\n\n\t Only" << broast_quantity - broast_sold << " Broast available in hotel ";
            break;
        }
    case 5:
        cout << "\n\n Enter the number of Mutton  you want ?";
        cin >> quantity;
        if (mutton_quantity - mutton_sold >= quantity)
        {
            mutton_sold = mutton_sold + quantity;
            mutton_total = mutton_total + quantity * 5500;
            cout << "\n\n\t" << quantity << " room/rooms alloted you and price would be " << mutton_total;
            break;
        }
        else
        {
            cout << "\n\n\t Only" << mutton_quantity - mutton_sold << " Mutton available only in hotel ";
            break;
        }
    case 6:
        cout << "\n\n Enter the number of Kababs  you want ?";
        cin >> quantity;
        if (kabab_quantity - kabab_sold >= quantity)
        {
            kabab_sold = kabab_sold + quantity;
            kabab_total = kabab_total + quantity * 390;
            cout << "\n\n\t " << quantity << " Kababs alloted you and price would be " << kabab_total;
            break;
        }
        else
        {
            cout << "\n\n\t Only " << kabab_quantity - kabab_sold << " Kababs available  in hotel ";
            break;
        }

    case 7:
        cout << "\n\n\tDetails and Collections Of Rooms";
        cout << "\n\n Total Number of Rooms : " << rooms_quantity;
        cout << "\n\n Number of Rooms Booked : " << rooms_sold;
        cout << "\n\n Remaining Rooms : " << rooms_quantity - rooms_sold;
        cout << "\n\n Total Collection of Rooms in a day : " << rooms_total;

        cout << "\n\n\tDetails and Collections Of Snacks";
        cout << "\n\n Total Number of Snack : " << snackes_quantity;
        cout << "\n\n Number of Snacks Booked : " << snackes_sold;
        cout << "\n\n Remaining Snacks : " << snackes_quantity - snackes_sold;
        cout << "\n\n Total Collection of Snacks in a day : " << snackes_total;

        cout << "\n\n\tDetails and Collections Of Drinks";
        cout << "\n\n Total Number of Drinks : " << drinks_quantity;
        cout << "\n\n Number of Drinks Booked : " << drinks_sold;
        cout << "\n\n Remaining Drinks : " << drinks_quantity - drinks_sold;
        cout << "\n\n Total Collection of Drinks in a day : " << drinks_total;

        cout << "\n\n\tDetails and Collections Of Broast ";
        cout << "\n\n Total Number of Broast : " << broast_quantity;
        cout << "\n\n Number of Broast Booked : " << broast_sold;
        cout << "\n\n Remaining Broast : " << broast_quantity - broast_sold;
        cout << "\n\n Total Collection of Broast in a day : " << broast_total;

        cout << "\n\n\tDetails and Collections Of Kabab ";
        cout << "\n\n Total Number of Mutton : " << mutton_quantity;
        cout << "\n\n Number of Mutton Booked : " << mutton_sold;
        cout << "\n\n Remaining Mutton : " << mutton_quantity - mutton_sold;
        cout << "\n\n Total Collection of Mutton in a day : " << mutton_total;

        cout << "\n\n\tDetails and Collections Of Kabab ";
        cout << "\n\n Total Number of Kabab : " << kabab_quantity;
        cout << "\n\n Number of Rooms Booked : " << kabab_sold;
        cout << "\n\n Remaining Rooms : " << kabab_quantity - kabab_sold;
        cout << "\n\n Total Collection of Rooms in a day : " << kabab_total;
        cout << "\n\n\t\t Total Ammount : "<< rooms_total+snackes_total+drinks_total+broast_total+mutton_total+kabab_total;
        break;

    case 8:
        exit(0);
    default:
        cout << "Please Enter Valid Number of Item ";
    }
    goto m;
}
