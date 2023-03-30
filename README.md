# DroneCAN

### Sam Log
*29/03/23*
- Downloading and testing DroneCAN GUI tool 
- Setting up Github repositories
- Researching best ways to get started developing DroneCAN for STM32
- Joined DroneCAN Discord
*30/03/23*
- Researching DroneCAN documentation
- Writing introduction README



# What is DroneCAN?
DroneCAN (previously known as UAVCAN) is a modern, light-weight, decentralised peer network aimed at UAV's, robotics and space applications. https://github.com/dronecan  

## Where does DroneCAN fit within the serial protcol space
![serial-history](/images/serial-history.png "Serial Protocol History")
*Credit https://zubax.com/technologies/cyphal*

## DroneCAN transport technologies
DroneCAN supports various transport interface including CAN, Ethernet, Serial... 

## DroneCAN network structure
DroneCAN is a decrentralised peer network where each peer (node) can speak with every other peer
on the network through a publish/subscribe architecture. Each peer has a unique numeric ID (known as the peer ID).

### DroneCAN types of communication
DroneCAN nodes supports 2 types of communication:
- *Message broadcasting* - The primary method of data exchange with publish/subscribe semantics.
- *Service invocation* - The communication method for peer-to-peer request/response interactions.



# DroneCAN support
## ## DroneCAN tutorials
https://dronecan.github.io/Implementations/Libuavcan/Tutorials/  

## Official software libraries
### Official DroneCAN C library (libcanard)
https://github.com/dronecan/libcanard 

### Official DroneCAN Python library (pyuavcan)


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