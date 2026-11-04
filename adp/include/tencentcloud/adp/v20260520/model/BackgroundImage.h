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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_BACKGROUNDIMAGE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_BACKGROUNDIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * BackgroundImage configuration
                */
                class BackgroundImage : public AbstractModel
                {
                public:
                    BackgroundImage();
                    ~BackgroundImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Brightness level
                     * @return Brightness Brightness level
                     * 
                     */
                    uint64_t GetBrightness() const;

                    /**
                     * 设置Brightness level
                     * @param _brightness Brightness level
                     * 
                     */
                    void SetBrightness(const uint64_t& _brightness);

                    /**
                     * 判断参数 Brightness 是否已赋值
                     * @return Brightness 是否已赋值
                     * 
                     */
                    bool BrightnessHasBeenSet() const;

                    /**
                     * 获取Landscape image (pc)
                     * @return LandscapeImageUrl Landscape image (pc)
                     * 
                     */
                    std::string GetLandscapeImageUrl() const;

                    /**
                     * 设置Landscape image (pc)
                     * @param _landscapeImageUrl Landscape image (pc)
                     * 
                     */
                    void SetLandscapeImageUrl(const std::string& _landscapeImageUrl);

                    /**
                     * 判断参数 LandscapeImageUrl 是否已赋值
                     * @return LandscapeImageUrl 是否已赋值
                     * 
                     */
                    bool LandscapeImageUrlHasBeenSet() const;

                    /**
                     * 获取Original image
                     * @return OriginalImageUrl Original image
                     * 
                     */
                    std::string GetOriginalImageUrl() const;

                    /**
                     * 设置Original image
                     * @param _originalImageUrl Original image
                     * 
                     */
                    void SetOriginalImageUrl(const std::string& _originalImageUrl);

                    /**
                     * 判断参数 OriginalImageUrl 是否已赋值
                     * @return OriginalImageUrl 是否已赋值
                     * 
                     */
                    bool OriginalImageUrlHasBeenSet() const;

                    /**
                     * 获取Long image (mobile phone)
                     * @return PortraitImageUrl Long image (mobile phone)
                     * 
                     */
                    std::string GetPortraitImageUrl() const;

                    /**
                     * 设置Long image (mobile phone)
                     * @param _portraitImageUrl Long image (mobile phone)
                     * 
                     */
                    void SetPortraitImageUrl(const std::string& _portraitImageUrl);

                    /**
                     * 判断参数 PortraitImageUrl 是否已赋值
                     * @return PortraitImageUrl 是否已赋值
                     * 
                     */
                    bool PortraitImageUrlHasBeenSet() const;

                    /**
                     * 获取Theme color
                     * @return ThemeColor Theme color
                     * 
                     */
                    std::string GetThemeColor() const;

                    /**
                     * 设置Theme color
                     * @param _themeColor Theme color
                     * 
                     */
                    void SetThemeColor(const std::string& _themeColor);

                    /**
                     * 判断参数 ThemeColor 是否已赋值
                     * @return ThemeColor 是否已赋值
                     * 
                     */
                    bool ThemeColorHasBeenSet() const;

                private:

                    /**
                     * Brightness level
                     */
                    uint64_t m_brightness;
                    bool m_brightnessHasBeenSet;

                    /**
                     * Landscape image (pc)
                     */
                    std::string m_landscapeImageUrl;
                    bool m_landscapeImageUrlHasBeenSet;

                    /**
                     * Original image
                     */
                    std::string m_originalImageUrl;
                    bool m_originalImageUrlHasBeenSet;

                    /**
                     * Long image (mobile phone)
                     */
                    std::string m_portraitImageUrl;
                    bool m_portraitImageUrlHasBeenSet;

                    /**
                     * Theme color
                     */
                    std::string m_themeColor;
                    bool m_themeColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_BACKGROUNDIMAGE_H_
