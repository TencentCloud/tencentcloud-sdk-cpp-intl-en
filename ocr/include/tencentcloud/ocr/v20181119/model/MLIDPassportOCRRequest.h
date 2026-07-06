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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * MLIDPassportOCR request structure.
                */
                class MLIDPassportOCRRequest : public AbstractModel
                {
                public:
                    MLIDPassportOCRRequest();
                    ~MLIDPassportOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64-encoded image data. The image must be no larger than 7 MB after Base64 encoding. A resolution of at least 500x800 is recommended. Supported image formats: PNG, JPG, JPEG, BMP, and PDF. The document should occupy more than 2/3 of the image area.
                     * @return ImageBase64 Base64-encoded image data. The image must be no larger than 7 MB after Base64 encoding. A resolution of at least 500x800 is recommended. Supported image formats: PNG, JPG, JPEG, BMP, and PDF. The document should occupy more than 2/3 of the image area.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Base64-encoded image data. The image must be no larger than 7 MB after Base64 encoding. A resolution of at least 500x800 is recommended. Supported image formats: PNG, JPG, JPEG, BMP, and PDF. The document should occupy more than 2/3 of the image area.
                     * @param _imageBase64 Base64-encoded image data. The image must be no larger than 7 MB after Base64 encoding. A resolution of at least 500x800 is recommended. Supported image formats: PNG, JPG, JPEG, BMP, and PDF. The document should occupy more than 2/3 of the image area.
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取Whether to return an image. 
Default value: false.
                     * @return RetImage Whether to return an image. 
Default value: false.
                     * 
                     */
                    bool GetRetImage() const;

                    /**
                     * 设置Whether to return an image. 
Default value: false.
                     * @param _retImage Whether to return an image. 
Default value: false.
                     * 
                     */
                    void SetRetImage(const bool& _retImage);

                    /**
                     * 判断参数 RetImage 是否已赋值
                     * @return RetImage 是否已赋值
                     * 
                     */
                    bool RetImageHasBeenSet() const;

                    /**
                     * 获取URL of the image. The downloaded image must be no larger than 7 MB after Base64 encoding. A resolution of at least 500x800 is recommended. Supported image formats: PNG, JPG, JPEG, BMP, and PDF. The document should occupy more than 2/3 of the image area. Image download must complete within 3 seconds. We recommend storing images in Tencent Cloud for higher download speed and stability. The speed and stability of URLs from non-Tencent Cloud storage may be affected. Note: This field is not supported outside the Chinese mainland region.
                     * @return ImageUrl URL of the image. The downloaded image must be no larger than 7 MB after Base64 encoding. A resolution of at least 500x800 is recommended. Supported image formats: PNG, JPG, JPEG, BMP, and PDF. The document should occupy more than 2/3 of the image area. Image download must complete within 3 seconds. We recommend storing images in Tencent Cloud for higher download speed and stability. The speed and stability of URLs from non-Tencent Cloud storage may be affected. Note: This field is not supported outside the Chinese mainland region.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置URL of the image. The downloaded image must be no larger than 7 MB after Base64 encoding. A resolution of at least 500x800 is recommended. Supported image formats: PNG, JPG, JPEG, BMP, and PDF. The document should occupy more than 2/3 of the image area. Image download must complete within 3 seconds. We recommend storing images in Tencent Cloud for higher download speed and stability. The speed and stability of URLs from non-Tencent Cloud storage may be affected. Note: This field is not supported outside the Chinese mainland region.
                     * @param _imageUrl URL of the image. The downloaded image must be no larger than 7 MB after Base64 encoding. A resolution of at least 500x800 is recommended. Supported image formats: PNG, JPG, JPEG, BMP, and PDF. The document should occupy more than 2/3 of the image area. Image download must complete within 3 seconds. We recommend storing images in Tencent Cloud for higher download speed and stability. The speed and stability of URLs from non-Tencent Cloud storage may be affected. Note: This field is not supported outside the Chinese mainland region.
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded image data. The image must be no larger than 7 MB after Base64 encoding. A resolution of at least 500x800 is recommended. Supported image formats: PNG, JPG, JPEG, BMP, and PDF. The document should occupy more than 2/3 of the image area.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * Whether to return an image. 
Default value: false.
                     */
                    bool m_retImage;
                    bool m_retImageHasBeenSet;

                    /**
                     * URL of the image. The downloaded image must be no larger than 7 MB after Base64 encoding. A resolution of at least 500x800 is recommended. Supported image formats: PNG, JPG, JPEG, BMP, and PDF. The document should occupy more than 2/3 of the image area. Image download must complete within 3 seconds. We recommend storing images in Tencent Cloud for higher download speed and stability. The speed and stability of URLs from non-Tencent Cloud storage may be affected. Note: This field is not supported outside the Chinese mainland region.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRREQUEST_H_
