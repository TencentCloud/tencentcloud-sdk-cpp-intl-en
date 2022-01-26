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

#include <tencentcloud/mdl/v20200326/model/SDMCSettingsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

SDMCSettingsInfo::SDMCSettingsInfo() :
    m_uidHasBeenSet(false),
    m_tracksHasBeenSet(false),
    m_secretIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_tokenNameHasBeenSet(false)
{
}

CoreInternalOutcome SDMCSettingsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SDMCSettingsInfo.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("Tracks") && !value["Tracks"].IsNull())
    {
        if (!value["Tracks"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SDMCSettingsInfo.Tracks` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tracks = value["Tracks"].GetInt64();
        m_tracksHasBeenSet = true;
    }

    if (value.HasMember("SecretId") && !value["SecretId"].IsNull())
    {
        if (!value["SecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SDMCSettingsInfo.SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretId = string(value["SecretId"].GetString());
        m_secretIdHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SDMCSettingsInfo.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SDMCSettingsInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("TokenName") && !value["TokenName"].IsNull())
    {
        if (!value["TokenName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SDMCSettingsInfo.TokenName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenName = string(value["TokenName"].GetString());
        m_tokenNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SDMCSettingsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_tracksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tracks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tracks, allocator);
    }

    if (m_secretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenName.c_str(), allocator).Move(), allocator);
    }

}


string SDMCSettingsInfo::GetUid() const
{
    return m_uid;
}

void SDMCSettingsInfo::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool SDMCSettingsInfo::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

int64_t SDMCSettingsInfo::GetTracks() const
{
    return m_tracks;
}

void SDMCSettingsInfo::SetTracks(const int64_t& _tracks)
{
    m_tracks = _tracks;
    m_tracksHasBeenSet = true;
}

bool SDMCSettingsInfo::TracksHasBeenSet() const
{
    return m_tracksHasBeenSet;
}

string SDMCSettingsInfo::GetSecretId() const
{
    return m_secretId;
}

void SDMCSettingsInfo::SetSecretId(const string& _secretId)
{
    m_secretId = _secretId;
    m_secretIdHasBeenSet = true;
}

bool SDMCSettingsInfo::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string SDMCSettingsInfo::GetSecretKey() const
{
    return m_secretKey;
}

void SDMCSettingsInfo::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool SDMCSettingsInfo::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string SDMCSettingsInfo::GetUrl() const
{
    return m_url;
}

void SDMCSettingsInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SDMCSettingsInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string SDMCSettingsInfo::GetTokenName() const
{
    return m_tokenName;
}

void SDMCSettingsInfo::SetTokenName(const string& _tokenName)
{
    m_tokenName = _tokenName;
    m_tokenNameHasBeenSet = true;
}

bool SDMCSettingsInfo::TokenNameHasBeenSet() const
{
    return m_tokenNameHasBeenSet;
}

