/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaConsoleSubDataInternational.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

DescribeCaptchaConsoleSubDataInternational::DescribeCaptchaConsoleSubDataInternational() :
    m_captchaAppIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_encryptKeyHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_userSetCapTypeHasBeenSet(false),
    m_noVerifyRuleHasBeenSet(false),
    m_captchaLanguageHasBeenSet(false),
    m_verifyRankHasBeenSet(false),
    m_channelInfoHasBeenSet(false),
    m_defendModeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_checkAppidSwitchHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_checkIvSwitchHasBeenSet(false),
    m_disableInvisibleSwitchHasBeenSet(false),
    m_verifyDomainHasBeenSet(false),
    m_verifyBundleIdHasBeenSet(false),
    m_verifyPackageHasBeenSet(false),
    m_checkBoxStyleHasBeenSet(false),
    m_customerTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCaptchaConsoleSubDataInternational::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CaptchaAppId") && !value["CaptchaAppId"].IsNull())
    {
        if (!value["CaptchaAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.CaptchaAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_captchaAppId = value["CaptchaAppId"].GetInt64();
        m_captchaAppIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("EncryptKey") && !value["EncryptKey"].IsNull())
    {
        if (!value["EncryptKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.EncryptKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptKey = string(value["EncryptKey"].GetString());
        m_encryptKeyHasBeenSet = true;
    }

    if (value.HasMember("SceneType") && !value["SceneType"].IsNull())
    {
        if (!value["SceneType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.SceneType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneType = string(value["SceneType"].GetString());
        m_sceneTypeHasBeenSet = true;
    }

    if (value.HasMember("UserSetCapType") && !value["UserSetCapType"].IsNull())
    {
        if (!value["UserSetCapType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.UserSetCapType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userSetCapType = value["UserSetCapType"].GetInt64();
        m_userSetCapTypeHasBeenSet = true;
    }

    if (value.HasMember("NoVerifyRule") && !value["NoVerifyRule"].IsNull())
    {
        if (!value["NoVerifyRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.NoVerifyRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noVerifyRule = value["NoVerifyRule"].GetInt64();
        m_noVerifyRuleHasBeenSet = true;
    }

    if (value.HasMember("CaptchaLanguage") && !value["CaptchaLanguage"].IsNull())
    {
        if (!value["CaptchaLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.CaptchaLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_captchaLanguage = string(value["CaptchaLanguage"].GetString());
        m_captchaLanguageHasBeenSet = true;
    }

    if (value.HasMember("VerifyRank") && !value["VerifyRank"].IsNull())
    {
        if (!value["VerifyRank"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.VerifyRank` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyRank = value["VerifyRank"].GetInt64();
        m_verifyRankHasBeenSet = true;
    }

    if (value.HasMember("ChannelInfo") && !value["ChannelInfo"].IsNull())
    {
        if (!value["ChannelInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.ChannelInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelInfo = string(value["ChannelInfo"].GetString());
        m_channelInfoHasBeenSet = true;
    }

    if (value.HasMember("DefendMode") && !value["DefendMode"].IsNull())
    {
        if (!value["DefendMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.DefendMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defendMode = string(value["DefendMode"].GetString());
        m_defendModeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CheckAppidSwitch") && !value["CheckAppidSwitch"].IsNull())
    {
        if (!value["CheckAppidSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.CheckAppidSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkAppidSwitch = value["CheckAppidSwitch"].GetInt64();
        m_checkAppidSwitchHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("CheckIvSwitch") && !value["CheckIvSwitch"].IsNull())
    {
        if (!value["CheckIvSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.CheckIvSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkIvSwitch = value["CheckIvSwitch"].GetInt64();
        m_checkIvSwitchHasBeenSet = true;
    }

    if (value.HasMember("DisableInvisibleSwitch") && !value["DisableInvisibleSwitch"].IsNull())
    {
        if (!value["DisableInvisibleSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.DisableInvisibleSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disableInvisibleSwitch = string(value["DisableInvisibleSwitch"].GetString());
        m_disableInvisibleSwitchHasBeenSet = true;
    }

    if (value.HasMember("VerifyDomain") && !value["VerifyDomain"].IsNull())
    {
        if (!value["VerifyDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.VerifyDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyDomain = string(value["VerifyDomain"].GetString());
        m_verifyDomainHasBeenSet = true;
    }

    if (value.HasMember("VerifyBundleId") && !value["VerifyBundleId"].IsNull())
    {
        if (!value["VerifyBundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.VerifyBundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyBundleId = string(value["VerifyBundleId"].GetString());
        m_verifyBundleIdHasBeenSet = true;
    }

    if (value.HasMember("VerifyPackage") && !value["VerifyPackage"].IsNull())
    {
        if (!value["VerifyPackage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.VerifyPackage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyPackage = string(value["VerifyPackage"].GetString());
        m_verifyPackageHasBeenSet = true;
    }

    if (value.HasMember("CheckBoxStyle") && !value["CheckBoxStyle"].IsNull())
    {
        if (!value["CheckBoxStyle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.CheckBoxStyle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkBoxStyle = string(value["CheckBoxStyle"].GetString());
        m_checkBoxStyleHasBeenSet = true;
    }

    if (value.HasMember("CustomerType") && !value["CustomerType"].IsNull())
    {
        if (!value["CustomerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleSubDataInternational.CustomerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerType = string(value["CustomerType"].GetString());
        m_customerTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeCaptchaConsoleSubDataInternational::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_captchaAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_captchaAppId, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneType.c_str(), allocator).Move(), allocator);
    }

    if (m_userSetCapTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSetCapType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userSetCapType, allocator);
    }

    if (m_noVerifyRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoVerifyRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noVerifyRule, allocator);
    }

    if (m_captchaLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_captchaLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyRankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyRank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyRank, allocator);
    }

    if (m_channelInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_defendModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defendMode.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_checkAppidSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAppidSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkAppidSwitch, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_checkIvSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckIvSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkIvSwitch, allocator);
    }

    if (m_disableInvisibleSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableInvisibleSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disableInvisibleSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyBundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyBundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyBundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyPackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyPackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyPackage.c_str(), allocator).Move(), allocator);
    }

    if (m_checkBoxStyleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckBoxStyle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkBoxStyle.c_str(), allocator).Move(), allocator);
    }

    if (m_customerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerType.c_str(), allocator).Move(), allocator);
    }

}


int64_t DescribeCaptchaConsoleSubDataInternational::GetCaptchaAppId() const
{
    return m_captchaAppId;
}

void DescribeCaptchaConsoleSubDataInternational::SetCaptchaAppId(const int64_t& _captchaAppId)
{
    m_captchaAppId = _captchaAppId;
    m_captchaAppIdHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::CaptchaAppIdHasBeenSet() const
{
    return m_captchaAppIdHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetAppName() const
{
    return m_appName;
}

void DescribeCaptchaConsoleSubDataInternational::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetDomain() const
{
    return m_domain;
}

void DescribeCaptchaConsoleSubDataInternational::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetEncryptKey() const
{
    return m_encryptKey;
}

void DescribeCaptchaConsoleSubDataInternational::SetEncryptKey(const string& _encryptKey)
{
    m_encryptKey = _encryptKey;
    m_encryptKeyHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::EncryptKeyHasBeenSet() const
{
    return m_encryptKeyHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetSceneType() const
{
    return m_sceneType;
}

void DescribeCaptchaConsoleSubDataInternational::SetSceneType(const string& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

int64_t DescribeCaptchaConsoleSubDataInternational::GetUserSetCapType() const
{
    return m_userSetCapType;
}

void DescribeCaptchaConsoleSubDataInternational::SetUserSetCapType(const int64_t& _userSetCapType)
{
    m_userSetCapType = _userSetCapType;
    m_userSetCapTypeHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::UserSetCapTypeHasBeenSet() const
{
    return m_userSetCapTypeHasBeenSet;
}

int64_t DescribeCaptchaConsoleSubDataInternational::GetNoVerifyRule() const
{
    return m_noVerifyRule;
}

void DescribeCaptchaConsoleSubDataInternational::SetNoVerifyRule(const int64_t& _noVerifyRule)
{
    m_noVerifyRule = _noVerifyRule;
    m_noVerifyRuleHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::NoVerifyRuleHasBeenSet() const
{
    return m_noVerifyRuleHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetCaptchaLanguage() const
{
    return m_captchaLanguage;
}

void DescribeCaptchaConsoleSubDataInternational::SetCaptchaLanguage(const string& _captchaLanguage)
{
    m_captchaLanguage = _captchaLanguage;
    m_captchaLanguageHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::CaptchaLanguageHasBeenSet() const
{
    return m_captchaLanguageHasBeenSet;
}

int64_t DescribeCaptchaConsoleSubDataInternational::GetVerifyRank() const
{
    return m_verifyRank;
}

void DescribeCaptchaConsoleSubDataInternational::SetVerifyRank(const int64_t& _verifyRank)
{
    m_verifyRank = _verifyRank;
    m_verifyRankHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::VerifyRankHasBeenSet() const
{
    return m_verifyRankHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetChannelInfo() const
{
    return m_channelInfo;
}

void DescribeCaptchaConsoleSubDataInternational::SetChannelInfo(const string& _channelInfo)
{
    m_channelInfo = _channelInfo;
    m_channelInfoHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::ChannelInfoHasBeenSet() const
{
    return m_channelInfoHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetDefendMode() const
{
    return m_defendMode;
}

void DescribeCaptchaConsoleSubDataInternational::SetDefendMode(const string& _defendMode)
{
    m_defendMode = _defendMode;
    m_defendModeHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::DefendModeHasBeenSet() const
{
    return m_defendModeHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetCreateTime() const
{
    return m_createTime;
}

void DescribeCaptchaConsoleSubDataInternational::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetUpdateTime() const
{
    return m_updateTime;
}

void DescribeCaptchaConsoleSubDataInternational::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DescribeCaptchaConsoleSubDataInternational::GetCheckAppidSwitch() const
{
    return m_checkAppidSwitch;
}

void DescribeCaptchaConsoleSubDataInternational::SetCheckAppidSwitch(const int64_t& _checkAppidSwitch)
{
    m_checkAppidSwitch = _checkAppidSwitch;
    m_checkAppidSwitchHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::CheckAppidSwitchHasBeenSet() const
{
    return m_checkAppidSwitchHasBeenSet;
}

vector<string> DescribeCaptchaConsoleSubDataInternational::GetTags() const
{
    return m_tags;
}

void DescribeCaptchaConsoleSubDataInternational::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t DescribeCaptchaConsoleSubDataInternational::GetCheckIvSwitch() const
{
    return m_checkIvSwitch;
}

void DescribeCaptchaConsoleSubDataInternational::SetCheckIvSwitch(const int64_t& _checkIvSwitch)
{
    m_checkIvSwitch = _checkIvSwitch;
    m_checkIvSwitchHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::CheckIvSwitchHasBeenSet() const
{
    return m_checkIvSwitchHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetDisableInvisibleSwitch() const
{
    return m_disableInvisibleSwitch;
}

void DescribeCaptchaConsoleSubDataInternational::SetDisableInvisibleSwitch(const string& _disableInvisibleSwitch)
{
    m_disableInvisibleSwitch = _disableInvisibleSwitch;
    m_disableInvisibleSwitchHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::DisableInvisibleSwitchHasBeenSet() const
{
    return m_disableInvisibleSwitchHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetVerifyDomain() const
{
    return m_verifyDomain;
}

void DescribeCaptchaConsoleSubDataInternational::SetVerifyDomain(const string& _verifyDomain)
{
    m_verifyDomain = _verifyDomain;
    m_verifyDomainHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::VerifyDomainHasBeenSet() const
{
    return m_verifyDomainHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetVerifyBundleId() const
{
    return m_verifyBundleId;
}

void DescribeCaptchaConsoleSubDataInternational::SetVerifyBundleId(const string& _verifyBundleId)
{
    m_verifyBundleId = _verifyBundleId;
    m_verifyBundleIdHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::VerifyBundleIdHasBeenSet() const
{
    return m_verifyBundleIdHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetVerifyPackage() const
{
    return m_verifyPackage;
}

void DescribeCaptchaConsoleSubDataInternational::SetVerifyPackage(const string& _verifyPackage)
{
    m_verifyPackage = _verifyPackage;
    m_verifyPackageHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::VerifyPackageHasBeenSet() const
{
    return m_verifyPackageHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetCheckBoxStyle() const
{
    return m_checkBoxStyle;
}

void DescribeCaptchaConsoleSubDataInternational::SetCheckBoxStyle(const string& _checkBoxStyle)
{
    m_checkBoxStyle = _checkBoxStyle;
    m_checkBoxStyleHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::CheckBoxStyleHasBeenSet() const
{
    return m_checkBoxStyleHasBeenSet;
}

string DescribeCaptchaConsoleSubDataInternational::GetCustomerType() const
{
    return m_customerType;
}

void DescribeCaptchaConsoleSubDataInternational::SetCustomerType(const string& _customerType)
{
    m_customerType = _customerType;
    m_customerTypeHasBeenSet = true;
}

bool DescribeCaptchaConsoleSubDataInternational::CustomerTypeHasBeenSet() const
{
    return m_customerTypeHasBeenSet;
}

