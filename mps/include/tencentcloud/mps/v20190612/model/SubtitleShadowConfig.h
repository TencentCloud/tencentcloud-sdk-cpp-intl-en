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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLESHADOWCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLESHADOWCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Subtitle suppression module text shadow configuration
                */
                class SubtitleShadowConfig : public AbstractModel
                {
                public:
                    SubtitleShadowConfig();
                    ~SubtitleShadowConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Text shadow configuration switch, 0 for off, 1 for on, default 0
                     * @return SubtitleShadowConfigSwitch Text shadow configuration switch, 0 for off, 1 for on, default 0
                     * 
                     */
                    int64_t GetSubtitleShadowConfigSwitch() const;

                    /**
                     * 设置Text shadow configuration switch, 0 for off, 1 for on, default 0
                     * @param _subtitleShadowConfigSwitch Text shadow configuration switch, 0 for off, 1 for on, default 0
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
                     * 获取Shadow width, default unit pixel, underlying default value 0, no shading

                     * @return ShadowWidth Shadow width, default unit pixel, underlying default value 0, no shading

                     * 
                     */
                    double GetShadowWidth() const;

                    /**
                     * 设置Shadow width, default unit pixel, underlying default value 0, no shading

                     * @param _shadowWidth Shadow width, default unit pixel, underlying default value 0, no shading

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
                     * 获取Shadow width unit. 0 for pixel, 1 for percentage. Default is 0 (pixel).

                     * @return ShadowWidthUnit Shadow width unit. 0 for pixel, 1 for percentage. Default is 0 (pixel).

                     * 
                     */
                    int64_t GetShadowWidthUnit() const;

                    /**
                     * 设置Shadow width unit. 0 for pixel, 1 for percentage. Default is 0 (pixel).

                     * @param _shadowWidthUnit Shadow width unit. 0 for pixel, 1 for percentage. Default is 0 (pixel).

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
                     * 获取Shadow color. 6-digit base 16 RGB. Black by default if left blank (has set shadow in the current situation).

                     * @return ShadowColor Shadow color. 6-digit base 16 RGB. Black by default if left blank (has set shadow in the current situation).

                     * 
                     */
                    std::string GetShadowColor() const;

                    /**
                     * 设置Shadow color. 6-digit base 16 RGB. Black by default if left blank (has set shadow in the current situation).

                     * @param _shadowColor Shadow color. 6-digit base 16 RGB. Black by default if left blank (has set shadow in the current situation).

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
                     * 获取Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).

                     * @return ShadowAlpha Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).

                     * 
                     */
                    double GetShadowAlpha() const;

                    /**
                     * 设置Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).

                     * @param _shadowAlpha Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).

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
                     * Text shadow configuration switch, 0 for off, 1 for on, default 0
                     */
                    int64_t m_subtitleShadowConfigSwitch;
                    bool m_subtitleShadowConfigSwitchHasBeenSet;

                    /**
                     * Shadow width, default unit pixel, underlying default value 0, no shading

                     */
                    double m_shadowWidth;
                    bool m_shadowWidthHasBeenSet;

                    /**
                     * Shadow width unit. 0 for pixel, 1 for percentage. Default is 0 (pixel).

                     */
                    int64_t m_shadowWidthUnit;
                    bool m_shadowWidthUnitHasBeenSet;

                    /**
                     * Shadow color. 6-digit base 16 RGB. Black by default if left blank (has set shadow in the current situation).

                     */
                    std::string m_shadowColor;
                    bool m_shadowColorHasBeenSet;

                    /**
                     * Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).

                     */
                    double m_shadowAlpha;
                    bool m_shadowAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLESHADOWCONFIG_H_
