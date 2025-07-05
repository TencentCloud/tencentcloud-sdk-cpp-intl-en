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

#include <tencentcloud/tcmpp/v20240801/model/ProcessMNPApprovalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

ProcessMNPApprovalRequest::ProcessMNPApprovalRequest() :
    m_approvalNoHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_approvalItemsHasBeenSet(false)
{
}

string ProcessMNPApprovalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_approvalNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_approvalNo.c_str(), allocator).Move(), allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_approvalItems.begin(); itr != m_approvalItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ProcessMNPApprovalRequest::GetApprovalNo() const
{
    return m_approvalNo;
}

void ProcessMNPApprovalRequest::SetApprovalNo(const string& _approvalNo)
{
    m_approvalNo = _approvalNo;
    m_approvalNoHasBeenSet = true;
}

bool ProcessMNPApprovalRequest::ApprovalNoHasBeenSet() const
{
    return m_approvalNoHasBeenSet;
}

string ProcessMNPApprovalRequest::GetPlatformId() const
{
    return m_platformId;
}

void ProcessMNPApprovalRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ProcessMNPApprovalRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

vector<ApprovalItem> ProcessMNPApprovalRequest::GetApprovalItems() const
{
    return m_approvalItems;
}

void ProcessMNPApprovalRequest::SetApprovalItems(const vector<ApprovalItem>& _approvalItems)
{
    m_approvalItems = _approvalItems;
    m_approvalItemsHasBeenSet = true;
}

bool ProcessMNPApprovalRequest::ApprovalItemsHasBeenSet() const
{
    return m_approvalItemsHasBeenSet;
}


