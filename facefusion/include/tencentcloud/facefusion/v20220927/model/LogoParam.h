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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_LOGOPARAM_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_LOGOPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20220927/model/FaceRect.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
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
                     * 获取Coordinates of the logo image in the fusion result image. The logo image will be stretched according to the coordinates.
                     * @return LogoRect Coordinates of the logo image in the fusion result image. The logo image will be stretched according to the coordinates.
                     * 
                     */
                    FaceRect GetLogoRect() const;

                    /**
                     * 设置Coordinates of the logo image in the fusion result image. The logo image will be stretched according to the coordinates.
                     * @param _logoRect Coordinates of the logo image in the fusion result image. The logo image will be stretched according to the coordinates.
                     * 
                     */
                    void SetLogoRect(const FaceRect& _logoRect);

                    /**
                     * 判断参数 LogoRect 是否已赋值
                     * @return LogoRect 是否已赋值
                     * 
                     */
                    bool LogoRectHasBeenSet() const;

                    /**
                     * 获取Logo image URL
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Supported image format: JPG or PNG
                     * @return LogoUrl Logo image URL
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Supported image format: JPG or PNG
                     * 
                     */
                    std::string GetLogoUrl() const;

                    /**
                     * 设置Logo image URL
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Supported image format: JPG or PNG
                     * @param _logoUrl Logo image URL
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Supported image format: JPG or PNG
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
                     * 获取Logo image Base64 code
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Supported image format: JPG or PNG
                     * @return LogoImage Logo image Base64 code
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Supported image format: JPG or PNG
                     * 
                     */
                    std::string GetLogoImage() const;

                    /**
                     * 设置Logo image Base64 code
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Supported image format: JPG or PNG
                     * @param _logoImage Logo image Base64 code
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Supported image format: JPG or PNG
                     * 
                     */
                    void SetLogoImage(const std::string& _logoImage);

                    /**
                     * 判断参数 LogoImage 是否已赋值
                     * @return LogoImage 是否已赋值
                     * 
                     */
                    bool LogoImageHasBeenSet() const;

                private:

                    /**
                     * Coordinates of the logo image in the fusion result image. The logo image will be stretched according to the coordinates.
                     */
                    FaceRect m_logoRect;
                    bool m_logoRectHasBeenSet;

                    /**
                     * Logo image URL
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Supported image format: JPG or PNG
                     */
                    std::string m_logoUrl;
                    bool m_logoUrlHasBeenSet;

                    /**
                     * Logo image Base64 code
●Either the Base64 code or URL must be provided. If both are provided, URL prevails.
●Supported image format: JPG or PNG
                     */
                    std::string m_logoImage;
                    bool m_logoImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_LOGOPARAM_H_
