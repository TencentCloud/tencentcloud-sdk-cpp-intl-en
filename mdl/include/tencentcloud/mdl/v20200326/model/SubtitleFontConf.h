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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_SUBTITLEFONTCONF_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_SUBTITLEFONTCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Subtitle style configuration.
                */
                class SubtitleFontConf : public AbstractModel
                {
                public:
                    SubtitleFontConf();
                    ~SubtitleFontConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Line spacing.
                     * @return LineSpacing Line spacing.
                     * 
                     */
                    uint64_t GetLineSpacing() const;

                    /**
                     * 设置Line spacing.
                     * @param _lineSpacing Line spacing.
                     * 
                     */
                    void SetLineSpacing(const uint64_t& _lineSpacing);

                    /**
                     * 判断参数 LineSpacing 是否已赋值
                     * @return LineSpacing 是否已赋值
                     * 
                     */
                    bool LineSpacingHasBeenSet() const;

                    /**
                     * 获取Margin.
                     * @return Margins Margin.
                     * 
                     */
                    uint64_t GetMargins() const;

                    /**
                     * 设置Margin.
                     * @param _margins Margin.
                     * 
                     */
                    void SetMargins(const uint64_t& _margins);

                    /**
                     * 判断参数 Margins 是否已赋值
                     * @return Margins 是否已赋值
                     * 
                     */
                    bool MarginsHasBeenSet() const;

                    /**
                     * 获取Number of rows.
                     * @return Lines Number of rows.
                     * 
                     */
                    uint64_t GetLines() const;

                    /**
                     * 设置Number of rows.
                     * @param _lines Number of rows.
                     * 
                     */
                    void SetLines(const uint64_t& _lines);

                    /**
                     * 判断参数 Lines 是否已赋值
                     * @return Lines 是否已赋值
                     * 
                     */
                    bool LinesHasBeenSet() const;

                    /**
                     * 获取Number of characters per line.
                     * @return CharactersPerLine Number of characters per line.
                     * 
                     */
                    uint64_t GetCharactersPerLine() const;

                    /**
                     * 设置Number of characters per line.
                     * @param _charactersPerLine Number of characters per line.
                     * 
                     */
                    void SetCharactersPerLine(const uint64_t& _charactersPerLine);

                    /**
                     * 判断参数 CharactersPerLine 是否已赋值
                     * @return CharactersPerLine 是否已赋值
                     * 
                     */
                    bool CharactersPerLineHasBeenSet() const;

                    /**
                     * 获取Original font    Heiti: simhei.ttf    Song Typeface: simsun.ttc    Huakang Diamond Black (Dynacw Diamond Black): hkjgh.ttf    Helvetica: helvetica.ttf; Needs to be set in Source or Source+Target mode.
                     * @return SourceTextFont Original font    Heiti: simhei.ttf    Song Typeface: simsun.ttc    Huakang Diamond Black (Dynacw Diamond Black): hkjgh.ttf    Helvetica: helvetica.ttf; Needs to be set in Source or Source+Target mode.
                     * 
                     */
                    std::string GetSourceTextFont() const;

                    /**
                     * 设置Original font    Heiti: simhei.ttf    Song Typeface: simsun.ttc    Huakang Diamond Black (Dynacw Diamond Black): hkjgh.ttf    Helvetica: helvetica.ttf; Needs to be set in Source or Source+Target mode.
                     * @param _sourceTextFont Original font    Heiti: simhei.ttf    Song Typeface: simsun.ttc    Huakang Diamond Black (Dynacw Diamond Black): hkjgh.ttf    Helvetica: helvetica.ttf; Needs to be set in Source or Source+Target mode.
                     * 
                     */
                    void SetSourceTextFont(const std::string& _sourceTextFont);

                    /**
                     * 判断参数 SourceTextFont 是否已赋值
                     * @return SourceTextFont 是否已赋值
                     * 
                     */
                    bool SourceTextFontHasBeenSet() const;

                    /**
                     * 获取Font color, represented by 6 characters in hexadecimal RGB.
                     * @return TextColor Font color, represented by 6 characters in hexadecimal RGB.
                     * 
                     */
                    std::string GetTextColor() const;

                    /**
                     * 设置Font color, represented by 6 characters in hexadecimal RGB.
                     * @param _textColor Font color, represented by 6 characters in hexadecimal RGB.
                     * 
                     */
                    void SetTextColor(const std::string& _textColor);

                    /**
                     * 判断参数 TextColor 是否已赋值
                     * @return TextColor 是否已赋值
                     * 
                     */
                    bool TextColorHasBeenSet() const;

                    /**
                     * 获取Background color, represented by 6 characters in hexadecimal RGB.
                     * @return BackgroundColor Background color, represented by 6 characters in hexadecimal RGB.
                     * 
                     */
                    std::string GetBackgroundColor() const;

                    /**
                     * 设置Background color, represented by 6 characters in hexadecimal RGB.
                     * @param _backgroundColor Background color, represented by 6 characters in hexadecimal RGB.
                     * 
                     */
                    void SetBackgroundColor(const std::string& _backgroundColor);

                    /**
                     * 判断参数 BackgroundColor 是否已赋值
                     * @return BackgroundColor 是否已赋值
                     * 
                     */
                    bool BackgroundColorHasBeenSet() const;

                    /**
                     * 获取Background opacity. A number from 0 to 100.
                     * @return BackgroundAlpha Background opacity. A number from 0 to 100.
                     * 
                     */
                    uint64_t GetBackgroundAlpha() const;

                    /**
                     * 设置Background opacity. A number from 0 to 100.
                     * @param _backgroundAlpha Background opacity. A number from 0 to 100.
                     * 
                     */
                    void SetBackgroundAlpha(const uint64_t& _backgroundAlpha);

                    /**
                     * 判断参数 BackgroundAlpha 是否已赋值
                     * @return BackgroundAlpha 是否已赋值
                     * 
                     */
                    bool BackgroundAlphaHasBeenSet() const;

                    /**
                     * 获取Preview the copywriting.
                     * @return PreviewContent Preview the copywriting.
                     * 
                     */
                    std::string GetPreviewContent() const;

                    /**
                     * 设置Preview the copywriting.
                     * @param _previewContent Preview the copywriting.
                     * 
                     */
                    void SetPreviewContent(const std::string& _previewContent);

                    /**
                     * 判断参数 PreviewContent 是否已赋值
                     * @return PreviewContent 是否已赋值
                     * 
                     */
                    bool PreviewContentHasBeenSet() const;

                    /**
                     * 获取Preview window height.
                     * @return PreviewWindowHeight Preview window height.
                     * 
                     */
                    uint64_t GetPreviewWindowHeight() const;

                    /**
                     * 设置Preview window height.
                     * @param _previewWindowHeight Preview window height.
                     * 
                     */
                    void SetPreviewWindowHeight(const uint64_t& _previewWindowHeight);

                    /**
                     * 判断参数 PreviewWindowHeight 是否已赋值
                     * @return PreviewWindowHeight 是否已赋值
                     * 
                     */
                    bool PreviewWindowHeightHasBeenSet() const;

                    /**
                     * 获取Preview window width.
                     * @return PreviewWindowWidth Preview window width.
                     * 
                     */
                    uint64_t GetPreviewWindowWidth() const;

                    /**
                     * 设置Preview window width.
                     * @param _previewWindowWidth Preview window width.
                     * 
                     */
                    void SetPreviewWindowWidth(const uint64_t& _previewWindowWidth);

                    /**
                     * 判断参数 PreviewWindowWidth 是否已赋值
                     * @return PreviewWindowWidth 是否已赋值
                     * 
                     */
                    bool PreviewWindowWidthHasBeenSet() const;

                    /**
                     * 获取Font for the target language. The enumeration value is the same as SourceTextFont. Case-sensitive language support for fonts. TextColor needs to be set in Target or Source+Target mode.
                     * @return TranslatedTextFont Font for the target language. The enumeration value is the same as SourceTextFont. Case-sensitive language support for fonts. TextColor needs to be set in Target or Source+Target mode.
                     * 
                     */
                    std::string GetTranslatedTextFont() const;

                    /**
                     * 设置Font for the target language. The enumeration value is the same as SourceTextFont. Case-sensitive language support for fonts. TextColor needs to be set in Target or Source+Target mode.
                     * @param _translatedTextFont Font for the target language. The enumeration value is the same as SourceTextFont. Case-sensitive language support for fonts. TextColor needs to be set in Target or Source+Target mode.
                     * 
                     */
                    void SetTranslatedTextFont(const std::string& _translatedTextFont);

                    /**
                     * 判断参数 TranslatedTextFont 是否已赋值
                     * @return TranslatedTextFont 是否已赋值
                     * 
                     */
                    bool TranslatedTextFontHasBeenSet() const;

                private:

                    /**
                     * Line spacing.
                     */
                    uint64_t m_lineSpacing;
                    bool m_lineSpacingHasBeenSet;

                    /**
                     * Margin.
                     */
                    uint64_t m_margins;
                    bool m_marginsHasBeenSet;

                    /**
                     * Number of rows.
                     */
                    uint64_t m_lines;
                    bool m_linesHasBeenSet;

                    /**
                     * Number of characters per line.
                     */
                    uint64_t m_charactersPerLine;
                    bool m_charactersPerLineHasBeenSet;

                    /**
                     * Original font    Heiti: simhei.ttf    Song Typeface: simsun.ttc    Huakang Diamond Black (Dynacw Diamond Black): hkjgh.ttf    Helvetica: helvetica.ttf; Needs to be set in Source or Source+Target mode.
                     */
                    std::string m_sourceTextFont;
                    bool m_sourceTextFontHasBeenSet;

                    /**
                     * Font color, represented by 6 characters in hexadecimal RGB.
                     */
                    std::string m_textColor;
                    bool m_textColorHasBeenSet;

                    /**
                     * Background color, represented by 6 characters in hexadecimal RGB.
                     */
                    std::string m_backgroundColor;
                    bool m_backgroundColorHasBeenSet;

                    /**
                     * Background opacity. A number from 0 to 100.
                     */
                    uint64_t m_backgroundAlpha;
                    bool m_backgroundAlphaHasBeenSet;

                    /**
                     * Preview the copywriting.
                     */
                    std::string m_previewContent;
                    bool m_previewContentHasBeenSet;

                    /**
                     * Preview window height.
                     */
                    uint64_t m_previewWindowHeight;
                    bool m_previewWindowHeightHasBeenSet;

                    /**
                     * Preview window width.
                     */
                    uint64_t m_previewWindowWidth;
                    bool m_previewWindowWidthHasBeenSet;

                    /**
                     * Font for the target language. The enumeration value is the same as SourceTextFont. Case-sensitive language support for fonts. TextColor needs to be set in Target or Source+Target mode.
                     */
                    std::string m_translatedTextFont;
                    bool m_translatedTextFontHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_SUBTITLEFONTCONF_H_
