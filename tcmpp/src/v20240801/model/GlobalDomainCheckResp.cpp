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

#include <tencentcloud/tcmpp/v20240801/model/GlobalDomainCheckResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

GlobalDomainCheckResp::GlobalDomainCheckResp() :
    m_repeatUrlsHasBeenSet(false),
    m_existsWhiteUrlsHasBeenSet(false),
    m_existsBlackUrlsHasBeenSet(false)
{
}

CoreInternalOutcome GlobalDomainCheckResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepeatUrls") && !value["RepeatUrls"].IsNull())
    {
        if (!value["RepeatUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GlobalDomainCheckResp.RepeatUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["RepeatUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_repeatUrls.push_back((*itr).GetString());
        }
        m_repeatUrlsHasBeenSet = true;
    }

    if (value.HasMember("ExistsWhiteUrls") && !value["ExistsWhiteUrls"].IsNull())
    {
        if (!value["ExistsWhiteUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GlobalDomainCheckResp.ExistsWhiteUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["ExistsWhiteUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_existsWhiteUrls.push_back((*itr).GetString());
        }
        m_existsWhiteUrlsHasBeenSet = true;
    }

    if (value.HasMember("ExistsBlackUrls") && !value["ExistsBlackUrls"].IsNull())
    {
        if (!value["ExistsBlackUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GlobalDomainCheckResp.ExistsBlackUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["ExistsBlackUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_existsBlackUrls.push_back((*itr).GetString());
        }
        m_existsBlackUrlsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GlobalDomainCheckResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_repeatUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepeatUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_repeatUrls.begin(); itr != m_repeatUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_existsWhiteUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExistsWhiteUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_existsWhiteUrls.begin(); itr != m_existsWhiteUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_existsBlackUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExistsBlackUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_existsBlackUrls.begin(); itr != m_existsBlackUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> GlobalDomainCheckResp::GetRepeatUrls() const
{
    return m_repeatUrls;
}

void GlobalDomainCheckResp::SetRepeatUrls(const vector<string>& _repeatUrls)
{
    m_repeatUrls = _repeatUrls;
    m_repeatUrlsHasBeenSet = true;
}

bool GlobalDomainCheckResp::RepeatUrlsHasBeenSet() const
{
    return m_repeatUrlsHasBeenSet;
}

vector<string> GlobalDomainCheckResp::GetExistsWhiteUrls() const
{
    return m_existsWhiteUrls;
}

void GlobalDomainCheckResp::SetExistsWhiteUrls(const vector<string>& _existsWhiteUrls)
{
    m_existsWhiteUrls = _existsWhiteUrls;
    m_existsWhiteUrlsHasBeenSet = true;
}

bool GlobalDomainCheckResp::ExistsWhiteUrlsHasBeenSet() const
{
    return m_existsWhiteUrlsHasBeenSet;
}

vector<string> GlobalDomainCheckResp::GetExistsBlackUrls() const
{
    return m_existsBlackUrls;
}

void GlobalDomainCheckResp::SetExistsBlackUrls(const vector<string>& _existsBlackUrls)
{
    m_existsBlackUrls = _existsBlackUrls;
    m_existsBlackUrlsHasBeenSet = true;
}

bool GlobalDomainCheckResp::ExistsBlackUrlsHasBeenSet() const
{
    return m_existsBlackUrlsHasBeenSet;
}

