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

#include <tencentcloud/tcmpp/v20240801/model/GlobalDomainDescribeListInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

GlobalDomainDescribeListInfoResp::GlobalDomainDescribeListInfoResp() :
    m_domainIdHasBeenSet(false),
    m_customerIDHasBeenSet(false),
    m_domainURLHasBeenSet(false),
    m_domainTypeHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateUserHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome GlobalDomainDescribeListInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalDomainDescribeListInfoResp.DomainId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = value["DomainId"].GetInt64();
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerID") && !value["CustomerID"].IsNull())
    {
        if (!value["CustomerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalDomainDescribeListInfoResp.CustomerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerID = string(value["CustomerID"].GetString());
        m_customerIDHasBeenSet = true;
    }

    if (value.HasMember("DomainURL") && !value["DomainURL"].IsNull())
    {
        if (!value["DomainURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalDomainDescribeListInfoResp.DomainURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainURL = string(value["DomainURL"].GetString());
        m_domainURLHasBeenSet = true;
    }

    if (value.HasMember("DomainType") && !value["DomainType"].IsNull())
    {
        if (!value["DomainType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalDomainDescribeListInfoResp.DomainType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_domainType = value["DomainType"].GetInt64();
        m_domainTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalDomainDescribeListInfoResp.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalDomainDescribeListInfoResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateUser") && !value["UpdateUser"].IsNull())
    {
        if (!value["UpdateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalDomainDescribeListInfoResp.UpdateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUser = string(value["UpdateUser"].GetString());
        m_updateUserHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalDomainDescribeListInfoResp.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GlobalDomainDescribeListInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainId, allocator);
    }

    if (m_customerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerID.c_str(), allocator).Move(), allocator);
    }

    if (m_domainURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainURL.c_str(), allocator).Move(), allocator);
    }

    if (m_domainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainType, allocator);
    }

    if (m_createUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUser.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUser.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t GlobalDomainDescribeListInfoResp::GetDomainId() const
{
    return m_domainId;
}

void GlobalDomainDescribeListInfoResp::SetDomainId(const int64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool GlobalDomainDescribeListInfoResp::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string GlobalDomainDescribeListInfoResp::GetCustomerID() const
{
    return m_customerID;
}

void GlobalDomainDescribeListInfoResp::SetCustomerID(const string& _customerID)
{
    m_customerID = _customerID;
    m_customerIDHasBeenSet = true;
}

bool GlobalDomainDescribeListInfoResp::CustomerIDHasBeenSet() const
{
    return m_customerIDHasBeenSet;
}

string GlobalDomainDescribeListInfoResp::GetDomainURL() const
{
    return m_domainURL;
}

void GlobalDomainDescribeListInfoResp::SetDomainURL(const string& _domainURL)
{
    m_domainURL = _domainURL;
    m_domainURLHasBeenSet = true;
}

bool GlobalDomainDescribeListInfoResp::DomainURLHasBeenSet() const
{
    return m_domainURLHasBeenSet;
}

int64_t GlobalDomainDescribeListInfoResp::GetDomainType() const
{
    return m_domainType;
}

void GlobalDomainDescribeListInfoResp::SetDomainType(const int64_t& _domainType)
{
    m_domainType = _domainType;
    m_domainTypeHasBeenSet = true;
}

bool GlobalDomainDescribeListInfoResp::DomainTypeHasBeenSet() const
{
    return m_domainTypeHasBeenSet;
}

string GlobalDomainDescribeListInfoResp::GetCreateUser() const
{
    return m_createUser;
}

void GlobalDomainDescribeListInfoResp::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool GlobalDomainDescribeListInfoResp::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string GlobalDomainDescribeListInfoResp::GetCreateTime() const
{
    return m_createTime;
}

void GlobalDomainDescribeListInfoResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GlobalDomainDescribeListInfoResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GlobalDomainDescribeListInfoResp::GetUpdateUser() const
{
    return m_updateUser;
}

void GlobalDomainDescribeListInfoResp::SetUpdateUser(const string& _updateUser)
{
    m_updateUser = _updateUser;
    m_updateUserHasBeenSet = true;
}

bool GlobalDomainDescribeListInfoResp::UpdateUserHasBeenSet() const
{
    return m_updateUserHasBeenSet;
}

string GlobalDomainDescribeListInfoResp::GetUpdateTime() const
{
    return m_updateTime;
}

void GlobalDomainDescribeListInfoResp::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool GlobalDomainDescribeListInfoResp::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

