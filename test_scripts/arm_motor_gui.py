from PyQt5 import QtCore, QtGui, QtWidgets
import sys
import serial
class SliderWindow(QtWidgets.QWidget):
    def __init__(self):
        super().__init__()
        self.init_ui()
        self.arduino = serial.Serial(port='COM4', baudrate=9600)
        self.current_val=[]

    def init_ui(self):
        self.setGeometry(300, 300, 1500, 300)
        self.setWindowTitle("Slider Values (m1 - m6)")
        layout = QtWidgets.QVBoxLayout(self)
        self.sliders = []
        slider_names = ["m1", "m2", "m3", "m4", "m5", "m6"]
        for i, name in enumerate(slider_names):
            slider = QtWidgets.QSlider(QtCore.Qt.Horizontal)
            slider.setRange(0, 1800)
            slider.valueChanged.connect(self.slider_changed)
            self.sliders.append(slider)
            layout.addWidget(slider)
            slider_label = QtWidgets.QLabel(name)
            slider_label.setAlignment(QtCore.Qt.AlignRight)
            layout.addWidget(slider_label)
        self.value_label = QtWidgets.QLabel("Slider Values:")
        self.value_label.setAlignment(QtCore.Qt.AlignCenter)
        layout.addWidget(self.value_label)

        self.setLayout(layout)

    def slider_changed(self, value):
        sender = self.sender() 
        index = self.sliders.index(sender)  
        slider_name = ["m1", "m2", "m3", "m4", "m5", "m6"][index]  

        
        self.update_label(f"{slider_name}: {value}")
        print(f"{slider_name}: {value}")

    def update_label(self, text):
        current_values = [str(slider.value()) for slider in self.sliders]
        self.current_val=current_values
        # map_list=[].join(current_values)
        string_data = ','.join(str(i) for i in current_values) + '\n'
        self.arduino.write(bytes(string_data, 'utf-8'))
        print(f"Values:({string_data.encode('utf-8')})")  
        self.value_label.setText(f"Slider Values: ({', '.join(current_values)})")  

if __name__ == "__main__":
    
    app = QtWidgets.QApplication(sys.argv)
    window = SliderWindow()
    # print(window.current_val)
    window.show()
    sys.exit(app.exec_())
