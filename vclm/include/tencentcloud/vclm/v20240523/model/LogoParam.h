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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_LOGOPARAM_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_LOGOPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/LogoRect.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
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
                     * 获取Watermark URL

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogoUrl Watermark URL

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogoUrl() const;

                    /**
                     * 设置Watermark URL

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logoUrl Watermark URL

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Watermark Base64 code is supported. Either the Base64 code or URL must be provided. If both are provided, the URL prevails.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogoImage Watermark Base64 code is supported. Either the Base64 code or URL must be provided. If both are provided, the URL prevails.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogoImage() const;

                    /**
                     * 设置Watermark Base64 code is supported. Either the Base64 code or URL must be provided. If both are provided, the URL prevails.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logoImage Watermark Base64 code is supported. Either the Base64 code or URL must be provided. If both are provided, the URL prevails.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The coordinates of the watermark image in the generated image. The mark image will be expanded according to the coordinates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogoRect The coordinates of the watermark image in the generated image. The mark image will be expanded according to the coordinates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LogoRect GetLogoRect() const;

                    /**
                     * 设置The coordinates of the watermark image in the generated image. The mark image will be expanded according to the coordinates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logoRect The coordinates of the watermark image in the generated image. The mark image will be expanded according to the coordinates.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Watermark URL

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logoUrl;
                    bool m_logoUrlHasBeenSet;

                    /**
                     * Watermark Base64 code is supported. Either the Base64 code or URL must be provided. If both are provided, the URL prevails.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logoImage;
                    bool m_logoImageHasBeenSet;

                    /**
                     * The coordinates of the watermark image in the generated image. The mark image will be expanded according to the coordinates.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LogoRect m_logoRect;
                    bool m_logoRectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_LOGOPARAM_H_
