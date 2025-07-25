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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListGroupInstanceGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyGroupListGroupInstanceGroup::DescribePolicyGroupListGroupInstanceGroup() :
    m_instanceGroupIdHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_lastEditUinHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_instanceSumHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_insertTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyGroupListGroupInstanceGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceGroupId") && !value["InstanceGroupId"].IsNull())
    {
        if (!value["InstanceGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroupInstanceGroup.InstanceGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceGroupId = value["InstanceGroupId"].GetInt64();
        m_instanceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroupInstanceGroup.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (value.HasMember("LastEditUin") && !value["LastEditUin"].IsNull())
    {
        if (!value["LastEditUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroupInstanceGroup.LastEditUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastEditUin = string(value["LastEditUin"].GetString());
        m_lastEditUinHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroupInstanceGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceSum") && !value["InstanceSum"].IsNull())
    {
        if (!value["InstanceSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroupInstanceGroup.InstanceSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceSum = value["InstanceSum"].GetInt64();
        m_instanceSumHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroupInstanceGroup.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupListGroupInstanceGroup.InsertTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = value["InsertTime"].GetInt64();
        m_insertTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyGroupListGroupInstanceGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceGroupId, allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastEditUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastEditUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastEditUin.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceSum, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_insertTime, allocator);
    }

}


int64_t DescribePolicyGroupListGroupInstanceGroup::GetInstanceGroupId() const
{
    return m_instanceGroupId;
}

void DescribePolicyGroupListGroupInstanceGroup::SetInstanceGroupId(const int64_t& _instanceGroupId)
{
    m_instanceGroupId = _instanceGroupId;
    m_instanceGroupIdHasBeenSet = true;
}

bool DescribePolicyGroupListGroupInstanceGroup::InstanceGroupIdHasBeenSet() const
{
    return m_instanceGroupIdHasBeenSet;
}

string DescribePolicyGroupListGroupInstanceGroup::GetViewName() const
{
    return m_viewName;
}

void DescribePolicyGroupListGroupInstanceGroup::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool DescribePolicyGroupListGroupInstanceGroup::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string DescribePolicyGroupListGroupInstanceGroup::GetLastEditUin() const
{
    return m_lastEditUin;
}

void DescribePolicyGroupListGroupInstanceGroup::SetLastEditUin(const string& _lastEditUin)
{
    m_lastEditUin = _lastEditUin;
    m_lastEditUinHasBeenSet = true;
}

bool DescribePolicyGroupListGroupInstanceGroup::LastEditUinHasBeenSet() const
{
    return m_lastEditUinHasBeenSet;
}

string DescribePolicyGroupListGroupInstanceGroup::GetGroupName() const
{
    return m_groupName;
}

void DescribePolicyGroupListGroupInstanceGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribePolicyGroupListGroupInstanceGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t DescribePolicyGroupListGroupInstanceGroup::GetInstanceSum() const
{
    return m_instanceSum;
}

void DescribePolicyGroupListGroupInstanceGroup::SetInstanceSum(const int64_t& _instanceSum)
{
    m_instanceSum = _instanceSum;
    m_instanceSumHasBeenSet = true;
}

bool DescribePolicyGroupListGroupInstanceGroup::InstanceSumHasBeenSet() const
{
    return m_instanceSumHasBeenSet;
}

int64_t DescribePolicyGroupListGroupInstanceGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void DescribePolicyGroupListGroupInstanceGroup::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DescribePolicyGroupListGroupInstanceGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DescribePolicyGroupListGroupInstanceGroup::GetInsertTime() const
{
    return m_insertTime;
}

void DescribePolicyGroupListGroupInstanceGroup::SetInsertTime(const int64_t& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool DescribePolicyGroupListGroupInstanceGroup::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

