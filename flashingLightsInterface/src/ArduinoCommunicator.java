import com.fazecast.jSerialComm.*;

import java.io.PrintWriter;

public class ArduinoCommunicator {
    SerialPort arduino;
    PrintWriter output;

    public ArduinoCommunicator() {
        this.arduino = SerialPort.getCommPort("COM4");

        arduino.setComPortParameters(9600, Byte.SIZE, SerialPort.ONE_STOP_BIT, SerialPort.NO_PARITY);
        arduino.setComPortTimeouts(SerialPort.TIMEOUT_WRITE_BLOCKING, 0, 0);

        arduino.openPort(1000);
        this.output = new PrintWriter(arduino.getOutputStream());
    }

    public void flashingLights() {
        while(true) {
            output.print("blinkTogether\n");
        }

    }

    public void leftToRight() {
        while(true) {
            output.print("lightsLeftToRight\n");
        }
    }
}
