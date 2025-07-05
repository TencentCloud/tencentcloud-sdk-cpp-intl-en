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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_LOGOPARAM_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_LOGOPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aiart/v20221229/model/LogoRect.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * Logo parameter
                */
                class LogoParam : public AbstractModel
                {
                public:
                    LogoParam();
                    ~LogoParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Logo URL
                     * @return LogoUrl Logo URL
                     * 
                     */
                    std::string GetLogoUrl() const;

                    /**
                     * 设置Logo URL
                     * @param _logoUrl Logo URL
                     * 
                     */
                    void SetLogoUrl(const std::string& _logoUrl);

                    /**
                     * 判断参数 LogoUrl 是否已赋值
                     * @return LogoUrl 是否已赋值
                     * 
                     */
                    bool LogoUrlHasBeenSet() const;

                    /**
                     * 获取Logo Base64 code. Either the Base64 code or URL must be provided. If both are provided, URL prevails.
                     * @return LogoImage Logo Base64 code. Either the Base64 code or URL must be provided. If both are provided, URL prevails.
                     * 
                     */
                    std::string GetLogoImage() const;

                    /**
                     * 设置Logo Base64 code. Either the Base64 code or URL must be provided. If both are provided, URL prevails.
                     * @param _logoImage Logo Base64 code. Either the Base64 code or URL must be provided. If both are provided, URL prevails.
                     * 
                     */
                    void SetLogoImage(const std::string& _logoImage);

                    /**
                     * 判断参数 LogoImage 是否已赋值
                     * @return LogoImage 是否已赋值
                     * 
                     */
                    bool LogoImageHasBeenSet() const;

                    /**
                     * 获取Coordinates of the logo image in the generated image. The logo image will be stretched according to the coordinates.
                     * @return LogoRect Coordinates of the logo image in the generated image. The logo image will be stretched according to the coordinates.
                     * 
                     */
                    LogoRect GetLogoRect() const;

                    /**
                     * 设置Coordinates of the logo image in the generated image. The logo image will be stretched according to the coordinates.
                     * @param _logoRect Coordinates of the logo image in the generated image. The logo image will be stretched according to the coordinates.
                     * 
                     */
                    void SetLogoRect(const LogoRect& _logoRect);

                    /**
                     * 判断参数 LogoRect 是否已赋值
                     * @return LogoRect 是否已赋值
                     * 
                     */
                    bool LogoRectHasBeenSet() const;

                private:

                    /**
                     * Logo URL
                     */
                    std::string m_logoUrl;
                    bool m_logoUrlHasBeenSet;

                    /**
                     * Logo Base64 code. Either the Base64 code or URL must be provided. If both are provided, URL prevails.
                     */
                    std::string m_logoImage;
                    bool m_logoImageHasBeenSet;

                    /**
                     * Coordinates of the logo image in the generated image. The logo image will be stretched according to the coordinates.
                     */
                    LogoRect m_logoRect;
                    bool m_logoRectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_LOGOPARAM_H_
