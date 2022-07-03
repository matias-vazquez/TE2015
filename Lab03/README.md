<p align="right">
  <img src="../img/teclogo.png">
</p>

# **Laboratory 3. I/O peripheral drivers**

## **OBJECTIVES**
* Control an 16x2 LCD display 
* Control a 4x4 matrix keypad

## **PRE-LAB WORK**
| COMMAND | D7 | D6 | D5 | D4 | D3 | D2 | D1 | D0 | HEX |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
Clear display           | 0 | 0 | 0 | 0     | 0     | 0     | 0     | 0 | 01        |
Display & Cursor Home   | 0 | 0 | 0 | 0     | 0     | 0     | 1     | X | 02 or 03  |
Character Entry Mode    | 0 | 0 | 0 | 0     | 0     | 1     | 1/D   | S | 04 or 07  |
Display ON/OFF & Cursor | 0 | 0 | 0 | 0     | 1     | D     | U     | B | 08 or 0F  |
Display/Cursor Shift    | 0 | 0 | 0 | 1     | D/C   | R/L   | X     | X | 10 or 1F  |Function Set            | 0 | 0 | 1 | 8/4   | 2/1   | 10/7  | X     | X | 20 or 3F  |
Set CGRAM Address       | 0 | 1 | A | A     | A     | A     | A     | A | 40 or 7F  |
Set Display Address     | 1 | A | A | A     | A     | A     | A     | A | 80 or FF  |


## __EXERCISE 1: DISPLAY YOUR NAME AND STUDENT ID__
1. Download file LCD_test.hex from the repository.


## __EXERCISE 2: 8-BIT CALCULATOR__


## __DELIVERABLES__
1. Record a video (__3 minutes maximum__) showing your expansion board running exercises 1, 2 and 3 of this lab. It is mandatory that for each exercise, each team member explains one of the following three topics:
   1. The code in ``main(void)`` function of ``main.c``
   2. The configuration settings using MCC
   3. The hardware setup
Your video must be uploaded to your favorite video platform (YouTube, TikTok, Instagram, etc.) and you will only have to submitt the link to it the corresponding Canvas activity. __Make sure to set your video as Private, so only people with the link to it can watch it.__

2. Push your complete MPLAB project folder on a GitHub repository and share the link on the comments section of your video post page. Consider that the Canvas activity corresponding to this laboratory will only allow external link entries, thus no other way of reporting your work is possible.

3. Aswer the quiz on Canvas corresponding to Laboratory 2. This quiz is individual and you have three chances to get the maximum score as possible. This quiz is set to be available for three days after the lab session is carried out (_If the lab session finished Monday at 5 pm, quiz is due Thursday 5 pm_). __No extensions will be conceded__. 

## __EVALUATION__ [![Generic badge](https://img.shields.io/badge/Submit-Laboratory_3-blue.svg?style=flat&logo=appveyor)](https://www.digikey.com.mx/es/articles/why-how-to-use-serial-peripheral-interface-simplify-connections-between-multiple-devices)

