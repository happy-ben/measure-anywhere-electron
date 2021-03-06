## Particle electron
### Flashing code to electron
1. Write code in Web-IDE (https://build.particle.io) and 'verify'
2. Download code
3. run ``particle flash --serial firmware.bin`` in the folder where you downloaded the bin

### Accessing your electron from the web
**Make function available as endpoint:**
````
Particle.function("led", setLedStatus)
````
**Make the following request to call the 'led' function:**
````
curl -X POST -H "Content-Type: application/json" -d '{"params":"on"}' "https://api.particle.io/v1/devices/< device id >/led?access_token=< access token >"
````

**Make variable available as endpoint:**
````
 Particle.variable("sensorValue", &sensorValue, INT);
````
**Make the following request to access the 'sensorValue' variable:**
````
curl -X GET "https://api.particle.io/v1/devices/< device id >/sensorValue?access_token=< access token >
````

| placeholder       |  where to find the value                          |
|-------------------|---------------------------------------------------|
| < device id >     | https://console.particle.io/devices               |
| < access token >  | Web-IDE under settings: https://build.particle.io |

### Publish events from electron
This publishes a 'lightStatus' event with the data 'darker' to the particle cloud
````
Particle.publish("lightStatus","darker",60,PRIVATE);
````
Events published to the cloud are logged here: https://console.particle.io/logs

In order to react to events published to the particle cloud, configure a webhook here: https://console.particle.io/integrations

### Helpful links
| description                  | url                    |
|------------------------------|------------------------|
| log HTTP requests            | http://requestb.in     |
| visualize and react to data  | https://thingspeak.com |
| sms & calls API              | https://www.nexmo.com  |
