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
                     * 获取Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in .jpg format or 2,000 px for images in other formats. 
The recommended image aspect ratio is 3:4 (generally, the aspect ratio of images taken by mobile phones).
The face must be greater than 100*100 px in size.
Supported image formats are PNG, JPG, JPEG, and BMP. GIF is currently not supported.
                     * @return Image Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in .jpg format or 2,000 px for images in other formats. 
The recommended image aspect ratio is 3:4 (generally, the aspect ratio of images taken by mobile phones).
The face must be greater than 100*100 px in size.
Supported image formats are PNG, JPG, JPEG, and BMP. GIF is currently not supported.
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in .jpg format or 2,000 px for images in other formats. 
The recommended image aspect ratio is 3:4 (generally, the aspect ratio of images taken by mobile phones).
The face must be greater than 100*100 px in size.
Supported image formats are PNG, JPG, JPEG, and BMP. GIF is currently not supported.
                     * @param _image Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in .jpg format or 2,000 px for images in other formats. 
The recommended image aspect ratio is 3:4 (generally, the aspect ratio of images taken by mobile phones).
The face must be greater than 100*100 px in size.
Supported image formats are PNG, JPG, JPEG, and BMP. GIF is currently not supported.
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
                     * 获取Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
The long side cannot exceed 4,000 px for images in .jpg format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
The recommended image aspect ratio is 3:4 (generally, the aspect ratio of images taken by mobile phones).
The face must be greater than 100*100 px in size.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
Supported image formats are PNG, JPG, JPEG, and BMP. GIF is currently not supported.
                     * @return Url Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
The long side cannot exceed 4,000 px for images in .jpg format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
The recommended image aspect ratio is 3:4 (generally, the aspect ratio of images taken by mobile phones).
The face must be greater than 100*100 px in size.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
Supported image formats are PNG, JPG, JPEG, and BMP. GIF is currently not supported.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
The long side cannot exceed 4,000 px for images in .jpg format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
The recommended image aspect ratio is 3:4 (generally, the aspect ratio of images taken by mobile phones).
The face must be greater than 100*100 px in size.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
Supported image formats are PNG, JPG, JPEG, and BMP. GIF is currently not supported.
                     * @param _url Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
The long side cannot exceed 4,000 px for images in .jpg format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
The recommended image aspect ratio is 3:4 (generally, the aspect ratio of images taken by mobile phones).
The face must be greater than 100*100 px in size.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
Supported image formats are PNG, JPG, JPEG, and BMP. GIF is currently not supported.
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
                     * Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in .jpg format or 2,000 px for images in other formats. 
The recommended image aspect ratio is 3:4 (generally, the aspect ratio of images taken by mobile phones).
The face must be greater than 100*100 px in size.
Supported image formats are PNG, JPG, JPEG, and BMP. GIF is currently not supported.
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
The long side cannot exceed 4,000 px for images in .jpg format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
The recommended image aspect ratio is 3:4 (generally, the aspect ratio of images taken by mobile phones).
The face must be greater than 100*100 px in size.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
Supported image formats are PNG, JPG, JPEG, and BMP. GIF is currently not supported.
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
