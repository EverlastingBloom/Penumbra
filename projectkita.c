#include <stdio.h>

int cek_pin(int pin){
    int pin_benar = 1234;
    if(pin == pin_benar) return 1;
    else return 0;
}

int tarik_saldo(int *User_saldo_wd, int *user_saldo_wd_selection){
    int tarik_saldo_pengurangan = *User_saldo_wd - *user_saldo_wd_selection;
    if(tarik_saldo_pengurangan, *user_saldo_wd_selection < 0){
        printf("Error");
        return 0;
    } else{
        return tarik_saldo_pengurangan;
    }
}

int main(){
    int InputUser = 0;
    char Menu[200] = "Jedela Opsi\n 1. Cek Saldo\n 2. Tarik Tunai.\n 3. Exit\n";
    printf("Masukan PIN: ");
    scanf("%d", &InputUser);
    
    if(cek_pin(InputUser) == 1){
        printf("%s", Menu);
    } else {
        printf("PIN Salah");
        return 0;
    }
    
    int User_Selection_Window = 0;
    int User_saldo = 100000;
    int user_wd = 0;
    int sisa_saldo;
    
    while(User_Selection_Window != 1 && User_Selection_Window != 2 && User_Selection_Window != 3){
        printf("Input: ");
        scanf("%d", &User_Selection_Window);
    }
    
    if(User_Selection_Window == 1){
        printf("Saldo Bank: %d", User_saldo );
    }
    
    
    if(User_Selection_Window == 2){
        printf("Masukan Input: ");
        scanf("%d", &user_wd);
        sisa_saldo = tarik_saldo(&User_saldo, &user_wd);
        if(sisa_saldo == 0){
            return 0;
        }
        printf("Sisa saldo: %d", sisa_saldo);
    }
    
    if(User_Selection_Window == 3){
        printf("Thank you for using our service");
        return 0;
    }
    
    return 0;
}

/*  

int User_Selection = 0;
int User_Saldo = 10000000;
printf("Input: ");
scanf("%d\n", &User_Selection);
if(User_Selection == 1){
    printf("%d\n", User_Saldo);
    } else{
        printf("Jedela Opsi\n 1. Cek Saldo\n 2. Coming Soon!");
        }
        
        */
       
       /*
       
       if(cek_saldo(User_Selection_Window) == 1){
        printf("%d\n", User_saldo);
        } else {
            printf("Input salah!.\n");
            }
tarik_saldo(User_saldo - user_wd);

*/


/*

int cek_saldo(int User_selection){
    if(User_selection == 1) return 1;
    else return 0;
}
    
*/