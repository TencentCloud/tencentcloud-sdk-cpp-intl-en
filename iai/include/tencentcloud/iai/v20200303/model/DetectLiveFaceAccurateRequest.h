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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_DETECTLIVEFACEACCURATEREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_DETECTLIVEFACEACCURATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * DetectLiveFaceAccurate request structure.
                */
                class DetectLiveFaceAccurateRequest : public AbstractModel
                {
                public:
                    DetectLiveFaceAccurateRequest();
                    ~DetectLiveFaceAccurateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the base64 code of the image.
-base64-Encoded size cannot exceed 5M.
-The long side pixel of a jpg image must not exceed 4000. the long side pixel of another format image cannot exceed 2000. 
-Specifies the image aspect ratio should be close to 3:4. mobile phone shooting proportion is best.
-Specifies the human face dimension is greater than 100X100 pixels.
-Supported image formats include PNG, JPG, JPEG, and BMP. GIF is not supported.
                     * @return Image Specifies the base64 code of the image.
-base64-Encoded size cannot exceed 5M.
-The long side pixel of a jpg image must not exceed 4000. the long side pixel of another format image cannot exceed 2000. 
-Specifies the image aspect ratio should be close to 3:4. mobile phone shooting proportion is best.
-Specifies the human face dimension is greater than 100X100 pixels.
-Supported image formats include PNG, JPG, JPEG, and BMP. GIF is not supported.
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置Specifies the base64 code of the image.
-base64-Encoded size cannot exceed 5M.
-The long side pixel of a jpg image must not exceed 4000. the long side pixel of another format image cannot exceed 2000. 
-Specifies the image aspect ratio should be close to 3:4. mobile phone shooting proportion is best.
-Specifies the human face dimension is greater than 100X100 pixels.
-Supported image formats include PNG, JPG, JPEG, and BMP. GIF is not supported.
                     * @param _image Specifies the base64 code of the image.
-base64-Encoded size cannot exceed 5M.
-The long side pixel of a jpg image must not exceed 4000. the long side pixel of another format image cannot exceed 2000. 
-Specifies the image aspect ratio should be close to 3:4. mobile phone shooting proportion is best.
-Specifies the human face dimension is greater than 100X100 pixels.
-Supported image formats include PNG, JPG, JPEG, and BMP. GIF is not supported.
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取Specifies the Url of the image.
-Specifies the maximum size of the corresponding image after base64 encoding is 5M.
-The long side pixel of a jpg image must not exceed 4000. the long side pixel of another format image must not exceed 2000.
-Url or Image must be provided. if both are provided, only use Url. 
-Specifies the image aspect ratio should be close to 3:4. mobile phone shooting proportion is best.
-Specifies the human face dimension is greater than 100X100 pixels.
-Image storage Url on tencent cloud guarantees higher download speed and stability. it is recommended to store images on tencent cloud. non-tencent cloud storage urls may be impacted in speed and stability.
-Supported image formats include PNG, JPG, JPEG, and BMP. GIF is not supported.
                     * @return Url Specifies the Url of the image.
-Specifies the maximum size of the corresponding image after base64 encoding is 5M.
-The long side pixel of a jpg image must not exceed 4000. the long side pixel of another format image must not exceed 2000.
-Url or Image must be provided. if both are provided, only use Url. 
-Specifies the image aspect ratio should be close to 3:4. mobile phone shooting proportion is best.
-Specifies the human face dimension is greater than 100X100 pixels.
-Image storage Url on tencent cloud guarantees higher download speed and stability. it is recommended to store images on tencent cloud. non-tencent cloud storage urls may be impacted in speed and stability.
-Supported image formats include PNG, JPG, JPEG, and BMP. GIF is not supported.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Specifies the Url of the image.
-Specifies the maximum size of the corresponding image after base64 encoding is 5M.
-The long side pixel of a jpg image must not exceed 4000. the long side pixel of another format image must not exceed 2000.
-Url or Image must be provided. if both are provided, only use Url. 
-Specifies the image aspect ratio should be close to 3:4. mobile phone shooting proportion is best.
-Specifies the human face dimension is greater than 100X100 pixels.
-Image storage Url on tencent cloud guarantees higher download speed and stability. it is recommended to store images on tencent cloud. non-tencent cloud storage urls may be impacted in speed and stability.
-Supported image formats include PNG, JPG, JPEG, and BMP. GIF is not supported.
                     * @param _url Specifies the Url of the image.
-Specifies the maximum size of the corresponding image after base64 encoding is 5M.
-The long side pixel of a jpg image must not exceed 4000. the long side pixel of another format image must not exceed 2000.
-Url or Image must be provided. if both are provided, only use Url. 
-Specifies the image aspect ratio should be close to 3:4. mobile phone shooting proportion is best.
-Specifies the human face dimension is greater than 100X100 pixels.
-Image storage Url on tencent cloud guarantees higher download speed and stability. it is recommended to store images on tencent cloud. non-tencent cloud storage urls may be impacted in speed and stability.
-Supported image formats include PNG, JPG, JPEG, and BMP. GIF is not supported.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Algorithm model version used for face recognition. Valid value: `3.0`.
                     * @return FaceModelVersion Algorithm model version used for face recognition. Valid value: `3.0`.
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 设置Algorithm model version used for face recognition. Valid value: `3.0`.
                     * @param _faceModelVersion Algorithm model version used for face recognition. Valid value: `3.0`.
                     * 
                     */
                    void SetFaceModelVersion(const std::string& _faceModelVersion);

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * Specifies the base64 code of the image.
-base64-Encoded size cannot exceed 5M.
-The long side pixel of a jpg image must not exceed 4000. the long side pixel of another format image cannot exceed 2000. 
-Specifies the image aspect ratio should be close to 3:4. mobile phone shooting proportion is best.
-Specifies the human face dimension is greater than 100X100 pixels.
-Supported image formats include PNG, JPG, JPEG, and BMP. GIF is not supported.
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * Specifies the Url of the image.
-Specifies the maximum size of the corresponding image after base64 encoding is 5M.
-The long side pixel of a jpg image must not exceed 4000. the long side pixel of another format image must not exceed 2000.
-Url or Image must be provided. if both are provided, only use Url. 
-Specifies the image aspect ratio should be close to 3:4. mobile phone shooting proportion is best.
-Specifies the human face dimension is greater than 100X100 pixels.
-Image storage Url on tencent cloud guarantees higher download speed and stability. it is recommended to store images on tencent cloud. non-tencent cloud storage urls may be impacted in speed and stability.
-Supported image formats include PNG, JPG, JPEG, and BMP. GIF is not supported.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Algorithm model version used for face recognition. Valid value: `3.0`.
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DETECTLIVEFACEACCURATEREQUEST_H_
