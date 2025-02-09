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

#include <tencentcloud/tcsas/v20250106/model/CreateApplicationSensitiveAPIReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

CreateApplicationSensitiveAPIReq::CreateApplicationSensitiveAPIReq() :
    m_aPINameHasBeenSet(false),
    m_aPIDescHasBeenSet(false),
    m_aPITypeHasBeenSet(false)
{
}

CoreInternalOutcome CreateApplicationSensitiveAPIReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("APIName") && !value["APIName"].IsNull())
    {
        if (!value["APIName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateApplicationSensitiveAPIReq.APIName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIName = string(value["APIName"].GetString());
        m_aPINameHasBeenSet = true;
    }

    if (value.HasMember("APIDesc") && !value["APIDesc"].IsNull())
    {
        if (!value["APIDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateApplicationSensitiveAPIReq.APIDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPIDesc = string(value["APIDesc"].GetString());
        m_aPIDescHasBeenSet = true;
    }

    if (value.HasMember("APIType") && !value["APIType"].IsNull())
    {
        if (!value["APIType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateApplicationSensitiveAPIReq.APIType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aPIType = value["APIType"].GetInt64();
        m_aPITypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateApplicationSensitiveAPIReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aPINameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIName.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPIDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_aPITypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aPIType, allocator);
    }

}


string CreateApplicationSensitiveAPIReq::GetAPIName() const
{
    return m_aPIName;
}

void CreateApplicationSensitiveAPIReq::SetAPIName(const string& _aPIName)
{
    m_aPIName = _aPIName;
    m_aPINameHasBeenSet = true;
}

bool CreateApplicationSensitiveAPIReq::APINameHasBeenSet() const
{
    return m_aPINameHasBeenSet;
}

string CreateApplicationSensitiveAPIReq::GetAPIDesc() const
{
    return m_aPIDesc;
}

void CreateApplicationSensitiveAPIReq::SetAPIDesc(const string& _aPIDesc)
{
    m_aPIDesc = _aPIDesc;
    m_aPIDescHasBeenSet = true;
}

bool CreateApplicationSensitiveAPIReq::APIDescHasBeenSet() const
{
    return m_aPIDescHasBeenSet;
}

int64_t CreateApplicationSensitiveAPIReq::GetAPIType() const
{
    return m_aPIType;
}

void CreateApplicationSensitiveAPIReq::SetAPIType(const int64_t& _aPIType)
{
    m_aPIType = _aPIType;
    m_aPITypeHasBeenSet = true;
}

bool CreateApplicationSensitiveAPIReq::APITypeHasBeenSet() const
{
    return m_aPITypeHasBeenSet;
}

