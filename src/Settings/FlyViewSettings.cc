/****************************************************************************
 *
 *   (c) 2009-2016 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#include "FlyViewSettings.h"

#include <QQmlEngine>
#include <QtQml>

DECLARE_SETTINGGROUP(FlyView, "FlyView")
{
    qmlRegisterUncreatableType<FlyViewSettings>("QGroundControl.SettingsManager", 1, 0, "FlyViewSettings", "Reference only"); \
}

DECLARE_SETTINGSFACT(FlyViewSettings, guidedMinimumAltitude)
DECLARE_SETTINGSFACT(FlyViewSettings, guidedMaximumAltitude)
DECLARE_SETTINGSFACT(FlyViewSettings, showLogReplayStatusBar)
DECLARE_SETTINGSFACT(FlyViewSettings, alternateInstrumentPanel)
DECLARE_SETTINGSFACT(FlyViewSettings, showAdditionalIndicatorsCompass)
DECLARE_SETTINGSFACT(FlyViewSettings, lockNoseUpCompass)
DECLARE_SETTINGSFACT(FlyViewSettings, maxGoToLocationDistance)
DECLARE_SETTINGSFACT(FlyViewSettings, gimbalMaxRate)
DECLARE_SETTINGSFACT(FlyViewSettings, gimbalExpFactor)
DECLARE_SETTINGSFACT(FlyViewSettings, keepMapCenteredOnVehicle)
DECLARE_SETTINGSFACT(FlyViewSettings, gimbalSpeedFactor)
DECLARE_SETTINGSFACT(FlyViewSettings, gimbalSliderSpeedFactor)
DECLARE_SETTINGSFACT(FlyViewSettings, gimbalPitchKPFactor)
DECLARE_SETTINGSFACT(FlyViewSettings, gimbalPitchKIFactor)
DECLARE_SETTINGSFACT(FlyViewSettings, gimbalPitchKDFactor)
DECLARE_SETTINGSFACT(FlyViewSettings, gimbalYawKPFactor)
DECLARE_SETTINGSFACT(FlyViewSettings, gimbalYawKIFactor)
DECLARE_SETTINGSFACT(FlyViewSettings, gimbalYawKDFactor)
