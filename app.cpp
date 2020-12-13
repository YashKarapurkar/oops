#include<iostream>
#include<fstream>
#include<cstring>
#include<stdlib.h>


using namespace std;

class Block{
    private:
        char word[50];
        char meaning[1000];

    public:
        Block(){
            strcpy(word, "word");
            strcpy(meaning, "meaning");
        }

        int enter_data(){
            cout<<"Enter the new word : ";
            cin.getline(word,50);

            cout<<"\nEnter the meaning of the word : ";
            cin.getline(meaning,1000);

            return 0;
        }

        int read_data(){
            cout<<"WORD :- "<<word<<endl;
            cout<<"MEANING :- "<<meaning<<endl;
            return 0;
        }

        int check_word(char* w){
            if(strcmp(word,w)){
                return 0;
            }
            return 1;

        }

}B1;


int input_to_file_A(){
    fstream fio;
    fio.open("A_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_B(){
    fstream fio;
    fio.open("B_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_C(){
    fstream fio;
    fio.open("C_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_D(){
    fstream fio;
    fio.open("D_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_E(){
    fstream fio;
    fio.open("E_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_F(){
    fstream fio;
    fio.open("F_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_G(){
    fstream fio;
    fio.open("G_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_H(){
    fstream fio;
    fio.open("H_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_I(){
    fstream fio;
    fio.open("I_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_J(){
    fstream fio;
    fio.open("J_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_K(){
    fstream fio;
    fio.open("K_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_L(){
    fstream fio;
    fio.open("L_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_M(){
    fstream fio;
    fio.open("M_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_N(){
    fstream fio;
    fio.open("N_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_O(){
    fstream fio;
    fio.open("O_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_P(){
    fstream fio;
    fio.open("P_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_Q(){
    fstream fio;
    fio.open("Q_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_R(){
    fstream fio;
    fio.open("R_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_S(){
    fstream fio;
    fio.open("S_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_T(){
    fstream fio;
    fio.open("T_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_U(){
    fstream fio;
    fio.open("U_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_V(){
    fstream fio;
    fio.open("V_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_W(){
    fstream fio;
    fio.open("W_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_X(){
    fstream fio;
    fio.open("X_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_Y(){
    fstream fio;
    fio.open("Y_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}
int input_to_file_Z(){
    fstream fio;
    fio.open("Z_Dictonary.DAT",ios::app | ios::binary);

    B1.enter_data();

    fio.write((char*)&B1, sizeof(B1));
    fio.close();
    return 0;
}

int input_to_file(){
    char read_ws[50];
    cout<<"Enter the word to be added ";
    cin.getline(read_ws,50);


    int ascii_v;
    ascii_v = tolower(read_ws[0]);
    read_ws[0]=toupper(read_ws[0]);

    switch(ascii_v){
        case(33):
            ascii_v = tolower(read_ws[1]);
            switch(ascii_v){
                case(97):
                    input_to_file();
                    break;
                case(101):
                    exit(0);
                    break;
                default:
                    cout<<"\n\tINVALID Input\n";
                    break;
            }
            break;
        case(97):
            input_to_file_A();
            break;
        case(98):
            input_to_file_B();
            break;
        case(99):
            input_to_file_C();
            break;
        case(100):
            input_to_file_D();
            break;
        case(101):
            input_to_file_E();
            break;
        case(102):
            input_to_file_F();
            break;
        case(103):
            input_to_file_G();
            break;
        case(104):
            input_to_file_H();
            break;
        case(105):
            input_to_file_I();
            break;
        case(106):
            input_to_file_J();
            break;
        case(107):
            input_to_file_K();
            break;
        case(108):
            input_to_file_L();
            break;
        case(109):
            input_to_file_M();
            break;
        case(110):
            input_to_file_N();
            break;
        case(111):
            input_to_file_O();
            break;
        case(112):
            input_to_file_P();
            break;
        case(113):
            input_to_file_Q();
            break;
        case(114):
            input_to_file_R();
            break;
        case(115):
            input_to_file_S();
            break;
        case(116):
            input_to_file_T();
            break;
        case(117):
            input_to_file_U();
            break;
        case(118):
            input_to_file_V();
            break;
        case(119):
            input_to_file_W();
            break;
        case(120):
            input_to_file_X();
            break;
        case(121):
            input_to_file_Y();
            break;
        case(122):
            input_to_file_Z();
            break;
        default:
            cout<<"\n\tINVALID Input\n";
            break;
    }

    return 0;
}

int read_from_file_A(char* ws){
    ifstream fio;
    fio.open("A_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_B(char* ws){
    ifstream fio;
    fio.open("B_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_C(char* ws){
    ifstream fio;
    fio.open("C_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_D(char* ws){
    ifstream fio;
    fio.open("D_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_E(char* ws){
    ifstream fio;
    fio.open("E_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_F(char* ws){
    ifstream fio;
    fio.open("F_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_G(char* ws){
    ifstream fio;
    fio.open("G_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_H(char* ws){
    ifstream fio;
    fio.open("H_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_I(char* ws){
    ifstream fio;
    fio.open("I_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_J(char* ws){
    ifstream fio;
    fio.open("J_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_K(char* ws){
    ifstream fio;
    fio.open("K_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_L(char* ws){
    ifstream fio;
    fio.open("L_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_M(char* ws){
    ifstream fio;
    fio.open("M_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_N(char* ws){
    ifstream fio;
    fio.open("N_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_O(char* ws){
    ifstream fio;
    fio.open("O_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_P(char* ws){
    ifstream fio;
    fio.open("P_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_Q(char* ws){
    ifstream fio;
    fio.open("Q_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_R(char* ws){
    ifstream fio;
    fio.open("R_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_S(char* ws){
    ifstream fio;
    fio.open("S_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_T(char* ws){
    ifstream fio;
    fio.open("T_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_U(char* ws){
    ifstream fio;
    fio.open("U_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_V(char* ws){
    ifstream fio;
    fio.open("V_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_W(char* ws){
    ifstream fio;
    fio.open("W_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_X(char* ws){
    ifstream fio;
    fio.open("X_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_Y(char* ws){
    ifstream fio;
    fio.open("Y_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}
int read_from_file_Z(char* ws){
    ifstream fio;
    fio.open("Z_Dictonary.DAT",ios::in | ios::binary);
    fio.seekg(0,ios::beg);

    while(fio.read((char*)&B1, sizeof(B1))){
        if(B1.check_word(ws)==1){
            B1.read_data();
            break;
        }
    }
    if(B1.check_word(ws)!=1){
        cout<<"Word NOT Found";
    }
    fio.close();
    return 0;
}


int search_in_file(){

    char read_ws[50];
    cout<<"\nEnter the word to be sreached ";
    cin.getline(read_ws,50);


    int ascii_v;
    ascii_v = tolower(read_ws[0]);
    read_ws[0]=toupper(read_ws[0]);


    switch(ascii_v){
        case(33):
            ascii_v = tolower(read_ws[1]);
            switch(ascii_v){
                case(97):
                    input_to_file();
                    break;
                case(101):
                    exit(0);
                    break;
                default:
                    cout<<"\n\tINVALID Input\n";
                    break;
            }
            break;
        case(97):
            read_from_file_A(read_ws);
            break;
        case(98):
            read_from_file_B(read_ws);
            break;
        case(99):
            read_from_file_C(read_ws);
            break;
        case(100):
            read_from_file_D(read_ws);
            break;
        case(101):
            read_from_file_E(read_ws);
            break;
        case(102):
            read_from_file_F(read_ws);
            break;
        case(103):
            read_from_file_G(read_ws);
            break;
        case(104):
            read_from_file_H(read_ws);
            break;
        case(105):
            read_from_file_I(read_ws);
            break;
        case(106):
            read_from_file_J(read_ws);
            break;
        case(107):
            read_from_file_K(read_ws);
            break;
        case(108):
            read_from_file_L(read_ws);
            break;
        case(109):
            read_from_file_M(read_ws);
            break;
        case(110):
            read_from_file_N(read_ws);
            break;
        case(111):
            read_from_file_O(read_ws);
            break;
        case(112):
            read_from_file_P(read_ws);
            break;
        case(113):
            read_from_file_Q(read_ws);
            break;
        case(114):
            read_from_file_R(read_ws);
            break;
        case(115):
            read_from_file_S(read_ws);
            break;
        case(116):
            read_from_file_T(read_ws);
            break;
        case(117):
            read_from_file_U(read_ws);
            break;
        case(118):
            read_from_file_V(read_ws);
            break;
        case(119):
            read_from_file_W(read_ws);
            break;
        case(120):
            read_from_file_X(read_ws);
            break;
        case(121):
            read_from_file_Y(read_ws);
            break;
        case(122):
            read_from_file_Z(read_ws);
            break;
        default:
            cout<<"\n\tINVALID Input\n";
            break;
    }


    return 0;
}


int main(){


    cout<<"\n\tWELCOME to The Dictonary!!\n\n";
    cout<<"To add to the file use \"!add <word>\" and to exit the program use \"!exit\" \n";

    while(true){
        search_in_file();
    }



    return 0;


}
