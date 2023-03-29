# DroneCAN

### Sam Log
29/03/23
- Downloading and testing DroneCAN GUI tool 
- Setting up Github repositories
- Researching best ways to get started developing DroneCAN for STM32
- Joined Discord

## Where does DroneCAN fit within the serial protcol space
![serial-history](/images/serial-history.png "Serial Protocol History")
*Credit https://zubax.com/technologies/cyphal*

## DroneCAN tutorials
https://dronecan.github.io/Implementations/Libuavcan/Tutorials/ 

## Main DroneCAN library 
https://github.com/dronecan/libcanard 

## DroneCAN GUI tool
https://github.com/DroneCAN/gui_tool 

### DroneCAN GUI tool Ubuntu instructions
```
sudo apt-get install -y python3-pip python3-setuptools python3-wheel
sudo apt-get install -y python3-numpy python3-pyqt5 python3-pyqt5.qtsvg git-core
sudo pip3 install git+https://github.com/DroneCAN/gui_tool@master
```
^^ Tested working on Ubuntu Parallels ARM64 29/03/23 SW

```
### DroneCAN GUI tool MacOS instructions (FAILED ON M1 IGNORE)
1. Download and install homebrew from https://brew.sh 
2. Execute the following commands:
```
    brew install python3
    brew postinstall python3
    arch -arm64 brew install pyqt@5
    arch -arm64 pip3 install git+https://github.com/DroneCAN/gui_tool@master
    dronecan_gui_tool
```
```