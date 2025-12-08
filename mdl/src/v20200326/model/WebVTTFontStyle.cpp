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

#include <tencentcloud/mdl/v20200326/model/WebVTTFontStyle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

WebVTTFontStyle::WebVTTFontStyle() :
    m_textColorHasBeenSet(false),
    m_backgroundColorHasBeenSet(false),
    m_backgroundAlphaHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_lineHasBeenSet(false),
    m_lineAlignmentHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_positionAlignmentHasBeenSet(false),
    m_cueSizeHasBeenSet(false),
    m_textAlignmentHasBeenSet(false)
{
}

CoreInternalOutcome WebVTTFontStyle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TextColor") && !value["TextColor"].IsNull())
    {
        if (!value["TextColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebVTTFontStyle.TextColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textColor = string(value["TextColor"].GetString());
        m_textColorHasBeenSet = true;
    }

    if (value.HasMember("BackgroundColor") && !value["BackgroundColor"].IsNull())
    {
        if (!value["BackgroundColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebVTTFontStyle.BackgroundColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundColor = string(value["BackgroundColor"].GetString());
        m_backgroundColorHasBeenSet = true;
    }

    if (value.HasMember("BackgroundAlpha") && !value["BackgroundAlpha"].IsNull())
    {
        if (!value["BackgroundAlpha"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebVTTFontStyle.BackgroundAlpha` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundAlpha = value["BackgroundAlpha"].GetInt64();
        m_backgroundAlphaHasBeenSet = true;
    }

    if (value.HasMember("FontSize") && !value["FontSize"].IsNull())
    {
        if (!value["FontSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebVTTFontStyle.FontSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = value["FontSize"].GetInt64();
        m_fontSizeHasBeenSet = true;
    }

    if (value.HasMember("Line") && !value["Line"].IsNull())
    {
        if (!value["Line"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebVTTFontStyle.Line` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_line = string(value["Line"].GetString());
        m_lineHasBeenSet = true;
    }

    if (value.HasMember("LineAlignment") && !value["LineAlignment"].IsNull())
    {
        if (!value["LineAlignment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebVTTFontStyle.LineAlignment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineAlignment = string(value["LineAlignment"].GetString());
        m_lineAlignmentHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebVTTFontStyle.Position` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_position = string(value["Position"].GetString());
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("PositionAlignment") && !value["PositionAlignment"].IsNull())
    {
        if (!value["PositionAlignment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebVTTFontStyle.PositionAlignment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_positionAlignment = string(value["PositionAlignment"].GetString());
        m_positionAlignmentHasBeenSet = true;
    }

    if (value.HasMember("CueSize") && !value["CueSize"].IsNull())
    {
        if (!value["CueSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebVTTFontStyle.CueSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cueSize = string(value["CueSize"].GetString());
        m_cueSizeHasBeenSet = true;
    }

    if (value.HasMember("TextAlignment") && !value["TextAlignment"].IsNull())
    {
        if (!value["TextAlignment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebVTTFontStyle.TextAlignment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textAlignment = string(value["TextAlignment"].GetString());
        m_textAlignmentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebVTTFontStyle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_textColor.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundColor.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundAlphaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundAlpha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backgroundAlpha, allocator);
    }

    if (m_fontSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontSize, allocator);
    }

    if (m_lineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Line";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_line.c_str(), allocator).Move(), allocator);
    }

    if (m_lineAlignmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineAlignment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineAlignment.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_position.c_str(), allocator).Move(), allocator);
    }

    if (m_positionAlignmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionAlignment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_positionAlignment.c_str(), allocator).Move(), allocator);
    }

    if (m_cueSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CueSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cueSize.c_str(), allocator).Move(), allocator);
    }

    if (m_textAlignmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextAlignment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_textAlignment.c_str(), allocator).Move(), allocator);
    }

}


string WebVTTFontStyle::GetTextColor() const
{
    return m_textColor;
}

void WebVTTFontStyle::SetTextColor(const string& _textColor)
{
    m_textColor = _textColor;
    m_textColorHasBeenSet = true;
}

bool WebVTTFontStyle::TextColorHasBeenSet() const
{
    return m_textColorHasBeenSet;
}

string WebVTTFontStyle::GetBackgroundColor() const
{
    return m_backgroundColor;
}

void WebVTTFontStyle::SetBackgroundColor(const string& _backgroundColor)
{
    m_backgroundColor = _backgroundColor;
    m_backgroundColorHasBeenSet = true;
}

bool WebVTTFontStyle::BackgroundColorHasBeenSet() const
{
    return m_backgroundColorHasBeenSet;
}

int64_t WebVTTFontStyle::GetBackgroundAlpha() const
{
    return m_backgroundAlpha;
}

void WebVTTFontStyle::SetBackgroundAlpha(const int64_t& _backgroundAlpha)
{
    m_backgroundAlpha = _backgroundAlpha;
    m_backgroundAlphaHasBeenSet = true;
}

bool WebVTTFontStyle::BackgroundAlphaHasBeenSet() const
{
    return m_backgroundAlphaHasBeenSet;
}

int64_t WebVTTFontStyle::GetFontSize() const
{
    return m_fontSize;
}

void WebVTTFontStyle::SetFontSize(const int64_t& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool WebVTTFontStyle::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

string WebVTTFontStyle::GetLine() const
{
    return m_line;
}

void WebVTTFontStyle::SetLine(const string& _line)
{
    m_line = _line;
    m_lineHasBeenSet = true;
}

bool WebVTTFontStyle::LineHasBeenSet() const
{
    return m_lineHasBeenSet;
}

string WebVTTFontStyle::GetLineAlignment() const
{
    return m_lineAlignment;
}

void WebVTTFontStyle::SetLineAlignment(const string& _lineAlignment)
{
    m_lineAlignment = _lineAlignment;
    m_lineAlignmentHasBeenSet = true;
}

bool WebVTTFontStyle::LineAlignmentHasBeenSet() const
{
    return m_lineAlignmentHasBeenSet;
}

string WebVTTFontStyle::GetPosition() const
{
    return m_position;
}

void WebVTTFontStyle::SetPosition(const string& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool WebVTTFontStyle::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string WebVTTFontStyle::GetPositionAlignment() const
{
    return m_positionAlignment;
}

void WebVTTFontStyle::SetPositionAlignment(const string& _positionAlignment)
{
    m_positionAlignment = _positionAlignment;
    m_positionAlignmentHasBeenSet = true;
}

bool WebVTTFontStyle::PositionAlignmentHasBeenSet() const
{
    return m_positionAlignmentHasBeenSet;
}

string WebVTTFontStyle::GetCueSize() const
{
    return m_cueSize;
}

void WebVTTFontStyle::SetCueSize(const string& _cueSize)
{
    m_cueSize = _cueSize;
    m_cueSizeHasBeenSet = true;
}

bool WebVTTFontStyle::CueSizeHasBeenSet() const
{
    return m_cueSizeHasBeenSet;
}

string WebVTTFontStyle::GetTextAlignment() const
{
    return m_textAlignment;
}

void WebVTTFontStyle::SetTextAlignment(const string& _textAlignment)
{
    m_textAlignment = _textAlignment;
    m_textAlignmentHasBeenSet = true;
}

bool WebVTTFontStyle::TextAlignmentHasBeenSet() const
{
    return m_textAlignmentHasBeenSet;
}

