# shutter-speed-tester_arduino
arduino_shutter speed tester_photodiode
use a photodiode module with a digital output pin and a analog output pin
read digital data from pin2  
  
generally usable at slow shutter speed(<1/500),might be a little bit slower than actual value, need further verification
have trouble in capturing high speed shutter, i.e., at 1/1000, the reading is slower than what it actually is  
can only detect actual explosure time at certain shutter position
further optimisation could be adding function to test curtain travel time, i.e., use sensor array rather than single one
proper timing management of codes could be done in further development
