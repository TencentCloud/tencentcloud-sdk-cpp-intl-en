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
    m_disableCheckOcrWarningsHasBeenSet(false)
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

