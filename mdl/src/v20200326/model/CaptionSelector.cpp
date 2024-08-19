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

#include <tencentcloud/mdl/v20200326/model/CaptionSelector.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

CaptionSelector::CaptionSelector() :
    m_nameHasBeenSet(false),
    m_captionSourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome CaptionSelector::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaptionSelector.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CaptionSourceType") && !value["CaptionSourceType"].IsNull())
    {
        if (!value["CaptionSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaptionSelector.CaptionSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_captionSourceType = string(value["CaptionSourceType"].GetString());
        m_captionSourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CaptionSelector::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_captionSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptionSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_captionSourceType.c_str(), allocator).Move(), allocator);
    }

}


string CaptionSelector::GetName() const
{
    return m_name;
}

void CaptionSelector::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CaptionSelector::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CaptionSelector::GetCaptionSourceType() const
{
    return m_captionSourceType;
}

void CaptionSelector::SetCaptionSourceType(const string& _captionSourceType)
{
    m_captionSourceType = _captionSourceType;
    m_captionSourceTypeHasBeenSet = true;
}

bool CaptionSelector::CaptionSourceTypeHasBeenSet() const
{
    return m_captionSourceTypeHasBeenSet;
}

