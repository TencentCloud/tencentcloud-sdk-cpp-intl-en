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

#include <tencentcloud/vod/v20180717/model/TextWatermarkTemplateInputForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

TextWatermarkTemplateInputForUpdate::TextWatermarkTemplateInputForUpdate() :
    m_fontTypeHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_fontAlphaHasBeenSet(false)
{
}

CoreInternalOutcome TextWatermarkTemplateInputForUpdate::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("FontType") && !value["FontType"].IsNull())
    {
        if (!value["FontType"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextWatermarkTemplateInputForUpdate.FontType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontType = string(value["FontType"].GetString());
        m_fontTypeHasBeenSet = true;
    }

    if (value.HasMember("FontSize") && !value["FontSize"].IsNull())
    {
        if (!value["FontSize"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextWatermarkTemplateInputForUpdate.FontSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = string(value["FontSize"].GetString());
        m_fontSizeHasBeenSet = true;
    }

    if (value.HasMember("FontColor") && !value["FontColor"].IsNull())
    {
        if (!value["FontColor"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextWatermarkTemplateInputForUpdate.FontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontColor = string(value["FontColor"].GetString());
        m_fontColorHasBeenSet = true;
    }

    if (value.HasMember("FontAlpha") && !value["FontAlpha"].IsNull())
    {
        if (!value["FontAlpha"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `TextWatermarkTemplateInputForUpdate.FontAlpha` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fontAlpha = value["FontAlpha"].GetDouble();
        m_fontAlphaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextWatermarkTemplateInputForUpdate::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_fontTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FontType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fontType.c_str(), allocator).Move(), allocator);
    }

    if (m_fontSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FontSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fontSize.c_str(), allocator).Move(), allocator);
    }

    if (m_fontColorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FontColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fontColor.c_str(), allocator).Move(), allocator);
    }

    if (m_fontAlphaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FontAlpha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontAlpha, allocator);
    }

}


string TextWatermarkTemplateInputForUpdate::GetFontType() const
{
    return m_fontType;
}

void TextWatermarkTemplateInputForUpdate::SetFontType(const string& _fontType)
{
    m_fontType = _fontType;
    m_fontTypeHasBeenSet = true;
}

bool TextWatermarkTemplateInputForUpdate::FontTypeHasBeenSet() const
{
    return m_fontTypeHasBeenSet;
}

string TextWatermarkTemplateInputForUpdate::GetFontSize() const
{
    return m_fontSize;
}

void TextWatermarkTemplateInputForUpdate::SetFontSize(const string& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool TextWatermarkTemplateInputForUpdate::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

string TextWatermarkTemplateInputForUpdate::GetFontColor() const
{
    return m_fontColor;
}

void TextWatermarkTemplateInputForUpdate::SetFontColor(const string& _fontColor)
{
    m_fontColor = _fontColor;
    m_fontColorHasBeenSet = true;
}

bool TextWatermarkTemplateInputForUpdate::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

double TextWatermarkTemplateInputForUpdate::GetFontAlpha() const
{
    return m_fontAlpha;
}

void TextWatermarkTemplateInputForUpdate::SetFontAlpha(const double& _fontAlpha)
{
    m_fontAlpha = _fontAlpha;
    m_fontAlphaHasBeenSet = true;
}

bool TextWatermarkTemplateInputForUpdate::FontAlphaHasBeenSet() const
{
    return m_fontAlphaHasBeenSet;
}

