###Particle electron
##Flashing code to electron
1. Write code in Web-IDE (https://build.particle.io) and 'verify'
2. Download code
3. run ``particle flash --serial firmware.bin`` in the folder where you downloaded the bin

###Accessing your electron from the web
Make the following request to call the 'led' function:
````
curl -X POST -H "Content-Type: application/json" -H "Cache-Control: no-cache" -d '{"params":"on"}' "https://api.particle.io/v1/devices/< device id >/led?access_token=< access token >"
````

< device id > can be found here: https://console.particle.io/devices

< access token > can be found in the Web-IDE under settings: https://build.particle.io

