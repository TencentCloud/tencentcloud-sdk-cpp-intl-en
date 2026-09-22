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
                * MPS subtitle suppression module text shadow configuration
                */
                class MPSSubtitleShadowConfig : public AbstractModel
                {
                public:
                    MPSSubtitleShadowConfig();
                    ~MPSSubtitleShadowConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Text shadow configuration switch, 0 for off, 1 for on, default 0</p>
                     * @return SubtitleShadowConfigSwitch <p>Text shadow configuration switch, 0 for off, 1 for on, default 0</p>
                     * 
                     */
                    int64_t GetSubtitleShadowConfigSwitch() const;

                    /**
                     * 设置<p>Text shadow configuration switch, 0 for off, 1 for on, default 0</p>
                     * @param _subtitleShadowConfigSwitch <p>Text shadow configuration switch, 0 for off, 1 for on, default 0</p>
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
                     * 获取<p>Shadow width, default unit pixel, underlying default value 0, no shading</p>
                     * @return ShadowWidth <p>Shadow width, default unit pixel, underlying default value 0, no shading</p>
                     * 
                     */
                    double GetShadowWidth() const;

                    /**
                     * 设置<p>Shadow width, default unit pixel, underlying default value 0, no shading</p>
                     * @param _shadowWidth <p>Shadow width, default unit pixel, underlying default value 0, no shading</p>
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
                     * 获取<p>Shadow width unit. 0 for pixel, 1 for percentage. Default is 0 (pixel).</p>
                     * @return ShadowWidthUnit <p>Shadow width unit. 0 for pixel, 1 for percentage. Default is 0 (pixel).</p>
                     * 
                     */
                    int64_t GetShadowWidthUnit() const;

                    /**
                     * 设置<p>Shadow width unit. 0 for pixel, 1 for percentage. Default is 0 (pixel).</p>
                     * @param _shadowWidthUnit <p>Shadow width unit. 0 for pixel, 1 for percentage. Default is 0 (pixel).</p>
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
                     * 获取<p>Shadow color. 6-digit hexadecimal RGB. Black by default if left blank (when shadow has set)</p>
                     * @return ShadowColor <p>Shadow color. 6-digit hexadecimal RGB. Black by default if left blank (when shadow has set)</p>
                     * 
                     */
                    std::string GetShadowColor() const;

                    /**
                     * 设置<p>Shadow color. 6-digit hexadecimal RGB. Black by default if left blank (when shadow has set)</p>
                     * @param _shadowColor <p>Shadow color. 6-digit hexadecimal RGB. Black by default if left blank (when shadow has set)</p>
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
                     * 获取<p>Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).</p>
                     * @return ShadowAlpha <p>Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).</p>
                     * 
                     */
                    double GetShadowAlpha() const;

                    /**
                     * 设置<p>Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).</p>
                     * @param _shadowAlpha <p>Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).</p>
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
                     * <p>Text shadow configuration switch, 0 for off, 1 for on, default 0</p>
                     */
                    int64_t m_subtitleShadowConfigSwitch;
                    bool m_subtitleShadowConfigSwitchHasBeenSet;

                    /**
                     * <p>Shadow width, default unit pixel, underlying default value 0, no shading</p>
                     */
                    double m_shadowWidth;
                    bool m_shadowWidthHasBeenSet;

                    /**
                     * <p>Shadow width unit. 0 for pixel, 1 for percentage. Default is 0 (pixel).</p>
                     */
                    int64_t m_shadowWidthUnit;
                    bool m_shadowWidthUnitHasBeenSet;

                    /**
                     * <p>Shadow color. 6-digit hexadecimal RGB. Black by default if left blank (when shadow has set)</p>
                     */
                    std::string m_shadowColor;
                    bool m_shadowColorHasBeenSet;

                    /**
                     * <p>Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).</p>
                     */
                    double m_shadowAlpha;
                    bool m_shadowAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLESHADOWCONFIG_H_
