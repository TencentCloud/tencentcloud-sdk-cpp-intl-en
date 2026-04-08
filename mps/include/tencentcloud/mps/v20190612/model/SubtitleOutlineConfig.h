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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEOUTLINECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEOUTLINECONFIG_H_

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
                * Subtitle suppression module text stroke configuration
                */
                class SubtitleOutlineConfig : public AbstractModel
                {
                public:
                    SubtitleOutlineConfig();
                    ~SubtitleOutlineConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Text stroke configuration switch, 0 for off, 1 for on, default 0</p>
                     * @return SubtitleOutlineConfigSwitch <p>Text stroke configuration switch, 0 for off, 1 for on, default 0</p>
                     * 
                     */
                    int64_t GetSubtitleOutlineConfigSwitch() const;

                    /**
                     * 设置<p>Text stroke configuration switch, 0 for off, 1 for on, default 0</p>
                     * @param _subtitleOutlineConfigSwitch <p>Text stroke configuration switch, 0 for off, 1 for on, default 0</p>
                     * 
                     */
                    void SetSubtitleOutlineConfigSwitch(const int64_t& _subtitleOutlineConfigSwitch);

                    /**
                     * 判断参数 SubtitleOutlineConfigSwitch 是否已赋值
                     * @return SubtitleOutlineConfigSwitch 是否已赋值
                     * 
                     */
                    bool SubtitleOutlineConfigSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Stroke width, default unit pixel, underlying default value is 0.3% of the source video height</p>
                     * @return OutlineWidth <p>Stroke width, default unit pixel, underlying default value is 0.3% of the source video height</p>
                     * 
                     */
                    double GetOutlineWidth() const;

                    /**
                     * 设置<p>Stroke width, default unit pixel, underlying default value is 0.3% of the source video height</p>
                     * @param _outlineWidth <p>Stroke width, default unit pixel, underlying default value is 0.3% of the source video height</p>
                     * 
                     */
                    void SetOutlineWidth(const double& _outlineWidth);

                    /**
                     * 判断参数 OutlineWidth 是否已赋值
                     * @return OutlineWidth 是否已赋值
                     * 
                     */
                    bool OutlineWidthHasBeenSet() const;

                    /**
                     * 获取<p>Stroke width unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * @return OutlineWidthUnit <p>Stroke width unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * 
                     */
                    int64_t GetOutlineWidthUnit() const;

                    /**
                     * 设置<p>Stroke width unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * @param _outlineWidthUnit <p>Stroke width unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * 
                     */
                    void SetOutlineWidthUnit(const int64_t& _outlineWidthUnit);

                    /**
                     * 判断参数 OutlineWidthUnit 是否已赋值
                     * @return OutlineWidthUnit 是否已赋值
                     * 
                     */
                    bool OutlineWidthUnitHasBeenSet() const;

                    /**
                     * 获取<p>Border color. 6-digit base 16 RGB. Black by default if left blank.</p>
                     * @return OutlineColor <p>Border color. 6-digit base 16 RGB. Black by default if left blank.</p>
                     * 
                     */
                    std::string GetOutlineColor() const;

                    /**
                     * 设置<p>Border color. 6-digit base 16 RGB. Black by default if left blank.</p>
                     * @param _outlineColor <p>Border color. 6-digit base 16 RGB. Black by default if left blank.</p>
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
                     * 获取<p>Stroke transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque.</p>
                     * @return OutlineAlpha <p>Stroke transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque.</p>
                     * 
                     */
                    double GetOutlineAlpha() const;

                    /**
                     * 设置<p>Stroke transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque.</p>
                     * @param _outlineAlpha <p>Stroke transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque.</p>
                     * 
                     */
                    void SetOutlineAlpha(const double& _outlineAlpha);

                    /**
                     * 判断参数 OutlineAlpha 是否已赋值
                     * @return OutlineAlpha 是否已赋值
                     * 
                     */
                    bool OutlineAlphaHasBeenSet() const;

                private:

                    /**
                     * <p>Text stroke configuration switch, 0 for off, 1 for on, default 0</p>
                     */
                    int64_t m_subtitleOutlineConfigSwitch;
                    bool m_subtitleOutlineConfigSwitchHasBeenSet;

                    /**
                     * <p>Stroke width, default unit pixel, underlying default value is 0.3% of the source video height</p>
                     */
                    double m_outlineWidth;
                    bool m_outlineWidthHasBeenSet;

                    /**
                     * <p>Stroke width unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     */
                    int64_t m_outlineWidthUnit;
                    bool m_outlineWidthUnitHasBeenSet;

                    /**
                     * <p>Border color. 6-digit base 16 RGB. Black by default if left blank.</p>
                     */
                    std::string m_outlineColor;
                    bool m_outlineColorHasBeenSet;

                    /**
                     * <p>Stroke transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque.</p>
                     */
                    double m_outlineAlpha;
                    bool m_outlineAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEOUTLINECONFIG_H_
