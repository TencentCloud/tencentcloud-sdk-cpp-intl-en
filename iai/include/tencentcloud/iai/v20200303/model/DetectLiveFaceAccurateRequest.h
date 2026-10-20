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
                     * 获取<p>base64 data of the image.</p><ul><li>The size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000.</li><li>The aspect ratio of the image should be close to 3:4. The ratio from mobile phone shooting is best.</li><li>The human face size must be greater than 100X100 pixels.</li><li>Format support: PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
                     * @return Image <p>base64 data of the image.</p><ul><li>The size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000.</li><li>The aspect ratio of the image should be close to 3:4. The ratio from mobile phone shooting is best.</li><li>The human face size must be greater than 100X100 pixels.</li><li>Format support: PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>base64 data of the image.</p><ul><li>The size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000.</li><li>The aspect ratio of the image should be close to 3:4. The ratio from mobile phone shooting is best.</li><li>The human face size must be greater than 100X100 pixels.</li><li>Format support: PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
                     * @param _image <p>base64 data of the image.</p><ul><li>The size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000.</li><li>The aspect ratio of the image should be close to 3:4. The ratio from mobile phone shooting is best.</li><li>The human face size must be greater than 100X100 pixels.</li><li>Format support: PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
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
                     * 获取<p>The Url of the Image.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000.</li><li>Either Url or Image must be provided. If both are provided, only use Url.</li><li>The aspect ratio of the Image should be close to 3:4, which is the best ratio for mobile phone shooting.</li><li>The human face size must be greater than 100X100 pixels.</li><li>An Image stored in Tencent Cloud via Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. The speed and stability of URLs not stored in Tencent Cloud may be affected.</li><li>Supported Image formats include PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
                     * @return Url <p>The Url of the Image.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000.</li><li>Either Url or Image must be provided. If both are provided, only use Url.</li><li>The aspect ratio of the Image should be close to 3:4, which is the best ratio for mobile phone shooting.</li><li>The human face size must be greater than 100X100 pixels.</li><li>An Image stored in Tencent Cloud via Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. The speed and stability of URLs not stored in Tencent Cloud may be affected.</li><li>Supported Image formats include PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>The Url of the Image.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000.</li><li>Either Url or Image must be provided. If both are provided, only use Url.</li><li>The aspect ratio of the Image should be close to 3:4, which is the best ratio for mobile phone shooting.</li><li>The human face size must be greater than 100X100 pixels.</li><li>An Image stored in Tencent Cloud via Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. The speed and stability of URLs not stored in Tencent Cloud may be affected.</li><li>Supported Image formats include PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
                     * @param _url <p>The Url of the Image.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000.</li><li>Either Url or Image must be provided. If both are provided, only use Url.</li><li>The aspect ratio of the Image should be close to 3:4, which is the best ratio for mobile phone shooting.</li><li>The human face size must be greater than 100X100 pixels.</li><li>An Image stored in Tencent Cloud via Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. The speed and stability of URLs not stored in Tencent Cloud may be affected.</li><li>Supported Image formats include PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
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
                     * 获取<p>Algorithm model version used by the face recognition service. Currently, the input parameter supports "3.0".</p>
                     * @return FaceModelVersion <p>Algorithm model version used by the face recognition service. Currently, the input parameter supports "3.0".</p>
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 设置<p>Algorithm model version used by the face recognition service. Currently, the input parameter supports "3.0".</p>
                     * @param _faceModelVersion <p>Algorithm model version used by the face recognition service. Currently, the input parameter supports "3.0".</p>
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
                     * <p>base64 data of the image.</p><ul><li>The size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000.</li><li>The aspect ratio of the image should be close to 3:4. The ratio from mobile phone shooting is best.</li><li>The human face size must be greater than 100X100 pixels.</li><li>Format support: PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>The Url of the Image.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000.</li><li>Either Url or Image must be provided. If both are provided, only use Url.</li><li>The aspect ratio of the Image should be close to 3:4, which is the best ratio for mobile phone shooting.</li><li>The human face size must be greater than 100X100 pixels.</li><li>An Image stored in Tencent Cloud via Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. The speed and stability of URLs not stored in Tencent Cloud may be affected.</li><li>Supported Image formats include PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Algorithm model version used by the face recognition service. Currently, the input parameter supports "3.0".</p>
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DETECTLIVEFACEACCURATEREQUEST_H_
