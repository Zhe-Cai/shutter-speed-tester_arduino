# shutter-speed-tester_arduino
arduino_shutter speed tester_photodiode
use a photodiode module with a digital output pin and a analog output pin
read digital data from pin2  
  
generally usable at slow shutter speed(<1/500),might be a little bit slower than actual value, need further verification
have trouble in capturing high speed shutter, i.e., at 1/1000, the reading is slower than what it actually is  
can only detect actual explosure time at certain shutter position
further optimisation could be adding function to test curtain travel time, i.e., use sensor array rather than single one
proper timing management of codes could be done in further development


results is reliable below 1/250( camera set at 1/60, 1/125, 1/250 and 1/500 respectively),the reading tends to be slower when shutter speed is over 1/500. (this camera should be relatively accurate at 1/500 in reality)
potentially this could be due to slow raise time of sensor module, will look into this issue at later stage.  
![avatar](https://raw.githubusercontent.com/Zhe-Cai/shutter-speed-tester_arduino/master/shutter_tester_results.png)  

<font color="#dd0000">generally an error of 30% (1/3 EV) is acceptable, especially for negative film shooting</font><br />

  
set up is as flollow:  
![avatar](https://raw.githubusercontent.com/Zhe-Cai/shutter-speed-tester_arduino/master/shutter_tester_setup.jpg)  


notice:
A constant light source is required to perform the test, and the results are related with light indensity. Strong light tends to generate a slow reading, but doesn't seems to be a issue at 1/250 or below.
ambient light is troublesome at higher speed, could do some investigation on how to set up a proper light source.
