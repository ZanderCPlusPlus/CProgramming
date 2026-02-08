#include <iostream>
#include <string>

void reverseVowels(std::string &s);
void reverse(std::string &s);
void helper1(std::string &s, int n, int m);
void helper2(std::string &s, int n, int m);

int main(void) {
    std::string s("01 - 40\n:sArutciL\n)2.11 retpihC( sceseB ratneoP ,)7.21 ,6.21(sritcoV ,)7 ratpehC( syurri ,)6-ritpohC( snuetcneF ,)5-ratpahC( spaeL ,)4-ritpehC( sgnertS dne sratcurihC\n:sratpohC kiubtxeT\n)doksa ab llaw snuetsioq01( .skrim 01 :skreM lateT\n.setonom 02 raf ,sselCgnarad ,)yedsandiW( 6202/11/20 :ameT & otoD\n.ssalc yedsundiW roa ne 2 zAaQ avehet gnoog ire aw ,ridnamer kceuq e");
    reverseVowels(s);
    reverse(s);
    std::cout << s << std::endl;
    return 0;
}

void reverseVowels(std::string &s){
    helper2(s, 0, s.size());
}
void helper2(std::string &s, int n, int m){
    if(n == m || m-n == 1){
        return;
    }
    bool state1 = false;
    if(s[n] == 'a' || s[n] == 'A' || s[n] == 'e' || s[n] == 'E' || s[n] == 'i' || s[n] == 'I' || s[n] == 'o' || s[n] == 'O' || s[n] == 'u' || s[n] == 'U'){
        state1 = true;
    }
    bool state2 = false;
    if(s[m] == 'a' || s[m] == 'A' || s[m] == 'e' || s[m] == 'E' || s[m] == 'i' || s[m] == 'I' || s[m] == 'o' || s[m] == 'O' || s[m] == 'u' || s[m] == 'U'){
        state2 = true;
    }
    if(state1 == true && state2 == true){
        char temp = s[n];
        s[n] = s[m];
        s[m] = temp;
        helper2(s,n+1,m-1);
    }
    else if(state1 == false && state2 == true){
        helper2(s, n+1, m);
    }
    else{
        helper2(s,n,m-1);
    }

}
void reverse(std::string &s){
    helper1(s,0,s.size()-1);
}
void helper1(std::string &s, int n, int m){
    if(n==m || m-n == 1){
        return;
    }
    char temp = s[n];
    s[n]=s[m];
    s[m]=temp;
    helper1(s,n+1,m-1);
}