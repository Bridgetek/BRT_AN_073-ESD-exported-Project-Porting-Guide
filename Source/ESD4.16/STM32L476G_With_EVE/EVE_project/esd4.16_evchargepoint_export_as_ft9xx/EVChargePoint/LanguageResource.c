/*
LanguageResource
C Source
*/

#include "LanguageResource.h"

#include "RubikMedium24.h"
#include "RubikRegular16.h"
#include "RubikLight24.h"

#include "NotoSansCJKscBold24.h"
#include "NotoSansCJKscRegular16.h"
#include "NotoSansCJKscLight24.h"

#include "NotoSansDisplayBold24.h"
#include "NotoSansDisplayRegular16.h"
#include "NotoSansDisplayLight24.h"

ESD_CATEGORY(EV_LanguageResource, DisplayName = "EV Language Resource", Icon = ":/icons/edit.png")

static Esd_FontInfo *s_titleFont = RubikMedium24();
ESD_FUNCTION(EV_Language_titleFont, Type = Esd_FontInfo *, Category = EV_LanguageResource, Include = "LanguageResource.h")
Esd_FontInfo *EV_Language_titleFont() { return s_titleFont; }

static Esd_FontInfo *s_smallFont = RubikRegular16();
ESD_FUNCTION(EV_Language_smallFont, Type = Esd_FontInfo *, Category = EV_LanguageResource, Include = "LanguageResource.h")
Esd_FontInfo *EV_Language_smallFont() { return s_smallFont; }

static Esd_FontInfo *s_lightBottomFont = RubikLight24();
ESD_FUNCTION(EV_Language_lightBottomFont, Type = Esd_FontInfo *, Category = EV_LanguageResource, Include = "LanguageResource.h")
Esd_FontInfo *EV_Language_lightBottomFont() { return s_lightBottomFont; }

static const char *s_languageName = "ENGLISH";
ESD_FUNCTION(EV_Language_languageName, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_languageName() { return s_languageName; }

static const char *s_languageEnglish = "ENGLISH";
ESD_FUNCTION(EV_Language_languageEnglish, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_languageEnglish() { return s_languageEnglish; }

static const char *s_languageGerman = "DEUTSCH";
ESD_FUNCTION(EV_Language_languageGerman, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_languageGerman() { return s_languageGerman; }

static const char *s_languageRussian = "\xd0\xa0\xd0\xa3\xd0\xa1\xd0\xa1\xd0\x9a\xd0\x98\xd0\x99";
ESD_FUNCTION(EV_Language_languageRussian, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_languageRussian() { return s_languageRussian; }

static const char *s_languageChinese = "\xe4\xb8\xad\xe6\x96\x87";
ESD_FUNCTION(EV_Language_languageChinese, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_languageChinese() { return s_languageChinese; }

static const char *s_chooseLanguage = "Choose language";
ESD_FUNCTION(EV_Language_chooseLanguage, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_chooseLanguage() { return s_chooseLanguage; }

static const char *s_tapYourCard = "Please tap your card to continue";
ESD_FUNCTION(EV_Language_tapYourCard, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_tapYourCard() { return s_tapYourCard; }

static const char *s_checkingTheCard = "Checking the card...";
ESD_FUNCTION(EV_Language_checkingTheCard, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_checkingTheCard() { return s_checkingTheCard; }

static const char *s_authenticated = "Authenticated!";
ESD_FUNCTION(EV_Language_authenticated, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_authenticated() { return s_authenticated; }

static const char *s_plugIn = "PLUG IN";
ESD_FUNCTION(EV_Language_plugIn, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_plugIn() { return s_plugIn; }

static const char *s_pleaseTouch = "Please touch the screen to continue";
ESD_FUNCTION(EV_Language_pleaseTouch, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_pleaseTouch() { return s_pleaseTouch; }

static const char *s_payWith = "Pay with";
ESD_FUNCTION(EV_Language_payWith, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_payWith() { return s_payWith; }

static const char *s_checkingConnection = "Checking connection...";
ESD_FUNCTION(EV_Language_checkingConnection, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_checkingConnection() { return s_checkingConnection; }

static const char *s_connected = "Connected!";
ESD_FUNCTION(EV_Language_connected, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_connected() { return s_connected; }

static const char *s_transactionEstimation = "Transaction Estimation";
ESD_FUNCTION(EV_Language_transactionEstimation, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_transactionEstimation() { return s_transactionEstimation; }

static const char *s_energy = "Energy";
ESD_FUNCTION(EV_Language_energy, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_energy() { return s_energy; }

static const char *s_time = "Time";
ESD_FUNCTION(EV_Language_time, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_time() { return s_time; }

static const char *s_cost = "Cost";
ESD_FUNCTION(EV_Language_cost, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_cost() { return s_cost; }

static const char *s_kWh = "kWh";
ESD_FUNCTION(EV_Language_kWh, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_kWh() { return s_kWh; }

static const char *s_minutes = "min";
ESD_FUNCTION(EV_Language_minutes, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_minutes() { return s_minutes; }

static const char *s_currency = "$";
ESD_FUNCTION(EV_Language_currency, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_currency() { return s_currency; }

static const char *s_startCharging = "START\nCHARGING";
ESD_FUNCTION(EV_Language_startCharging, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_startCharging() { return s_startCharging; }

static const char *s_charging = "Charging...";
ESD_FUNCTION(EV_Language_charging, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_charging() { return s_charging; }

static const char *s_pleaseUnplug = "Please unplug the charger to stop";
ESD_FUNCTION(EV_Language_pleaseUnplug, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_pleaseUnplug() { return s_pleaseUnplug; }

static const char *s_report = "Report";
ESD_FUNCTION(EV_Language_report, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_report() { return s_report; }

static const char *s_battery = "Battery:";
ESD_FUNCTION(EV_Language_battery, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_battery() { return s_battery; }

static const char *s_batteryHealth = "Battery health:";
ESD_FUNCTION(EV_Language_batteryHealth, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_batteryHealth() { return s_batteryHealth; }

static const char *s_chargingTime = "Charging time:";
ESD_FUNCTION(EV_Language_chargingTime, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_chargingTime() { return s_chargingTime; }

static const char *s_totalCost = "Total cost:";
ESD_FUNCTION(EV_Language_totalCost, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_totalCost() { return s_totalCost; }

static const char *s_healthy = "Healthy";
ESD_FUNCTION(EV_Language_healthy, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_healthy() { return s_healthy; }

static const char *s_exit = "EXIT";
ESD_FUNCTION(EV_Language_exit, Type = const char *, Category = EV_LanguageResource, Include = "LanguageResource.h")
const char *EV_Language_exit() { return s_exit; }

ESD_FUNCTION(EV_Language_switchToEnglish, Category = EV_LanguageResource, Include = "LanguageResource.h")
void EV_Language_switchToEnglish()
{
	s_titleFont = RubikMedium24();
	s_smallFont = RubikRegular16();
	s_lightBottomFont = RubikLight24();
	s_languageName = s_languageEnglish;
	s_chooseLanguage = "Choose language";
	s_tapYourCard = "Please tap your card to continue";
	s_checkingTheCard = "Checking the card...";
	s_authenticated = "Authenticated!";
	s_plugIn = "PLUG IN";
	s_pleaseTouch = "Please touch the screen to continue";
	s_payWith = "Pay with";
	s_checkingConnection = "Checking connection...";
	s_connected = "Connected!";
	s_transactionEstimation = "Transaction Estimation";
	s_energy = "Energy";
	s_time = "Time";
	s_cost = "Cost";
	s_kWh = "kWh";
	s_minutes = "min";
	s_currency = "$";
	s_startCharging = "START\nCHARGING";
	s_charging = "Charging...";
	s_pleaseUnplug = "Please unplug the charger to stop";
	s_report = "Report";
	s_battery = "Battery:";
	s_batteryHealth = "Battery health:";
	s_chargingTime = "Charging time:";
	s_totalCost = "Total cost:";
	s_healthy = "Healthy";
	s_exit = "EXIT";
}

ESD_FUNCTION(EV_Language_switchToGerman, Category = EV_LanguageResource, Include = "LanguageResource.h")
void EV_Language_switchToGerman()
{
	s_titleFont = NotoSansDisplayBold24();
	s_smallFont = NotoSansDisplayRegular16();
	s_lightBottomFont = NotoSansDisplayLight24();
	s_languageName = s_languageGerman;
	s_chooseLanguage = "\x53\x70\x72\x61\x63\x68\x65\x20\x77\xc3\xa4\x68\x6c\x65\x6e";
	s_tapYourCard = "Bitte tippen Sie auf Ihre Karte, um fortzufahren";
	s_checkingTheCard = "\xc3\x9c\x62\x65\x72\x70\x72\xc3\xbc\x66\x65\x6e\x20\x64\x65\x72\x20\x4b\x61\x72\x74\x65\x20\x2e\x2e\x2e";
	s_authenticated = "Authentifiziert!";
	s_plugIn = "\x41\x4e\x53\x43\x48\x4c\x49\x45\xc3\x9f\x45\x4e";
	s_pleaseTouch = "\x42\x69\x74\x74\x65\x20\x62\x65\x72\xc3\xbc\x68\x72\x65\x6e\x20\x53\x69\x65\x20\x64\x65\x6e\x20\x42\x69\x6c\x64\x73\x63\x68\x69\x72\x6d\x2c\x20\x75\x6d\x20\x66\x6f\x72\x74\x7a\x75\x66\x61\x68\x72\x65\x6e";
	s_payWith = "Bezahlen mit";
	s_checkingConnection = "\x56\x65\x72\x62\x69\x6e\x64\x75\x6e\x67\x20\x70\x72\xc3\xbc\x66\x65\x6e\x20\x2e\x2e\x2e";
	s_connected = "Verbindung hergestellt!";
	s_transactionEstimation = "\x54\x72\x61\x6e\x73\x61\x6b\x74\x69\x6f\x6e\x73\x73\x63\x68\xc3\xa4\x74\x7a\x75\x6e\x67";
	s_energy = "Energie";
	s_time = "Zeit";
	s_cost = "Kosten";
	s_kWh = "kWh";
	s_minutes = "min";
	s_currency = "$";
	s_startCharging = "LADEVORGANG\nBEGINNEN";
	s_charging = "Laden ...";
	s_pleaseUnplug = "\x42\x69\x74\x74\x65\x20\x74\x72\x65\x6e\x6e\x65\x6e\x20\x53\x69\x65\x20\x64\x61\x73\x20\x4c\x61\x64\x65\x67\x65\x72\xc3\xa4\x74\x20\x75\x6d\x20\x61\x6e\x7a\x75\x68\x61\x6c\x74\x65\x6e";
	s_report = "Bericht";
	s_battery = "Batterie:";
	s_batteryHealth = "Batterie Gesundheit:";
	s_chargingTime = "Ladezeit:";
	s_totalCost = "Gesamtkosten:";
	s_healthy = "Gesund";
	s_exit = "BEENDEN";
}

ESD_FUNCTION(EV_Language_switchToRussian, Category = EV_LanguageResource, Include = "LanguageResource.h")
void EV_Language_switchToRussian()
{
	s_titleFont = RubikMedium24();
	s_smallFont = RubikRegular16();
	s_lightBottomFont = RubikLight24();
	s_languageName = s_languageRussian;
	s_chooseLanguage = "\xd0\x92\xd1\x8b\xd0\xb1\xd0\xb5\xd1\x80\xd0\xb8\xd1\x82\xd0\xb5\x20\xd1\x8f\xd0\xb7\xd1\x8b\xd0\xba";
	s_tapYourCard = "\xd0\x9d\xd0\xb0\xd0\xb6\xd0\xbc\xd0\xb8\xd1\x82\xd0\xb5\x20\xd1\x81\xd0\xb2\xd0\xbe\xd1\x8e\x20\xd0\xba\xd0\xb0\xd1\x80\xd1\x82\xd0\xbe\xd1\x87\xd0\xba\xd1\x83\x2c\x20\xd1\x87\xd1\x82\xd0\xbe\xd0\xb1\xd1\x8b\x20\xd0\xbf\xd1\x80\xd0\xbe\xd0\xb4\xd0\xbe\xd0\xbb\xd0\xb6\xd0\xb8\xd1\x82\xd1\x8c";
	s_checkingTheCard = "\xd0\x9f\xd1\x80\xd0\xbe\xd0\xb2\xd0\xb5\xd1\x80\xd0\xba\xd0\xb0\x20\xd0\xba\xd0\xb0\xd1\x80\xd1\x82\xd1\x8b\x20\x2e\x2e\x2e";
	s_authenticated = "\xd0\x97\xd0\xb0\xd0\xb2\xd0\xb5\xd1\x80\xd0\xb5\xd0\xbd\xd0\xbd\xd1\x8b\xd0\xb5\x21";
	s_plugIn = "\xd0\x92\xd0\xa1\xd0\xa2\xd0\x90\xd0\x92\xd0\x98\xd0\xa2\xd0\xac";
	s_pleaseTouch = "\xd0\x9f\xd0\xbe\xd0\xb6\xd0\xb0\xd0\xbb\xd1\x83\xd0\xb9\xd1\x81\xd1\x82\xd0\xb0\x2c\x20\xd0\xba\xd0\xbe\xd1\x81\xd0\xbd\xd0\xb8\xd1\x82\xd0\xb5\xd1\x81\xd1\x8c\x20\xd1\x8d\xd0\xba\xd1\x80\xd0\xb0\xd0\xbd\xd0\xb0\x2c\x20\xd1\x87\xd1\x82\xd0\xbe\xd0\xb1\xd1\x8b\x20\xd0\xbf\xd1\x80\xd0\xbe\xd0\xb4\xd0\xbe\xd0\xbb\xd0\xb6\xd0\xb8\xd1\x82\xd1\x8c";
	s_payWith = "Pay with";
	s_checkingConnection = "\xd0\x9f\xd1\x80\xd0\xbe\xd0\xb2\xd0\xb5\xd1\x80\xd0\xba\xd0\xb0\x20\xd1\x81\xd0\xbe\xd0\xb5\xd0\xb4\xd0\xb8\xd0\xbd\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x8f\x20\x2e\x2e\x2e";
	s_connected = "\xd0\xa1\xd0\xb2\xd1\x8f\xd0\xb7\xd0\xb0\xd0\xbd\xd0\xbe\x21";
	s_transactionEstimation = "\xd0\x9e\xd1\x86\xd0\xb5\xd0\xbd\xd0\xba\xd0\xb0\x20\xd1\x82\xd1\x80\xd0\xb0\xd0\xbd\xd0\xb7\xd0\xb0\xd0\xba\xd1\x86\xd0\xb8\xd0\xb8";
	s_energy = "\xd1\x8d\xd0\xbd\xd0\xb5\xd1\x80\xd0\xb3\xd0\xb8\xd0\xb8";
	s_time = "\xd0\x92\xd1\x80\xd0\xb5\xd0\xbc\xd1\x8f";
	s_cost = "\xd0\xa1\xd1\x82\xd0\xbe\xd0\xb8\xd0\xbc\xd0\xbe\xd1\x81\xd1\x82\xd1\x8c";
	s_kWh = "kWh";
	s_minutes = "min";
	s_currency = "$";
	s_startCharging = "\xd0\x9d\xd0\x90\xd0\xa7\xd0\x90\xd0\xa2\xd0\xac\n\xd0\x97\xd0\x90\xd0\xa0\xd0\xaf\xd0\x94\xd0\x9a\xd0\xa3";
	s_charging = "\xd0\x97\xd0\xb0\xd1\x80\xd1\x8f\xd0\xb4\xd0\xba\xd0\xb0\x2e\x2e\x2e";
	s_pleaseUnplug = "\xd0\x9f\xd0\xbe\xd0\xb6\xd0\xb0\xd0\xbb\xd1\x83\xd0\xb9\xd1\x81\xd1\x82\xd0\xb0\x2c\x20\xd0\xbe\xd1\x82\xd0\xba\xd0\xbb\xd1\x8e\xd1\x87\xd0\xb8\xd1\x82\xd0\xb5\x20\xd0\xb7\xd0\xb0\xd1\x80\xd1\x8f\xd0\xb4\xd0\xbd\xd0\xbe\xd0\xb5\x20\xd1\x83\xd1\x81\xd1\x82\xd1\x80\xd0\xbe\xd0\xb9\xd1\x81\xd1\x82\xd0\xb2\xd0\xbe\x2c\x20\xd1\x87\xd1\x82\xd0\xbe\xd0\xb1\xd1\x8b\x20\xd0\xbe\xd1\x81\xd1\x82\xd0\xb0\xd0\xbd\xd0\xbe\xd0\xb2\xd0\xb8\xd1\x82\xd1\x8c";
	s_report = "\xd0\xbe\xd1\x82\xd1\x87\xd0\xb5\xd1\x82";
	s_battery = "\xd0\x91\xd0\xb0\xd1\x82\xd0\xb0\xd1\x80\xd0\xb5\xd1\x8f\x3a";
	s_batteryHealth = "\xd0\x97\xd0\xb4\xd0\xbe\xd1\x80\xd0\xbe\xd0\xb2\xd1\x8c\xd0\xb5\x20\xd0\xb1\xd0\xb0\xd1\x82\xd0\xb0\xd1\x80\xd0\xb5\xd0\xb8\x3a";
	s_chargingTime = "\xd0\x92\xd1\x80\xd0\xb5\xd0\xbc\xd1\x8f\x20\xd0\xb7\xd0\xb0\xd1\x80\xd1\x8f\xd0\xb4\xd0\xba\xd0\xb8\x3a";
	s_totalCost = "\xd0\x9e\xd0\xb1\xd1\x89\xd0\xb0\xd1\x8f\x20\xd1\x81\xd1\x82\xd0\xbe\xd0\xb8\xd0\xbc\xd0\xbe\xd1\x81\xd1\x82\xd1\x8c\x3a";
	s_healthy = "\xd0\xb7\xd0\xb4\xd0\xbe\xd1\x80\xd0\xbe\xd0\xb2\xd1\x8b\xd0\xb9";
	s_exit = "\xd0\x92\xd0\xab\xd0\xa5\xd0\x9e\xd0\x94";
}

ESD_FUNCTION(EV_Language_switchToChinese, Category = EV_LanguageResource, Include = "LanguageResource.h")
void EV_Language_switchToChinese()
{
	s_titleFont = NotoSansCJKscBold24();
	s_smallFont = NotoSansCJKscRegular16();
	s_lightBottomFont = NotoSansCJKscLight24();
	s_languageName = s_languageChinese;
	s_chooseLanguage = "\xe9\x80\x89\xe6\x8b\xa9\xe8\xaf\xad\xe8\xa8\x80";
	s_tapYourCard = "\xe8\xaf\xb7\xe7\x82\xb9\xe6\x8c\x89\xe6\x82\xa8\xe7\x9a\x84\xe5\x8d\xa1\xe7\x89\x87\xe7\xbb\xa7\xe7\xbb\xad";
	s_checkingTheCard = "\xe6\xa3\x80\xe6\x9f\xa5\xe5\x8d\xa1\x2e\x2e\x2e";
	s_authenticated = "\xe9\x80\x9a\xe8\xbf\x87\xe8\xba\xab\xe4\xbb\xbd\xe9\xaa\x8c\xe8\xaf\x81\xef\xbc\x81";
	s_plugIn = "\xe6\x8f\x92\xe5\x85\xa5";
	s_pleaseTouch = "\xe8\xaf\xb7\xe8\xa7\xa6\xe6\x91\xb8\xe5\xb1\x8f\xe5\xb9\x95\xe7\xbb\xa7\xe7\xbb\xad";
	s_payWith = ""; // "\xe4\xbb\x98\xe6\xac\xbe\xe6\x96\xb9\xe5\xbc\x8f";
	s_checkingConnection = "\xe6\xa3\x80\xe6\x9f\xa5\xe8\xbf\x9e\xe6\x8e\xa5\x2e\x2e\x2e";
	s_connected = "\xE5\xB7\xB2\xE8\xBF\x9E\xE6\x8E\xA5";
	s_transactionEstimation = "\xe4\xba\xa4\xe6\x98\x93\xe4\xbc\xb0\xe7\xae\x97";
	s_energy = "\xe8\x83\xbd\xe6\xba\x90";
	s_time = "\xe6\x97\xb6\xe9\x97\xb4";
	s_cost = "\xe6\x88\x90\xe6\x9c\xac";
	s_kWh = "\xE5\x8D\x83\xE7\x93\xA6\xE6\x97\xB6";
	s_minutes = "\xE5\x88\x86\xE9\x92\x9F";
	s_currency = "$";
	s_startCharging = "\xe5\xbc\x80\xe5\xa7\x8b\n\xe5\x85\x85\xe7\x94\xb5";
	s_charging = "\xE5\x85\x85\xE7\x94\xB5\xE4\xB8\xAD\x2E\x2E\x2E";
	s_pleaseUnplug = "\xe8\xaf\xb7\xe6\x8b\x94\xe6\x8e\x89\xe5\x85\x85\xe7\x94\xb5\xe5\x99\xa8\xe4\xbb\xa5\xe5\x81\x9c\xe6\xad\xa2";
	s_report = "\xe6\x8a\xa5\xe5\x91\x8a";
	s_battery = "\xE7\x94\xB5\xE6\xB1\xA0\xE7\x94\xB5\xE9\x87\x8F";
	s_batteryHealth = "\xE7\x94\xB5\xE6\xB1\xA0\xE7\x8A\xB6\xE6\x80\x81\xEF\xBC\x9A";
	s_chargingTime = "\xe5\x85\x85\xe7\x94\xb5\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x9a";
	s_totalCost = "\xe6\x80\xbb\xe6\x88\x90\xe6\x9c\xac\xef\xbc\x9a";
	s_healthy = "\xe5\x81\xa5\xe5\xba\xb7";
	s_exit = "\xe9\x80\x80\xe5\x87\xba";
}

/* end of file */
