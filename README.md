[![GitHub stars](https://img.shields.io/github/stars/Gameye98/attiny85-data-stealer.svg)](https://github.com/Gameye98/attiny85-data-stealer/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/Gameye98/attiny85-data-stealer.svg)](https://github.com/Gameye98/attiny85-data-stealer/network/members)
[![GitHub issues](https://img.shields.io/github/issues/Gameye98/attiny85-data-stealer.svg)](https://github.com/Gameye98/attiny85-data-stealer/issues)
[![GitHub watchers](https://img.shields.io/github/watchers/Gameye98/attiny85-data-stealer.svg)](https://github.com/Gameye98/attiny85-data-stealer/watchers)
[![Arduino](https://img.shields.io/badge/language-Arduino-blue.svg)](https://www.arduino.cc/)
[![Batch](https://img.shields.io/badge/language-Batch-green.svg)](https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/windows-commands)
[![MIT](https://img.shields.io/badge/license-MIT-red.svg)](https://opensource.org/licenses/MIT)
[![BlackHole Security](https://img.shields.io/badge/team-BlackHole%20Security-ocean.svg)](https://github.com/BlackHoleSecurity)
[![Schadenfreude](https://img.shields.io/badge/team-Schadenfreude-ocean.svg)](https://t.me/schdenfreude)
[![Gameye98/DedSecTL](https://img.shields.io/badge/author-Gameye98/DedSecTL-red.svg)](https://github.com/Gameye98)

[![ForTheBadge built-by-developers](http://ForTheBadge.com/images/badges/built-by-developers.svg)](https://github.com/Gameye98)  

[![BlackHole Security](assets/gitbhs.svg)](https://github.com/BlackHoleSecurity)

# attiny85 data stealer  
First thing you want to do is install driver for Digistump which can be found inside the archive named "Digistump.Drivers-1.6.7.zip"  
- Install Arduino IDE   
- After youre done with the installations, open your Arduino IDE  
- Press Ctrl + , to open the menu for additional boards manager urls... input this url:  
```  
https://raw.githubusercontent.com/ArminJo/DigistumpArduino/master/package_digistump_index.json  
```  
- Now open Boards Manager and search for "Digistump AVR Boards" and installed it.  
- Back to boards manager, you`ll find that new option for the board has been appeared  
    - Pick Digistump AVR Boards then pick Digistump  
- Inside the given archive there will be a script that will be the poc in this case named:  
```  
attiny85-netsh-profiles.bat  
```  
- Create telegram bot account by looking for this username on telegram @BotFather  
- After youre done creating one, copy the bot token and then replace $TOKENHERE which can be found inside attiny85-netsh-profiles.bat with your bot token  
- Try get your chat id via this bot `@userinfobot` or you can open this link https://t.me/userinfobot  
- Copy your chat id and then replace $CHAT_ID which can be found inside attiny85-netsh-profiles.bat with the one you copied...  
- You can do anything with the batch script so its not hosted as a plaintext file as a cautious step which you dont want your BOT Token getting stolen  
- (Optional) Im using Bat to Exe Converter which you can find inside the archive where this tutorial is coming from, the source of this converter is:  
```  
https://github.com/tokyoneon/B2E/blob/master/Bat_To_Exe_Converter.zip  
```  
- Quick note for Bat to Exe Converter, remember to Enable UPX Compression  
- Next step is hosting this batch file or exe file if you choose to use the software mentioned above...  
- If you dont have any server to hosting a file, you can try make one with github account and then setup github pages  
- Now this is an important thing you need to remember... attiny85 will have issues during uploading or flashing if the compiled progam is too big which can overload the memory  
- Chech the main.ino, you`ll understand what im trying to tell you when you find a url that ends with /s.exe  
- The /s.exe inside main.ino originally is my attiny85-netsh-profiles.bat which then got converted to .exe and then getting named "s.exe" as for a way to solve the issues with the attiny85 memory  
- After youre done hosting the file and then replace the url inside main.ino with your own  
- If youre in a windows, move attiny-netsh-profiles folder to your desktop and then open main.ino file inside which will automatically open in Arduino IDE and then you can start compiling the .ino file  
- After its done compiling, click upload code... check the message log you can see a notice appear in the log that told you to connect the attiny85 microcontroller with your pc/laptop via usb cable  
- Congrats, youre successfully make a simple, portable and flexible data stealer <3 :) ...  

## requirements
- attiny85  
- server for hosting file or github accounts for github pages  
- telegram bot  
- usb cable  
- arduino ide on your pc  

## credit
Author: Gameye98  
Date: Tue Nov 3 12:08:18 AM 2026  
Team: BlackHole Security, [Schadenfreude](https://t.me/schdenfreude)  
GitHub Account: [Gameye98](https://github.com/Gameye98)  
Telegram Account: [@deletuserbot](https://t.me/deletuserbot)  
