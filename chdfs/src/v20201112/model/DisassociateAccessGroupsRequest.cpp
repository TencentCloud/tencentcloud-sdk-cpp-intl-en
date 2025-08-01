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

#include <tencentcloud/chdfs/v20201112/model/DisassociateAccessGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

DisassociateAccessGroupsRequest::DisassociateAccessGroupsRequest() :
    m_mountPointIdHasBeenSet(false),
    m_accessGroupIdsHasBeenSet(false)
{
}

string DisassociateAccessGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mountPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPointId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mountPointId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessGroupIds.begin(); itr != m_accessGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DisassociateAccessGroupsRequest::GetMountPointId() const
{
    return m_mountPointId;
}

void DisassociateAccessGroupsRequest::SetMountPointId(const string& _mountPointId)
{
    m_mountPointId = _mountPointId;
    m_mountPointIdHasBeenSet = true;
}

bool DisassociateAccessGroupsRequest::MountPointIdHasBeenSet() const
{
    return m_mountPointIdHasBeenSet;
}

vector<string> DisassociateAccessGroupsRequest::GetAccessGroupIds() const
{
    return m_accessGroupIds;
}

void DisassociateAccessGroupsRequest::SetAccessGroupIds(const vector<string>& _accessGroupIds)
{
    m_accessGroupIds = _accessGroupIds;
    m_accessGroupIdsHasBeenSet = true;
}

bool DisassociateAccessGroupsRequest::AccessGroupIdsHasBeenSet() const
{
    return m_accessGroupIdsHasBeenSet;
}


