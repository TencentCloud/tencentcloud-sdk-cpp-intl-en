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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEINFOINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEINFOINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class SubtitleInfoInput : public AbstractModel
                {
                public:
                    SubtitleInfoInput();
                    ~SubtitleInfoInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Id 
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置
                     * @param _id 
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取
                     * @return StreamIndex 
                     * 
                     */
                    int64_t GetStreamIndex() const;

                    /**
                     * 设置
                     * @param _streamIndex 
                     * 
                     */
                    void SetStreamIndex(const int64_t& _streamIndex);

                    /**
                     * 判断参数 StreamIndex 是否已赋值
                     * @return StreamIndex 是否已赋值
                     * 
                     */
                    bool StreamIndexHasBeenSet() const;

                    /**
                     * 获取
                     * @return FontType 
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置
                     * @param _fontType 
                     * 
                     */
                    void SetFontType(const std::string& _fontType);

                    /**
                     * 判断参数 FontType 是否已赋值
                     * @return FontType 是否已赋值
                     * 
                     */
                    bool FontTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return FontSize 
                     * 
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置
                     * @param _fontSize 
                     * 
                     */
                    void SetFontSize(const std::string& _fontSize);

                    /**
                     * 判断参数 FontSize 是否已赋值
                     * @return FontSize 是否已赋值
                     * 
                     */
                    bool FontSizeHasBeenSet() const;

                    /**
                     * 获取
                     * @return FontColor 
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置
                     * @param _fontColor 
                     * 
                     */
                    void SetFontColor(const std::string& _fontColor);

                    /**
                     * 判断参数 FontColor 是否已赋值
                     * @return FontColor 是否已赋值
                     * 
                     */
                    bool FontColorHasBeenSet() const;

                    /**
                     * 获取
                     * @return FontAlpha 
                     * 
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置
                     * @param _fontAlpha 
                     * 
                     */
                    void SetFontAlpha(const double& _fontAlpha);

                    /**
                     * 判断参数 FontAlpha 是否已赋值
                     * @return FontAlpha 是否已赋值
                     * 
                     */
                    bool FontAlphaHasBeenSet() const;

                    /**
                     * 获取
                     * @return YPos 
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置
                     * @param _yPos 
                     * 
                     */
                    void SetYPos(const std::string& _yPos);

                    /**
                     * 判断参数 YPos 是否已赋值
                     * @return YPos 是否已赋值
                     * 
                     */
                    bool YPosHasBeenSet() const;

                    /**
                     * 获取
                     * @return BoardY 
                     * 
                     */
                    std::string GetBoardY() const;

                    /**
                     * 设置
                     * @param _boardY 
                     * 
                     */
                    void SetBoardY(const std::string& _boardY);

                    /**
                     * 判断参数 BoardY 是否已赋值
                     * @return BoardY 是否已赋值
                     * 
                     */
                    bool BoardYHasBeenSet() const;

                    /**
                     * 获取
                     * @return BoardWidth 
                     * 
                     */
                    std::string GetBoardWidth() const;

                    /**
                     * 设置
                     * @param _boardWidth 
                     * 
                     */
                    void SetBoardWidth(const std::string& _boardWidth);

                    /**
                     * 判断参数 BoardWidth 是否已赋值
                     * @return BoardWidth 是否已赋值
                     * 
                     */
                    bool BoardWidthHasBeenSet() const;

                    /**
                     * 获取
                     * @return BoardHeight 
                     * 
                     */
                    std::string GetBoardHeight() const;

                    /**
                     * 设置
                     * @param _boardHeight 
                     * 
                     */
                    void SetBoardHeight(const std::string& _boardHeight);

                    /**
                     * 判断参数 BoardHeight 是否已赋值
                     * @return BoardHeight 是否已赋值
                     * 
                     */
                    bool BoardHeightHasBeenSet() const;

                    /**
                     * 获取
                     * @return BoardColor 
                     * 
                     */
                    std::string GetBoardColor() const;

                    /**
                     * 设置
                     * @param _boardColor 
                     * 
                     */
                    void SetBoardColor(const std::string& _boardColor);

                    /**
                     * 判断参数 BoardColor 是否已赋值
                     * @return BoardColor 是否已赋值
                     * 
                     */
                    bool BoardColorHasBeenSet() const;

                    /**
                     * 获取
                     * @return BoardAlpha 
                     * 
                     */
                    double GetBoardAlpha() const;

                    /**
                     * 设置
                     * @param _boardAlpha 
                     * 
                     */
                    void SetBoardAlpha(const double& _boardAlpha);

                    /**
                     * 判断参数 BoardAlpha 是否已赋值
                     * @return BoardAlpha 是否已赋值
                     * 
                     */
                    bool BoardAlphaHasBeenSet() const;

                    /**
                     * 获取
                     * @return Alignment 
                     * 
                     */
                    std::string GetAlignment() const;

                    /**
                     * 设置
                     * @param _alignment 
                     * 
                     */
                    void SetAlignment(const std::string& _alignment);

                    /**
                     * 判断参数 Alignment 是否已赋值
                     * @return Alignment 是否已赋值
                     * 
                     */
                    bool AlignmentHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutlineWidth 
                     * 
                     */
                    std::string GetOutlineWidth() const;

                    /**
                     * 设置
                     * @param _outlineWidth 
                     * 
                     */
                    void SetOutlineWidth(const std::string& _outlineWidth);

                    /**
                     * 判断参数 OutlineWidth 是否已赋值
                     * @return OutlineWidth 是否已赋值
                     * 
                     */
                    bool OutlineWidthHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutlineColor 
                     * 
                     */
                    std::string GetOutlineColor() const;

                    /**
                     * 设置
                     * @param _outlineColor 
                     * 
                     */
                    void SetOutlineColor(const std::string& _outlineColor);

                    /**
                     * 判断参数 OutlineColor 是否已赋值
                     * @return OutlineColor 是否已赋值
                     * 
                     */
                    bool OutlineColorHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutlineAlpha 
                     * 
                     */
                    double GetOutlineAlpha() const;

                    /**
                     * 设置
                     * @param _outlineAlpha 
                     * 
                     */
                    void SetOutlineAlpha(const double& _outlineAlpha);

                    /**
                     * 判断参数 OutlineAlpha 是否已赋值
                     * @return OutlineAlpha 是否已赋值
                     * 
                     */
                    bool OutlineAlphaHasBeenSet() const;

                    /**
                     * 获取
                     * @return ShadowWidth 
                     * 
                     */
                    std::string GetShadowWidth() const;

                    /**
                     * 设置
                     * @param _shadowWidth 
                     * 
                     */
                    void SetShadowWidth(const std::string& _shadowWidth);

                    /**
                     * 判断参数 ShadowWidth 是否已赋值
                     * @return ShadowWidth 是否已赋值
                     * 
                     */
                    bool ShadowWidthHasBeenSet() const;

                    /**
                     * 获取
                     * @return ShadowColor 
                     * 
                     */
                    std::string GetShadowColor() const;

                    /**
                     * 设置
                     * @param _shadowColor 
                     * 
                     */
                    void SetShadowColor(const std::string& _shadowColor);

                    /**
                     * 判断参数 ShadowColor 是否已赋值
                     * @return ShadowColor 是否已赋值
                     * 
                     */
                    bool ShadowColorHasBeenSet() const;

                    /**
                     * 获取
                     * @return ShadowAlpha 
                     * 
                     */
                    double GetShadowAlpha() const;

                    /**
                     * 设置
                     * @param _shadowAlpha 
                     * 
                     */
                    void SetShadowAlpha(const double& _shadowAlpha);

                    /**
                     * 判断参数 ShadowAlpha 是否已赋值
                     * @return ShadowAlpha 是否已赋值
                     * 
                     */
                    bool ShadowAlphaHasBeenSet() const;

                    /**
                     * 获取
                     * @return LineSpacing 
                     * 
                     */
                    std::string GetLineSpacing() const;

                    /**
                     * 设置
                     * @param _lineSpacing 
                     * 
                     */
                    void SetLineSpacing(const std::string& _lineSpacing);

                    /**
                     * 判断参数 LineSpacing 是否已赋值
                     * @return LineSpacing 是否已赋值
                     * 
                     */
                    bool LineSpacingHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_streamIndex;
                    bool m_streamIndexHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * 
                     */
                    double m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_boardY;
                    bool m_boardYHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_boardWidth;
                    bool m_boardWidthHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_boardHeight;
                    bool m_boardHeightHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_boardColor;
                    bool m_boardColorHasBeenSet;

                    /**
                     * 
                     */
                    double m_boardAlpha;
                    bool m_boardAlphaHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_alignment;
                    bool m_alignmentHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_outlineWidth;
                    bool m_outlineWidthHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_outlineColor;
                    bool m_outlineColorHasBeenSet;

                    /**
                     * 
                     */
                    double m_outlineAlpha;
                    bool m_outlineAlphaHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_shadowWidth;
                    bool m_shadowWidthHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_shadowColor;
                    bool m_shadowColorHasBeenSet;

                    /**
                     * 
                     */
                    double m_shadowAlpha;
                    bool m_shadowAlphaHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_lineSpacing;
                    bool m_lineSpacingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEINFOINPUT_H_
