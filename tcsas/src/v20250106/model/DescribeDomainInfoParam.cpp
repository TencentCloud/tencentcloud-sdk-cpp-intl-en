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

#include <tencentcloud/tcsas/v20250106/model/DescribeDomainInfoParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeDomainInfoParam::DescribeDomainInfoParam() :
    m_domainUrlHasBeenSet(false),
    m_domainTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDomainInfoParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainUrl") && !value["DomainUrl"].IsNull())
    {
        if (!value["DomainUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainInfoParam.DomainUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainUrl = string(value["DomainUrl"].GetString());
        m_domainUrlHasBeenSet = true;
    }

    if (value.HasMember("DomainType") && !value["DomainType"].IsNull())
    {
        if (!value["DomainType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDomainInfoParam.DomainType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_domainType = value["DomainType"].GetInt64();
        m_domainTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDomainInfoParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_domainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainType, allocator);
    }

}


string DescribeDomainInfoParam::GetDomainUrl() const
{
    return m_domainUrl;
}

void DescribeDomainInfoParam::SetDomainUrl(const string& _domainUrl)
{
    m_domainUrl = _domainUrl;
    m_domainUrlHasBeenSet = true;
}

bool DescribeDomainInfoParam::DomainUrlHasBeenSet() const
{
    return m_domainUrlHasBeenSet;
}

int64_t DescribeDomainInfoParam::GetDomainType() const
{
    return m_domainType;
}

void DescribeDomainInfoParam::SetDomainType(const int64_t& _domainType)
{
    m_domainType = _domainType;
    m_domainTypeHasBeenSet = true;
}

bool DescribeDomainInfoParam::DomainTypeHasBeenSet() const
{
    return m_domainTypeHasBeenSet;
}

