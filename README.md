# Algo-3.1
C++ merupakan pengembangan dari bahasa C. C++ sering disebut mid level languange karena tingkat kesulitan penggunaannya. Tapi bagi orang awam, bahasa C++ akan terlihat sangat rumit. Sama halnya dengan bahasa pemrograman lain bahasa C++ juga menggunakan serentetan kode secara sistematis yang tidak mungkin mampu dibaca oleh orang awam. Perlu kelihaian untuk membaca bahasa C++.  Sebagai awal dalam mempelajari bahasa ini, biasanya dengan menggunakan "hello world". Setelah itu, tutorial akan membawa kita ke ingakt yang lebih kompleks. Seperti penggunaan logika dan rumus. Misalnya rumus menghitung Luas bangun datar seperti persegi, persegi panjang, segitiga, jajargenjang, trapesium dsb.  Tapi pada kesempatan ini saya cuma akan memperlihatkan penggunaan bahasa C++ untuk menghitung luas persegi panjang. Pada tutorial ini, saya menggunakan compiler yaitu dev C++, anda juga bisa menggunakan compiler lain seperti turbo c++ atau borland c++

    #include <iostream>
    #include <conio.h>
    #include <stdio.h>

    void main()
    {
    float bil1, bil2, bil3;

    cout<<"masukan bilangan pertama : “;
    cin>> bil1;
    cout<<"masukan bilangan kedua   : “;
    cin>> bil2;
    cout<<"masukan bilangan ketiga  : “;
    cin>> bil3;
    if ((bil1>bil2) && (bil1>bil3))
    {
    cout<<"Jadi bilangan yang terbesar adalah bilangan pertama : “<<bil1;
    }
    else if ((bil2>bil1) && (bil2>bil3))
    {
    cout<<"Jadi bilangan yang terbesar adalah bilangan kedua   : “<<bil2;
    }
    else
    {
    cout<<"Jadi bilangan yang terbesar adalah bilangan ketiga  : “<<bil3;
    }
    getch();
    }
    
    
   
   ![img](https://github.com/muhammadyusufalfaqih/Algo-3.1/blob/master/persegi%20panjang.png?raw=true)
   
   ![img](https://github.com/muhammadyusufalfaqih/Algo-3.1/blob/master/persegi%20panjang%20img.png?raw=true)
