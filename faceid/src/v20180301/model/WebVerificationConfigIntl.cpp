/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/faceid/v20180301/model/WebVerificationConfigIntl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

WebVerificationConfigIntl::WebVerificationConfigIntl() :
    m_autoSkipStartPageHasBeenSet(false),
    m_autoSkipHasBeenSet(false),
    m_checkModeHasBeenSet(false),
    m_iDCardTypeHasBeenSet(false),
    m_disableCheckOcrWarningsHasBeenSet(false),
    m_securityLevelHasBeenSet(false),
    m_skipPrivacyPolicyHasBeenSet(false),
    m_idCardCutReturnHasBeenSet(false),
    m_themeColorHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_autoDowngradeHasBeenSet(false),
    m_actionListHasBeenSet(false)
{
}

CoreInternalOutcome WebVerificationConfigIntl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoSkipStartPage") && !value["AutoSkipStartPage"].IsNull())
    {
        if (!value["AutoSkipStartPage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WebVerificationConfigIntl.AutoSkipStartPage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoSkipStartPage = value["AutoSkipStartPage"].GetBool();
        m_autoSkipStartPageHasBeenSet = true;
    }

    if (value.HasMember("AutoSkip") && !value["AutoSkip"].IsNull())
    {
        if (!value["AutoSkip"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WebVerificationConfigIntl.AutoSkip` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoSkip = value["AutoSkip"].GetBool();
        m_autoSkipHasBeenSet = true;
    }

    if (value.HasMember("CheckMode") && !value["CheckMode"].IsNull())
    {
        if (!value["CheckMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebVerificationConfigIntl.CheckMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkMode = value["CheckMode"].GetInt64();
        m_checkModeHasBeenSet = true;
    }

    if (value.HasMember("IDCardType") && !value["IDCardType"].IsNull())
    {
        if (!value["IDCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebVerificationConfigIntl.IDCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDCardType = string(value["IDCardType"].GetString());
        m_iDCardTypeHasBeenSet = true;
    }

    if (value.HasMember("DisableCheckOcrWarnings") && !value["DisableCheckOcrWarnings"].IsNull())
    {
        if (!value["DisableCheckOcrWarnings"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WebVerificationConfigIntl.DisableCheckOcrWarnings` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableCheckOcrWarnings = value["DisableCheckOcrWarnings"].GetBool();
        m_disableCheckOcrWarningsHasBeenSet = true;
    }

    if (value.HasMember("SecurityLevel") && !value["SecurityLevel"].IsNull())
    {
        if (!value["SecurityLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebVerificationConfigIntl.SecurityLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_securityLevel = value["SecurityLevel"].GetInt64();
        m_securityLevelHasBeenSet = true;
    }

    if (value.HasMember("SkipPrivacyPolicy") && !value["SkipPrivacyPolicy"].IsNull())
    {
        if (!value["SkipPrivacyPolicy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WebVerificationConfigIntl.SkipPrivacyPolicy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_skipPrivacyPolicy = value["SkipPrivacyPolicy"].GetBool();
        m_skipPrivacyPolicyHasBeenSet = true;
    }

    if (value.HasMember("IdCardCutReturn") && !value["IdCardCutReturn"].IsNull())
    {
        if (!value["IdCardCutReturn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WebVerificationConfigIntl.IdCardCutReturn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_idCardCutReturn = value["IdCardCutReturn"].GetBool();
        m_idCardCutReturnHasBeenSet = true;
    }

    if (value.HasMember("ThemeColor") && !value["ThemeColor"].IsNull())
    {
        if (!value["ThemeColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebVerificationConfigIntl.ThemeColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_themeColor = string(value["ThemeColor"].GetString());
        m_themeColorHasBeenSet = true;
    }

    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebVerificationConfigIntl.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("AutoDowngrade") && !value["AutoDowngrade"].IsNull())
    {
        if (!value["AutoDowngrade"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebVerificationConfigIntl.AutoDowngrade` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoDowngrade = value["AutoDowngrade"].GetInt64();
        m_autoDowngradeHasBeenSet = true;
    }

    if (value.HasMember("ActionList") && !value["ActionList"].IsNull())
    {
        if (!value["ActionList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebVerificationConfigIntl.ActionList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionList = string(value["ActionList"].GetString());
        m_actionListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebVerificationConfigIntl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoSkipStartPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSkipStartPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoSkipStartPage, allocator);
    }

    if (m_autoSkipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSkip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoSkip, allocator);
    }

    if (m_checkModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkMode, allocator);
    }

    if (m_iDCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_disableCheckOcrWarningsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableCheckOcrWarnings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableCheckOcrWarnings, allocator);
    }

    if (m_securityLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityLevel, allocator);
    }

    if (m_skipPrivacyPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipPrivacyPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skipPrivacyPolicy, allocator);
    }

    if (m_idCardCutReturnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardCutReturn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idCardCutReturn, allocator);
    }

    if (m_themeColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThemeColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_themeColor.c_str(), allocator).Move(), allocator);
    }

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_autoDowngradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDowngrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoDowngrade, allocator);
    }

    if (m_actionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionList.c_str(), allocator).Move(), allocator);
    }

}


bool WebVerificationConfigIntl::GetAutoSkipStartPage() const
{
    return m_autoSkipStartPage;
}

void WebVerificationConfigIntl::SetAutoSkipStartPage(const bool& _autoSkipStartPage)
{
    m_autoSkipStartPage = _autoSkipStartPage;
    m_autoSkipStartPageHasBeenSet = true;
}

bool WebVerificationConfigIntl::AutoSkipStartPageHasBeenSet() const
{
    return m_autoSkipStartPageHasBeenSet;
}

bool WebVerificationConfigIntl::GetAutoSkip() const
{
    return m_autoSkip;
}

void WebVerificationConfigIntl::SetAutoSkip(const bool& _autoSkip)
{
    m_autoSkip = _autoSkip;
    m_autoSkipHasBeenSet = true;
}

bool WebVerificationConfigIntl::AutoSkipHasBeenSet() const
{
    return m_autoSkipHasBeenSet;
}

int64_t WebVerificationConfigIntl::GetCheckMode() const
{
    return m_checkMode;
}

void WebVerificationConfigIntl::SetCheckMode(const int64_t& _checkMode)
{
    m_checkMode = _checkMode;
    m_checkModeHasBeenSet = true;
}

bool WebVerificationConfigIntl::CheckModeHasBeenSet() const
{
    return m_checkModeHasBeenSet;
}

string WebVerificationConfigIntl::GetIDCardType() const
{
    return m_iDCardType;
}

void WebVerificationConfigIntl::SetIDCardType(const string& _iDCardType)
{
    m_iDCardType = _iDCardType;
    m_iDCardTypeHasBeenSet = true;
}

bool WebVerificationConfigIntl::IDCardTypeHasBeenSet() const
{
    return m_iDCardTypeHasBeenSet;
}

bool WebVerificationConfigIntl::GetDisableCheckOcrWarnings() const
{
    return m_disableCheckOcrWarnings;
}

void WebVerificationConfigIntl::SetDisableCheckOcrWarnings(const bool& _disableCheckOcrWarnings)
{
    m_disableCheckOcrWarnings = _disableCheckOcrWarnings;
    m_disableCheckOcrWarningsHasBeenSet = true;
}

bool WebVerificationConfigIntl::DisableCheckOcrWarningsHasBeenSet() const
{
    return m_disableCheckOcrWarningsHasBeenSet;
}

int64_t WebVerificationConfigIntl::GetSecurityLevel() const
{
    return m_securityLevel;
}

void WebVerificationConfigIntl::SetSecurityLevel(const int64_t& _securityLevel)
{
    m_securityLevel = _securityLevel;
    m_securityLevelHasBeenSet = true;
}

bool WebVerificationConfigIntl::SecurityLevelHasBeenSet() const
{
    return m_securityLevelHasBeenSet;
}

bool WebVerificationConfigIntl::GetSkipPrivacyPolicy() const
{
    return m_skipPrivacyPolicy;
}

void WebVerificationConfigIntl::SetSkipPrivacyPolicy(const bool& _skipPrivacyPolicy)
{
    m_skipPrivacyPolicy = _skipPrivacyPolicy;
    m_skipPrivacyPolicyHasBeenSet = true;
}

bool WebVerificationConfigIntl::SkipPrivacyPolicyHasBeenSet() const
{
    return m_skipPrivacyPolicyHasBeenSet;
}

bool WebVerificationConfigIntl::GetIdCardCutReturn() const
{
    return m_idCardCutReturn;
}

void WebVerificationConfigIntl::SetIdCardCutReturn(const bool& _idCardCutReturn)
{
    m_idCardCutReturn = _idCardCutReturn;
    m_idCardCutReturnHasBeenSet = true;
}

bool WebVerificationConfigIntl::IdCardCutReturnHasBeenSet() const
{
    return m_idCardCutReturnHasBeenSet;
}

string WebVerificationConfigIntl::GetThemeColor() const
{
    return m_themeColor;
}

void WebVerificationConfigIntl::SetThemeColor(const string& _themeColor)
{
    m_themeColor = _themeColor;
    m_themeColorHasBeenSet = true;
}

bool WebVerificationConfigIntl::ThemeColorHasBeenSet() const
{
    return m_themeColorHasBeenSet;
}

string WebVerificationConfigIntl::GetLanguage() const
{
    return m_language;
}

void WebVerificationConfigIntl::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool WebVerificationConfigIntl::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

int64_t WebVerificationConfigIntl::GetAutoDowngrade() const
{
    return m_autoDowngrade;
}

void WebVerificationConfigIntl::SetAutoDowngrade(const int64_t& _autoDowngrade)
{
    m_autoDowngrade = _autoDowngrade;
    m_autoDowngradeHasBeenSet = true;
}

bool WebVerificationConfigIntl::AutoDowngradeHasBeenSet() const
{
    return m_autoDowngradeHasBeenSet;
}

string WebVerificationConfigIntl::GetActionList() const
{
    return m_actionList;
}

void WebVerificationConfigIntl::SetActionList(const string& _actionList)
{
    m_actionList = _actionList;
    m_actionListHasBeenSet = true;
}

bool WebVerificationConfigIntl::ActionListHasBeenSet() const
{
    return m_actionListHasBeenSet;
}

