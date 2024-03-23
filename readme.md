# LinuxCalc
LinuxCalc is a simple terminal-based calculator for Linux.
Tested on Debian
## How to install
Copy the code from below and paste it to the terminal.
```
sudo rm -rf LinuxCalc
git clone https://github.com/Pepe-57/LinuxCalc.git
cd LinuxCalc
cd Releases
mkdir build
cd build
cmake ..
make
echo 'alias linuxcalc="~/LinuxCalc/Releases/build/linuxcalc"' >> ~/.bashrc
echo 'alias lcalc="~/LinuxCalc/Releases/build/linuxcalc"' >> ~/.bashrc
```
Run the executable from the build directory.
```
./LinuxCalc
```
The command works after a reboot.
```
linuxcalc
```
or
```
lcalc
```
