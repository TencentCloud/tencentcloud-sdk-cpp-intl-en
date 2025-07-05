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

#include <tencentcloud/vod/v20180717/model/Origin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

Origin::Origin() :
    m_originsHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_originPullProtocolHasBeenSet(false),
    m_backupOriginsHasBeenSet(false),
    m_backupOriginTypeHasBeenSet(false),
    m_backupServerNameHasBeenSet(false),
    m_originCompanyHasBeenSet(false)
{
}

CoreInternalOutcome Origin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Origins") && !value["Origins"].IsNull())
    {
        if (!value["Origins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Origin.Origins` is not array type"));

        const rapidjson::Value &tmpValue = value["Origins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_origins.push_back((*itr).GetString());
        }
        m_originsHasBeenSet = true;
    }

    if (value.HasMember("OriginType") && !value["OriginType"].IsNull())
    {
        if (!value["OriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.OriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originType = string(value["OriginType"].GetString());
        m_originTypeHasBeenSet = true;
    }

    if (value.HasMember("ServerName") && !value["ServerName"].IsNull())
    {
        if (!value["ServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(value["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
    }

    if (value.HasMember("OriginPullProtocol") && !value["OriginPullProtocol"].IsNull())
    {
        if (!value["OriginPullProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.OriginPullProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originPullProtocol = string(value["OriginPullProtocol"].GetString());
        m_originPullProtocolHasBeenSet = true;
    }

    if (value.HasMember("BackupOrigins") && !value["BackupOrigins"].IsNull())
    {
        if (!value["BackupOrigins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Origin.BackupOrigins` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupOrigins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_backupOrigins.push_back((*itr).GetString());
        }
        m_backupOriginsHasBeenSet = true;
    }

    if (value.HasMember("BackupOriginType") && !value["BackupOriginType"].IsNull())
    {
        if (!value["BackupOriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.BackupOriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupOriginType = string(value["BackupOriginType"].GetString());
        m_backupOriginTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupServerName") && !value["BackupServerName"].IsNull())
    {
        if (!value["BackupServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.BackupServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupServerName = string(value["BackupServerName"].GetString());
        m_backupServerNameHasBeenSet = true;
    }

    if (value.HasMember("OriginCompany") && !value["OriginCompany"].IsNull())
    {
        if (!value["OriginCompany"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.OriginCompany` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originCompany = string(value["OriginCompany"].GetString());
        m_originCompanyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Origin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_origins.begin(); itr != m_origins.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_originPullProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPullProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originPullProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_backupOriginsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupOrigins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupOrigins.begin(); itr != m_backupOrigins.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupOriginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupOriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupOriginType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupServerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupServerName.c_str(), allocator).Move(), allocator);
    }

    if (m_originCompanyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginCompany";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originCompany.c_str(), allocator).Move(), allocator);
    }

}


vector<string> Origin::GetOrigins() const
{
    return m_origins;
}

void Origin::SetOrigins(const vector<string>& _origins)
{
    m_origins = _origins;
    m_originsHasBeenSet = true;
}

bool Origin::OriginsHasBeenSet() const
{
    return m_originsHasBeenSet;
}

string Origin::GetOriginType() const
{
    return m_originType;
}

void Origin::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool Origin::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

string Origin::GetServerName() const
{
    return m_serverName;
}

void Origin::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool Origin::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string Origin::GetOriginPullProtocol() const
{
    return m_originPullProtocol;
}

void Origin::SetOriginPullProtocol(const string& _originPullProtocol)
{
    m_originPullProtocol = _originPullProtocol;
    m_originPullProtocolHasBeenSet = true;
}

bool Origin::OriginPullProtocolHasBeenSet() const
{
    return m_originPullProtocolHasBeenSet;
}

vector<string> Origin::GetBackupOrigins() const
{
    return m_backupOrigins;
}

void Origin::SetBackupOrigins(const vector<string>& _backupOrigins)
{
    m_backupOrigins = _backupOrigins;
    m_backupOriginsHasBeenSet = true;
}

bool Origin::BackupOriginsHasBeenSet() const
{
    return m_backupOriginsHasBeenSet;
}

string Origin::GetBackupOriginType() const
{
    return m_backupOriginType;
}

void Origin::SetBackupOriginType(const string& _backupOriginType)
{
    m_backupOriginType = _backupOriginType;
    m_backupOriginTypeHasBeenSet = true;
}

bool Origin::BackupOriginTypeHasBeenSet() const
{
    return m_backupOriginTypeHasBeenSet;
}

string Origin::GetBackupServerName() const
{
    return m_backupServerName;
}

void Origin::SetBackupServerName(const string& _backupServerName)
{
    m_backupServerName = _backupServerName;
    m_backupServerNameHasBeenSet = true;
}

bool Origin::BackupServerNameHasBeenSet() const
{
    return m_backupServerNameHasBeenSet;
}

string Origin::GetOriginCompany() const
{
    return m_originCompany;
}

void Origin::SetOriginCompany(const string& _originCompany)
{
    m_originCompany = _originCompany;
    m_originCompanyHasBeenSet = true;
}

bool Origin::OriginCompanyHasBeenSet() const
{
    return m_originCompanyHasBeenSet;
}

