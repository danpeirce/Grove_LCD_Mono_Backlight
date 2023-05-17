Grove - LCD Mono Backlight for ESP-32
---------------------------------------------------------

[Grove-16x2 LCD](https://wiki.seeedstudio.com/Grove-16x2_LCD_Series/)


![Grove - LCD Monochrome Backlight](https://www.seeedstudio.com/blog/wp-content/uploads/2020/01/main.jpg)

## This Version of the Grove Library was altered to work with the ESP32.

The Grove - Monochrome Backlight LCDs use I2C as the communication method with a microcontroller. Only two pins required for data exchange. In addition, Grove - LCD Monochrome Backlight supports user-defined characters. 

In this fork references to RGB and colour have been removed. Note that the LCDs with a monochrome backlight are less expensive.

## Usage:
This is an Arudino Library, that can be used with the ESP32. It include a .h file, a .cpp file and some examples. Through these examples, you can quickly master the use of Grove - LCD RGB Backlight.

The in the following, we will introduce some functions which are used very intuitively. 


### Initialization
Before we use this lcd, we should initialize it. You can use this function:

    lcd.begin(16, 2, 4, 5);

This means that this lcd has 16 columns and 2 rows and uses the I2C-Connection with pins GPIO4 as SDA and pin GPIO 5 as SCL.


### Clear Display

You can clear the display by this function:

    void clear();

### Turn on and turn off display

    void noDisplay();			// turn off display
    void display();				// turn on display

### Blink

    void noBlink();
    void blink();

### Cursor

    void noCursor();
    void cursor();

### Blink LED Backlight

    void noBlinkLED();
    void blinkLED();


For more information, please refer to [wiki page](http://wiki.seeedstudio.com/Grove-LCD_RGB_Backlight/).

    
----

This software is written by loovee([luweicong@seeedstudio.com](luweicong@seeedstudio.com "luweicong@seeedstudio.com")) for seeed studio<br>
and is licensed under [The MIT License](http://opensource.org/licenses/mit-license.php). Check License.txt for more information.<br>

Contributing to this software is warmly welcomed. You can do this basically by<br>
[forking](https://help.github.com/articles/fork-a-repo), committing modifications and then [pulling requests](https://help.github.com/articles/using-pull-requests) (follow the links above<br>
for operating guide). Adding change log and your contact into file header is encouraged.<br>
Thanks for your contribution.

Seeed Studio is an open hardware facilitation company based in Shenzhen, China. <br>
Benefiting from local manufacture power and convenient global logistic system, <br>
we integrate resources to serve new era of innovation. Seeed also works with <br>
global distributors and partners to push open hardware movement.<br>



[![Analytics](https://ga-beacon.appspot.com/UA-46589105-3/Grove_LCD_RGB_Backlight)](https://github.com/igrigorik/ga-beacon)



