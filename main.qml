import QtQuick 2.15
import QtQuick.Window 2.15
import "ui/BottomBar"
import "ui/RightScreen"
import "ui/LeftScreen"


Window {
    width: 1280
    height: 720
    visible: true
    title: qsTr("Tesla infotainment")
    BottomBar{
        id: bottomBar
    }
    RightScreen{
        id:rightScreen
    }
    LeftScreen{
        id:leftScreen

    }



}
