# install ino
wget http://downloads.arduino.cc/arduino-1.5.6-r2-linux64.tgz
ls -alF
tar -xvf arduino-1.5.6-r2-linux64.tgz
sudo mv arduino-1.5.6-r2/ /usr/local/share/arduino
sudo apt-get install aptitude
sudo aptitude update && sudo aptitude -y install ia32-libs
git clone -b ide1.5x https://github.com/justonia/ino.git
cd ino && sudo make install && cd ../
sudo pip install jinja2
sudo pip install pyserial
pwd
