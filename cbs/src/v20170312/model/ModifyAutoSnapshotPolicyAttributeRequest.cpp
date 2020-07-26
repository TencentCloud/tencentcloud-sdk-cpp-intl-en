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

#include <tencentcloud/cbs/v20170312/model/ModifyAutoSnapshotPolicyAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace rapidjson;
using namespace std;

ModifyAutoSnapshotPolicyAttributeRequest::ModifyAutoSnapshotPolicyAttributeRequest() :
    m_autoSnapshotPolicyIdHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_autoSnapshotPolicyNameHasBeenSet(false),
    m_isActivatedHasBeenSet(false),
    m_isPermanentHasBeenSet(false),
    m_retentionDaysHasBeenSet(false)
{
}

string ModifyAutoSnapshotPolicyAttributeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoSnapshotPolicyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoSnapshotPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_autoSnapshotPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policy.begin(); itr != m_policy.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoSnapshotPolicyNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoSnapshotPolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_autoSnapshotPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_isActivatedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsActivated";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isActivated, allocator);
    }

    if (m_isPermanentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsPermanent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPermanent, allocator);
    }

    if (m_retentionDaysHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RetentionDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionDays, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAutoSnapshotPolicyAttributeRequest::GetAutoSnapshotPolicyId() const
{
    return m_autoSnapshotPolicyId;
}

void ModifyAutoSnapshotPolicyAttributeRequest::SetAutoSnapshotPolicyId(const string& _autoSnapshotPolicyId)
{
    m_autoSnapshotPolicyId = _autoSnapshotPolicyId;
    m_autoSnapshotPolicyIdHasBeenSet = true;
}

bool ModifyAutoSnapshotPolicyAttributeRequest::AutoSnapshotPolicyIdHasBeenSet() const
{
    return m_autoSnapshotPolicyIdHasBeenSet;
}

vector<Policy> ModifyAutoSnapshotPolicyAttributeRequest::GetPolicy() const
{
    return m_policy;
}

void ModifyAutoSnapshotPolicyAttributeRequest::SetPolicy(const vector<Policy>& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool ModifyAutoSnapshotPolicyAttributeRequest::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

string ModifyAutoSnapshotPolicyAttributeRequest::GetAutoSnapshotPolicyName() const
{
    return m_autoSnapshotPolicyName;
}

void ModifyAutoSnapshotPolicyAttributeRequest::SetAutoSnapshotPolicyName(const string& _autoSnapshotPolicyName)
{
    m_autoSnapshotPolicyName = _autoSnapshotPolicyName;
    m_autoSnapshotPolicyNameHasBeenSet = true;
}

bool ModifyAutoSnapshotPolicyAttributeRequest::AutoSnapshotPolicyNameHasBeenSet() const
{
    return m_autoSnapshotPolicyNameHasBeenSet;
}

bool ModifyAutoSnapshotPolicyAttributeRequest::GetIsActivated() const
{
    return m_isActivated;
}

void ModifyAutoSnapshotPolicyAttributeRequest::SetIsActivated(const bool& _isActivated)
{
    m_isActivated = _isActivated;
    m_isActivatedHasBeenSet = true;
}

bool ModifyAutoSnapshotPolicyAttributeRequest::IsActivatedHasBeenSet() const
{
    return m_isActivatedHasBeenSet;
}

bool ModifyAutoSnapshotPolicyAttributeRequest::GetIsPermanent() const
{
    return m_isPermanent;
}

void ModifyAutoSnapshotPolicyAttributeRequest::SetIsPermanent(const bool& _isPermanent)
{
    m_isPermanent = _isPermanent;
    m_isPermanentHasBeenSet = true;
}

bool ModifyAutoSnapshotPolicyAttributeRequest::IsPermanentHasBeenSet() const
{
    return m_isPermanentHasBeenSet;
}

uint64_t ModifyAutoSnapshotPolicyAttributeRequest::GetRetentionDays() const
{
    return m_retentionDays;
}

void ModifyAutoSnapshotPolicyAttributeRequest::SetRetentionDays(const uint64_t& _retentionDays)
{
    m_retentionDays = _retentionDays;
    m_retentionDaysHasBeenSet = true;
}

bool ModifyAutoSnapshotPolicyAttributeRequest::RetentionDaysHasBeenSet() const
{
    return m_retentionDaysHasBeenSet;
}


