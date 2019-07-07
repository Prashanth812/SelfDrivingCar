Create a virtual environment so that it does not overlap with other packages
conda create -n yourenvname python=x.x anaconda
activate yourenvname
install pip-conda install -c anaconda pip
install numpy-pip install numpy
install scikitlearn-pip install scikit-learn
install scipy-pip install scipy
install pyqt5-conda install pyqt
install pyserial-pip install pyserial


for driving.Follow the procedure
1.first run testtrack.py.Use the arrowkeys properly to run.Install IPwebcam in your phone.This will generate an IPaddress for your phone.Allow bluetooth module to get paired with PC and it will generate a COM port number
2.Then run train_model.py
3.Finally here we can witness our own autonomous car do the trick.Run autonomous.py.