#include <stdio.h>
int N_CALCULATIONS, i;
int attkLvl, oppLvl, oppArmor;
float baseAttack, damageReduction, netDamage, damageDeficit;
const float WORTH_THRESHOLD = 150.0;
void getInput();

int main() {
    scanf("%d", &N_CALCULATIONS);
    
    for (i = 0; i < N_CALCULATIONS; i++) {
        getInput();
    }
    return 0;
}

void getInput() {
    scanf("%d %d %d", &attkLvl, &oppLvl, &oppArmor);
    baseAttack = attkLvl * 10.0;
    
    if (oppArmor < 50) {
        damageReduction = 0.20; 
    } else {
        damageReduction = 0.40; 
    }

    netDamage = baseAttack * (1.0 - damageReduction);
    if (netDamage >= WORTH_THRESHOLD) {
        printf("SUCCESS! Net Damage: %.2f\n", netDamage);
    } else {
        damageDeficit = WORTH_THRESHOLD - netDamage;
        printf("FAIL. Deficit: %.2f\n", damageDeficit);
    }
}