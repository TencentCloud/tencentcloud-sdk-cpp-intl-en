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

#include <tencentcloud/monitor/v20180724/model/CreateGrafanaNotificationChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

CreateGrafanaNotificationChannelRequest::CreateGrafanaNotificationChannelRequest() :
    m_instanceIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_orgIdHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_extraOrgIdsHasBeenSet(false),
    m_organizationIdsHasBeenSet(false)
{
}

string CreateGrafanaNotificationChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_orgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orgId, allocator);
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receivers.begin(); itr != m_receivers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_extraOrgIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraOrgIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extraOrgIds.begin(); itr != m_extraOrgIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_organizationIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_organizationIds.begin(); itr != m_organizationIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateGrafanaNotificationChannelRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateGrafanaNotificationChannelRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateGrafanaNotificationChannelRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateGrafanaNotificationChannelRequest::GetChannelName() const
{
    return m_channelName;
}

void CreateGrafanaNotificationChannelRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool CreateGrafanaNotificationChannelRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

int64_t CreateGrafanaNotificationChannelRequest::GetOrgId() const
{
    return m_orgId;
}

void CreateGrafanaNotificationChannelRequest::SetOrgId(const int64_t& _orgId)
{
    m_orgId = _orgId;
    m_orgIdHasBeenSet = true;
}

bool CreateGrafanaNotificationChannelRequest::OrgIdHasBeenSet() const
{
    return m_orgIdHasBeenSet;
}

vector<string> CreateGrafanaNotificationChannelRequest::GetReceivers() const
{
    return m_receivers;
}

void CreateGrafanaNotificationChannelRequest::SetReceivers(const vector<string>& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool CreateGrafanaNotificationChannelRequest::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

vector<string> CreateGrafanaNotificationChannelRequest::GetExtraOrgIds() const
{
    return m_extraOrgIds;
}

void CreateGrafanaNotificationChannelRequest::SetExtraOrgIds(const vector<string>& _extraOrgIds)
{
    m_extraOrgIds = _extraOrgIds;
    m_extraOrgIdsHasBeenSet = true;
}

bool CreateGrafanaNotificationChannelRequest::ExtraOrgIdsHasBeenSet() const
{
    return m_extraOrgIdsHasBeenSet;
}

vector<string> CreateGrafanaNotificationChannelRequest::GetOrganizationIds() const
{
    return m_organizationIds;
}

void CreateGrafanaNotificationChannelRequest::SetOrganizationIds(const vector<string>& _organizationIds)
{
    m_organizationIds = _organizationIds;
    m_organizationIdsHasBeenSet = true;
}

bool CreateGrafanaNotificationChannelRequest::OrganizationIdsHasBeenSet() const
{
    return m_organizationIdsHasBeenSet;
}


