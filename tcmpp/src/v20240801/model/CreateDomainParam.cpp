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

#include <tencentcloud/tcmpp/v20240801/model/CreateDomainParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

CreateDomainParam::CreateDomainParam() :
    m_domainUrlListHasBeenSet(false),
    m_domainTypeHasBeenSet(false)
{
}

CoreInternalOutcome CreateDomainParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainUrlList") && !value["DomainUrlList"].IsNull())
    {
        if (!value["DomainUrlList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateDomainParam.DomainUrlList` is not array type"));

        const rapidjson::Value &tmpValue = value["DomainUrlList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domainUrlList.push_back((*itr).GetString());
        }
        m_domainUrlListHasBeenSet = true;
    }

    if (value.HasMember("DomainType") && !value["DomainType"].IsNull())
    {
        if (!value["DomainType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDomainParam.DomainType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_domainType = value["DomainType"].GetInt64();
        m_domainTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateDomainParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainUrlListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainUrlList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainUrlList.begin(); itr != m_domainUrlList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainType, allocator);
    }

}


vector<string> CreateDomainParam::GetDomainUrlList() const
{
    return m_domainUrlList;
}

void CreateDomainParam::SetDomainUrlList(const vector<string>& _domainUrlList)
{
    m_domainUrlList = _domainUrlList;
    m_domainUrlListHasBeenSet = true;
}

bool CreateDomainParam::DomainUrlListHasBeenSet() const
{
    return m_domainUrlListHasBeenSet;
}

int64_t CreateDomainParam::GetDomainType() const
{
    return m_domainType;
}

void CreateDomainParam::SetDomainType(const int64_t& _domainType)
{
    m_domainType = _domainType;
    m_domainTypeHasBeenSet = true;
}

bool CreateDomainParam::DomainTypeHasBeenSet() const
{
    return m_domainTypeHasBeenSet;
}

