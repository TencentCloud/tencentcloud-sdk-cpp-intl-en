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

#include <tencentcloud/cam/v20190116/model/GetPolicyVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

GetPolicyVersionRequest::GetPolicyVersionRequest() :
    m_policyIdHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

string GetPolicyVersionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyId, allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_versionId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t GetPolicyVersionRequest::GetPolicyId() const
{
    return m_policyId;
}

void GetPolicyVersionRequest::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool GetPolicyVersionRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

uint64_t GetPolicyVersionRequest::GetVersionId() const
{
    return m_versionId;
}

void GetPolicyVersionRequest::SetVersionId(const uint64_t& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool GetPolicyVersionRequest::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}


