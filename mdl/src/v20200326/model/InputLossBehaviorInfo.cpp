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

#include <tencentcloud/mdl/v20200326/model/InputLossBehaviorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

InputLossBehaviorInfo::InputLossBehaviorInfo() :
    m_repeatLastFrameMsHasBeenSet(false),
    m_inputLossImageTypeHasBeenSet(false),
    m_colorRGBHasBeenSet(false),
    m_imageUrlHasBeenSet(false)
{
}

CoreInternalOutcome InputLossBehaviorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepeatLastFrameMs") && !value["RepeatLastFrameMs"].IsNull())
    {
        if (!value["RepeatLastFrameMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InputLossBehaviorInfo.RepeatLastFrameMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_repeatLastFrameMs = value["RepeatLastFrameMs"].GetUint64();
        m_repeatLastFrameMsHasBeenSet = true;
    }

    if (value.HasMember("InputLossImageType") && !value["InputLossImageType"].IsNull())
    {
        if (!value["InputLossImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputLossBehaviorInfo.InputLossImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputLossImageType = string(value["InputLossImageType"].GetString());
        m_inputLossImageTypeHasBeenSet = true;
    }

    if (value.HasMember("ColorRGB") && !value["ColorRGB"].IsNull())
    {
        if (!value["ColorRGB"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputLossBehaviorInfo.ColorRGB` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_colorRGB = string(value["ColorRGB"].GetString());
        m_colorRGBHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputLossBehaviorInfo.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputLossBehaviorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_repeatLastFrameMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepeatLastFrameMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repeatLastFrameMs, allocator);
    }

    if (m_inputLossImageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputLossImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputLossImageType.c_str(), allocator).Move(), allocator);
    }

    if (m_colorRGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorRGB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_colorRGB.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

}


uint64_t InputLossBehaviorInfo::GetRepeatLastFrameMs() const
{
    return m_repeatLastFrameMs;
}

void InputLossBehaviorInfo::SetRepeatLastFrameMs(const uint64_t& _repeatLastFrameMs)
{
    m_repeatLastFrameMs = _repeatLastFrameMs;
    m_repeatLastFrameMsHasBeenSet = true;
}

bool InputLossBehaviorInfo::RepeatLastFrameMsHasBeenSet() const
{
    return m_repeatLastFrameMsHasBeenSet;
}

string InputLossBehaviorInfo::GetInputLossImageType() const
{
    return m_inputLossImageType;
}

void InputLossBehaviorInfo::SetInputLossImageType(const string& _inputLossImageType)
{
    m_inputLossImageType = _inputLossImageType;
    m_inputLossImageTypeHasBeenSet = true;
}

bool InputLossBehaviorInfo::InputLossImageTypeHasBeenSet() const
{
    return m_inputLossImageTypeHasBeenSet;
}

string InputLossBehaviorInfo::GetColorRGB() const
{
    return m_colorRGB;
}

void InputLossBehaviorInfo::SetColorRGB(const string& _colorRGB)
{
    m_colorRGB = _colorRGB;
    m_colorRGBHasBeenSet = true;
}

bool InputLossBehaviorInfo::ColorRGBHasBeenSet() const
{
    return m_colorRGBHasBeenSet;
}

string InputLossBehaviorInfo::GetImageUrl() const
{
    return m_imageUrl;
}

void InputLossBehaviorInfo::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool InputLossBehaviorInfo::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

