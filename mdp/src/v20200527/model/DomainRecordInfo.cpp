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

#include <tencentcloud/mdp/v20200527/model/DomainRecordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

DomainRecordInfo::DomainRecordInfo() :
    m_cdnDomainHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome DomainRecordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CdnDomain") && !value["CdnDomain"].IsNull())
    {
        if (!value["CdnDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainRecordInfo.CdnDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdnDomain = string(value["CdnDomain"].GetString());
        m_cdnDomainHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainRecordInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainRecordInfo.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainRecordInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainRecordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cdnDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdnDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdnDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

}


string DomainRecordInfo::GetCdnDomain() const
{
    return m_cdnDomain;
}

void DomainRecordInfo::SetCdnDomain(const string& _cdnDomain)
{
    m_cdnDomain = _cdnDomain;
    m_cdnDomainHasBeenSet = true;
}

bool DomainRecordInfo::CdnDomainHasBeenSet() const
{
    return m_cdnDomainHasBeenSet;
}

string DomainRecordInfo::GetRegion() const
{
    return m_region;
}

void DomainRecordInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DomainRecordInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DomainRecordInfo::GetChannelId() const
{
    return m_channelId;
}

void DomainRecordInfo::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool DomainRecordInfo::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string DomainRecordInfo::GetId() const
{
    return m_id;
}

void DomainRecordInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DomainRecordInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

