#include <iostream>
//นำเข้าไลบรารี่มาตฐานของภาษา C++
using namespace std;
//ประกาศเพื่อใช้ฟังก์ชันในไลบรารี่ของ namespace std
void demo(int v, int &r);
//สร้างฟังชั่น ชื่อ demo รับ ค่า v,&r

int main(){
// ฟังชั่นการทำงานหลัก
    int v = 7;
    //สร้างตัวแปล v เก็บค่า 7
    int r = 7;
    //สร้างตัวแปล r เก็บค่า 7 
    cout << "inside main() " << endl;
    //ส่งออกค่า inside main() แล้วขึ้นบรรทัดใหม่
    cout << "v = " << v << ", address = " << &v << endl;
    //ส่งออกค่า v = ค่าv, address = ที่อยู่ของค่า v แล้วขึ้นบรรทัดใหม่
    cout << "r = " << r << ", address = " << &r << endl;
    //ส่งออกค่า r = ค่าr, address = ที่อยู่ของค่า r แล้วขึ้นบรรทัดใหม่
    demo(v, r);
    //ส่งค่า v,r ไปที่ฟังชั่น demo
    cout << "inside main()--after calling demo()" << endl;
    //ส่งออกค่า inside main()--after calling demo() แล้วขึ้นบรรทัดใหม่
    cout << "v = " << v << ", address = " << &v << endl;
    //ส่งออกค่า v = ค่าv, address = ที่อยู่ของค่า v แล้วขึ้นบรรทัดใหม่
    cout << "r = " << r << ", address = " << &r << endl;
    //ส่งออกค่า r = ค่าr, address = ที่อยู่ของค่า r แล้วขึ้นบรรทัดใหม่
    return 0;
}
void demo(int v, int &r) {
// ฟังชั่น demo
    cout << "inside demo()" << endl;
    //ส่งออกค่า inside main() แล้วขึ้นบรรทัดใหม่
    cout << "v = " << v << ", address = " << &v << endl;
    //ส่งออกค่า v = ค่าv, address = ที่อยู่ของค่า v แล้วขึ้นบรรทัดใหม่
    cout << "r = " << r << ", address = " << &r << endl;
    //ส่งออกค่า r = ค่าr, address = ที่อยู่ของค่า r แล้วขึ้นบรรทัดใหม่
    v = v + 10;
    //ค่า V บวกอีก 10
    r = r + 10;
    //ค่า r บวกอีก 10
    cout << "inside demo()--after changing values " << endl;
    //ส่งออกค่า inside main()--after calling demo() แล้วขึ้นบรรทัดใหม่
    cout << "v = " << v << ", address = " << &v << endl;
    //ส่งออกค่า v = ค่าv, address = ที่อยู่ของค่า v แล้วขึ้นบรรทัดใหม่
    cout << "r = " << r << ", address = " << &r << endl;
    //ส่งออกค่า r = ค่าr, address = ที่อยู่ของค่า r แล้วขึ้นบรรทัดใหม่
}