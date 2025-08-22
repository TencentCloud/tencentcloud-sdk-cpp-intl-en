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

#include <tencentcloud/mdp/v20200527/model/InputFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

InputFileInfo::InputFileInfo() :
    m_typeHasBeenSet(false),
    m_cosInputInfoHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome InputFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputFileInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CosInputInfo") && !value["CosInputInfo"].IsNull())
    {
        if (!value["CosInputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InputFileInfo.CosInputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosInputInfo.Deserialize(value["CosInputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosInputInfoHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputFileInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cosInputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosInputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosInputInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string InputFileInfo::GetType() const
{
    return m_type;
}

void InputFileInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InputFileInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

CosInputInfo InputFileInfo::GetCosInputInfo() const
{
    return m_cosInputInfo;
}

void InputFileInfo::SetCosInputInfo(const CosInputInfo& _cosInputInfo)
{
    m_cosInputInfo = _cosInputInfo;
    m_cosInputInfoHasBeenSet = true;
}

bool InputFileInfo::CosInputInfoHasBeenSet() const
{
    return m_cosInputInfoHasBeenSet;
}

string InputFileInfo::GetUrl() const
{
    return m_url;
}

void InputFileInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool InputFileInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

