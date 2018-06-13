
# coding: utf-8

# In[1]:


import serial
import matplotlib.pyplot as plt
from drawnow import *


# ### The function below is used to plot the Temperature and Humdity

# In[11]:




def plot_func():
    plt.subplot(1,2,1)
    plt.title("Temperature (*C)")
    plt.ylim(0,50)
    plt.xlabel("Time (sec)")
    plt.plot(data_temperature)
    plt.subplot(1,2,2)
    plt.xlabel("Time (sec)")
    plt.title("Humidity (%)")
    plt.ylim(0,100)
    plt.plot(data_humidity)
    plt.show()


# In[12]:


asd = serial.Serial("/dev/ttyACM1",9600) #/dev/ttyACM0 is my port connected to Arduino it can vary
plt.ion()                                #used to plot live data
data_temperature, data_humidity = [] , []
cnt = 0
while True:
    if asd.inWaiting() > 1:
        myData = asd.readline()
        myData = myData.split()
        data_temperature.append(float(myData[0]))
        data_humidity.append(float(myData[1]))
        drawnow(plot_func)                       
        plt.pause(.000001)                     
        cnt=cnt+1
        if(cnt>50):                            
            data_temperature.pop()             
            data_humidity.pop()

