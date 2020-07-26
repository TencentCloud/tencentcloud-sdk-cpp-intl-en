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

#include <tencentcloud/iai/v20200303/model/CopyPersonRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20200303::Model;
using namespace rapidjson;
using namespace std;

CopyPersonRequest::CopyPersonRequest() :
    m_personIdHasBeenSet(false),
    m_groupIdsHasBeenSet(false)
{
}

string CopyPersonRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_personIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CopyPersonRequest::GetPersonId() const
{
    return m_personId;
}

void CopyPersonRequest::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool CopyPersonRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

vector<string> CopyPersonRequest::GetGroupIds() const
{
    return m_groupIds;
}

void CopyPersonRequest::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool CopyPersonRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}


