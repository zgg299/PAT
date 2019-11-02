#include<iostream>
long ChangeToKnut(long Gallen, int Sickle, int Knut) {
    long result;
    result = Knut + 29 * Sickle + 17 * 29 * Gallen;
    return result;
}
 
void ChangeToPrice(long Knut) {
    if (Knut > 0) {
        long Gallen = Knut / (17 * 29);
        long Sickle = (Knut % (17 * 29)) / 29;
        Knut = Knut - (17 * 29 * Gallen) - (29 * Sickle);
        printf("%ld.%ld.%ld", Gallen, Sickle, Knut);
    }
    else if (Knut == 0) {
        printf("0.0.0");
    }
    else
    {
        long Gallen = Knut / (17 * 29);
        long Sickle = (Knut % (17 * 29)) / 29;
        Knut =Knut - (17 * 29 * Gallen) - (29 * Sickle);
        printf("%ld.%ld.%ld", Gallen, abs(Sickle), abs(Knut));
    }
 
}
int main() {
    long Gallen1,Gallen2;
    int Sickle1, Knut1,Sickle2,Knut2;
    scanf("%ld.%d.%d", &Gallen1, &Sickle1, &Knut1);
    scanf("%ld.%d.%d", &Gallen2, &Sickle2, &Knut2);
    long temp1 = ChangeToKnut(Gallen1, Sickle1, Knut1);
    long temp2 = ChangeToKnut(Gallen2, Sickle2, Knut2);
    long result = temp2 - temp1;
    ChangeToPrice(result);
    return 0;
}
