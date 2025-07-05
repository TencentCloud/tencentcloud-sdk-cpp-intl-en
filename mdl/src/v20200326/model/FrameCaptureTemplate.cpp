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

#include <tencentcloud/mdl/v20200326/model/FrameCaptureTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

FrameCaptureTemplate::FrameCaptureTemplate() :
    m_nameHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_captureIntervalHasBeenSet(false),
    m_captureIntervalUnitsHasBeenSet(false),
    m_scalingBehaviorHasBeenSet(false),
    m_sharpnessHasBeenSet(false)
{
}

CoreInternalOutcome FrameCaptureTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrameCaptureTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FrameCaptureTemplate.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FrameCaptureTemplate.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("CaptureInterval") && !value["CaptureInterval"].IsNull())
    {
        if (!value["CaptureInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FrameCaptureTemplate.CaptureInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_captureInterval = value["CaptureInterval"].GetUint64();
        m_captureIntervalHasBeenSet = true;
    }

    if (value.HasMember("CaptureIntervalUnits") && !value["CaptureIntervalUnits"].IsNull())
    {
        if (!value["CaptureIntervalUnits"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrameCaptureTemplate.CaptureIntervalUnits` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_captureIntervalUnits = string(value["CaptureIntervalUnits"].GetString());
        m_captureIntervalUnitsHasBeenSet = true;
    }

    if (value.HasMember("ScalingBehavior") && !value["ScalingBehavior"].IsNull())
    {
        if (!value["ScalingBehavior"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrameCaptureTemplate.ScalingBehavior` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scalingBehavior = string(value["ScalingBehavior"].GetString());
        m_scalingBehaviorHasBeenSet = true;
    }

    if (value.HasMember("Sharpness") && !value["Sharpness"].IsNull())
    {
        if (!value["Sharpness"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FrameCaptureTemplate.Sharpness` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sharpness = value["Sharpness"].GetUint64();
        m_sharpnessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FrameCaptureTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_captureIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptureInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_captureInterval, allocator);
    }

    if (m_captureIntervalUnitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptureIntervalUnits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_captureIntervalUnits.c_str(), allocator).Move(), allocator);
    }

    if (m_scalingBehaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingBehavior";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scalingBehavior.c_str(), allocator).Move(), allocator);
    }

    if (m_sharpnessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sharpness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sharpness, allocator);
    }

}


string FrameCaptureTemplate::GetName() const
{
    return m_name;
}

void FrameCaptureTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FrameCaptureTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t FrameCaptureTemplate::GetWidth() const
{
    return m_width;
}

void FrameCaptureTemplate::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool FrameCaptureTemplate::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t FrameCaptureTemplate::GetHeight() const
{
    return m_height;
}

void FrameCaptureTemplate::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool FrameCaptureTemplate::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t FrameCaptureTemplate::GetCaptureInterval() const
{
    return m_captureInterval;
}

void FrameCaptureTemplate::SetCaptureInterval(const uint64_t& _captureInterval)
{
    m_captureInterval = _captureInterval;
    m_captureIntervalHasBeenSet = true;
}

bool FrameCaptureTemplate::CaptureIntervalHasBeenSet() const
{
    return m_captureIntervalHasBeenSet;
}

string FrameCaptureTemplate::GetCaptureIntervalUnits() const
{
    return m_captureIntervalUnits;
}

void FrameCaptureTemplate::SetCaptureIntervalUnits(const string& _captureIntervalUnits)
{
    m_captureIntervalUnits = _captureIntervalUnits;
    m_captureIntervalUnitsHasBeenSet = true;
}

bool FrameCaptureTemplate::CaptureIntervalUnitsHasBeenSet() const
{
    return m_captureIntervalUnitsHasBeenSet;
}

string FrameCaptureTemplate::GetScalingBehavior() const
{
    return m_scalingBehavior;
}

void FrameCaptureTemplate::SetScalingBehavior(const string& _scalingBehavior)
{
    m_scalingBehavior = _scalingBehavior;
    m_scalingBehaviorHasBeenSet = true;
}

bool FrameCaptureTemplate::ScalingBehaviorHasBeenSet() const
{
    return m_scalingBehaviorHasBeenSet;
}

uint64_t FrameCaptureTemplate::GetSharpness() const
{
    return m_sharpness;
}

void FrameCaptureTemplate::SetSharpness(const uint64_t& _sharpness)
{
    m_sharpness = _sharpness;
    m_sharpnessHasBeenSet = true;
}

bool FrameCaptureTemplate::SharpnessHasBeenSet() const
{
    return m_sharpnessHasBeenSet;
}

