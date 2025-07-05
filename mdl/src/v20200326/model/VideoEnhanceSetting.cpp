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

#include <tencentcloud/mdl/v20200326/model/VideoEnhanceSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

VideoEnhanceSetting::VideoEnhanceSetting() :
    m_typeHasBeenSet(false),
    m_strengthHasBeenSet(false)
{
}

CoreInternalOutcome VideoEnhanceSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceSetting.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Strength") && !value["Strength"].IsNull())
    {
        if (!value["Strength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceSetting.Strength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_strength = value["Strength"].GetDouble();
        m_strengthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEnhanceSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_strengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strength, allocator);
    }

}


string VideoEnhanceSetting::GetType() const
{
    return m_type;
}

void VideoEnhanceSetting::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VideoEnhanceSetting::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double VideoEnhanceSetting::GetStrength() const
{
    return m_strength;
}

void VideoEnhanceSetting::SetStrength(const double& _strength)
{
    m_strength = _strength;
    m_strengthHasBeenSet = true;
}

bool VideoEnhanceSetting::StrengthHasBeenSet() const
{
    return m_strengthHasBeenSet;
}

