# G30-Microprocessor

                                                    "COUNTER FROM 0 TO 999"

The counter system main components are:

1. Tiva C board
2. LCD
3. 3 push buttons (increment by 1, decrement by 1, reset to 000)
4. Battery to power all components
5. Power switch (on/off) to enable/disable power of the entire system including Tiva C

The operation mode of push buttons:

1. Increment : While pressing
2. Decrement : On press event
3. Reset     : On release event


The concept of this system can be used in many applications.For example, it can be used to count number of peoplein queue if we replace .
the increment and decrement push buttons with two photo interrupters and based on the number of people in the queue estimate the waiting 
time fora new person who is going to stand in the queue.
