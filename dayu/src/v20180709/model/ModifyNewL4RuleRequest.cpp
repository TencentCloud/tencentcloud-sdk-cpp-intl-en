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

#include <tencentcloud/dayu/v20180709/model/ModifyNewL4RuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

ModifyNewL4RuleRequest::ModifyNewL4RuleRequest() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ruleHasBeenSet(false)
{
}

string ModifyNewL4RuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rule.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNewL4RuleRequest::GetBusiness() const
{
    return m_business;
}

void ModifyNewL4RuleRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ModifyNewL4RuleRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string ModifyNewL4RuleRequest::GetId() const
{
    return m_id;
}

void ModifyNewL4RuleRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyNewL4RuleRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

L4RuleEntry ModifyNewL4RuleRequest::GetRule() const
{
    return m_rule;
}

void ModifyNewL4RuleRequest::SetRule(const L4RuleEntry& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool ModifyNewL4RuleRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}


