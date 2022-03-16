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

#include <tencentcloud/mdl/v20200326/model/DescribeImageSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

DescribeImageSettings::DescribeImageSettings() :
    m_locationHasBeenSet(false),
    m_xPosHasBeenSet(false),
    m_yPosHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false)
{
}

CoreInternalOutcome DescribeImageSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeImageSettings.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("XPos") && !value["XPos"].IsNull())
    {
        if (!value["XPos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeImageSettings.XPos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_xPos = value["XPos"].GetInt64();
        m_xPosHasBeenSet = true;
    }

    if (value.HasMember("YPos") && !value["YPos"].IsNull())
    {
        if (!value["YPos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeImageSettings.YPos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_yPos = value["YPos"].GetInt64();
        m_yPosHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeImageSettings.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeImageSettings.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeImageSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_xPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xPos, allocator);
    }

    if (m_yPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_yPos, allocator);
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

}


string DescribeImageSettings::GetLocation() const
{
    return m_location;
}

void DescribeImageSettings::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool DescribeImageSettings::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

int64_t DescribeImageSettings::GetXPos() const
{
    return m_xPos;
}

void DescribeImageSettings::SetXPos(const int64_t& _xPos)
{
    m_xPos = _xPos;
    m_xPosHasBeenSet = true;
}

bool DescribeImageSettings::XPosHasBeenSet() const
{
    return m_xPosHasBeenSet;
}

int64_t DescribeImageSettings::GetYPos() const
{
    return m_yPos;
}

void DescribeImageSettings::SetYPos(const int64_t& _yPos)
{
    m_yPos = _yPos;
    m_yPosHasBeenSet = true;
}

bool DescribeImageSettings::YPosHasBeenSet() const
{
    return m_yPosHasBeenSet;
}

int64_t DescribeImageSettings::GetWidth() const
{
    return m_width;
}

void DescribeImageSettings::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool DescribeImageSettings::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t DescribeImageSettings::GetHeight() const
{
    return m_height;
}

void DescribeImageSettings::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool DescribeImageSettings::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

