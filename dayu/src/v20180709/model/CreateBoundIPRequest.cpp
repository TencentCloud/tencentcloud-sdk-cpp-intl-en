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

#include <tencentcloud/dayu/v20180709/model/CreateBoundIPRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

CreateBoundIPRequest::CreateBoundIPRequest() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_boundDevListHasBeenSet(false),
    m_unBoundDevListHasBeenSet(false),
    m_copyPolicyHasBeenSet(false)
{
}

string CreateBoundIPRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_boundDevListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BoundDevList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_boundDevList.begin(); itr != m_boundDevList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_unBoundDevListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UnBoundDevList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_unBoundDevList.begin(); itr != m_unBoundDevList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_copyPolicyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CopyPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_copyPolicy.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBoundIPRequest::GetBusiness() const
{
    return m_business;
}

void CreateBoundIPRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool CreateBoundIPRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string CreateBoundIPRequest::GetId() const
{
    return m_id;
}

void CreateBoundIPRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateBoundIPRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<BoundIpInfo> CreateBoundIPRequest::GetBoundDevList() const
{
    return m_boundDevList;
}

void CreateBoundIPRequest::SetBoundDevList(const vector<BoundIpInfo>& _boundDevList)
{
    m_boundDevList = _boundDevList;
    m_boundDevListHasBeenSet = true;
}

bool CreateBoundIPRequest::BoundDevListHasBeenSet() const
{
    return m_boundDevListHasBeenSet;
}

vector<BoundIpInfo> CreateBoundIPRequest::GetUnBoundDevList() const
{
    return m_unBoundDevList;
}

void CreateBoundIPRequest::SetUnBoundDevList(const vector<BoundIpInfo>& _unBoundDevList)
{
    m_unBoundDevList = _unBoundDevList;
    m_unBoundDevListHasBeenSet = true;
}

bool CreateBoundIPRequest::UnBoundDevListHasBeenSet() const
{
    return m_unBoundDevListHasBeenSet;
}

string CreateBoundIPRequest::GetCopyPolicy() const
{
    return m_copyPolicy;
}

void CreateBoundIPRequest::SetCopyPolicy(const string& _copyPolicy)
{
    m_copyPolicy = _copyPolicy;
    m_copyPolicyHasBeenSet = true;
}

bool CreateBoundIPRequest::CopyPolicyHasBeenSet() const
{
    return m_copyPolicyHasBeenSet;
}


