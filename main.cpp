//
//  main.cpp
//  STRING
// var 3
//  Created by Alexander Malachov on 10.02.2023.
//

#include <iostream>
#include <string>
//3 сколько слов в тексте состоит из 6 символов
//int main(){
//    std::string txt;
//    int count = 0, point = 0;
//    std::getline(std::cin, txt);
//    for (int i=0; i < txt.length(); i++){
//        if (txt.at(i) != ' '){
//            if (count == 6){
//                point++;
//            }
//            count++;
//        } else {
//            count = 0;
//        }
//    }
//    std::cout<<"points:"<<point<<std::endl;
//    return 0;
//}

//7 самое длинное слово

//int main(){
//    std::string txt;
//    int i = 0, count=0, max=0, j=0;
//    std::getline(std::cin, txt);
//    while(i < txt.length()){
//        if (txt.at(i) != ' ') {
//            count++;
//            if (count > max){
//            max = count;
//                j = i+1 ;
//            }
//        } else {
//            count = 0;
//        }
//        i++;
//    }
//        i = i - j;
//        while (i < max){
//            std::cout<<txt.at(i);
//        i++;
//        }
//        std::cout<<'\n';
//
//    return 0;
//}

//16 задание
// найти кол во цифр

//int main(){
//    std::string txt;
//    std::getline(std::cin,txt);
//    int i = 0, count = 0;
//    char check;
//    while (i<txt.length()){
//        check = txt.at(i);
//        if (check == '0' ||
//            check == '1' ||
//            check == '2' ||
//            check == '3' ||
//            check == '4' ||
//            check == '5' ||
//            check == '6' ||
//            check == '7' ||
//            check == '8' ||
//            check == '9'){
//            count++;
//        }
//        i++;
//    }
//    std::cout<<"Numbers:"<<count<<'\n';
//    return 0;
//}

//// 21 дан текст заменить все числа на соотвествующие слова
//int main() {
//int le1, le2, le3, le4;
//
//std::string A = "Anyone who drinks 1 should 2 those who 3 the 4.";
//std::string B = "water";
//std::string C = "remember";
//std::string D = "dug";
//std::string F = "well";
//
//A.resize( 55, ' ' );
//
//le1 = A.find("1");
//A.replace(le1, 1, B);
//
//le2 = A.find("2");
//A.replace(le2, 1, C);
//
//le3 = A.find("3");
//A.replace(le3, 1, D);
//
//le4 = A.find("4");
//A.replace(le4, 1, F);
//
//std::cout << A << std::endl;
//}
