# JIJU Airlines Reservation

![image](https://user-images.githubusercontent.com/67418265/207397089-199c33cd-b5eb-4e92-acc0-02c25907687e.png)

## COMPUTER PROGRAMMING 1 - (ITC111L) 

## TABLE OF CONTENTS
* [I. Introduction](#i-introduction)
* [II. Description of the Project](#ii-description-of-the-project)
* [III. Objectives](#iii-objectives)
* [IV. Significance of the Study](#iv-significance-of-the-study)
* [V. Scope and Delimitations](#v-scope-and-delimitations)
* [VI. Screen Output](#vi-screen-output)
* [VII. Source Code](#vii-source-code)
* [VIII. Conclusion](#viii-conclusion)

### I. Introduction
In the modern information era, the wealth of the world’s information can be accessed through a variety of devices. Technology that was once expensive and limited to only the privileged few has now advanced and become far cheaper (Edwards, 2009). In today’s generation, Innovation is the key in order to survive and prolong the human civilization. Our society has invented many things in terms of technology that benefit human labor and other daily activities. From creating a plan, framework or prototype, all of those will be applied into a system and will help technology improve. As students of the course of Bachelor of Science in Information Technology, we decided to conduct research on how to create a simple airline ticketing system in order to get a grasp on how a ticketing system works and to think of the ways to improve it in the near future. We suggest this method due to the fact that we want to make the user interaction friendly to all users without assistance.

### II. Description of the Project
An airline ticketing system is a program used to make a ticket or receipt of a flight schedule of a passenger. The purpose of this project is to make flight booking faster and more efficient in a way such that the user will only need to type in or input certain values in order to select the flight wanted. This includes the type of trip, destination, date of flight, number of passengers, baggage weight, and the whole receipt. 

### III. Objectives
The main objective of this project is to help passengers book a flight in an efficient way without taking a huge amount of time processing. 

1.	To develop a program using C++ that enables to reserve customers their desired dates and destinations in a certain flight.
2.	To utilize advance programming concepts such as structure, use of advanced functions, use of time library and different loops to implement the system. 

### IV. Significance of the Study
This project will be significant due to the fact that Airline ticketing usually takes a lot of time and causes delayed actions in flights. This program is a way to shorten the time taken and give passengers convenience.  

### V. Scope and Delimitations
The project of the researchers solely focuses only on providing passengers convenience in booking a flight. The user can input a destination and date of flight of their choice which they can print out. It will also provide a receipt containing the price of the said flight.

#### Delimitations of the Study
The study has its own limitations, in which will be discussed: 
The program may vary and can be or cannot be applicable to a company or any other institutions, due to the fact that there are no such existing database, in which the user’s input and logs can be stored. Furthermore, since there are no such existing database, implementaion of security are not required in the program. The study also does not cover the choices of a private, economy and business class flights. Moreover, there are only has 4 choices of Destinations in which all of them are Domestic Flights only, hence there are no International Flight Destinations available. Lastly, the program does not include any other children or senior discounts nor there are any insurance fees also. 

### VI. Screen Output 

#### Figure 1. Welcome Screen
Figure 1 shows the Welcome Screen of the JIJU Airline Reservation, in which the user will use the Arrow Keys (Left and Right) to switch their selction from YES or NO. Upon selecting the choices, by pressing ENTER, it will execute the commands from the that includes the following: 

![image](https://user-images.githubusercontent.com/67418265/207079000-17bc53b4-d27d-457c-b809-4ca6cbb57071.png)


#### Figure 2. Loading Screen 
1.	YES – Continues to the program and will proceed to the Loading Screen

![image](https://user-images.githubusercontent.com/67418265/207080126-c856c224-334e-425e-8734-65770cc19df8.png)

#### Figure 3. Thank You! And Goodbye! 
2.	NO – Displays “Thank You! And Goodbye!” and terminates the program within 10 seconds

![image](https://user-images.githubusercontent.com/67418265/207080286-da565c4b-05f9-4395-b733-a8de14f44dcc.png)

#### Figure 3. Press Any Key to Proceed 
Figure 3 prompts the user to input any keys to proceed on booking their flight.

![image](https://user-images.githubusercontent.com/67418265/207080580-fc16e929-0dd0-4803-8ede-5723d57aaa41.png)

#### Figure 4. Type of Reservation 
Figure 4 shows what type of reservation would the user choose. There are two choices in which the would input, either (1) One-Way or (2) Round Trip. The follwing will execute the commands that the user inputs: 

1. One-Way – Will let the user to input their Onward Flight later

2. Round-Trip – Will let the user to input their Onward Flight and Return Flight later (will mulitply their Ticket Price by 2)

![image](https://user-images.githubusercontent.com/67418265/207081212-48d5a376-e96f-4080-bd8d-4a779e21e25a.png)

#### Figure 5. Destinations
Figure 5 shows the following destinations that the user would choose. There are four choices in which the user would input, either (A) Batanes, (B) Bacolod, (C) Palawan or (D) Davao (Ticket Fee may vary depending on the chosen destination). The following selection will execute add up to the receipt later: 

1. Batanes – Adds P 8650 to the Receipt

2. Bacolod – Adds P 4543 to the Receipt

3. Palawan – Adds P 5882 to the Receipt

4. Davao – Adds P 4096 to the Receipt

![image](https://user-images.githubusercontent.com/67418265/207081374-7cd99231-9d21-4ea5-b241-38cfb423a5ff.png)

#### Figure 6. Onward Flight Schdule - Date
Figure 6 shows the following Onward Flight Schedule that the user would input their desired date of flight. The program then asks the user to input their Year, Month and Day of their flight.

![image](https://user-images.githubusercontent.com/67418265/207083183-75de4dae-86f0-4328-aca4-d116ffbb2baf.png)

#### Figure 7. Onward Flight Schdule - Time
Figure 7 shows the following Onward Flight Schedule that the user would input their desired time of flight. The program then asks the user to input their chosen time slot (If past time, they are unable to pick that time slot).

![image](https://user-images.githubusercontent.com/67418265/207083284-0779423c-5e5a-47a6-a067-1cdf171d152c.png)

#### Figure 8. Return Flight Schdule - Date
Figure 8 shows the following Return Flight Schedule that the user would input their desired date of flight, this will only occur if the chosen Type of Reservation is Round-Trip shown in Figure 4. The program then asks the user to input their Year, Month and Day of their return.

![image](https://user-images.githubusercontent.com/67418265/207083391-4f99682a-aa57-4a98-a916-190a1c0f50aa.png)

#### Figure 9. Return Flight Schdule - Time
Figure 9 shows the following Return Flight Schedule that the user would input their desired time of return. The program then asks the user to input their chosen time slot of return.

![image](https://user-images.githubusercontent.com/67418265/207083489-bd3a29bc-597c-4a0c-80c5-70b379b900ef.png)

#### Figure 10. No. of Passengers
Figure 10 shows that the program asks the user to state how many passengers are there. (The maximum no. of passengers are 1-8 only)

![image](https://user-images.githubusercontent.com/67418265/207083597-52a48e52-22bd-4196-bd68-36fd4b1206a5.png)

#### Figure 11. Passenger/s Info
Figure 11 shows that the program will ask the user to state their Surname, First Name, Middle Initial, Age and Baggage Weight. (It varies depending on the no. of passengers entered shown in Figure 10.)

![image](https://user-images.githubusercontent.com/67418265/207083692-a7be156d-b323-49c5-ad04-df8033bc9490.png)

#### Figure 12. Receipt
Figure 12 shows the overall calculation of their reservation, along with their input Schedule of Flight, Return of Flight, Destination, and Passenger/s Information.

![image](https://user-images.githubusercontent.com/67418265/207084110-da91e06b-3236-4f89-8819-f011d2bc160c.png)

#### Figure 13. Payment
Figure 13 shows that the program then asks the user to input their payment. (Insufficient amount of payment will result as Invalid, furthermore a greater amount of payment will return the change of the user.)

![image](https://user-images.githubusercontent.com/67418265/207083924-f3104940-3cf3-4bd8-bf63-16a212798d3c.png)

#### Figure 14. Would You Like to Book Again?
Figure 14 will then asks the user whether they would like to book again, in which the user will use the Arrow Keys (Left and Right) to switch their selction from YES or NO. Upon selecting the choices, by pressing ENTER, it will execute the commands from the that includes the following: 

1. YES – Continues to the program to book again and will proceed to the Loading Screen shown in Figure 2.

2. NO – Displays “Thank You! And Goodbye!” and terminates the program within 5 seconds

![image](https://user-images.githubusercontent.com/67418265/207084471-a6c7dfaf-159c-4766-9bc9-d54faf5ca601.png)

### VII. Source Code
See: **[Jiju Airlines Reservation.cpp](https://github.com/kyou-nase/Jiju-Airlines-Reservation/blob/master/Jiju%20Airlines%20Reservation.cpp)**

### VIII. Conclusion
Understanding advanced programming concepts in the development of systems is highly recommended especially when using languages such as C++ due to the fact that implementing advanced concepts makes a task to be easily done without any error. Users usually find it helpful as the workload of compiling and computing will be lessened.
 
Airline Reservations usually have a system that is used for booking a flight. However, some systems does not work properly due to the fact that sometimes, developers don’t use advanced techniques to make their program shorter, easier to understand and more efficient, resulting in an even harder work in the debugging process. This is the reason why future programmers need to develop their full potential and use all of the existing features of a language to create a better program.

