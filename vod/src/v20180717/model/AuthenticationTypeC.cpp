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

#include <tencentcloud/vod/v20180717/model/AuthenticationTypeC.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AuthenticationTypeC::AuthenticationTypeC() :
    m_secretKeyHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_fileExtensionsHasBeenSet(false),
    m_filterTypeHasBeenSet(false),
    m_timeFormatHasBeenSet(false),
    m_backupSecretKeyHasBeenSet(false)
{
}

CoreInternalOutcome AuthenticationTypeC::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationTypeC.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationTypeC.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("FileExtensions") && !value["FileExtensions"].IsNull())
    {
        if (!value["FileExtensions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuthenticationTypeC.FileExtensions` is not array type"));

        const rapidjson::Value &tmpValue = value["FileExtensions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileExtensions.push_back((*itr).GetString());
        }
        m_fileExtensionsHasBeenSet = true;
    }

    if (value.HasMember("FilterType") && !value["FilterType"].IsNull())
    {
        if (!value["FilterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationTypeC.FilterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterType = string(value["FilterType"].GetString());
        m_filterTypeHasBeenSet = true;
    }

    if (value.HasMember("TimeFormat") && !value["TimeFormat"].IsNull())
    {
        if (!value["TimeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationTypeC.TimeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFormat = string(value["TimeFormat"].GetString());
        m_timeFormatHasBeenSet = true;
    }

    if (value.HasMember("BackupSecretKey") && !value["BackupSecretKey"].IsNull())
    {
        if (!value["BackupSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthenticationTypeC.BackupSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupSecretKey = string(value["BackupSecretKey"].GetString());
        m_backupSecretKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthenticationTypeC::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_fileExtensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExtensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileExtensions.begin(); itr != m_fileExtensions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupSecretKey.c_str(), allocator).Move(), allocator);
    }

}


string AuthenticationTypeC::GetSecretKey() const
{
    return m_secretKey;
}

void AuthenticationTypeC::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool AuthenticationTypeC::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

uint64_t AuthenticationTypeC::GetExpireTime() const
{
    return m_expireTime;
}

void AuthenticationTypeC::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool AuthenticationTypeC::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

vector<string> AuthenticationTypeC::GetFileExtensions() const
{
    return m_fileExtensions;
}

void AuthenticationTypeC::SetFileExtensions(const vector<string>& _fileExtensions)
{
    m_fileExtensions = _fileExtensions;
    m_fileExtensionsHasBeenSet = true;
}

bool AuthenticationTypeC::FileExtensionsHasBeenSet() const
{
    return m_fileExtensionsHasBeenSet;
}

string AuthenticationTypeC::GetFilterType() const
{
    return m_filterType;
}

void AuthenticationTypeC::SetFilterType(const string& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool AuthenticationTypeC::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

string AuthenticationTypeC::GetTimeFormat() const
{
    return m_timeFormat;
}

void AuthenticationTypeC::SetTimeFormat(const string& _timeFormat)
{
    m_timeFormat = _timeFormat;
    m_timeFormatHasBeenSet = true;
}

bool AuthenticationTypeC::TimeFormatHasBeenSet() const
{
    return m_timeFormatHasBeenSet;
}

string AuthenticationTypeC::GetBackupSecretKey() const
{
    return m_backupSecretKey;
}

void AuthenticationTypeC::SetBackupSecretKey(const string& _backupSecretKey)
{
    m_backupSecretKey = _backupSecretKey;
    m_backupSecretKeyHasBeenSet = true;
}

bool AuthenticationTypeC::BackupSecretKeyHasBeenSet() const
{
    return m_backupSecretKeyHasBeenSet;
}

