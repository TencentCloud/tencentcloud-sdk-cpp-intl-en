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

#include <tencentcloud/intlpartnersmgt/v20220928/model/AllocateCreditPoolRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

AllocateCreditPoolRequest::AllocateCreditPoolRequest() :
    m_subAgentUinHasBeenSet(false),
    m_creditHasBeenSet(false)
{
}

string AllocateCreditPoolRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAgentUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAgentUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAgentUin, allocator);
    }

    if (m_creditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_credit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t AllocateCreditPoolRequest::GetSubAgentUin() const
{
    return m_subAgentUin;
}

void AllocateCreditPoolRequest::SetSubAgentUin(const int64_t& _subAgentUin)
{
    m_subAgentUin = _subAgentUin;
    m_subAgentUinHasBeenSet = true;
}

bool AllocateCreditPoolRequest::SubAgentUinHasBeenSet() const
{
    return m_subAgentUinHasBeenSet;
}

double AllocateCreditPoolRequest::GetCredit() const
{
    return m_credit;
}

void AllocateCreditPoolRequest::SetCredit(const double& _credit)
{
    m_credit = _credit;
    m_creditHasBeenSet = true;
}

bool AllocateCreditPoolRequest::CreditHasBeenSet() const
{
    return m_creditHasBeenSet;
}


