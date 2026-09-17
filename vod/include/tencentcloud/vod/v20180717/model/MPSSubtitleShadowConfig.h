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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLESHADOWCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLESHADOWCONFIG_H_

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
                class MPSSubtitleShadowConfig : public AbstractModel
                {
                public:
                    MPSSubtitleShadowConfig();
                    ~MPSSubtitleShadowConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return SubtitleShadowConfigSwitch 
                     * 
                     */
                    int64_t GetSubtitleShadowConfigSwitch() const;

                    /**
                     * 设置
                     * @param _subtitleShadowConfigSwitch 
                     * 
                     */
                    void SetSubtitleShadowConfigSwitch(const int64_t& _subtitleShadowConfigSwitch);

                    /**
                     * 判断参数 SubtitleShadowConfigSwitch 是否已赋值
                     * @return SubtitleShadowConfigSwitch 是否已赋值
                     * 
                     */
                    bool SubtitleShadowConfigSwitchHasBeenSet() const;

                    /**
                     * 获取
                     * @return ShadowWidth 
                     * 
                     */
                    double GetShadowWidth() const;

                    /**
                     * 设置
                     * @param _shadowWidth 
                     * 
                     */
                    void SetShadowWidth(const double& _shadowWidth);

                    /**
                     * 判断参数 ShadowWidth 是否已赋值
                     * @return ShadowWidth 是否已赋值
                     * 
                     */
                    bool ShadowWidthHasBeenSet() const;

                    /**
                     * 获取
                     * @return ShadowWidthUnit 
                     * 
                     */
                    int64_t GetShadowWidthUnit() const;

                    /**
                     * 设置
                     * @param _shadowWidthUnit 
                     * 
                     */
                    void SetShadowWidthUnit(const int64_t& _shadowWidthUnit);

                    /**
                     * 判断参数 ShadowWidthUnit 是否已赋值
                     * @return ShadowWidthUnit 是否已赋值
                     * 
                     */
                    bool ShadowWidthUnitHasBeenSet() const;

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

                private:

                    /**
                     * 
                     */
                    int64_t m_subtitleShadowConfigSwitch;
                    bool m_subtitleShadowConfigSwitchHasBeenSet;

                    /**
                     * 
                     */
                    double m_shadowWidth;
                    bool m_shadowWidthHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_shadowWidthUnit;
                    bool m_shadowWidthUnitHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLESHADOWCONFIG_H_
