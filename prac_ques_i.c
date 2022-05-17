//A cloth shop during festival seasons offers a discount of 10% on all the purchases made in that shop. The bill amount for a customer is given as Rs. 1000.5. Write a program to calculate and display the discount, amount after discount.

#include <stdio.h>

float discount(float Discount_Percentage, float Cost_Price){
    float Discount_Amount;
    Discount_Amount=(Discount_Percentage*Cost_Price)/100;
    return Discount_Amount;
}

float amount(float Discount_Amount, float Cost_Price){
    float Amount_After_Discount;
    Amount_After_Discount=Cost_Price-Discount_Amount;
    return Amount_After_Discount;
}

int main(){
    float Discount_Percentage,Discount_Amount,Cost_Price,Amount_After_Discount;
    Cost_Price=1000.5;
    Discount_Percentage=10;
    Discount_Amount=discount(Discount_Percentage,Cost_Price);
    Amount_After_Discount=amount(Discount_Amount,Cost_Price);
    printf("Discount Amount=%f\n Cost_Price=%f", Discount_Amount, Amount_After_Discount);
    return 0;
}