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

#include <tencentcloud/vpc/v20170312/model/CreateNatGatewaySourceIpTranslationNatRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateNatGatewaySourceIpTranslationNatRuleRequest::CreateNatGatewaySourceIpTranslationNatRuleRequest() :
    m_natGatewayIdHasBeenSet(false),
    m_sourceIpTranslationNatRulesHasBeenSet(false)
{
}

string CreateNatGatewaySourceIpTranslationNatRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIpTranslationNatRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIpTranslationNatRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceIpTranslationNatRules.begin(); itr != m_sourceIpTranslationNatRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateNatGatewaySourceIpTranslationNatRuleRequest::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void CreateNatGatewaySourceIpTranslationNatRuleRequest::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool CreateNatGatewaySourceIpTranslationNatRuleRequest::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

vector<SourceIpTranslationNatRule> CreateNatGatewaySourceIpTranslationNatRuleRequest::GetSourceIpTranslationNatRules() const
{
    return m_sourceIpTranslationNatRules;
}

void CreateNatGatewaySourceIpTranslationNatRuleRequest::SetSourceIpTranslationNatRules(const vector<SourceIpTranslationNatRule>& _sourceIpTranslationNatRules)
{
    m_sourceIpTranslationNatRules = _sourceIpTranslationNatRules;
    m_sourceIpTranslationNatRulesHasBeenSet = true;
}

bool CreateNatGatewaySourceIpTranslationNatRuleRequest::SourceIpTranslationNatRulesHasBeenSet() const
{
    return m_sourceIpTranslationNatRulesHasBeenSet;
}


