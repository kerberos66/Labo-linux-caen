import serial


# Creation connection au port
try:
    #9600 > nombre de bauds
    ser = serial.Serial("COM9", 9600)
except serial.SerialException:
    print("Erreur connection")
    exit()


while True:
    command = input("Command: >>> ")

    command = command.encode('ascii')

    ser.write(serial.to_bytes(command))

    print(ser.readline().decode('ascii'))

