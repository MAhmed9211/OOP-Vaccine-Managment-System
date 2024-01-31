#include<iostream>
#include<fstream>
#include<string>
using namespace std;

string email = "SuperAdmin";
int passward = 12345;

class Super_Admin
{
public:
    int Super_Admin_passward()
    {
        string temp0;
        int temp1;
        cout << "Enter the Email of Super Admin:\n";
        cin >> temp0;
        cout << "Enter the Passward of Super Admin:\n";
        cin >> temp1;
        if (email == temp0 && passward == temp1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void Creating_Admin()
    {
        int New_Admin_Count;
        system("cls");
        cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 Super Admin Module  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
        cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 Create Module  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
        cout << "How  many Admins you wanted to create???\n\n";
        cin >> New_Admin_Count;
        ofstream emailout("email.txt", ios::app);
        for (int i = 0; i < New_Admin_Count; i++)
        {
            emailout << email << endl;
        }
        emailout.close();
        ofstream passout("Passward.txt", ios::app);
        for (int i = 0; i < New_Admin_Count; i++)
        {
            passout << passward << endl;
        }
        passout.close();
    }
    void file_read()
    {
        ifstream name;
        name.open("name.txt", ios::in);
        if (!name)
        {
            cout << "File not open " << endl;
        }
        else {
            cout << "File open " << endl;
        }
        string n[3];
        for (int i = 0; i < 3 || !name.eof(); ++i)
        {
            name >> n[i];
        }
        for (int i = 0; i < 3; ++i)
        {
            cout << n[i] << " " << endl;
        }
    }

};

class Local_Purchase
{
private:
    int Local_Purchase_Vaccine_Amount, LP_Date, LP_Mouth, LP_Year;
    int LE_Date, LE_Year, LE_Month, Vaccine_Choice, counter = 0;
    char Vac_Type;
    bool input_choice = true;
public:
    int Loacl_Purchases(int a)
    {
        system("cls");
        cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 Local Purchase  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
        cout << "Enter data for your Purchase no # " << a << " .\n\n";
        cout << "Enter the amount of Vaccine you are purchasing.....?\n\n";
        while (input_choice == true)
        {
            cin >> Local_Purchase_Vaccine_Amount;
            if (cin)
            {
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        cout << "\nWhich Vaccine you are Buying....?\n(1) Cinno_Form\t(2) Cino_Vacc\n\n";
        while (input_choice == true)
        {
            cin >> Vaccine_Choice;
            if (Vaccine_Choice == 1)
            {
                Vac_Type = 'F';
                counter++;
                input_choice = false;
            }
            else if (Vaccine_Choice == 2)
            {
                Vac_Type = 'V';
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        cout << "Enter the Date of Purchase....?\n\n";
        while (input_choice == true)
        {
            cin >> LP_Date;
            if (cin)
            {
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        cout << "Enter the Month of Purchase....?\n\n";
        while (input_choice == true)
        {
            cin >> LP_Mouth;
            if (cin)
            {
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        cout << "Enter the Year of Purchase....?\n\n";
        while (input_choice == true)
        {
            cin >> LP_Year;
            if (cin)
            {
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        cout << "Enter the Date of Expiry....?\n\n";
        while (input_choice == true)
        {
            cin >> LE_Date;
            if (cin)
            {
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        cout << "Enter the Month of Expiry....?\n\n";
        while (input_choice == true)
        {
            cin >> LE_Month;
            if (cin)
            {
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        cout << "Enter the Year of Expiry....?\n\n";
        while (input_choice == true)
        {
            cin >> LE_Year;
            if (cin)
            {
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        return counter;
    }

    void write_in_file()
    {
        fstream L_Amount_out, L_TypePurchase_out, LP_Date_out, LP_Month_out, LP_Year_out, LE_Date_out;
        fstream LE_Month_out, LE_Year_out;

        L_Amount_out.open("L_Amount_Purchases.txt", ios::app);
        L_Amount_out << Local_Purchase_Vaccine_Amount;
        L_TypePurchase_out.open("L_Type_Purchases.txt", ios::app);
        L_TypePurchase_out << Vac_Type;
        LP_Date_out.open("L_Date_Purchases.txt", ios::app);
        LP_Date_out << LP_Date;
        LP_Month_out.open("L_Month_Purchases.txt", ios::app);
        LP_Month_out << LP_Mouth;
        LP_Year_out.open("L_Year_Purchases.txt", ios::app);
        LP_Year_out << LP_Year;
        LE_Date_out.open("L_Date_Expire.txt", ios::app);
        LE_Date_out << LE_Date;
        LE_Month_out.open("L_Month_Expire.txt", ios::app);
        LE_Month_out << LE_Month;
        LE_Year_out.open("L_Year_Expire.txt", ios::app);
        LE_Year_out << LE_Year;

        L_Amount_out.close();
        L_TypePurchase_out.close();
        LP_Date_out.close();
        LP_Month_out.close();
        LP_Year_out.close();
        LE_Date_out.close();
        LE_Month_out.close();
        LE_Year_out.close();
    }
};

class International_Purchase
{
private:
    int International_Purchase_Vaccine_Amount, IP_Date, IP_Mouth, IP_Year;
    int IE_Date, IE_Year, IE_Month, Vaccine_Choice, counter = 0;
    char Vac_Type;
    bool input_choice = true;
public:
    int International_Purchases(int a)
    {
        system("cls");
        cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 International Purchase  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
        cout << "Enter data for your Purchase no # " << a << " .\n\n";
        cout << "Enter the amount of Vaccine you are purchasing.....?\n\n";
        while (input_choice == true)
        {
            cin >> International_Purchase_Vaccine_Amount;
            if (cin)
            {
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        cout << "\nWhich Vaccine you are Buying....?\n(1) Cinno_Form\t(2) Cino_Vacc\n\n";
        while (input_choice == true)
        {
            cin >> Vaccine_Choice;
            if (Vaccine_Choice == 1)
            {
                Vac_Type = 'F';
                counter++;
                input_choice = false;
            }
            else if (Vaccine_Choice == 2)
            {
                Vac_Type = 'V';
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        cout << "Enter the Date of Purchase....?\n\n";
        while (input_choice == true)
        {
            cin >> IP_Date;
            if (cin)
            {
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        cout << "Enter the Month of Purchase....?\n\n";
        while (input_choice == true)
        {
            cin >> IP_Mouth;
            if (cin)
            {
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        cout << "Enter the Year of Purchase....?\n\n";
        while (input_choice == true)
        {
            cin >> IP_Year;
            if (cin)
            {
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        cout << "Enter the Date of Expiry....?\n\n";
        while (input_choice == true)
        {
            cin >> IE_Date;
            if (cin)
            {
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        cout << "Enter the Month of Expiry....?\n\n";
        while (input_choice == true)
        {
            cin >> IE_Month;
            if (cin)
            {
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        input_choice = true;
        cout << "Enter the Year of Expiry....?\n\n";
        while (input_choice == true)
        {
            cin >> IE_Year;
            if (cin)
            {
                counter++;
                input_choice = false;
            }
            else if (!cin)
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
                cin.clear();
                cin.ignore();
            }
            else
            {
                cout << "You entered invalid input.\n";
                cout << "Enter again.\n";
            }
        }
        return counter;
    }

    void write_in_file()
    {
        fstream I_Amount_out, I_TypePurchase_out, IP_Date_out, IP_Month_out, IP_Year_out, IE_Date_out;
        fstream IE_Month_out, IE_Year_out;

        I_Amount_out.open("I_Amount_Purchases.txt", ios::app);
        I_Amount_out << International_Purchase_Vaccine_Amount;
        I_TypePurchase_out.open("I_Type_Purchases.txt", ios::app);
        I_TypePurchase_out << Vac_Type;
        IP_Date_out.open("I_Date_Purchases.txt", ios::app);
        IP_Date_out << IP_Date;
        IP_Month_out.open("I_Month_Purchases.txt", ios::app);
        IP_Month_out << IP_Mouth;
        IP_Year_out.open("I_Year_Purchases.txt", ios::app);
        IP_Year_out << IP_Year;
        IE_Date_out.open("I_Date_Expire.txt", ios::app);
        IE_Date_out << IE_Date;
        IE_Month_out.open("I_Month_Expire.txt", ios::app);
        IE_Month_out << IE_Month;
        IE_Year_out.open("I_Year_Expire.txt", ios::app);
        IE_Year_out << IE_Year;

        I_Amount_out.close();
        I_TypePurchase_out.close();
        IP_Date_out.close();
        IP_Month_out.close();
        IP_Year_out.close();
        IE_Date_out.close();
        IE_Month_out.close();
        IE_Year_out.close();
    }
};

class Build_Center
{
public:
    void build_center()
    {
        system("cls");
        cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 Admin Module  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
        int Center_count, * ptr, cheaker = 0;
        fstream center;
        cout << "\n\nHow many cities we have in our country?:\t\t";
        cin >> Center_count;
        ptr = new int[Center_count];
        int num, j = 1;
        for (int i = 0; i < Center_count; ++i)
        {
            cout << "Population in city " << i + 1 << " :";
            cin >> num;
            if (num > 20000)
            {
                while (num > 20000)
                {
                    num = num - 20000;
                    j++;
                }
            }
            cheaker++;
            *ptr = j;
            ptr++;
            j = 1;
        }
        for (int i = 0; i < Center_count; i++)
        {
            ptr--;
        }
        if (Center_count == cheaker)
        {
            center.open("Center_count.txt", ios::out);
            for (int i = 0; i < Center_count; i++)
            {
                center << *ptr << endl;
                ptr++;
            }
            cout << "Centers are Successfully Build.\n\n";
            center.close();
            for (int i = 0; i < Center_count; i++)
            {
                ptr--;
            }
        }
        else
        {
            cout << "Sorry, Centers are not Successfully Build.\n\n";
        }
        system("pause");
    }
    int Center_counter()
    {
        string line;
        int Amount = 0;
        fstream myfile;
        myfile.open("Center_count.txt", ios::in);

        while (myfile >> line)
        {
            Amount++;
        }
        myfile.close();
        return Amount;
    }
};
class FDO : public Build_Center
{
private:
    Build_Center obj;
    int getter;
    void FDO_fun()
    {
        getter = obj.Center_counter();
    }

};
class Admin : public Local_Purchase, public International_Purchase, public Build_Center
{
    int Numer_of_Local_purchases = 0;
    int Numer_of_Internatonal_purchases = 0;
    Local_Purchase* ptr_Local_Purchase;
    International_Purchase* ptr_International_Purchase;
public:
    int admin_counter()
    {
        string line;
        int number_of_lines = 0;
        ifstream myfile("email.txt");
        if (myfile.is_open())
        {
            while (!myfile.eof())
            {
                getline(myfile, line);
                number_of_lines++;
            }
            myfile.close();
        }
        number_of_lines--;
        return number_of_lines;
    }
    void Local_Purchase_fun()
    {
        int collector;
        system("cls");
        cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 Local Purchase  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
        cout << "How many Local Purchases you wanted to make??\n\n";
        cin >> Numer_of_Local_purchases;
        ptr_Local_Purchase = new Local_Purchase[Numer_of_Local_purchases];
        for (int i = 0; i < Numer_of_Local_purchases; i++)
        {
            collector = ptr_Local_Purchase->Loacl_Purchases(i + 1);
            if (collector == 8)
            {
                cout << "Your " << i + 1 << " purchase is succesffuly completed.\n\n";
                ptr_Local_Purchase->write_in_file();
            }
            ptr_Local_Purchase++;
        }
    }
    void International_Purchases_fun()
    {
        int collector;
        system("cls");
        cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 International Purchase  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
        cout << "How many International Purchases you wanted to make??\n\n";
        cin >> Numer_of_Internatonal_purchases;
        ptr_International_Purchase = new International_Purchase[Numer_of_Internatonal_purchases];
        for (int i = 0; i < Numer_of_Internatonal_purchases; i++)
        {
            collector = ptr_International_Purchase->International_Purchases(i + 1);
            if (collector == 8)
            {
                cout << "Your " << i + 1 << " purchase is succesffuly completed.\n\n";
                ptr_International_Purchase->write_in_file();
            }
            else
            {
                cout << "Due to some Error, Your " << i + 1 << " purchase is not sucessfully regestered.\n";
            }
            ptr_International_Purchase++;
        }
    }
};

class citizen
{
public:
    string F_name;
    string L_name;
    string cnic;
    string dob;
    long long int Phone_NO;
    string blood_type;
    string city;
    string state;
    string address;
    void login()
    {
        string c, a;
        bool result = false;
        system("cls");
        cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 CITIZEN  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
        cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 log in  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
        cout << "Enter cnic\t\t";
        cin >> c;
        fstream  cnic_file;
        cnic_file.open("Cnic.txt", ios::in);
        while (cnic_file >> a)
        {
            if (c == a)
            {
                result = true;
            }
        }
        cnic_file.close();
        if (result == true)
        {
            int FDO_Choice = 0;
            cout << "You have successfully log in.\n\n In order to proceed:-\n\n";
            cout << "(1) Main Menu\t\t(2) FDO\n\n";
            cin >> FDO_Choice;
            if (FDO_Choice == 2)
            {

            }
        }
        else
        {
            cout << "You had not sign up till yet so plz move to sign up page to register your self.\n";
            system("pause");
        }
    }
    void signup()
    {
        system("cls");
        int counter = 0;
        cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 CITIZEN  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
        cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 sign up  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
        cout << "Enter the First name:\t\t";
        cin >> F_name;
        if (cin)
        {
            counter++;
        }
        cout << "Enter the Last name:\t\t";
        cin >> L_name;
        if (cin)
        {
            counter++;
        }
        cout << "Enter the cnic:\t\t";
        cin >> cnic;
        if (cin)
        {
            counter++;
        }
        cout << "Enter the address:\t\t";
        cin >> address;
        if (cin)
        {
            counter++;
        }
        cout << "Enter the state:\t\t";
        cin >> state;
        if (cin)
        {
            counter++;
        }
        cout << "Enter the city:\t\t";
        cin >> city;
        if (cin)
        {
            counter++;
        }
        cout << "Enter the phone No:\t\t";
        cin >> Phone_NO;
        if (cin)
        {
            counter++;
        }
        cout << "Enter the Date of birth:\t\t";
        cin >> dob;
        if (cin)
        {
            counter++;
        }
        cout << "Enter the blood type:\t\t";
        cin >> blood_type;
        if (cin)
        {
            counter++;
        }
        if (counter == 9)
        {
            fstream name, cnic_file, address, Date_of_birth, State, Phone_No, City, Blood_type, Doze, Doze_Type;
            name.open("Name.txt", ios::app);
            name << F_name << " " << L_name << endl;
            cnic_file.open("Cnic.txt", ios::app);
            cnic_file << cnic << endl;
            Date_of_birth.open("Date_of_birth.txt", ios::app);
            Date_of_birth << dob << endl;
            State.open("State.txt", ios::app);
            State << state << endl;
            Phone_No.open("Phone_No.txt", ios::app);
            Phone_No << Phone_NO << endl;
            City.open("City.txt", ios::app);
            City << city << endl;
            Blood_type.open("Blood_Type.txt", ios::app);
            Blood_type << blood_type << endl;
            Doze.open("Doze.txt", ios::app);
            Doze << 0 << endl;
            Doze_Type.open("Doze_Type.txt", ios::app);
            Doze_Type << 'N' << endl;

            name.close();
            cnic_file.close();
            address.close();
            Date_of_birth.close();
            State.close();
            Phone_No.close();
            City.close();
            Blood_type.close();
            Doze.close();
            Doze_Type.close();

            cout << "Sign up successfully\n\n";
            system("pause");
        }
        else
        {
            cout << "Sorry your sign up was not successfull.\n\n";
        }
    }
};

int main()
{
    bool programer = true;
    while (programer == true)
    {
        int Module_Choice, collector = 0;
        Super_Admin Super_Admin_Obj;
        Admin Admin_Obj;
        system("cls");
        cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;

        cout << "Enter to Excess the Module.\n";
        cout << "(1) Super Admin\t\t(2) Admin\n\n(3) Citizen\t\t(4) Exit\n\n";
        cin >> Module_Choice;
        if (Module_Choice == 1)
        {
            system("cls");
            cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 Super Admin Module  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
            int admin_count;
            admin_count = Super_Admin_Obj.Super_Admin_passward();
            if (admin_count == 1)
            {
                system("cls");
                cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 Super Admin Module  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
                cout << "You had entered the Super Admin Module.\n";
                cout << "(1) Create\t\t(2) Delete\n(3) Update\t\t(4) Retrieve\n";
                int Super_admin_Choice = -1;
                cin >> Super_admin_Choice;
                if (Super_admin_Choice == 1)
                {
                    int Number_of_Admins;
                    system("cls");
                    cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 Super Admin Module  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
                    Super_Admin_Obj.Creating_Admin();
                }
            }
            else
            {
                system("cls");
                cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 Super Admin Module  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
                cout << "You had Entered Invalid input.\n";
            }
        }
        else if (Module_Choice == 2)
        {
            system("cls");
            cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 Admin Module  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
            int collector;
            collector = Admin_Obj.admin_counter();
            if (collector == 0)
            {
                cout << "Plz move to Super-Admin to make atleast one admin.\n";
            }
            else
            {
                system("cls");
                cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 Admin Module  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
                cout << "(1) Purchase\t\t(2) Vaccine Center\n\n";
                int Admin_choice;
                cin >> Admin_choice;
                if (Admin_choice == 1)
                {
                    system("cls");
                    cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 Admin Module  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
                    int Purchase_Choice = -1;
                    cout << "(1) Local Purchase\t\t(2) International Purchase.\n\n";
                    cin >> Purchase_Choice;
                    if (Purchase_Choice == 1)
                    {
                        Admin_Obj.Local_Purchase_fun();
                    }
                    else if (Purchase_Choice == 2)
                    {
                        Admin_Obj.International_Purchases_fun();
                    }
                }
                else if (Admin_choice == 2)
                {
                    Admin_Obj.build_center();
                }
            }
        }
        else if (Module_Choice == 3)
        {
            int Center_Collector;
            int Citizen_Choice;
            citizen obj;
            int Admin_C;
            Admin obj12;
            Center_Collector = Admin_Obj.Center_counter();
            Admin_C = obj12.admin_counter();
            if (Center_Collector != 0 || Admin_C != 0)
            {
                system("cls");
                cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
                cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3       CITIZEN MODULE       \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
                cout << "Enter according to your needs.\n";
                cout << "(1) log in\t\t(2) sign up\n\n";
                cin >> Citizen_Choice;
                if (Citizen_Choice == 1)
                {
                    obj.login();
                }
                else if (Citizen_Choice == 2)
                {
                    obj.signup();
                }
                else if (!cin)
                {
                    cout << "Invalid input.\n";
                    system("pause");
                }
                else
                {
                    cout << "Invalid input.\n";
                    system("pause");
                }
            }
            else
            {
                system("cls");
                cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
                cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3       CITIZEN MODULE       \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
                cout << "Sorry,Plz Visit Latter some working from the Admin sides left till now.\n\n";
            }
        }
        else if (Module_Choice == 4)
        {
            system("cls");
            cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
            cout << "\n\nYou have successfully terminated the program.\n\nThanks....\n\n";
            programer = false;
        }
        else if (!cin)
        {
            system("cls");
            cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
            cout << "\nInavlid Input !!!!!\n";
            system("pause");
            cin.clear();
            cin.ignore();
        }
        else
        {
            system("cls");
            cout << "\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 VACCINE MANAGEMENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n" << endl;
            cout << "\nInavlid Input !!!!!\n";
            system("pause");
        }
    }

    system("Pause");
    return 0;
}
