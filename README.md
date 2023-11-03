# Digital-Clock
# Time Management  Application

This is a simple application written in C that offers four time management functionalities:

- Get Current Time
- Set Alarm
- Set Stopwatch
- Set timer
  
FUNCTIONALITIES

GET CURRENT TIME (Option 'a')

This option allows you to see the current time. You can input a custom time in the format hh:mm:ss and watch time progress. Note that there is minimal input validation, so make sure to enter valid parameters.

SET ALARM (Option 'b')

Set an alarm by specifying the hours, minutes, and seconds. The program will continuously update the current time and trigger the alarm when the specified time is reached. Press any key to exit the alarm.

SET STOPWATCH (Option 'c')

This option sets up a stopwatch that continuously updates in the format hh:mm:ss. Use Ctrl+C to stop the stopwatch.

SET TIMER (Option 'd')

Set a countdown timer by specifying the hours, minutes, and seconds. The program will count down and display the remaining time. When the time is up, it will notify you and exit.

NOTE

The code includes a simple clearing of the console using system("cls"). This is specific to Windows systems. If you are using a different operating system, you may need to modify this part of the code.

The program provides basic functionality and serves as an educational example. It may need further improvements for error handling and more precise timing.

Ensure you enter valid input values, as the code does not have extensive input validation.

The sleep(1) function is used for approximate one-second delays. You can adjust this based on your system.

This program is intended for educational purposes and may not be suitable for production environments.

LICENSE

This code is open source, and you are free to use, modify, and distribute it according to the terms of the license.
