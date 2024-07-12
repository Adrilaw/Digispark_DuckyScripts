![il_fullxfull 3830095284_6wwq](https://github.com/Adrilaw/Digispark_DuckyScript/assets/65346144/8cfb1fb1-f485-42e1-8913-d8977d933bd6)



# Note
The following scripts were tested on windows 10/11 machine


# Digispark_DuckyScript
This is a set of hand-written DigiSpark sketches for the Arduino IDE that utilize the DigiKeyboard.h and DigiKeyboardFr.h library making the DigiSpark to act as a keyboard and execute a variety of actions. The DigikeyboardFr.h is the libary for the french keyboard watch https://www.youtube.com/watch?v=PYugCE4A6js to know how to install it. If you have found a USB Rubber Ducky scipt that you want to convert to a DigiSpark sketch, you can go to https://naheel.xyz/ducky2digi/ and your paste ducky script and convert it to digispark.

# Setting Up Digispark in Arduino IDE
To program the Digispark board using Arduino IDE, follow these steps:

Open Arduino IDE:

Launch Arduino IDE on your computer.
Open Preferences:

Go to File > Preferences (Windows) or Arduino > Preferences (macOS).
Add Board Manager URL:

Paste the following URL into the Additional Board Manager URLs field:
bash
Copy code
https://raw.githubusercontent.com/ArminJo/DigistumpArduino/master/package_digistump_index.json
Click OK:

Click OK to save the preferences.
Open Board Manager:

Navigate to Tools > Board > Boards Manager.
Install Digistump AVR Boards:

Search for Digistump AVR in the Boards Manager search bar.
Select Digistump AVR Boards and click Install.
Select Digispark Board:

Once installed, navigate to Tools > Board and select Digispark (Default - 16.5MHz).
Select Processor:

Choose the appropriate Processor (e.g., ATtiny85).
Set Clock:

Set the Clock to Internal 16.5MHz for Digispark (Default - 16.5MHz) boards.
Upload Configuration:

Connect your Digispark board to your computer via USB.
You're now ready to upload sketches to your Digispark board using Arduino IDE!

# Scripts Descriptions
 • Revershell_Win: Opens a powercat reverse shell from a Windows machine to the host NOTE: Edit script to desire ip addr and port
 
 • RickRoll: Plays Never Gonna Give you up song while performing a fake windows update
 
 • WinSpeaks: Opens a powershell and makes your computer speak 
 
 • WinUAC_Killer: Opens your computer windows defender and turns it off acts like a human

 • WinPayloadExecuter: Runs powershell as admin and downloads your payload from webserver and execute it  NOTE: Edit the url to your desire place
 


# Sources
•USB Rubber Ducky Documentation by hak5darren: https://github.com/hak5/usbrubberducky-payloads/tree/master/payloads
 
•Digistump DigiSpark Documentation: https://github.com/digistump/DigisparkArduinoIntegration/blob/master/libraries/DigisparkKeyboard/DigiKeyboard.h
 
•DuckyScript Converter: https://github.com/Naheel-Azawy/ducky2digi / https://naheel.xyz/ducky2digi/


# License
Digispark_DuckyScript is licensed under the [MIT License](LICENSE) to promote open collaboration and innovation in the realm of HID security testing.


# WARNING!
Im not responsible for the misuse of the following script be ethical.
