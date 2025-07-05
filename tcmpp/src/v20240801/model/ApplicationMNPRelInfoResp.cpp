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

#include <tencentcloud/tcmpp/v20240801/model/ApplicationMNPRelInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

ApplicationMNPRelInfoResp::ApplicationMNPRelInfoResp() :
    m_mNPIdHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_mNPIconHasBeenSet(false),
    m_mNPTypeHasBeenSet(false),
    m_mNPIntroHasBeenSet(false),
    m_mNPDescHasBeenSet(false),
    m_effectStatusHasBeenSet(false),
    m_effectMNPVersionHasBeenSet(false),
    m_mNPOnlineVersionHasBeenSet(false),
    m_onlineStatusHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationMNPRelInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationMNPRelInfoResp.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationMNPRelInfoResp.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("MNPIcon") && !value["MNPIcon"].IsNull())
    {
        if (!value["MNPIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationMNPRelInfoResp.MNPIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIcon = string(value["MNPIcon"].GetString());
        m_mNPIconHasBeenSet = true;
    }

    if (value.HasMember("MNPType") && !value["MNPType"].IsNull())
    {
        if (!value["MNPType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationMNPRelInfoResp.MNPType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPType = string(value["MNPType"].GetString());
        m_mNPTypeHasBeenSet = true;
    }

    if (value.HasMember("MNPIntro") && !value["MNPIntro"].IsNull())
    {
        if (!value["MNPIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationMNPRelInfoResp.MNPIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIntro = string(value["MNPIntro"].GetString());
        m_mNPIntroHasBeenSet = true;
    }

    if (value.HasMember("MNPDesc") && !value["MNPDesc"].IsNull())
    {
        if (!value["MNPDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationMNPRelInfoResp.MNPDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPDesc = string(value["MNPDesc"].GetString());
        m_mNPDescHasBeenSet = true;
    }

    if (value.HasMember("EffectStatus") && !value["EffectStatus"].IsNull())
    {
        if (!value["EffectStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationMNPRelInfoResp.EffectStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectStatus = value["EffectStatus"].GetInt64();
        m_effectStatusHasBeenSet = true;
    }

    if (value.HasMember("EffectMNPVersion") && !value["EffectMNPVersion"].IsNull())
    {
        if (!value["EffectMNPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationMNPRelInfoResp.EffectMNPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectMNPVersion = string(value["EffectMNPVersion"].GetString());
        m_effectMNPVersionHasBeenSet = true;
    }

    if (value.HasMember("MNPOnlineVersion") && !value["MNPOnlineVersion"].IsNull())
    {
        if (!value["MNPOnlineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationMNPRelInfoResp.MNPOnlineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPOnlineVersion = string(value["MNPOnlineVersion"].GetString());
        m_mNPOnlineVersionHasBeenSet = true;
    }

    if (value.HasMember("OnlineStatus") && !value["OnlineStatus"].IsNull())
    {
        if (!value["OnlineStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationMNPRelInfoResp.OnlineStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineStatus = value["OnlineStatus"].GetInt64();
        m_onlineStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationMNPRelInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPName.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPType.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIntroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIntro";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPIntro.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_effectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectStatus, allocator);
    }

    if (m_effectMNPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectMNPVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectMNPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPOnlineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPOnlineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPOnlineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_onlineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineStatus, allocator);
    }

}


string ApplicationMNPRelInfoResp::GetMNPId() const
{
    return m_mNPId;
}

void ApplicationMNPRelInfoResp::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool ApplicationMNPRelInfoResp::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string ApplicationMNPRelInfoResp::GetMNPName() const
{
    return m_mNPName;
}

void ApplicationMNPRelInfoResp::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool ApplicationMNPRelInfoResp::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string ApplicationMNPRelInfoResp::GetMNPIcon() const
{
    return m_mNPIcon;
}

void ApplicationMNPRelInfoResp::SetMNPIcon(const string& _mNPIcon)
{
    m_mNPIcon = _mNPIcon;
    m_mNPIconHasBeenSet = true;
}

bool ApplicationMNPRelInfoResp::MNPIconHasBeenSet() const
{
    return m_mNPIconHasBeenSet;
}

string ApplicationMNPRelInfoResp::GetMNPType() const
{
    return m_mNPType;
}

void ApplicationMNPRelInfoResp::SetMNPType(const string& _mNPType)
{
    m_mNPType = _mNPType;
    m_mNPTypeHasBeenSet = true;
}

bool ApplicationMNPRelInfoResp::MNPTypeHasBeenSet() const
{
    return m_mNPTypeHasBeenSet;
}

string ApplicationMNPRelInfoResp::GetMNPIntro() const
{
    return m_mNPIntro;
}

void ApplicationMNPRelInfoResp::SetMNPIntro(const string& _mNPIntro)
{
    m_mNPIntro = _mNPIntro;
    m_mNPIntroHasBeenSet = true;
}

bool ApplicationMNPRelInfoResp::MNPIntroHasBeenSet() const
{
    return m_mNPIntroHasBeenSet;
}

string ApplicationMNPRelInfoResp::GetMNPDesc() const
{
    return m_mNPDesc;
}

void ApplicationMNPRelInfoResp::SetMNPDesc(const string& _mNPDesc)
{
    m_mNPDesc = _mNPDesc;
    m_mNPDescHasBeenSet = true;
}

bool ApplicationMNPRelInfoResp::MNPDescHasBeenSet() const
{
    return m_mNPDescHasBeenSet;
}

int64_t ApplicationMNPRelInfoResp::GetEffectStatus() const
{
    return m_effectStatus;
}

void ApplicationMNPRelInfoResp::SetEffectStatus(const int64_t& _effectStatus)
{
    m_effectStatus = _effectStatus;
    m_effectStatusHasBeenSet = true;
}

bool ApplicationMNPRelInfoResp::EffectStatusHasBeenSet() const
{
    return m_effectStatusHasBeenSet;
}

string ApplicationMNPRelInfoResp::GetEffectMNPVersion() const
{
    return m_effectMNPVersion;
}

void ApplicationMNPRelInfoResp::SetEffectMNPVersion(const string& _effectMNPVersion)
{
    m_effectMNPVersion = _effectMNPVersion;
    m_effectMNPVersionHasBeenSet = true;
}

bool ApplicationMNPRelInfoResp::EffectMNPVersionHasBeenSet() const
{
    return m_effectMNPVersionHasBeenSet;
}

string ApplicationMNPRelInfoResp::GetMNPOnlineVersion() const
{
    return m_mNPOnlineVersion;
}

void ApplicationMNPRelInfoResp::SetMNPOnlineVersion(const string& _mNPOnlineVersion)
{
    m_mNPOnlineVersion = _mNPOnlineVersion;
    m_mNPOnlineVersionHasBeenSet = true;
}

bool ApplicationMNPRelInfoResp::MNPOnlineVersionHasBeenSet() const
{
    return m_mNPOnlineVersionHasBeenSet;
}

int64_t ApplicationMNPRelInfoResp::GetOnlineStatus() const
{
    return m_onlineStatus;
}

void ApplicationMNPRelInfoResp::SetOnlineStatus(const int64_t& _onlineStatus)
{
    m_onlineStatus = _onlineStatus;
    m_onlineStatusHasBeenSet = true;
}

bool ApplicationMNPRelInfoResp::OnlineStatusHasBeenSet() const
{
    return m_onlineStatusHasBeenSet;
}

