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

#include <tencentcloud/eb/v20210416/model/GetTransformationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

GetTransformationRequest::GetTransformationRequest() :
    m_eventBusIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_transformationIdHasBeenSet(false)
{
}

string GetTransformationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventBusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventBusId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_transformationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransformationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transformationId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetTransformationRequest::GetEventBusId() const
{
    return m_eventBusId;
}

void GetTransformationRequest::SetEventBusId(const string& _eventBusId)
{
    m_eventBusId = _eventBusId;
    m_eventBusIdHasBeenSet = true;
}

bool GetTransformationRequest::EventBusIdHasBeenSet() const
{
    return m_eventBusIdHasBeenSet;
}

string GetTransformationRequest::GetRuleId() const
{
    return m_ruleId;
}

void GetTransformationRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool GetTransformationRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string GetTransformationRequest::GetTransformationId() const
{
    return m_transformationId;
}

void GetTransformationRequest::SetTransformationId(const string& _transformationId)
{
    m_transformationId = _transformationId;
    m_transformationIdHasBeenSet = true;
}

bool GetTransformationRequest::TransformationIdHasBeenSet() const
{
    return m_transformationIdHasBeenSet;
}


