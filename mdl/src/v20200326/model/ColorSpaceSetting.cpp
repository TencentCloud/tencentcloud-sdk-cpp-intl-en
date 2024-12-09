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

#include <tencentcloud/mdl/v20200326/model/ColorSpaceSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

ColorSpaceSetting::ColorSpaceSetting() :
    m_colorSpaceHasBeenSet(false)
{
}

CoreInternalOutcome ColorSpaceSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ColorSpace") && !value["ColorSpace"].IsNull())
    {
        if (!value["ColorSpace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColorSpaceSetting.ColorSpace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_colorSpace = string(value["ColorSpace"].GetString());
        m_colorSpaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ColorSpaceSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_colorSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_colorSpace.c_str(), allocator).Move(), allocator);
    }

}


string ColorSpaceSetting::GetColorSpace() const
{
    return m_colorSpace;
}

void ColorSpaceSetting::SetColorSpace(const string& _colorSpace)
{
    m_colorSpace = _colorSpace;
    m_colorSpaceHasBeenSet = true;
}

bool ColorSpaceSetting::ColorSpaceHasBeenSet() const
{
    return m_colorSpaceHasBeenSet;
}

