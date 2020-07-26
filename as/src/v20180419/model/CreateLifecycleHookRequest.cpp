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

#include <tencentcloud/as/v20180419/model/CreateLifecycleHookRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

CreateLifecycleHookRequest::CreateLifecycleHookRequest() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_lifecycleHookNameHasBeenSet(false),
    m_lifecycleTransitionHasBeenSet(false),
    m_defaultResultHasBeenSet(false),
    m_heartbeatTimeoutHasBeenSet(false),
    m_notificationMetadataHasBeenSet(false),
    m_notificationTargetHasBeenSet(false),
    m_lifecycleTransitionTypeHasBeenSet(false)
{
}

string CreateLifecycleHookRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleHookNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LifecycleHookName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_lifecycleHookName.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleTransitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LifecycleTransition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_lifecycleTransition.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultResultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_defaultResult.c_str(), allocator).Move(), allocator);
    }

    if (m_heartbeatTimeoutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HeartbeatTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_heartbeatTimeout, allocator);
    }

    if (m_notificationMetadataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotificationMetadata";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_notificationMetadata.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationTargetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotificationTarget";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_notificationTarget.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_lifecycleTransitionTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LifecycleTransitionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_lifecycleTransitionType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLifecycleHookRequest::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void CreateLifecycleHookRequest::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool CreateLifecycleHookRequest::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string CreateLifecycleHookRequest::GetLifecycleHookName() const
{
    return m_lifecycleHookName;
}

void CreateLifecycleHookRequest::SetLifecycleHookName(const string& _lifecycleHookName)
{
    m_lifecycleHookName = _lifecycleHookName;
    m_lifecycleHookNameHasBeenSet = true;
}

bool CreateLifecycleHookRequest::LifecycleHookNameHasBeenSet() const
{
    return m_lifecycleHookNameHasBeenSet;
}

string CreateLifecycleHookRequest::GetLifecycleTransition() const
{
    return m_lifecycleTransition;
}

void CreateLifecycleHookRequest::SetLifecycleTransition(const string& _lifecycleTransition)
{
    m_lifecycleTransition = _lifecycleTransition;
    m_lifecycleTransitionHasBeenSet = true;
}

bool CreateLifecycleHookRequest::LifecycleTransitionHasBeenSet() const
{
    return m_lifecycleTransitionHasBeenSet;
}

string CreateLifecycleHookRequest::GetDefaultResult() const
{
    return m_defaultResult;
}

void CreateLifecycleHookRequest::SetDefaultResult(const string& _defaultResult)
{
    m_defaultResult = _defaultResult;
    m_defaultResultHasBeenSet = true;
}

bool CreateLifecycleHookRequest::DefaultResultHasBeenSet() const
{
    return m_defaultResultHasBeenSet;
}

int64_t CreateLifecycleHookRequest::GetHeartbeatTimeout() const
{
    return m_heartbeatTimeout;
}

void CreateLifecycleHookRequest::SetHeartbeatTimeout(const int64_t& _heartbeatTimeout)
{
    m_heartbeatTimeout = _heartbeatTimeout;
    m_heartbeatTimeoutHasBeenSet = true;
}

bool CreateLifecycleHookRequest::HeartbeatTimeoutHasBeenSet() const
{
    return m_heartbeatTimeoutHasBeenSet;
}

string CreateLifecycleHookRequest::GetNotificationMetadata() const
{
    return m_notificationMetadata;
}

void CreateLifecycleHookRequest::SetNotificationMetadata(const string& _notificationMetadata)
{
    m_notificationMetadata = _notificationMetadata;
    m_notificationMetadataHasBeenSet = true;
}

bool CreateLifecycleHookRequest::NotificationMetadataHasBeenSet() const
{
    return m_notificationMetadataHasBeenSet;
}

NotificationTarget CreateLifecycleHookRequest::GetNotificationTarget() const
{
    return m_notificationTarget;
}

void CreateLifecycleHookRequest::SetNotificationTarget(const NotificationTarget& _notificationTarget)
{
    m_notificationTarget = _notificationTarget;
    m_notificationTargetHasBeenSet = true;
}

bool CreateLifecycleHookRequest::NotificationTargetHasBeenSet() const
{
    return m_notificationTargetHasBeenSet;
}

string CreateLifecycleHookRequest::GetLifecycleTransitionType() const
{
    return m_lifecycleTransitionType;
}

void CreateLifecycleHookRequest::SetLifecycleTransitionType(const string& _lifecycleTransitionType)
{
    m_lifecycleTransitionType = _lifecycleTransitionType;
    m_lifecycleTransitionTypeHasBeenSet = true;
}

bool CreateLifecycleHookRequest::LifecycleTransitionTypeHasBeenSet() const
{
    return m_lifecycleTransitionTypeHasBeenSet;
}


