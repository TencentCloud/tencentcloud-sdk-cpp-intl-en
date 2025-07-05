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

#include <tencentcloud/mdl/v20200326/model/DescribeTextSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

DescribeTextSettings::DescribeTextSettings() :
    m_textHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_xPosHasBeenSet(false),
    m_yPosHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_fontColorHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTextSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTextSettings.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTextSettings.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("XPos") && !value["XPos"].IsNull())
    {
        if (!value["XPos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTextSettings.XPos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_xPos = value["XPos"].GetInt64();
        m_xPosHasBeenSet = true;
    }

    if (value.HasMember("YPos") && !value["YPos"].IsNull())
    {
        if (!value["YPos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTextSettings.YPos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_yPos = value["YPos"].GetInt64();
        m_yPosHasBeenSet = true;
    }

    if (value.HasMember("FontSize") && !value["FontSize"].IsNull())
    {
        if (!value["FontSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTextSettings.FontSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = value["FontSize"].GetInt64();
        m_fontSizeHasBeenSet = true;
    }

    if (value.HasMember("FontColor") && !value["FontColor"].IsNull())
    {
        if (!value["FontColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTextSettings.FontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontColor = string(value["FontColor"].GetString());
        m_fontColorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeTextSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

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

    if (m_fontSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontSize, allocator);
    }

    if (m_fontColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontColor.c_str(), allocator).Move(), allocator);
    }

}


string DescribeTextSettings::GetText() const
{
    return m_text;
}

void DescribeTextSettings::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool DescribeTextSettings::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string DescribeTextSettings::GetLocation() const
{
    return m_location;
}

void DescribeTextSettings::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool DescribeTextSettings::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

int64_t DescribeTextSettings::GetXPos() const
{
    return m_xPos;
}

void DescribeTextSettings::SetXPos(const int64_t& _xPos)
{
    m_xPos = _xPos;
    m_xPosHasBeenSet = true;
}

bool DescribeTextSettings::XPosHasBeenSet() const
{
    return m_xPosHasBeenSet;
}

int64_t DescribeTextSettings::GetYPos() const
{
    return m_yPos;
}

void DescribeTextSettings::SetYPos(const int64_t& _yPos)
{
    m_yPos = _yPos;
    m_yPosHasBeenSet = true;
}

bool DescribeTextSettings::YPosHasBeenSet() const
{
    return m_yPosHasBeenSet;
}

int64_t DescribeTextSettings::GetFontSize() const
{
    return m_fontSize;
}

void DescribeTextSettings::SetFontSize(const int64_t& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool DescribeTextSettings::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

string DescribeTextSettings::GetFontColor() const
{
    return m_fontColor;
}

void DescribeTextSettings::SetFontColor(const string& _fontColor)
{
    m_fontColor = _fontColor;
    m_fontColorHasBeenSet = true;
}

bool DescribeTextSettings::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

