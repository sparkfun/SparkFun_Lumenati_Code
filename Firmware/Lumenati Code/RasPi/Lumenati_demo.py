#This is demonstration code for the Lumenati line of APA102c boards,
#specifically using (4) 90L boards surrounding one 8-pack board.

import time

from SFE_Lumenati import set_LED_quantity, WriteLEDs, set_LED

#Set up array, 20 LEDs
set_LED_quantity(20)

#Delay duration
wait = 0.15

#Global brightness
brightness = 15 #range is 0-31


try:
    while True:

        for y in range (5):
            
            #center, white
            set_LED(0,25,25,25,brightness)

            #inner ring, red
            for x in range (7):
                set_LED(x+1,25,0,0,brightness)

            #outer ring, white
            for x in range (12):
                set_LED(x+8,25,25,25,brightness)

            #Write to the LEDs and wait
            WriteLEDs()
            time.sleep(wait)

            #center, red
            set_LED(0,25,0,0,brightness)

            #inner ring, white
            for x in range (7):
                set_LED(x+1,25,25,25,brightness)
            
            #outer ring, red
            for x in range (12):
                set_LED(x+8,25,0,0,brightness)

            #Write to the LEDs and wait                               
            WriteLEDs()
            time.sleep(wait)

        for y in range (5):
            
            #center, yellow
            set_LED(0,25,25,0,brightness)

            #inner ring, blue
            for x in range (7):
                set_LED(x+1,0,0,25,brightness)

            #outer ring, yellow
            for x in range (12):
                set_LED(x+8,25,25,0,brightness)

            #Write to the LEDs and wait
            WriteLEDs()
            time.sleep(wait)

            #center, blue
            set_LED(0,0,0,25,brightness)

            #inner ring, yellow
            for x in range (7):
                set_LED(x+1,25,25,0,brightness)
            
            #outer ring, blue
            for x in range (12):
                set_LED(x+8,0,0,25,brightness)

            #Write to the LEDs and wait                           
            WriteLEDs()
            time.sleep(wait)


except KeyboardInterrupt:
    pass


