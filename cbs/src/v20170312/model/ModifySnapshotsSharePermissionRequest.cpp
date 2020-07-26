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

#include <tencentcloud/cbs/v20170312/model/ModifySnapshotsSharePermissionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace rapidjson;
using namespace std;

ModifySnapshotsSharePermissionRequest::ModifySnapshotsSharePermissionRequest() :
    m_accountIdsHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_snapshotIdsHasBeenSet(false)
{
}

string ModifySnapshotsSharePermissionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accountIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccountIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_accountIds.begin(); itr != m_accountIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_permissionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_permission.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SnapshotIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_snapshotIds.begin(); itr != m_snapshotIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifySnapshotsSharePermissionRequest::GetAccountIds() const
{
    return m_accountIds;
}

void ModifySnapshotsSharePermissionRequest::SetAccountIds(const vector<string>& _accountIds)
{
    m_accountIds = _accountIds;
    m_accountIdsHasBeenSet = true;
}

bool ModifySnapshotsSharePermissionRequest::AccountIdsHasBeenSet() const
{
    return m_accountIdsHasBeenSet;
}

string ModifySnapshotsSharePermissionRequest::GetPermission() const
{
    return m_permission;
}

void ModifySnapshotsSharePermissionRequest::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool ModifySnapshotsSharePermissionRequest::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

vector<string> ModifySnapshotsSharePermissionRequest::GetSnapshotIds() const
{
    return m_snapshotIds;
}

void ModifySnapshotsSharePermissionRequest::SetSnapshotIds(const vector<string>& _snapshotIds)
{
    m_snapshotIds = _snapshotIds;
    m_snapshotIdsHasBeenSet = true;
}

bool ModifySnapshotsSharePermissionRequest::SnapshotIdsHasBeenSet() const
{
    return m_snapshotIdsHasBeenSet;
}


