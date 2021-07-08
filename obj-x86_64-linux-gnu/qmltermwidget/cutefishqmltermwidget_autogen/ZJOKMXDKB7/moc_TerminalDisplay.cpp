/****************************************************************************
** Meta object code from reading C++ file 'TerminalDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../qmltermwidget/lib/TerminalDisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerminalDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Konsole__TerminalDisplay_t {
    QByteArrayData data[108];
    char stringdata0[1497];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Konsole__TerminalDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Konsole__TerminalDisplay_t qt_meta_stringdata_Konsole__TerminalDisplay = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Konsole::TerminalDisplay"
QT_MOC_LITERAL(1, 25, 16), // "keyPressedSignal"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 10), // "QKeyEvent*"
QT_MOC_LITERAL(4, 54, 1), // "e"
QT_MOC_LITERAL(5, 56, 11), // "mouseSignal"
QT_MOC_LITERAL(6, 68, 6), // "button"
QT_MOC_LITERAL(7, 75, 6), // "column"
QT_MOC_LITERAL(8, 82, 4), // "line"
QT_MOC_LITERAL(9, 87, 9), // "eventType"
QT_MOC_LITERAL(10, 97, 23), // "changedFontMetricSignal"
QT_MOC_LITERAL(11, 121, 6), // "height"
QT_MOC_LITERAL(12, 128, 5), // "width"
QT_MOC_LITERAL(13, 134, 24), // "changedContentSizeSignal"
QT_MOC_LITERAL(14, 159, 16), // "configureRequest"
QT_MOC_LITERAL(15, 176, 8), // "position"
QT_MOC_LITERAL(16, 185, 21), // "overrideShortcutCheck"
QT_MOC_LITERAL(17, 207, 8), // "keyEvent"
QT_MOC_LITERAL(18, 216, 5), // "bool&"
QT_MOC_LITERAL(19, 222, 8), // "override"
QT_MOC_LITERAL(20, 231, 15), // "isBusySelecting"
QT_MOC_LITERAL(21, 247, 4), // "busy"
QT_MOC_LITERAL(22, 252, 15), // "sendStringToEmu"
QT_MOC_LITERAL(23, 268, 11), // "const char*"
QT_MOC_LITERAL(24, 280, 13), // "copyAvailable"
QT_MOC_LITERAL(25, 294, 9), // "available"
QT_MOC_LITERAL(26, 304, 12), // "termGetFocus"
QT_MOC_LITERAL(27, 317, 13), // "termLostFocus"
QT_MOC_LITERAL(28, 331, 10), // "notifyBell"
QT_MOC_LITERAL(29, 342, 4), // "bell"
QT_MOC_LITERAL(30, 347, 16), // "usesMouseChanged"
QT_MOC_LITERAL(31, 364, 14), // "sessionChanged"
QT_MOC_LITERAL(32, 379, 11), // "sizeChanged"
QT_MOC_LITERAL(33, 391, 12), // "imagePainted"
QT_MOC_LITERAL(34, 404, 21), // "scrollbarValueChanged"
QT_MOC_LITERAL(35, 426, 22), // "scrollbarParamsChanged"
QT_MOC_LITERAL(36, 449, 5), // "value"
QT_MOC_LITERAL(37, 455, 13), // "vtFontChanged"
QT_MOC_LITERAL(38, 469, 18), // "lineSpacingChanged"
QT_MOC_LITERAL(39, 488, 28), // "availableColorSchemesChanged"
QT_MOC_LITERAL(40, 517, 18), // "colorSchemeChanged"
QT_MOC_LITERAL(41, 536, 23), // "fullCursorHeightChanged"
QT_MOC_LITERAL(42, 560, 26), // "blinkingCursorStateChanged"
QT_MOC_LITERAL(43, 587, 18), // "boldIntenseChanged"
QT_MOC_LITERAL(44, 606, 11), // "updateImage"
QT_MOC_LITERAL(45, 618, 13), // "updateFilters"
QT_MOC_LITERAL(46, 632, 20), // "updateLineProperties"
QT_MOC_LITERAL(47, 653, 13), // "copyClipboard"
QT_MOC_LITERAL(48, 667, 14), // "pasteClipboard"
QT_MOC_LITERAL(49, 682, 14), // "pasteSelection"
QT_MOC_LITERAL(50, 697, 28), // "setFlowControlWarningEnabled"
QT_MOC_LITERAL(51, 726, 7), // "enabled"
QT_MOC_LITERAL(52, 734, 25), // "flowControlWarningEnabled"
QT_MOC_LITERAL(53, 760, 15), // "outputSuspended"
QT_MOC_LITERAL(54, 776, 9), // "suspended"
QT_MOC_LITERAL(55, 786, 12), // "setUsesMouse"
QT_MOC_LITERAL(56, 799, 9), // "usesMouse"
QT_MOC_LITERAL(57, 809, 21), // "setBracketedPasteMode"
QT_MOC_LITERAL(58, 831, 18), // "bracketedPasteMode"
QT_MOC_LITERAL(59, 850, 7), // "message"
QT_MOC_LITERAL(60, 858, 18), // "setBackgroundColor"
QT_MOC_LITERAL(61, 877, 5), // "color"
QT_MOC_LITERAL(62, 883, 18), // "setForegroundColor"
QT_MOC_LITERAL(63, 902, 16), // "selectionChanged"
QT_MOC_LITERAL(64, 919, 14), // "setColorScheme"
QT_MOC_LITERAL(65, 934, 4), // "name"
QT_MOC_LITERAL(66, 939, 11), // "colorScheme"
QT_MOC_LITERAL(67, 951, 21), // "availableColorSchemes"
QT_MOC_LITERAL(68, 973, 16), // "simulateKeyPress"
QT_MOC_LITERAL(69, 990, 3), // "key"
QT_MOC_LITERAL(70, 994, 9), // "modifiers"
QT_MOC_LITERAL(71, 1004, 7), // "pressed"
QT_MOC_LITERAL(72, 1012, 14), // "nativeScanCode"
QT_MOC_LITERAL(73, 1027, 4), // "text"
QT_MOC_LITERAL(74, 1032, 19), // "simulateKeySequence"
QT_MOC_LITERAL(75, 1052, 8), // "sequence"
QT_MOC_LITERAL(76, 1061, 13), // "simulateWheel"
QT_MOC_LITERAL(77, 1075, 1), // "x"
QT_MOC_LITERAL(78, 1077, 1), // "y"
QT_MOC_LITERAL(79, 1079, 7), // "buttons"
QT_MOC_LITERAL(80, 1087, 10), // "angleDelta"
QT_MOC_LITERAL(81, 1098, 17), // "simulateMouseMove"
QT_MOC_LITERAL(82, 1116, 18), // "simulateMousePress"
QT_MOC_LITERAL(83, 1135, 20), // "simulateMouseRelease"
QT_MOC_LITERAL(84, 1156, 24), // "simulateMouseDoubleClick"
QT_MOC_LITERAL(85, 1181, 24), // "scrollBarPositionChanged"
QT_MOC_LITERAL(86, 1206, 10), // "blinkEvent"
QT_MOC_LITERAL(87, 1217, 16), // "blinkCursorEvent"
QT_MOC_LITERAL(88, 1234, 10), // "enableBell"
QT_MOC_LITERAL(89, 1245, 14), // "swapColorTable"
QT_MOC_LITERAL(90, 1260, 18), // "tripleClickTimeout"
QT_MOC_LITERAL(91, 1279, 7), // "session"
QT_MOC_LITERAL(92, 1287, 9), // "KSession*"
QT_MOC_LITERAL(93, 1297, 4), // "font"
QT_MOC_LITERAL(94, 1302, 12), // "terminalSize"
QT_MOC_LITERAL(95, 1315, 11), // "lineSpacing"
QT_MOC_LITERAL(96, 1327, 17), // "terminalUsesMouse"
QT_MOC_LITERAL(97, 1345, 5), // "lines"
QT_MOC_LITERAL(98, 1351, 7), // "columns"
QT_MOC_LITERAL(99, 1359, 21), // "scrollbarCurrentValue"
QT_MOC_LITERAL(100, 1381, 16), // "scrollbarMaximum"
QT_MOC_LITERAL(101, 1398, 16), // "scrollbarMinimum"
QT_MOC_LITERAL(102, 1415, 11), // "fontMetrics"
QT_MOC_LITERAL(103, 1427, 10), // "enableBold"
QT_MOC_LITERAL(104, 1438, 16), // "fullCursorHeight"
QT_MOC_LITERAL(105, 1455, 14), // "blinkingCursor"
QT_MOC_LITERAL(106, 1470, 13), // "antialiasText"
QT_MOC_LITERAL(107, 1484, 12) // "selectedText"

    },
    "Konsole::TerminalDisplay\0keyPressedSignal\0"
    "\0QKeyEvent*\0e\0mouseSignal\0button\0"
    "column\0line\0eventType\0changedFontMetricSignal\0"
    "height\0width\0changedContentSizeSignal\0"
    "configureRequest\0position\0"
    "overrideShortcutCheck\0keyEvent\0bool&\0"
    "override\0isBusySelecting\0busy\0"
    "sendStringToEmu\0const char*\0copyAvailable\0"
    "available\0termGetFocus\0termLostFocus\0"
    "notifyBell\0bell\0usesMouseChanged\0"
    "sessionChanged\0sizeChanged\0imagePainted\0"
    "scrollbarValueChanged\0scrollbarParamsChanged\0"
    "value\0vtFontChanged\0lineSpacingChanged\0"
    "availableColorSchemesChanged\0"
    "colorSchemeChanged\0fullCursorHeightChanged\0"
    "blinkingCursorStateChanged\0"
    "boldIntenseChanged\0updateImage\0"
    "updateFilters\0updateLineProperties\0"
    "copyClipboard\0pasteClipboard\0"
    "pasteSelection\0setFlowControlWarningEnabled\0"
    "enabled\0flowControlWarningEnabled\0"
    "outputSuspended\0suspended\0setUsesMouse\0"
    "usesMouse\0setBracketedPasteMode\0"
    "bracketedPasteMode\0message\0"
    "setBackgroundColor\0color\0setForegroundColor\0"
    "selectionChanged\0setColorScheme\0name\0"
    "colorScheme\0availableColorSchemes\0"
    "simulateKeyPress\0key\0modifiers\0pressed\0"
    "nativeScanCode\0text\0simulateKeySequence\0"
    "sequence\0simulateWheel\0x\0y\0buttons\0"
    "angleDelta\0simulateMouseMove\0"
    "simulateMousePress\0simulateMouseRelease\0"
    "simulateMouseDoubleClick\0"
    "scrollBarPositionChanged\0blinkEvent\0"
    "blinkCursorEvent\0enableBell\0swapColorTable\0"
    "tripleClickTimeout\0session\0KSession*\0"
    "font\0terminalSize\0lineSpacing\0"
    "terminalUsesMouse\0lines\0columns\0"
    "scrollbarCurrentValue\0scrollbarMaximum\0"
    "scrollbarMinimum\0fontMetrics\0enableBold\0"
    "fullCursorHeight\0blinkingCursor\0"
    "antialiasText\0selectedText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Konsole__TerminalDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
      18,  476, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  304,    2, 0x06 /* Public */,
       5,    4,  307,    2, 0x06 /* Public */,
      10,    2,  316,    2, 0x06 /* Public */,
      13,    2,  321,    2, 0x06 /* Public */,
      14,    1,  326,    2, 0x06 /* Public */,
      16,    2,  329,    2, 0x06 /* Public */,
      20,    1,  334,    2, 0x06 /* Public */,
      22,    1,  337,    2, 0x06 /* Public */,
      24,    1,  340,    2, 0x06 /* Public */,
      26,    0,  343,    2, 0x06 /* Public */,
      27,    0,  344,    2, 0x06 /* Public */,
      28,    1,  345,    2, 0x06 /* Public */,
      30,    0,  348,    2, 0x06 /* Public */,
      31,    0,  349,    2, 0x06 /* Public */,
      32,    0,  350,    2, 0x06 /* Public */,
      33,    0,  351,    2, 0x06 /* Public */,
      34,    0,  352,    2, 0x06 /* Public */,
      35,    1,  353,    2, 0x06 /* Public */,
      37,    0,  356,    2, 0x06 /* Public */,
      38,    0,  357,    2, 0x06 /* Public */,
      39,    0,  358,    2, 0x06 /* Public */,
      40,    0,  359,    2, 0x06 /* Public */,
      41,    0,  360,    2, 0x06 /* Public */,
      42,    0,  361,    2, 0x06 /* Public */,
      43,    0,  362,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      44,    0,  363,    2, 0x0a /* Public */,
      45,    0,  364,    2, 0x0a /* Public */,
      46,    0,  365,    2, 0x0a /* Public */,
      47,    0,  366,    2, 0x0a /* Public */,
      48,    0,  367,    2, 0x0a /* Public */,
      49,    0,  368,    2, 0x0a /* Public */,
      50,    1,  369,    2, 0x0a /* Public */,
      52,    0,  372,    2, 0x0a /* Public */,
      53,    1,  373,    2, 0x0a /* Public */,
      55,    1,  376,    2, 0x0a /* Public */,
      56,    0,  379,    2, 0x0a /* Public */,
      57,    1,  380,    2, 0x0a /* Public */,
      58,    0,  383,    2, 0x0a /* Public */,
      29,    1,  384,    2, 0x0a /* Public */,
      60,    1,  387,    2, 0x0a /* Public */,
      62,    1,  390,    2, 0x0a /* Public */,
      63,    0,  393,    2, 0x0a /* Public */,
      64,    1,  394,    2, 0x0a /* Public */,
      66,    0,  397,    2, 0x0a /* Public */,
      67,    0,  398,    2, 0x0a /* Public */,
      68,    5,  399,    2, 0x0a /* Public */,
      74,    1,  410,    2, 0x0a /* Public */,
      76,    5,  413,    2, 0x0a /* Public */,
      81,    5,  424,    2, 0x0a /* Public */,
      82,    5,  435,    2, 0x0a /* Public */,
      83,    5,  446,    2, 0x0a /* Public */,
      84,    5,  457,    2, 0x0a /* Public */,
      85,    1,  468,    2, 0x09 /* Protected */,
      86,    0,  471,    2, 0x09 /* Protected */,
      87,    0,  472,    2, 0x09 /* Protected */,
      88,    0,  473,    2, 0x09 /* Protected */,
      89,    0,  474,    2, 0x08 /* Private */,
      90,    0,  475,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::QPoint,   15,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 18,   17,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void, QMetaType::QColor,   61,
    QMetaType::Void, QMetaType::QColor,   61,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   65,
    QMetaType::QString,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::UInt, QMetaType::QString,   69,   70,   71,   72,   73,
    QMetaType::Void, QMetaType::QKeySequence,   75,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QPointF,   77,   78,   79,   70,   80,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   77,   78,    6,   79,   70,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   77,   78,    6,   79,   70,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   77,   78,    6,   79,   70,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   77,   78,    6,   79,   70,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      91, 0x80000000 | 92, 0x0049510b,
      93, QMetaType::QFont, 0x00495003,
      66, QMetaType::QString, 0x00495103,
      94, QMetaType::QSize, 0x00495001,
      95, QMetaType::Int, 0x00495103,
      96, QMetaType::Bool, 0x00495001,
      97, QMetaType::Int, 0x00495001,
      98, QMetaType::Int, 0x00495001,
      99, QMetaType::Int, 0x00495001,
     100, QMetaType::Int, 0x00495001,
     101, QMetaType::Int, 0x00495001,
     102, QMetaType::QSize, 0x00495001,
     103, QMetaType::Bool, 0x00495003,
     104, QMetaType::Bool, 0x00495103,
     105, QMetaType::Bool, 0x00495103,
     106, QMetaType::Bool, 0x00095003,
      67, QMetaType::QStringList, 0x00495001,
     107, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
      13,
      18,
      21,
       3,
      19,
      12,
       3,
       3,
      17,
      17,
      17,
       2,
      24,
      22,
      23,
       0,
      20,
       0,

       0        // eod
};

void Konsole::TerminalDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerminalDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyPressedSignal((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 1: _t->mouseSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->changedFontMetricSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->changedContentSizeSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->configureRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->overrideShortcutCheck((*reinterpret_cast< QKeyEvent*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->isBusySelecting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->sendStringToEmu((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 8: _t->copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->termGetFocus(); break;
        case 10: _t->termLostFocus(); break;
        case 11: _t->notifyBell((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->usesMouseChanged(); break;
        case 13: _t->sessionChanged(); break;
        case 14: _t->sizeChanged(); break;
        case 15: _t->imagePainted(); break;
        case 16: _t->scrollbarValueChanged(); break;
        case 17: _t->scrollbarParamsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->vtFontChanged(); break;
        case 19: _t->lineSpacingChanged(); break;
        case 20: _t->availableColorSchemesChanged(); break;
        case 21: _t->colorSchemeChanged(); break;
        case 22: _t->fullCursorHeightChanged(); break;
        case 23: _t->blinkingCursorStateChanged(); break;
        case 24: _t->boldIntenseChanged(); break;
        case 25: _t->updateImage(); break;
        case 26: _t->updateFilters(); break;
        case 27: _t->updateLineProperties(); break;
        case 28: _t->copyClipboard(); break;
        case 29: _t->pasteClipboard(); break;
        case 30: _t->pasteSelection(); break;
        case 31: _t->setFlowControlWarningEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: { bool _r = _t->flowControlWarningEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->outputSuspended((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->setUsesMouse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: { bool _r = _t->usesMouse();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 36: _t->setBracketedPasteMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: { bool _r = _t->bracketedPasteMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->bell((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->setBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 40: _t->setForegroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 41: _t->selectionChanged(); break;
        case 42: _t->setColorScheme((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 43: { QString _r = _t->colorScheme();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 44: { QStringList _r = _t->availableColorSchemes();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 45: _t->simulateKeyPress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< quint32(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 46: _t->simulateKeySequence((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 47: _t->simulateWheel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QPointF(*)>(_a[5]))); break;
        case 48: _t->simulateMouseMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 49: _t->simulateMousePress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 50: _t->simulateMouseRelease((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 51: _t->simulateMouseDoubleClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 52: _t->scrollBarPositionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->blinkEvent(); break;
        case 54: _t->blinkCursorEvent(); break;
        case 55: _t->enableBell(); break;
        case 56: _t->swapColorTable(); break;
        case 57: _t->tripleClickTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TerminalDisplay::*)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::keyPressedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::mouseSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::changedFontMetricSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::changedContentSizeSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::configureRequest)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(QKeyEvent * , bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::overrideShortcutCheck)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::isBusySelecting)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(const char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::sendStringToEmu)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::copyAvailable)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::termGetFocus)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::termLostFocus)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::notifyBell)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::usesMouseChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::sessionChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::sizeChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::imagePainted)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::scrollbarValueChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::scrollbarParamsChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::vtFontChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::lineSpacingChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::availableColorSchemesChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::colorSchemeChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::fullCursorHeightChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::blinkingCursorStateChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TerminalDisplay::boldIntenseChanged)) {
                *result = 24;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KSession* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TerminalDisplay *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< KSession**>(_v) = _t->getSession(); break;
        case 1: *reinterpret_cast< QFont*>(_v) = _t->getVTFont(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->colorScheme(); break;
        case 3: *reinterpret_cast< QSize*>(_v) = _t->getTerminalSize(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->lineSpacing(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getUsesMouse(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->lines(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->columns(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->getScrollbarValue(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->getScrollbarMaximum(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->getScrollbarMinimum(); break;
        case 11: *reinterpret_cast< QSize*>(_v) = _t->getFontMetrics(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getBoldIntense(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->fullCursorHeight(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->blinkingCursor(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->antialias(); break;
        case 16: *reinterpret_cast< QStringList*>(_v) = _t->availableColorSchemes(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->selectedText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TerminalDisplay *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSession(*reinterpret_cast< KSession**>(_v)); break;
        case 1: _t->setVTFont(*reinterpret_cast< QFont*>(_v)); break;
        case 2: _t->setColorScheme(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setLineSpacing(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setBoldIntense(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setFullCursorHeight(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setBlinkingCursor(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setAntialias(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Konsole::TerminalDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_meta_stringdata_Konsole__TerminalDisplay.data,
    qt_meta_data_Konsole__TerminalDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Konsole::TerminalDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::TerminalDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Konsole__TerminalDisplay.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int Konsole::TerminalDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 58;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 18;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Konsole::TerminalDisplay::keyPressedSignal(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Konsole::TerminalDisplay::mouseSignal(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Konsole::TerminalDisplay::changedFontMetricSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Konsole::TerminalDisplay::changedContentSizeSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Konsole::TerminalDisplay::configureRequest(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Konsole::TerminalDisplay::overrideShortcutCheck(QKeyEvent * _t1, bool & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Konsole::TerminalDisplay::isBusySelecting(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Konsole::TerminalDisplay::sendStringToEmu(const char * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Konsole::TerminalDisplay::copyAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Konsole::TerminalDisplay::termGetFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Konsole::TerminalDisplay::termLostFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Konsole::TerminalDisplay::notifyBell(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Konsole::TerminalDisplay::usesMouseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Konsole::TerminalDisplay::sessionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Konsole::TerminalDisplay::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Konsole::TerminalDisplay::imagePainted()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Konsole::TerminalDisplay::scrollbarValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Konsole::TerminalDisplay::scrollbarParamsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Konsole::TerminalDisplay::vtFontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void Konsole::TerminalDisplay::lineSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void Konsole::TerminalDisplay::availableColorSchemesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Konsole::TerminalDisplay::colorSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void Konsole::TerminalDisplay::fullCursorHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Konsole::TerminalDisplay::blinkingCursorStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void Konsole::TerminalDisplay::boldIntenseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}
struct qt_meta_stringdata_Konsole__AutoScrollHandler_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Konsole__AutoScrollHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Konsole__AutoScrollHandler_t qt_meta_stringdata_Konsole__AutoScrollHandler = {
    {
QT_MOC_LITERAL(0, 0, 26) // "Konsole::AutoScrollHandler"

    },
    "Konsole::AutoScrollHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Konsole__AutoScrollHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Konsole::AutoScrollHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Konsole::AutoScrollHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Konsole__AutoScrollHandler.data,
    qt_meta_data_Konsole__AutoScrollHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Konsole::AutoScrollHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::AutoScrollHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Konsole__AutoScrollHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Konsole::AutoScrollHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
