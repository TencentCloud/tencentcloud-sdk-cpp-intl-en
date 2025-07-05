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

#include <tencentcloud/tcmpp/v20240801/model/CreateSensitiveAPIReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

CreateSensitiveAPIReq::CreateSensitiveAPIReq() :
    m_apiNameHasBeenSet(false),
    m_apiDescHasBeenSet(false),
    m_apiTypeHasBeenSet(false)
{
}

CoreInternalOutcome CreateSensitiveAPIReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateSensitiveAPIReq.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("ApiDesc") && !value["ApiDesc"].IsNull())
    {
        if (!value["ApiDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateSensitiveAPIReq.ApiDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiDesc = string(value["ApiDesc"].GetString());
        m_apiDescHasBeenSet = true;
    }

    if (value.HasMember("ApiType") && !value["ApiType"].IsNull())
    {
        if (!value["ApiType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateSensitiveAPIReq.ApiType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiType = value["ApiType"].GetInt64();
        m_apiTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateSensitiveAPIReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_apiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiType, allocator);
    }

}


string CreateSensitiveAPIReq::GetApiName() const
{
    return m_apiName;
}

void CreateSensitiveAPIReq::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool CreateSensitiveAPIReq::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string CreateSensitiveAPIReq::GetApiDesc() const
{
    return m_apiDesc;
}

void CreateSensitiveAPIReq::SetApiDesc(const string& _apiDesc)
{
    m_apiDesc = _apiDesc;
    m_apiDescHasBeenSet = true;
}

bool CreateSensitiveAPIReq::ApiDescHasBeenSet() const
{
    return m_apiDescHasBeenSet;
}

int64_t CreateSensitiveAPIReq::GetApiType() const
{
    return m_apiType;
}

void CreateSensitiveAPIReq::SetApiType(const int64_t& _apiType)
{
    m_apiType = _apiType;
    m_apiTypeHasBeenSet = true;
}

bool CreateSensitiveAPIReq::ApiTypeHasBeenSet() const
{
    return m_apiTypeHasBeenSet;
}

