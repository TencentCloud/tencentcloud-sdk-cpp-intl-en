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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ADVANCEDSUPERRESOLUTIONCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ADVANCEDSUPERRESOLUTIONCONFIG_H_

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
<li>OFF: Disabled.</li>
Default value: ON.
                     * @return Switch Capability configuration switch. Valid values:
<li>ON: enabled;</li>
<li>OFF: Disabled.</li>
Default value: ON.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Capability configuration switch. Valid values:
<li>ON: enabled;</li>
<li>OFF: Disabled.</li>
Default value: ON.
                     * @param _switch Capability configuration switch. Valid values:
<li>ON: enabled;</li>
<li>OFF: Disabled.</li>
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
                     * 获取Type, available values:
<li>standard: common super resolution</li>
<li>super: advanced super-resolution.</li>
Default value: standard.
                     * @return Type Type, available values:
<li>standard: common super resolution</li>
<li>super: advanced super-resolution.</li>
Default value: standard.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type, available values:
<li>standard: common super resolution</li>
<li>super: advanced super-resolution.</li>
Default value: standard.
                     * @param _type Type, available values:
<li>standard: common super resolution</li>
<li>super: advanced super-resolution.</li>
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
<li>percent: Super-resolution multiplication rate, which can be a decimal.</li>
                     * @return Mode Image output mode. The default value is percent.
<li>aspect: obtain a larger rectangle with specified width and height through super-resolution.</li>
<li>fixed: obtain images of fixed width and height through super-resolution, with forced scaling supported.</li>
<li>percent: Super-resolution multiplication rate, which can be a decimal.</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Image output mode. The default value is percent.
<li>aspect: obtain a larger rectangle with specified width and height through super-resolution.</li>
<li>fixed: obtain images of fixed width and height through super-resolution, with forced scaling supported.</li>
<li>percent: Super-resolution multiplication rate, which can be a decimal.</li>
                     * @param _mode Image output mode. The default value is percent.
<li>aspect: obtain a larger rectangle with specified width and height through super-resolution.</li>
<li>fixed: obtain images of fixed width and height through super-resolution, with forced scaling supported.</li>
<li>percent: Super-resolution multiplication rate, which can be a decimal.</li>
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
                     * 获取Super-resolution multiplication rate, can be decimal.
                     * @return Percent Super-resolution multiplication rate, can be decimal.
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置Super-resolution multiplication rate, can be decimal.
                     * @param _percent Super-resolution multiplication rate, can be decimal.
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
                     * 获取Target image width must not exceed 4096.
                     * @return Width Target image width must not exceed 4096.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Target image width must not exceed 4096.
                     * @param _width Target image width must not exceed 4096.
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
                     * 获取Target image height must not exceed 4096.
                     * @return Height Target image height must not exceed 4096.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Target image height must not exceed 4096.
                     * @param _height Target image height must not exceed 4096.
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
                     * 获取The long edge length of the target image must not exceed 4096.
Note: This configuration is used when Mode equals aspect or fixed and the Width and Height fields are unconfigured.
                     * @return LongSide The long edge length of the target image must not exceed 4096.
Note: This configuration is used when Mode equals aspect or fixed and the Width and Height fields are unconfigured.
                     * 
                     */
                    int64_t GetLongSide() const;

                    /**
                     * 设置The long edge length of the target image must not exceed 4096.
Note: This configuration is used when Mode equals aspect or fixed and the Width and Height fields are unconfigured.
                     * @param _longSide The long edge length of the target image must not exceed 4096.
Note: This configuration is used when Mode equals aspect or fixed and the Width and Height fields are unconfigured.
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
                     * 获取The short side length of the target image must not exceed 4096.
Note: This configuration is used when Mode equals aspect or fixed and the Width and Height fields are unconfigured.
                     * @return ShortSide The short side length of the target image must not exceed 4096.
Note: This configuration is used when Mode equals aspect or fixed and the Width and Height fields are unconfigured.
                     * 
                     */
                    int64_t GetShortSide() const;

                    /**
                     * 设置The short side length of the target image must not exceed 4096.
Note: This configuration is used when Mode equals aspect or fixed and the Width and Height fields are unconfigured.
                     * @param _shortSide The short side length of the target image must not exceed 4096.
Note: This configuration is used when Mode equals aspect or fixed and the Width and Height fields are unconfigured.
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
<li>OFF: Disabled.</li>
Default value: ON.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Type, available values:
<li>standard: common super resolution</li>
<li>super: advanced super-resolution.</li>
Default value: standard.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Image output mode. The default value is percent.
<li>aspect: obtain a larger rectangle with specified width and height through super-resolution.</li>
<li>fixed: obtain images of fixed width and height through super-resolution, with forced scaling supported.</li>
<li>percent: Super-resolution multiplication rate, which can be a decimal.</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Super-resolution multiplication rate, can be decimal.
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * Target image width must not exceed 4096.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Target image height must not exceed 4096.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The long edge length of the target image must not exceed 4096.
Note: This configuration is used when Mode equals aspect or fixed and the Width and Height fields are unconfigured.
                     */
                    int64_t m_longSide;
                    bool m_longSideHasBeenSet;

                    /**
                     * The short side length of the target image must not exceed 4096.
Note: This configuration is used when Mode equals aspect or fixed and the Width and Height fields are unconfigured.
                     */
                    int64_t m_shortSide;
                    bool m_shortSideHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADVANCEDSUPERRESOLUTIONCONFIG_H_
