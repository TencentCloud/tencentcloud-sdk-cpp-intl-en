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

#include <tencentcloud/tcsas/v20250106/model/CreateGlobalDomainResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

CreateGlobalDomainResp::CreateGlobalDomainResp() :
    m_resultHasBeenSet(false),
    m_repeatUrlsHasBeenSet(false),
    m_existsWhiteUrlsHasBeenSet(false),
    m_existsBlackUrlsHasBeenSet(false)
{
}

CoreInternalOutcome CreateGlobalDomainResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateGlobalDomainResp.Result` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetBool();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("RepeatUrls") && !value["RepeatUrls"].IsNull())
    {
        if (!value["RepeatUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateGlobalDomainResp.RepeatUrls` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CreateGlobalDomainResp.ExistsWhiteUrls` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CreateGlobalDomainResp.ExistsBlackUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["ExistsBlackUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_existsBlackUrls.push_back((*itr).GetString());
        }
        m_existsBlackUrlsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateGlobalDomainResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

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


bool CreateGlobalDomainResp::GetResult() const
{
    return m_result;
}

void CreateGlobalDomainResp::SetResult(const bool& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool CreateGlobalDomainResp::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

vector<string> CreateGlobalDomainResp::GetRepeatUrls() const
{
    return m_repeatUrls;
}

void CreateGlobalDomainResp::SetRepeatUrls(const vector<string>& _repeatUrls)
{
    m_repeatUrls = _repeatUrls;
    m_repeatUrlsHasBeenSet = true;
}

bool CreateGlobalDomainResp::RepeatUrlsHasBeenSet() const
{
    return m_repeatUrlsHasBeenSet;
}

vector<string> CreateGlobalDomainResp::GetExistsWhiteUrls() const
{
    return m_existsWhiteUrls;
}

void CreateGlobalDomainResp::SetExistsWhiteUrls(const vector<string>& _existsWhiteUrls)
{
    m_existsWhiteUrls = _existsWhiteUrls;
    m_existsWhiteUrlsHasBeenSet = true;
}

bool CreateGlobalDomainResp::ExistsWhiteUrlsHasBeenSet() const
{
    return m_existsWhiteUrlsHasBeenSet;
}

vector<string> CreateGlobalDomainResp::GetExistsBlackUrls() const
{
    return m_existsBlackUrls;
}

void CreateGlobalDomainResp::SetExistsBlackUrls(const vector<string>& _existsBlackUrls)
{
    m_existsBlackUrls = _existsBlackUrls;
    m_existsBlackUrlsHasBeenSet = true;
}

bool CreateGlobalDomainResp::ExistsBlackUrlsHasBeenSet() const
{
    return m_existsBlackUrlsHasBeenSet;
}

