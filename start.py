import os
import random
import shutil

#Read the needed amount of repetitions and assign it as an integr
txt = open("count.txt","r")
count = txt.read()
count = int(count)
txt.close()

#Create a list of potential directory names
names = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","r","s","t","u","w","y","z","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","R","S","T","U","W","Y","Z"]
txt.close()

#Start the loop for number of times specified in a count.txt file
for i in range (0, count):
    #Create a directory with a given name and place a duplicate of the script inside
    name = random.choice(names)
    os.mkdir(name)
    os.system("chmod -R 777 /home/user/Desktop/Test")
    shutil.copy("/home/user/Desktop/Test/testing.py", name)
    os.system("python3 name/testing.py")

count += 1
count = str(count)
txt = open("count.txt","w")
txt.write(count)
txt.close()
#Closes the running instance








