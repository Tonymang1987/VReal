# BNO055_IMU_Tracker
Plugin for OSVR that uses an Arduino + BN0055 to do rotational headtracking. 


* Plugin uses [Wills C++ serial library](https://github.com/wjwwood/serial)

# How to use
1. Open BNO055 Scetch in the Arduino IDE, and upload it to your board.
    * Open the serial monitor and set the baudrate to 115200 
2. Place the dll into your osvr-plugins-0 folder.
3. Add the following to your osvr_server_config file, substituting "com4" with the com port your arduino is connected to:
```
"drivers": [{
		"plugin": "BNO055",
		"driver": "BNO055_IMU",
		"params": {
			"port":"com4" //Change this to COM of arduino
		}
	}],
	...
	"aliases": {
		"/me/head": "/BNO055/BNO055_IMU/semantic/IMU"
	}
```

