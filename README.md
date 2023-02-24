# Mod1_Clocks
Displays two clocks (one 12-hour and one 24-hour) that takes input to add hours, minutes, or seconds to both clocks

This project prints two clocks which are initialized to 1:30:15 PM (13:30:15 on the 24-hour clock). Based on menu selections, the user is able to add either one hour, one minute, or one second to both clocks. 

I like how I cut back on redundant code by determining time of day (AM or PM) with a series of 'if' conditional statements in the 'PrintClocks' function. The program looks at what the current 24-Hour clock's hour is; if the hour is between 0 and 11, time of day is set to AM, if it's between 12 and 23 it is set to PM. 

I would enhance my current code by going back in and adding exception catchers to handle any incorrect input. I did what I could with the knowledge that I had at the time of programming this, but I've since learned some better methods of handling exceptions.

I found the 'PrintClocks' function the most difficult to write as it includes the majority of the code. I knew it was going to be a large function since it is in charge of outputting the clocks based on current time values. I found it difficult to avoid writing what I considered to be redundant code as I had to include a large if-else branch to determine the format of the printed clocks. I had to delve back into our school's textbook quite a few times to determine the best way to format the input. Overall, I feel I did a good job but there is always room for improvement as I continue honing my skills.

I will definitely continue working on better ways to incorporate functions and expanding their usefullness within the main function. If I were to redo this project, I'd incoporate classes as well to further organize the code. I tried to keep the code readable and adaptable by keeping similar functions together and "stacking" them in a way that the main function (which calls all other functions) was at the very bottom of the code.
