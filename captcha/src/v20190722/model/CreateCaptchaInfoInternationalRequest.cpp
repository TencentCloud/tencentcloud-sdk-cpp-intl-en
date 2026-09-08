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

#include <tencentcloud/captcha/v20190722/model/CreateCaptchaInfoInternationalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

CreateCaptchaInfoInternationalRequest::CreateCaptchaInfoInternationalRequest() :
    m_appNameHasBeenSet(false),
    m_channelInfoHasBeenSet(false),
    m_verifyRankHasBeenSet(false),
    m_userSetCapTypeHasBeenSet(false),
    m_defendModeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_disableInvisibleSwitchHasBeenSet(false),
    m_verifyDomainHasBeenSet(false),
    m_verifyBundleIdHasBeenSet(false),
    m_verifyPackageHasBeenSet(false),
    m_checkAppidSwitchHasBeenSet(false),
    m_checkIvSwitchHasBeenSet(false),
    m_checkBoxStyleHasBeenSet(false)
{
}

string CreateCaptchaInfoInternationalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyRankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyRank";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyRank.c_str(), allocator).Move(), allocator);
    }

    if (m_userSetCapTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSetCapType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userSetCapType.c_str(), allocator).Move(), allocator);
    }

    if (m_defendModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_defendMode.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_disableInvisibleSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableInvisibleSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_disableInvisibleSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyBundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyBundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyBundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyPackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyPackage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyPackage.c_str(), allocator).Move(), allocator);
    }

    if (m_checkAppidSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAppidSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkAppidSwitch, allocator);
    }

    if (m_checkIvSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckIvSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkIvSwitch, allocator);
    }

    if (m_checkBoxStyleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckBoxStyle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkBoxStyle.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCaptchaInfoInternationalRequest::GetAppName() const
{
    return m_appName;
}

void CreateCaptchaInfoInternationalRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CreateCaptchaInfoInternationalRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string CreateCaptchaInfoInternationalRequest::GetChannelInfo() const
{
    return m_channelInfo;
}

void CreateCaptchaInfoInternationalRequest::SetChannelInfo(const string& _channelInfo)
{
    m_channelInfo = _channelInfo;
    m_channelInfoHasBeenSet = true;
}

bool CreateCaptchaInfoInternationalRequest::ChannelInfoHasBeenSet() const
{
    return m_channelInfoHasBeenSet;
}

string CreateCaptchaInfoInternationalRequest::GetVerifyRank() const
{
    return m_verifyRank;
}

void CreateCaptchaInfoInternationalRequest::SetVerifyRank(const string& _verifyRank)
{
    m_verifyRank = _verifyRank;
    m_verifyRankHasBeenSet = true;
}

bool CreateCaptchaInfoInternationalRequest::VerifyRankHasBeenSet() const
{
    return m_verifyRankHasBeenSet;
}

string CreateCaptchaInfoInternationalRequest::GetUserSetCapType() const
{
    return m_userSetCapType;
}

void CreateCaptchaInfoInternationalRequest::SetUserSetCapType(const string& _userSetCapType)
{
    m_userSetCapType = _userSetCapType;
    m_userSetCapTypeHasBeenSet = true;
}

bool CreateCaptchaInfoInternationalRequest::UserSetCapTypeHasBeenSet() const
{
    return m_userSetCapTypeHasBeenSet;
}

string CreateCaptchaInfoInternationalRequest::GetDefendMode() const
{
    return m_defendMode;
}

void CreateCaptchaInfoInternationalRequest::SetDefendMode(const string& _defendMode)
{
    m_defendMode = _defendMode;
    m_defendModeHasBeenSet = true;
}

bool CreateCaptchaInfoInternationalRequest::DefendModeHasBeenSet() const
{
    return m_defendModeHasBeenSet;
}

vector<string> CreateCaptchaInfoInternationalRequest::GetTags() const
{
    return m_tags;
}

void CreateCaptchaInfoInternationalRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateCaptchaInfoInternationalRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateCaptchaInfoInternationalRequest::GetDisableInvisibleSwitch() const
{
    return m_disableInvisibleSwitch;
}

void CreateCaptchaInfoInternationalRequest::SetDisableInvisibleSwitch(const string& _disableInvisibleSwitch)
{
    m_disableInvisibleSwitch = _disableInvisibleSwitch;
    m_disableInvisibleSwitchHasBeenSet = true;
}

bool CreateCaptchaInfoInternationalRequest::DisableInvisibleSwitchHasBeenSet() const
{
    return m_disableInvisibleSwitchHasBeenSet;
}

string CreateCaptchaInfoInternationalRequest::GetVerifyDomain() const
{
    return m_verifyDomain;
}

void CreateCaptchaInfoInternationalRequest::SetVerifyDomain(const string& _verifyDomain)
{
    m_verifyDomain = _verifyDomain;
    m_verifyDomainHasBeenSet = true;
}

bool CreateCaptchaInfoInternationalRequest::VerifyDomainHasBeenSet() const
{
    return m_verifyDomainHasBeenSet;
}

string CreateCaptchaInfoInternationalRequest::GetVerifyBundleId() const
{
    return m_verifyBundleId;
}

void CreateCaptchaInfoInternationalRequest::SetVerifyBundleId(const string& _verifyBundleId)
{
    m_verifyBundleId = _verifyBundleId;
    m_verifyBundleIdHasBeenSet = true;
}

bool CreateCaptchaInfoInternationalRequest::VerifyBundleIdHasBeenSet() const
{
    return m_verifyBundleIdHasBeenSet;
}

string CreateCaptchaInfoInternationalRequest::GetVerifyPackage() const
{
    return m_verifyPackage;
}

void CreateCaptchaInfoInternationalRequest::SetVerifyPackage(const string& _verifyPackage)
{
    m_verifyPackage = _verifyPackage;
    m_verifyPackageHasBeenSet = true;
}

bool CreateCaptchaInfoInternationalRequest::VerifyPackageHasBeenSet() const
{
    return m_verifyPackageHasBeenSet;
}

int64_t CreateCaptchaInfoInternationalRequest::GetCheckAppidSwitch() const
{
    return m_checkAppidSwitch;
}

void CreateCaptchaInfoInternationalRequest::SetCheckAppidSwitch(const int64_t& _checkAppidSwitch)
{
    m_checkAppidSwitch = _checkAppidSwitch;
    m_checkAppidSwitchHasBeenSet = true;
}

bool CreateCaptchaInfoInternationalRequest::CheckAppidSwitchHasBeenSet() const
{
    return m_checkAppidSwitchHasBeenSet;
}

int64_t CreateCaptchaInfoInternationalRequest::GetCheckIvSwitch() const
{
    return m_checkIvSwitch;
}

void CreateCaptchaInfoInternationalRequest::SetCheckIvSwitch(const int64_t& _checkIvSwitch)
{
    m_checkIvSwitch = _checkIvSwitch;
    m_checkIvSwitchHasBeenSet = true;
}

bool CreateCaptchaInfoInternationalRequest::CheckIvSwitchHasBeenSet() const
{
    return m_checkIvSwitchHasBeenSet;
}

string CreateCaptchaInfoInternationalRequest::GetCheckBoxStyle() const
{
    return m_checkBoxStyle;
}

void CreateCaptchaInfoInternationalRequest::SetCheckBoxStyle(const string& _checkBoxStyle)
{
    m_checkBoxStyle = _checkBoxStyle;
    m_checkBoxStyleHasBeenSet = true;
}

bool CreateCaptchaInfoInternationalRequest::CheckBoxStyleHasBeenSet() const
{
    return m_checkBoxStyleHasBeenSet;
}


