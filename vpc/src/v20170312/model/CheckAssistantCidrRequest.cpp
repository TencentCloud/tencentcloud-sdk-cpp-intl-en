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

#include <tencentcloud/vpc/v20170312/model/CheckAssistantCidrRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CheckAssistantCidrRequest::CheckAssistantCidrRequest() :
    m_vpcIdHasBeenSet(false),
    m_newCidrBlocksHasBeenSet(false),
    m_oldCidrBlocksHasBeenSet(false)
{
}

string CheckAssistantCidrRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_newCidrBlocksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewCidrBlocks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_newCidrBlocks.begin(); itr != m_newCidrBlocks.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_oldCidrBlocksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldCidrBlocks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_oldCidrBlocks.begin(); itr != m_oldCidrBlocks.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckAssistantCidrRequest::GetVpcId() const
{
    return m_vpcId;
}

void CheckAssistantCidrRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CheckAssistantCidrRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> CheckAssistantCidrRequest::GetNewCidrBlocks() const
{
    return m_newCidrBlocks;
}

void CheckAssistantCidrRequest::SetNewCidrBlocks(const vector<string>& _newCidrBlocks)
{
    m_newCidrBlocks = _newCidrBlocks;
    m_newCidrBlocksHasBeenSet = true;
}

bool CheckAssistantCidrRequest::NewCidrBlocksHasBeenSet() const
{
    return m_newCidrBlocksHasBeenSet;
}

vector<string> CheckAssistantCidrRequest::GetOldCidrBlocks() const
{
    return m_oldCidrBlocks;
}

void CheckAssistantCidrRequest::SetOldCidrBlocks(const vector<string>& _oldCidrBlocks)
{
    m_oldCidrBlocks = _oldCidrBlocks;
    m_oldCidrBlocksHasBeenSet = true;
}

bool CheckAssistantCidrRequest::OldCidrBlocksHasBeenSet() const
{
    return m_oldCidrBlocksHasBeenSet;
}


