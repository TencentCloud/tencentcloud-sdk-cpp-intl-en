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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACESIMILARITYREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACESIMILARITYREQUEST_H_

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
                * DetectFaceSimilarity request structure.
                */
                class DetectFaceSimilarityRequest : public AbstractModel
                {
                public:
                    DetectFaceSimilarityRequest();
                    ~DetectFaceSimilarityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>A base64-encoded image.</p><ul><li>The size after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000. The short side pixel for all formats must be greater than or equal to 64.</li><li>If the image contains several faces, only the face with the highest confidence degree is selected.</li><li>Supports PNG, jpg, JPEG, and BMP formats. GIF images are not supported.</li></ul>
                     * @return ImageA <p>A base64-encoded image.</p><ul><li>The size after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000. The short side pixel for all formats must be greater than or equal to 64.</li><li>If the image contains several faces, only the face with the highest confidence degree is selected.</li><li>Supports PNG, jpg, JPEG, and BMP formats. GIF images are not supported.</li></ul>
                     * 
                     */
                    std::string GetImageA() const;

                    /**
                     * 设置<p>A base64-encoded image.</p><ul><li>The size after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000. The short side pixel for all formats must be greater than or equal to 64.</li><li>If the image contains several faces, only the face with the highest confidence degree is selected.</li><li>Supports PNG, jpg, JPEG, and BMP formats. GIF images are not supported.</li></ul>
                     * @param _imageA <p>A base64-encoded image.</p><ul><li>The size after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000. The short side pixel for all formats must be greater than or equal to 64.</li><li>If the image contains several faces, only the face with the highest confidence degree is selected.</li><li>Supports PNG, jpg, JPEG, and BMP formats. GIF images are not supported.</li></ul>
                     * 
                     */
                    void SetImageA(const std::string& _imageA);

                    /**
                     * 判断参数 ImageA 是否已赋值
                     * @return ImageA 是否已赋值
                     * 
                     */
                    bool ImageAHasBeenSet() const;

                    /**
                     * 获取<p>base64 data of image B.</p><ul><li>The size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel of images in all formats must not be less than 64.</li><li>If the image contains several faces, only the face with the highest confidence degree is selected.</li><li>Supports PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
                     * @return ImageB <p>base64 data of image B.</p><ul><li>The size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel of images in all formats must not be less than 64.</li><li>If the image contains several faces, only the face with the highest confidence degree is selected.</li><li>Supports PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
                     * 
                     */
                    std::string GetImageB() const;

                    /**
                     * 设置<p>base64 data of image B.</p><ul><li>The size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel of images in all formats must not be less than 64.</li><li>If the image contains several faces, only the face with the highest confidence degree is selected.</li><li>Supports PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
                     * @param _imageB <p>base64 data of image B.</p><ul><li>The size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel of images in all formats must not be less than 64.</li><li>If the image contains several faces, only the face with the highest confidence degree is selected.</li><li>Supports PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
                     * 
                     */
                    void SetImageB(const std::string& _imageB);

                    /**
                     * 判断参数 ImageB 是否已赋值
                     * @return ImageB 是否已赋值
                     * 
                     */
                    bool ImageBHasBeenSet() const;

                    /**
                     * 获取<p>Url of Image A.</p><ul><li>Size of the corresponding Image after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel for all formats must be not less than 64.</li><li>Either the Url or the Image of picture A must be provided. If both are provided, only the Url is used.</li><li>URLs of images stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>Speed and stability of URLs not stored in Tencent Cloud may be impacted.</li><li>If the Image contains several faces, only the human face with the maximum area is selected.</li><li>Supports PNG, jpg, jpg, JPEG, BMP. GIF images are not supported.</li></ul>
                     * @return UrlA <p>Url of Image A.</p><ul><li>Size of the corresponding Image after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel for all formats must be not less than 64.</li><li>Either the Url or the Image of picture A must be provided. If both are provided, only the Url is used.</li><li>URLs of images stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>Speed and stability of URLs not stored in Tencent Cloud may be impacted.</li><li>If the Image contains several faces, only the human face with the maximum area is selected.</li><li>Supports PNG, jpg, jpg, JPEG, BMP. GIF images are not supported.</li></ul>
                     * 
                     */
                    std::string GetUrlA() const;

                    /**
                     * 设置<p>Url of Image A.</p><ul><li>Size of the corresponding Image after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel for all formats must be not less than 64.</li><li>Either the Url or the Image of picture A must be provided. If both are provided, only the Url is used.</li><li>URLs of images stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>Speed and stability of URLs not stored in Tencent Cloud may be impacted.</li><li>If the Image contains several faces, only the human face with the maximum area is selected.</li><li>Supports PNG, jpg, jpg, JPEG, BMP. GIF images are not supported.</li></ul>
                     * @param _urlA <p>Url of Image A.</p><ul><li>Size of the corresponding Image after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel for all formats must be not less than 64.</li><li>Either the Url or the Image of picture A must be provided. If both are provided, only the Url is used.</li><li>URLs of images stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>Speed and stability of URLs not stored in Tencent Cloud may be impacted.</li><li>If the Image contains several faces, only the human face with the maximum area is selected.</li><li>Supports PNG, jpg, jpg, JPEG, BMP. GIF images are not supported.</li></ul>
                     * 
                     */
                    void SetUrlA(const std::string& _urlA);

                    /**
                     * 判断参数 UrlA 是否已赋值
                     * @return UrlA 是否已赋值
                     * 
                     */
                    bool UrlAHasBeenSet() const;

                    /**
                     * 获取<p>Url of Image B.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. For all formats, the short side pixel must be not less than 64.</li><li>Either the Url or the Image of picture B must be provided. If both are provided, only the Url is used.</li><li>URLs of images stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain degree.</li><li>If the Image contains several faces, only the face with the maximum area is selected.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * @return UrlB <p>Url of Image B.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. For all formats, the short side pixel must be not less than 64.</li><li>Either the Url or the Image of picture B must be provided. If both are provided, only the Url is used.</li><li>URLs of images stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain degree.</li><li>If the Image contains several faces, only the face with the maximum area is selected.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * 
                     */
                    std::string GetUrlB() const;

                    /**
                     * 设置<p>Url of Image B.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. For all formats, the short side pixel must be not less than 64.</li><li>Either the Url or the Image of picture B must be provided. If both are provided, only the Url is used.</li><li>URLs of images stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain degree.</li><li>If the Image contains several faces, only the face with the maximum area is selected.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * @param _urlB <p>Url of Image B.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. For all formats, the short side pixel must be not less than 64.</li><li>Either the Url or the Image of picture B must be provided. If both are provided, only the Url is used.</li><li>URLs of images stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain degree.</li><li>If the Image contains several faces, only the face with the maximum area is selected.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * 
                     */
                    void SetUrlB(const std::string& _urlB);

                    /**
                     * 判断参数 UrlB 是否已赋值
                     * @return UrlB 是否已赋值
                     * 
                     */
                    bool UrlBHasBeenSet() const;

                    /**
                     * 获取<p>Image quality control. </p><ul><li><p>Value ranges from 0 to 4:<br>0: No control;<br>1: Low quality requirement. The image has at least one of the following: super blurry, eye occlusion, nose occlusion, or mouth occlusion;<br>2: Normal quality requirement. The image has at least three of the following: too bright, dark, blurry, normal blur, eyebrow obstruction, cheek obstruction, or chin obstruction;<br>3: Relatively high quality requirement. The image has one or two of the following: too bright, dark, normal blur, eyebrow obstruction, cheek obstruction, or chin obstruction;<br>4: High quality requirement. All dimensions are the best or most, with a minor problem in one dimension;<br>Default is 0. </p></li><li><p>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</p></li></ul>
                     * @return QualityControl <p>Image quality control. </p><ul><li><p>Value ranges from 0 to 4:<br>0: No control;<br>1: Low quality requirement. The image has at least one of the following: super blurry, eye occlusion, nose occlusion, or mouth occlusion;<br>2: Normal quality requirement. The image has at least three of the following: too bright, dark, blurry, normal blur, eyebrow obstruction, cheek obstruction, or chin obstruction;<br>3: Relatively high quality requirement. The image has one or two of the following: too bright, dark, normal blur, eyebrow obstruction, cheek obstruction, or chin obstruction;<br>4: High quality requirement. All dimensions are the best or most, with a minor problem in one dimension;<br>Default is 0. </p></li><li><p>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</p></li></ul>
                     * 
                     */
                    uint64_t GetQualityControl() const;

                    /**
                     * 设置<p>Image quality control. </p><ul><li><p>Value ranges from 0 to 4:<br>0: No control;<br>1: Low quality requirement. The image has at least one of the following: super blurry, eye occlusion, nose occlusion, or mouth occlusion;<br>2: Normal quality requirement. The image has at least three of the following: too bright, dark, blurry, normal blur, eyebrow obstruction, cheek obstruction, or chin obstruction;<br>3: Relatively high quality requirement. The image has one or two of the following: too bright, dark, normal blur, eyebrow obstruction, cheek obstruction, or chin obstruction;<br>4: High quality requirement. All dimensions are the best or most, with a minor problem in one dimension;<br>Default is 0. </p></li><li><p>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</p></li></ul>
                     * @param _qualityControl <p>Image quality control. </p><ul><li><p>Value ranges from 0 to 4:<br>0: No control;<br>1: Low quality requirement. The image has at least one of the following: super blurry, eye occlusion, nose occlusion, or mouth occlusion;<br>2: Normal quality requirement. The image has at least three of the following: too bright, dark, blurry, normal blur, eyebrow obstruction, cheek obstruction, or chin obstruction;<br>3: Relatively high quality requirement. The image has one or two of the following: too bright, dark, normal blur, eyebrow obstruction, cheek obstruction, or chin obstruction;<br>4: High quality requirement. All dimensions are the best or most, with a minor problem in one dimension;<br>Default is 0. </p></li><li><p>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</p></li></ul>
                     * 
                     */
                    void SetQualityControl(const uint64_t& _qualityControl);

                    /**
                     * 判断参数 QualityControl 是否已赋值
                     * @return QualityControl 是否已赋值
                     * 
                     */
                    bool QualityControlHasBeenSet() const;

                private:

                    /**
                     * <p>A base64-encoded image.</p><ul><li>The size after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel must not exceed 2000. The short side pixel for all formats must be greater than or equal to 64.</li><li>If the image contains several faces, only the face with the highest confidence degree is selected.</li><li>Supports PNG, jpg, JPEG, and BMP formats. GIF images are not supported.</li></ul>
                     */
                    std::string m_imageA;
                    bool m_imageAHasBeenSet;

                    /**
                     * <p>base64 data of image B.</p><ul><li>The size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel of images in all formats must not be less than 64.</li><li>If the image contains several faces, only the face with the highest confidence degree is selected.</li><li>Supports PNG, jpg, JPEG, and BMP. GIF images are not supported.</li></ul>
                     */
                    std::string m_imageB;
                    bool m_imageBHasBeenSet;

                    /**
                     * <p>Url of Image A.</p><ul><li>Size of the corresponding Image after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel for all formats must be not less than 64.</li><li>Either the Url or the Image of picture A must be provided. If both are provided, only the Url is used.</li><li>URLs of images stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>Speed and stability of URLs not stored in Tencent Cloud may be impacted.</li><li>If the Image contains several faces, only the human face with the maximum area is selected.</li><li>Supports PNG, jpg, jpg, JPEG, BMP. GIF images are not supported.</li></ul>
                     */
                    std::string m_urlA;
                    bool m_urlAHasBeenSet;

                    /**
                     * <p>Url of Image B.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5 MB.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. For all formats, the short side pixel must be not less than 64.</li><li>Either the Url or the Image of picture B must be provided. If both are provided, only the Url is used.</li><li>URLs of images stored in Tencent Cloud guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain degree.</li><li>If the Image contains several faces, only the face with the maximum area is selected.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     */
                    std::string m_urlB;
                    bool m_urlBHasBeenSet;

                    /**
                     * <p>Image quality control. </p><ul><li><p>Value ranges from 0 to 4:<br>0: No control;<br>1: Low quality requirement. The image has at least one of the following: super blurry, eye occlusion, nose occlusion, or mouth occlusion;<br>2: Normal quality requirement. The image has at least three of the following: too bright, dark, blurry, normal blur, eyebrow obstruction, cheek obstruction, or chin obstruction;<br>3: Relatively high quality requirement. The image has one or two of the following: too bright, dark, normal blur, eyebrow obstruction, cheek obstruction, or chin obstruction;<br>4: High quality requirement. All dimensions are the best or most, with a minor problem in one dimension;<br>Default is 0. </p></li><li><p>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</p></li></ul>
                     */
                    uint64_t m_qualityControl;
                    bool m_qualityControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACESIMILARITYREQUEST_H_
