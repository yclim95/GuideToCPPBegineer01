#include <iostream>

using namespace std;

//Function Declaration
int calculateDiscount(char memberS, int code);

//Global variable
#define  CODE1 1213
#define  CODE2  1516
#define  PRICE1 5500
#define  PRICE2  3740
#define  DISCOUNTM 0.3
#define  DISCOUNTNM  0.1

int main()
{
    //Declaration
    char memberS = ' ';
    int code = 0,  originalPrice = 0;
    float discountRate = 0.0;

    //Prompt & Read
    cout << "(M=member | N=non-member)" << endl;
    cout << "Please enter the membership status: ";
    cin >> memberS;

    //Validation
    while (memberS != 'M' && memberS != 'N')
    {
        cout << "Invalid status!" << endl;
        cout << "Please enter the correct status: ";
        cin >> memberS;
    }

    cout << "(Item code = 1213 / 1516)" << endl;
    cout << "Please enter the item code: ";
    cin >> code;

    //Validation
    while (code != CODE1 && code != CODE2)
    {
        cout << "Invalid code!" << endl;
        cout << "Please enter the correct code: ";
        cin >> code;
    }

     switch (code)
    {
        case CODE1:
            originalPrice = PRICE1;
            discountRate = (memberS == 'M') ? DISCOUNTM : DISCOUNTNM;
            break;

        case CODE2:
            originalPrice = PRICE2;
            discountRate = (memberS == 'N') ? DISCOUNTM : DISCOUNTNM;
            break;

    }//ENDof switch

    //Display
    cout << "\n---------------- RECEIPT ----------------" << endl;
    cout << "Membership status: " << memberS << endl;
    cout << "Item code: " << code << endl;
    cout << "Discount rate: " << discountRate*100 << "%" << endl;
    cout << "Original price: RM" << originalPrice << endl;
    cout << "New price: RM" << calculateDiscount(memberS,code) << endl;
    cout << "\n-----------------------------------------" << endl;

    return 0;
}

int calculateDiscount(char memberS, int code)
{
    int totalPrice = 0;

    //Member Price
    if (memberS == 'M')
    {
        if(code == CODE1)
        {
            totalPrice = PRICE1 - (PRICE1 * DISCOUNTM);
        }
        else
        {
            totalPrice = PRICE2 - (PRICE2 * DISCOUNTM);
        }
    }//ENDof If

    //Non-Member Price
    else
    {
        if(code == CODE1)
        {
            totalPrice = PRICE1 - (PRICE1 * DISCOUNTNM);
        }
        else
        {
            totalPrice = PRICE2 - (PRICE2 * DISCOUNTNM);
        }
    }//ENDof Else

    return totalPrice;
}
