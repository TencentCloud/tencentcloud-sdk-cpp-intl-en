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

#include <tencentcloud/vod/v20180717/model/CDNDomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CDNDomainInfo::CDNDomainInfo() :
    m_domainHasBeenSet(false),
    m_deployStatusHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

CoreInternalOutcome CDNDomainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DeployStatus") && !value["DeployStatus"].IsNull())
    {
        if (!value["DeployStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainInfo.DeployStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployStatus = string(value["DeployStatus"].GetString());
        m_deployStatusHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainInfo.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNDomainInfo.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CDNDomainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_deployStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CDNDomainInfo::GetDomain() const
{
    return m_domain;
}

void CDNDomainInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CDNDomainInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CDNDomainInfo::GetDeployStatus() const
{
    return m_deployStatus;
}

void CDNDomainInfo::SetDeployStatus(const string& _deployStatus)
{
    m_deployStatus = _deployStatus;
    m_deployStatusHasBeenSet = true;
}

bool CDNDomainInfo::DeployStatusHasBeenSet() const
{
    return m_deployStatusHasBeenSet;
}

string CDNDomainInfo::GetCname() const
{
    return m_cname;
}

void CDNDomainInfo::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool CDNDomainInfo::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

string CDNDomainInfo::GetCreateTime() const
{
    return m_createTime;
}

void CDNDomainInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CDNDomainInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

CDNDomainConfig CDNDomainInfo::GetConfig() const
{
    return m_config;
}

void CDNDomainInfo::SetConfig(const CDNDomainConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool CDNDomainInfo::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

