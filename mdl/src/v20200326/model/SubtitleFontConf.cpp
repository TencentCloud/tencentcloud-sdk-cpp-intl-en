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

#include <tencentcloud/mdl/v20200326/model/SubtitleFontConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

SubtitleFontConf::SubtitleFontConf() :
    m_lineSpacingHasBeenSet(false),
    m_marginsHasBeenSet(false),
    m_linesHasBeenSet(false),
    m_charactersPerLineHasBeenSet(false),
    m_sourceTextFontHasBeenSet(false),
    m_textColorHasBeenSet(false),
    m_backgroundColorHasBeenSet(false),
    m_backgroundAlphaHasBeenSet(false),
    m_previewContentHasBeenSet(false),
    m_previewWindowHeightHasBeenSet(false),
    m_previewWindowWidthHasBeenSet(false),
    m_translatedTextFontHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleFontConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LineSpacing") && !value["LineSpacing"].IsNull())
    {
        if (!value["LineSpacing"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleFontConf.LineSpacing` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lineSpacing = value["LineSpacing"].GetUint64();
        m_lineSpacingHasBeenSet = true;
    }

    if (value.HasMember("Margins") && !value["Margins"].IsNull())
    {
        if (!value["Margins"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleFontConf.Margins` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_margins = value["Margins"].GetUint64();
        m_marginsHasBeenSet = true;
    }

    if (value.HasMember("Lines") && !value["Lines"].IsNull())
    {
        if (!value["Lines"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleFontConf.Lines` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lines = value["Lines"].GetUint64();
        m_linesHasBeenSet = true;
    }

    if (value.HasMember("CharactersPerLine") && !value["CharactersPerLine"].IsNull())
    {
        if (!value["CharactersPerLine"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleFontConf.CharactersPerLine` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_charactersPerLine = value["CharactersPerLine"].GetUint64();
        m_charactersPerLineHasBeenSet = true;
    }

    if (value.HasMember("SourceTextFont") && !value["SourceTextFont"].IsNull())
    {
        if (!value["SourceTextFont"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleFontConf.SourceTextFont` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceTextFont = string(value["SourceTextFont"].GetString());
        m_sourceTextFontHasBeenSet = true;
    }

    if (value.HasMember("TextColor") && !value["TextColor"].IsNull())
    {
        if (!value["TextColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleFontConf.TextColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textColor = string(value["TextColor"].GetString());
        m_textColorHasBeenSet = true;
    }

    if (value.HasMember("BackgroundColor") && !value["BackgroundColor"].IsNull())
    {
        if (!value["BackgroundColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleFontConf.BackgroundColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundColor = string(value["BackgroundColor"].GetString());
        m_backgroundColorHasBeenSet = true;
    }

    if (value.HasMember("BackgroundAlpha") && !value["BackgroundAlpha"].IsNull())
    {
        if (!value["BackgroundAlpha"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleFontConf.BackgroundAlpha` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundAlpha = value["BackgroundAlpha"].GetUint64();
        m_backgroundAlphaHasBeenSet = true;
    }

    if (value.HasMember("PreviewContent") && !value["PreviewContent"].IsNull())
    {
        if (!value["PreviewContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleFontConf.PreviewContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewContent = string(value["PreviewContent"].GetString());
        m_previewContentHasBeenSet = true;
    }

    if (value.HasMember("PreviewWindowHeight") && !value["PreviewWindowHeight"].IsNull())
    {
        if (!value["PreviewWindowHeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleFontConf.PreviewWindowHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_previewWindowHeight = value["PreviewWindowHeight"].GetUint64();
        m_previewWindowHeightHasBeenSet = true;
    }

    if (value.HasMember("PreviewWindowWidth") && !value["PreviewWindowWidth"].IsNull())
    {
        if (!value["PreviewWindowWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleFontConf.PreviewWindowWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_previewWindowWidth = value["PreviewWindowWidth"].GetUint64();
        m_previewWindowWidthHasBeenSet = true;
    }

    if (value.HasMember("TranslatedTextFont") && !value["TranslatedTextFont"].IsNull())
    {
        if (!value["TranslatedTextFont"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleFontConf.TranslatedTextFont` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translatedTextFont = string(value["TranslatedTextFont"].GetString());
        m_translatedTextFontHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleFontConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lineSpacingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineSpacing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineSpacing, allocator);
    }

    if (m_marginsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Margins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_margins, allocator);
    }

    if (m_linesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lines, allocator);
    }

    if (m_charactersPerLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CharactersPerLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_charactersPerLine, allocator);
    }

    if (m_sourceTextFontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTextFont";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceTextFont.c_str(), allocator).Move(), allocator);
    }

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

    if (m_previewContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewContent.c_str(), allocator).Move(), allocator);
    }

    if (m_previewWindowHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewWindowHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_previewWindowHeight, allocator);
    }

    if (m_previewWindowWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewWindowWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_previewWindowWidth, allocator);
    }

    if (m_translatedTextFontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslatedTextFont";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translatedTextFont.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SubtitleFontConf::GetLineSpacing() const
{
    return m_lineSpacing;
}

void SubtitleFontConf::SetLineSpacing(const uint64_t& _lineSpacing)
{
    m_lineSpacing = _lineSpacing;
    m_lineSpacingHasBeenSet = true;
}

bool SubtitleFontConf::LineSpacingHasBeenSet() const
{
    return m_lineSpacingHasBeenSet;
}

uint64_t SubtitleFontConf::GetMargins() const
{
    return m_margins;
}

void SubtitleFontConf::SetMargins(const uint64_t& _margins)
{
    m_margins = _margins;
    m_marginsHasBeenSet = true;
}

bool SubtitleFontConf::MarginsHasBeenSet() const
{
    return m_marginsHasBeenSet;
}

uint64_t SubtitleFontConf::GetLines() const
{
    return m_lines;
}

void SubtitleFontConf::SetLines(const uint64_t& _lines)
{
    m_lines = _lines;
    m_linesHasBeenSet = true;
}

bool SubtitleFontConf::LinesHasBeenSet() const
{
    return m_linesHasBeenSet;
}

uint64_t SubtitleFontConf::GetCharactersPerLine() const
{
    return m_charactersPerLine;
}

void SubtitleFontConf::SetCharactersPerLine(const uint64_t& _charactersPerLine)
{
    m_charactersPerLine = _charactersPerLine;
    m_charactersPerLineHasBeenSet = true;
}

bool SubtitleFontConf::CharactersPerLineHasBeenSet() const
{
    return m_charactersPerLineHasBeenSet;
}

string SubtitleFontConf::GetSourceTextFont() const
{
    return m_sourceTextFont;
}

void SubtitleFontConf::SetSourceTextFont(const string& _sourceTextFont)
{
    m_sourceTextFont = _sourceTextFont;
    m_sourceTextFontHasBeenSet = true;
}

bool SubtitleFontConf::SourceTextFontHasBeenSet() const
{
    return m_sourceTextFontHasBeenSet;
}

string SubtitleFontConf::GetTextColor() const
{
    return m_textColor;
}

void SubtitleFontConf::SetTextColor(const string& _textColor)
{
    m_textColor = _textColor;
    m_textColorHasBeenSet = true;
}

bool SubtitleFontConf::TextColorHasBeenSet() const
{
    return m_textColorHasBeenSet;
}

string SubtitleFontConf::GetBackgroundColor() const
{
    return m_backgroundColor;
}

void SubtitleFontConf::SetBackgroundColor(const string& _backgroundColor)
{
    m_backgroundColor = _backgroundColor;
    m_backgroundColorHasBeenSet = true;
}

bool SubtitleFontConf::BackgroundColorHasBeenSet() const
{
    return m_backgroundColorHasBeenSet;
}

uint64_t SubtitleFontConf::GetBackgroundAlpha() const
{
    return m_backgroundAlpha;
}

void SubtitleFontConf::SetBackgroundAlpha(const uint64_t& _backgroundAlpha)
{
    m_backgroundAlpha = _backgroundAlpha;
    m_backgroundAlphaHasBeenSet = true;
}

bool SubtitleFontConf::BackgroundAlphaHasBeenSet() const
{
    return m_backgroundAlphaHasBeenSet;
}

string SubtitleFontConf::GetPreviewContent() const
{
    return m_previewContent;
}

void SubtitleFontConf::SetPreviewContent(const string& _previewContent)
{
    m_previewContent = _previewContent;
    m_previewContentHasBeenSet = true;
}

bool SubtitleFontConf::PreviewContentHasBeenSet() const
{
    return m_previewContentHasBeenSet;
}

uint64_t SubtitleFontConf::GetPreviewWindowHeight() const
{
    return m_previewWindowHeight;
}

void SubtitleFontConf::SetPreviewWindowHeight(const uint64_t& _previewWindowHeight)
{
    m_previewWindowHeight = _previewWindowHeight;
    m_previewWindowHeightHasBeenSet = true;
}

bool SubtitleFontConf::PreviewWindowHeightHasBeenSet() const
{
    return m_previewWindowHeightHasBeenSet;
}

uint64_t SubtitleFontConf::GetPreviewWindowWidth() const
{
    return m_previewWindowWidth;
}

void SubtitleFontConf::SetPreviewWindowWidth(const uint64_t& _previewWindowWidth)
{
    m_previewWindowWidth = _previewWindowWidth;
    m_previewWindowWidthHasBeenSet = true;
}

bool SubtitleFontConf::PreviewWindowWidthHasBeenSet() const
{
    return m_previewWindowWidthHasBeenSet;
}

string SubtitleFontConf::GetTranslatedTextFont() const
{
    return m_translatedTextFont;
}

void SubtitleFontConf::SetTranslatedTextFont(const string& _translatedTextFont)
{
    m_translatedTextFont = _translatedTextFont;
    m_translatedTextFontHasBeenSet = true;
}

bool SubtitleFontConf::TranslatedTextFontHasBeenSet() const
{
    return m_translatedTextFontHasBeenSet;
}

