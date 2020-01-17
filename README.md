# SmartHome
Dụng cụ: 
ESP8266 v1 :https://bom.to/KSHQZW
Module 2 relay 5V :https://bom.to/rMYqzZ
USB Adapter ESP8266 v1 :https://bom.to/eHzjwm
Hướng dẫn:
Trước khi sử dụng hãy nối USB chuyển đổi như sau:
![alt text](http://i.imgur.com/OBBZopG.jpg)
Sau đó cài đặt arduino IDE trên máy tính
Vào File / Preferences nhập vào chuỗi: http://arduino.esp8266.com/stable/package_esp8266com_index.json 
Vào Tools / Board / Board Manager  cài đặt board ESP8266 version 2.5.0
Tools / Board / Board Manager  cài đặt board Blynk version mới nhất
Lắp ESP8266 vào mạch chuyển đổi rồi cắm vào máy tính
Tải file WiFi_Home_Automation_ESP8266.ino về rồi chỉnh 3 thông số trong file như sau:
ssid: tên wifi nhà bạn
pass: pass wifi nhà bạn
auth: là mã token của blynk, sẽ xuất hiện khi bạn tạo tài khoảng blynk, cách tạo thì google là ra nhé
Sau khi nạp code xong lấy ra rồi nối dây như hình
![alt text](http://i.imgur.com/9d8oLnV.jpg)
Sau đó cấp nguồn cho mạch qua cổng USB
tạo 2 nút trên blynk với 2 pin là: GP0, GP2
nối dây điện 220v với relay(hướng dẫn trên mạng)
vậy là xong! bây giờ bạn có thể điều khiển thiết 
Phần kết nối blynk với google assistant trên mạng cũng có nhiều video hướng dẫn với lại cũng khá rườm rà nên mình sẽ ko nói ở đây,
các bạn có thể tự tìm hiểu thêm
tận hưởng thôi ^^
