import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import app.model 1.0

Window {
    id: appWindow
    visible: true
    width: 640
    height: 480
    color: model.color
    title: qsTr("AppWindow")

    AppModel{
        id: model
        onColorChanged: {
            console.log("window color changed to "+colorName+" ("+model.color+")")
        }
    }

    Button{
        id: changeColor
        anchors.centerIn: parent
        text: "Change Color"
        onClicked: {
            model.toggleWindowColor()
        }
    }
}
