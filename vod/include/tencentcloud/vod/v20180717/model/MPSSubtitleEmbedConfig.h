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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLEEMBEDCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLEEMBEDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSSubtitleBoardConfig.h>
#include <tencentcloud/vod/v20180717/model/MPSSubtitleLayoutConfig.h>
#include <tencentcloud/vod/v20180717/model/MPSSubtitleOutlineConfig.h>
#include <tencentcloud/vod/v20180717/model/MPSSubtitleShadowConfig.h>


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
                class MPSSubtitleEmbedConfig : public AbstractModel
                {
                public:
                    MPSSubtitleEmbedConfig();
                    ~MPSSubtitleEmbedConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * @return FontPath 
                     * 
                     */
                    std::string GetFontPath() const;

                    /**
                     * 设置
                     * @param _fontPath 
                     * 
                     */
                    void SetFontPath(const std::string& _fontPath);

                    /**
                     * 判断参数 FontPath 是否已赋值
                     * @return FontPath 是否已赋值
                     * 
                     */
                    bool FontPathHasBeenSet() const;

                    /**
                     * 获取
                     * @return FontSize 
                     * 
                     */
                    int64_t GetFontSize() const;

                    /**
                     * 设置
                     * @param _fontSize 
                     * 
                     */
                    void SetFontSize(const int64_t& _fontSize);

                    /**
                     * 判断参数 FontSize 是否已赋值
                     * @return FontSize 是否已赋值
                     * 
                     */
                    bool FontSizeHasBeenSet() const;

                    /**
                     * 获取
                     * @return FontSizeUnit 
                     * 
                     */
                    int64_t GetFontSizeUnit() const;

                    /**
                     * 设置
                     * @param _fontSizeUnit 
                     * 
                     */
                    void SetFontSizeUnit(const int64_t& _fontSizeUnit);

                    /**
                     * 判断参数 FontSizeUnit 是否已赋值
                     * @return FontSizeUnit 是否已赋值
                     * 
                     */
                    bool FontSizeUnitHasBeenSet() const;

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
                     * @return PosX 
                     * 
                     */
                    int64_t GetPosX() const;

                    /**
                     * 设置
                     * @param _posX 
                     * 
                     */
                    void SetPosX(const int64_t& _posX);

                    /**
                     * 判断参数 PosX 是否已赋值
                     * @return PosX 是否已赋值
                     * 
                     */
                    bool PosXHasBeenSet() const;

                    /**
                     * 获取
                     * @return PosXUnit 
                     * 
                     */
                    int64_t GetPosXUnit() const;

                    /**
                     * 设置
                     * @param _posXUnit 
                     * 
                     */
                    void SetPosXUnit(const int64_t& _posXUnit);

                    /**
                     * 判断参数 PosXUnit 是否已赋值
                     * @return PosXUnit 是否已赋值
                     * 
                     */
                    bool PosXUnitHasBeenSet() const;

                    /**
                     * 获取
                     * @return PosY 
                     * 
                     */
                    int64_t GetPosY() const;

                    /**
                     * 设置
                     * @param _posY 
                     * 
                     */
                    void SetPosY(const int64_t& _posY);

                    /**
                     * 判断参数 PosY 是否已赋值
                     * @return PosY 是否已赋值
                     * 
                     */
                    bool PosYHasBeenSet() const;

                    /**
                     * 获取
                     * @return PosYUnit 
                     * 
                     */
                    int64_t GetPosYUnit() const;

                    /**
                     * 设置
                     * @param _posYUnit 
                     * 
                     */
                    void SetPosYUnit(const int64_t& _posYUnit);

                    /**
                     * 判断参数 PosYUnit 是否已赋值
                     * @return PosYUnit 是否已赋值
                     * 
                     */
                    bool PosYUnitHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubtitleBoardConfig 
                     * 
                     */
                    MPSSubtitleBoardConfig GetSubtitleBoardConfig() const;

                    /**
                     * 设置
                     * @param _subtitleBoardConfig 
                     * 
                     */
                    void SetSubtitleBoardConfig(const MPSSubtitleBoardConfig& _subtitleBoardConfig);

                    /**
                     * 判断参数 SubtitleBoardConfig 是否已赋值
                     * @return SubtitleBoardConfig 是否已赋值
                     * 
                     */
                    bool SubtitleBoardConfigHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubtitleLayoutConfig 
                     * 
                     */
                    MPSSubtitleLayoutConfig GetSubtitleLayoutConfig() const;

                    /**
                     * 设置
                     * @param _subtitleLayoutConfig 
                     * 
                     */
                    void SetSubtitleLayoutConfig(const MPSSubtitleLayoutConfig& _subtitleLayoutConfig);

                    /**
                     * 判断参数 SubtitleLayoutConfig 是否已赋值
                     * @return SubtitleLayoutConfig 是否已赋值
                     * 
                     */
                    bool SubtitleLayoutConfigHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubtitleOutlineConfig 
                     * 
                     */
                    MPSSubtitleOutlineConfig GetSubtitleOutlineConfig() const;

                    /**
                     * 设置
                     * @param _subtitleOutlineConfig 
                     * 
                     */
                    void SetSubtitleOutlineConfig(const MPSSubtitleOutlineConfig& _subtitleOutlineConfig);

                    /**
                     * 判断参数 SubtitleOutlineConfig 是否已赋值
                     * @return SubtitleOutlineConfig 是否已赋值
                     * 
                     */
                    bool SubtitleOutlineConfigHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubtitleShadowConfig 
                     * 
                     */
                    MPSSubtitleShadowConfig GetSubtitleShadowConfig() const;

                    /**
                     * 设置
                     * @param _subtitleShadowConfig 
                     * 
                     */
                    void SetSubtitleShadowConfig(const MPSSubtitleShadowConfig& _subtitleShadowConfig);

                    /**
                     * 判断参数 SubtitleShadowConfig 是否已赋值
                     * @return SubtitleShadowConfig 是否已赋值
                     * 
                     */
                    bool SubtitleShadowConfigHasBeenSet() const;

                    /**
                     * 获取
                     * @return SampleWidth 
                     * 
                     */
                    int64_t GetSampleWidth() const;

                    /**
                     * 设置
                     * @param _sampleWidth 
                     * 
                     */
                    void SetSampleWidth(const int64_t& _sampleWidth);

                    /**
                     * 判断参数 SampleWidth 是否已赋值
                     * @return SampleWidth 是否已赋值
                     * 
                     */
                    bool SampleWidthHasBeenSet() const;

                    /**
                     * 获取
                     * @return SampleHeight 
                     * 
                     */
                    int64_t GetSampleHeight() const;

                    /**
                     * 设置
                     * @param _sampleHeight 
                     * 
                     */
                    void SetSampleHeight(const int64_t& _sampleHeight);

                    /**
                     * 判断参数 SampleHeight 是否已赋值
                     * @return SampleHeight 是否已赋值
                     * 
                     */
                    bool SampleHeightHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fontPath;
                    bool m_fontPathHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_fontSizeUnit;
                    bool m_fontSizeUnitHasBeenSet;

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
                    int64_t m_posX;
                    bool m_posXHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_posXUnit;
                    bool m_posXUnitHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_posY;
                    bool m_posYHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_posYUnit;
                    bool m_posYUnitHasBeenSet;

                    /**
                     * 
                     */
                    MPSSubtitleBoardConfig m_subtitleBoardConfig;
                    bool m_subtitleBoardConfigHasBeenSet;

                    /**
                     * 
                     */
                    MPSSubtitleLayoutConfig m_subtitleLayoutConfig;
                    bool m_subtitleLayoutConfigHasBeenSet;

                    /**
                     * 
                     */
                    MPSSubtitleOutlineConfig m_subtitleOutlineConfig;
                    bool m_subtitleOutlineConfigHasBeenSet;

                    /**
                     * 
                     */
                    MPSSubtitleShadowConfig m_subtitleShadowConfig;
                    bool m_subtitleShadowConfigHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_sampleWidth;
                    bool m_sampleWidthHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_sampleHeight;
                    bool m_sampleHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLEEMBEDCONFIG_H_
