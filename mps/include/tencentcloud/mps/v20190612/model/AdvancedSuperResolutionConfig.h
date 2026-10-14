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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADVANCEDSUPERRESOLUTIONCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADVANCEDSUPERRESOLUTIONCONFIG_H_

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
                * Super-resolution configuration.
                */
                class AdvancedSuperResolutionConfig : public AbstractModel
                {
                public:
                    AdvancedSuperResolutionConfig();
                    ~AdvancedSuperResolutionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Capability configuration switch. Valid values:
<li>ON: enabled;</li>
<li>OFF: disabled</li>
Default value: ON.
                     * @return Switch Capability configuration switch. Valid values:
<li>ON: enabled;</li>
<li>OFF: disabled</li>
Default value: ON.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Capability configuration switch. Valid values:
<li>ON: enabled;</li>
<li>OFF: disabled</li>
Default value: ON.
                     * @param _switch Capability configuration switch. Valid values:
<li>ON: enabled;</li>
<li>OFF: disabled</li>
Default value: ON.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Type. Valid values:
<li>standard: common super resolution</li>
<li>super: advanced super-resolution super version.</li>
<li>ultra: Advanced super resolution ultra version.</li>
Default value: standard.
                     * @return Type Type. Valid values:
<li>standard: common super resolution</li>
<li>super: advanced super-resolution super version.</li>
<li>ultra: Advanced super resolution ultra version.</li>
Default value: standard.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type. Valid values:
<li>standard: common super resolution</li>
<li>super: advanced super-resolution super version.</li>
<li>ultra: Advanced super resolution ultra version.</li>
Default value: standard.
                     * @param _type Type. Valid values:
<li>standard: common super resolution</li>
<li>super: advanced super-resolution super version.</li>
<li>ultra: Advanced super resolution ultra version.</li>
Default value: standard.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Image output mode. The default value is percent.
<li>aspect: obtain a larger rectangle with specified width and height through super-resolution.</li>
<li>fixed: obtain images of fixed width and height through super-resolution, with forced scaling supported.</li>
<li>percent: magnification factor of super-resolution, which can be a decimal.</li>
                     * @return Mode Image output mode. The default value is percent.
<li>aspect: obtain a larger rectangle with specified width and height through super-resolution.</li>
<li>fixed: obtain images of fixed width and height through super-resolution, with forced scaling supported.</li>
<li>percent: magnification factor of super-resolution, which can be a decimal.</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Image output mode. The default value is percent.
<li>aspect: obtain a larger rectangle with specified width and height through super-resolution.</li>
<li>fixed: obtain images of fixed width and height through super-resolution, with forced scaling supported.</li>
<li>percent: magnification factor of super-resolution, which can be a decimal.</li>
                     * @param _mode Image output mode. The default value is percent.
<li>aspect: obtain a larger rectangle with specified width and height through super-resolution.</li>
<li>fixed: obtain images of fixed width and height through super-resolution, with forced scaling supported.</li>
<li>percent: magnification factor of super-resolution, which can be a decimal.</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Super resolution multiplication rate, which can be a decimal.
Note: Used when Mode is equal to percent.
                     * @return Percent Super resolution multiplication rate, which can be a decimal.
Note: Used when Mode is equal to percent.
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置Super resolution multiplication rate, which can be a decimal.
Note: Used when Mode is equal to percent.
                     * @param _percent Super resolution multiplication rate, which can be a decimal.
Note: Used when Mode is equal to percent.
                     * 
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取Target image width. Cannot exceed 4096.
Note: When Mode is equal to aspect or fixed, preferentially use this configuration.
                     * @return Width Target image width. Cannot exceed 4096.
Note: When Mode is equal to aspect or fixed, preferentially use this configuration.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Target image width. Cannot exceed 4096.
Note: When Mode is equal to aspect or fixed, preferentially use this configuration.
                     * @param _width Target image width. Cannot exceed 4096.
Note: When Mode is equal to aspect or fixed, preferentially use this configuration.
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Target image height. Must not exceed 4096.
Note: When Mode is equal to aspect or fixed, preferentially use this configuration.
                     * @return Height Target image height. Must not exceed 4096.
Note: When Mode is equal to aspect or fixed, preferentially use this configuration.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Target image height. Must not exceed 4096.
Note: When Mode is equal to aspect or fixed, preferentially use this configuration.
                     * @param _height Target image height. Must not exceed 4096.
Note: When Mode is equal to aspect or fixed, preferentially use this configuration.
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Long side length of the target image. Must not exceed 4096.
Note: This configuration is used when Mode is equal to aspect or fixed, and Width and Height fields are not configured.
                     * @return LongSide Long side length of the target image. Must not exceed 4096.
Note: This configuration is used when Mode is equal to aspect or fixed, and Width and Height fields are not configured.
                     * 
                     */
                    int64_t GetLongSide() const;

                    /**
                     * 设置Long side length of the target image. Must not exceed 4096.
Note: This configuration is used when Mode is equal to aspect or fixed, and Width and Height fields are not configured.
                     * @param _longSide Long side length of the target image. Must not exceed 4096.
Note: This configuration is used when Mode is equal to aspect or fixed, and Width and Height fields are not configured.
                     * 
                     */
                    void SetLongSide(const int64_t& _longSide);

                    /**
                     * 判断参数 LongSide 是否已赋值
                     * @return LongSide 是否已赋值
                     * 
                     */
                    bool LongSideHasBeenSet() const;

                    /**
                     * 获取Short side length of the target image. Must not exceed 4096.
Note: This configuration is used when Mode is equal to aspect or fixed, and Width and Height fields are not configured.
                     * @return ShortSide Short side length of the target image. Must not exceed 4096.
Note: This configuration is used when Mode is equal to aspect or fixed, and Width and Height fields are not configured.
                     * 
                     */
                    int64_t GetShortSide() const;

                    /**
                     * 设置Short side length of the target image. Must not exceed 4096.
Note: This configuration is used when Mode is equal to aspect or fixed, and Width and Height fields are not configured.
                     * @param _shortSide Short side length of the target image. Must not exceed 4096.
Note: This configuration is used when Mode is equal to aspect or fixed, and Width and Height fields are not configured.
                     * 
                     */
                    void SetShortSide(const int64_t& _shortSide);

                    /**
                     * 判断参数 ShortSide 是否已赋值
                     * @return ShortSide 是否已赋值
                     * 
                     */
                    bool ShortSideHasBeenSet() const;

                private:

                    /**
                     * Capability configuration switch. Valid values:
<li>ON: enabled;</li>
<li>OFF: disabled</li>
Default value: ON.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Type. Valid values:
<li>standard: common super resolution</li>
<li>super: advanced super-resolution super version.</li>
<li>ultra: Advanced super resolution ultra version.</li>
Default value: standard.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Image output mode. The default value is percent.
<li>aspect: obtain a larger rectangle with specified width and height through super-resolution.</li>
<li>fixed: obtain images of fixed width and height through super-resolution, with forced scaling supported.</li>
<li>percent: magnification factor of super-resolution, which can be a decimal.</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Super resolution multiplication rate, which can be a decimal.
Note: Used when Mode is equal to percent.
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * Target image width. Cannot exceed 4096.
Note: When Mode is equal to aspect or fixed, preferentially use this configuration.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Target image height. Must not exceed 4096.
Note: When Mode is equal to aspect or fixed, preferentially use this configuration.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Long side length of the target image. Must not exceed 4096.
Note: This configuration is used when Mode is equal to aspect or fixed, and Width and Height fields are not configured.
                     */
                    int64_t m_longSide;
                    bool m_longSideHasBeenSet;

                    /**
                     * Short side length of the target image. Must not exceed 4096.
Note: This configuration is used when Mode is equal to aspect or fixed, and Width and Height fields are not configured.
                     */
                    int64_t m_shortSide;
                    bool m_shortSideHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADVANCEDSUPERRESOLUTIONCONFIG_H_
