import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ComponentAdapter;

public class LightControllerGUI extends JFrame {
    private JPanel mainPanel;
    private JRadioButton blinkRadioButton;
    private JRadioButton leftToRightRadioButton;
    private JRadioButton rightToLeftRadioButton;
    private JButton submitButton;


    public LightControllerGUI(String title) {
        super(title);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setContentPane(mainPanel);
        this.pack();

        submitButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                ArduinoCommunicator controller = new ArduinoCommunicator();
                controller.flashingLights();
            }
        });
    }

    public static void main(String[] args) {
        JFrame frame = new LightControllerGUI("Arduino Controller");
        frame.setVisible(true);
    }

}
