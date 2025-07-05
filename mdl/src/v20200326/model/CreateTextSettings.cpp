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

#include <tencentcloud/mdl/v20200326/model/CreateTextSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

CreateTextSettings::CreateTextSettings() :
    m_textHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_xPosHasBeenSet(false),
    m_yPosHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_fontColorHasBeenSet(false)
{
}

CoreInternalOutcome CreateTextSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTextSettings.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTextSettings.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("XPos") && !value["XPos"].IsNull())
    {
        if (!value["XPos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTextSettings.XPos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_xPos = value["XPos"].GetInt64();
        m_xPosHasBeenSet = true;
    }

    if (value.HasMember("YPos") && !value["YPos"].IsNull())
    {
        if (!value["YPos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTextSettings.YPos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_yPos = value["YPos"].GetInt64();
        m_yPosHasBeenSet = true;
    }

    if (value.HasMember("FontSize") && !value["FontSize"].IsNull())
    {
        if (!value["FontSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTextSettings.FontSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = value["FontSize"].GetInt64();
        m_fontSizeHasBeenSet = true;
    }

    if (value.HasMember("FontColor") && !value["FontColor"].IsNull())
    {
        if (!value["FontColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTextSettings.FontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontColor = string(value["FontColor"].GetString());
        m_fontColorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateTextSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string CreateTextSettings::GetText() const
{
    return m_text;
}

void CreateTextSettings::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool CreateTextSettings::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string CreateTextSettings::GetLocation() const
{
    return m_location;
}

void CreateTextSettings::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool CreateTextSettings::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

int64_t CreateTextSettings::GetXPos() const
{
    return m_xPos;
}

void CreateTextSettings::SetXPos(const int64_t& _xPos)
{
    m_xPos = _xPos;
    m_xPosHasBeenSet = true;
}

bool CreateTextSettings::XPosHasBeenSet() const
{
    return m_xPosHasBeenSet;
}

int64_t CreateTextSettings::GetYPos() const
{
    return m_yPos;
}

void CreateTextSettings::SetYPos(const int64_t& _yPos)
{
    m_yPos = _yPos;
    m_yPosHasBeenSet = true;
}

bool CreateTextSettings::YPosHasBeenSet() const
{
    return m_yPosHasBeenSet;
}

int64_t CreateTextSettings::GetFontSize() const
{
    return m_fontSize;
}

void CreateTextSettings::SetFontSize(const int64_t& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool CreateTextSettings::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

string CreateTextSettings::GetFontColor() const
{
    return m_fontColor;
}

void CreateTextSettings::SetFontColor(const string& _fontColor)
{
    m_fontColor = _fontColor;
    m_fontColorHasBeenSet = true;
}

bool CreateTextSettings::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

