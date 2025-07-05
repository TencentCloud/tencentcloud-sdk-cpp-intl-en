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
                     * 获取A image base64 data.
 - The size after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- If the picture contains multiple faces, only the face with the highest confidence is selected. - Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     * @return ImageA A image base64 data.
 - The size after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- If the picture contains multiple faces, only the face with the highest confidence is selected. - Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     * 
                     */
                    std::string GetImageA() const;

                    /**
                     * 设置A image base64 data.
 - The size after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- If the picture contains multiple faces, only the face with the highest confidence is selected. - Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     * @param _imageA A image base64 data.
 - The size after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- If the picture contains multiple faces, only the face with the highest confidence is selected. - Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
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
                     * 获取B image base64 data.
 - The size after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- If the picture contains multiple faces, only the face with the highest confidence is selected. - Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     * @return ImageB B image base64 data.
 - The size after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- If the picture contains multiple faces, only the face with the highest confidence is selected. - Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     * 
                     */
                    std::string GetImageB() const;

                    /**
                     * 设置B image base64 data.
 - The size after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- If the picture contains multiple faces, only the face with the highest confidence is selected. - Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     * @param _imageB B image base64 data.
 - The size after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- If the picture contains multiple faces, only the face with the highest confidence is selected. - Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
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
                     * 获取A URL for the image. 
- The size of the corresponding image after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- A The URL and Image of the picture must be provided. If both are provided, only the Url will be used. 
- Images stored in Tencent Cloud's Url can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. 
- The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent. 
- If the picture contains multiple faces, only the face with the largest face area is selected. 
- Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     * @return UrlA A URL for the image. 
- The size of the corresponding image after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- A The URL and Image of the picture must be provided. If both are provided, only the Url will be used. 
- Images stored in Tencent Cloud's Url can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. 
- The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent. 
- If the picture contains multiple faces, only the face with the largest face area is selected. 
- Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     * 
                     */
                    std::string GetUrlA() const;

                    /**
                     * 设置A URL for the image. 
- The size of the corresponding image after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- A The URL and Image of the picture must be provided. If both are provided, only the Url will be used. 
- Images stored in Tencent Cloud's Url can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. 
- The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent. 
- If the picture contains multiple faces, only the face with the largest face area is selected. 
- Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     * @param _urlA A URL for the image. 
- The size of the corresponding image after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- A The URL and Image of the picture must be provided. If both are provided, only the Url will be used. 
- Images stored in Tencent Cloud's Url can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. 
- The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent. 
- If the picture contains multiple faces, only the face with the largest face area is selected. 
- Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
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
                     * 获取B The URL of the image. 
- The size of the corresponding image after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- B The URL and Image of the picture must be provided. If both are provided, only the Url will be used. 
- Images stored in Tencent Cloud's Url can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. 
- The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent. 
- If the picture contains multiple faces, only the face with the largest face area is selected. 
- Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     * @return UrlB B The URL of the image. 
- The size of the corresponding image after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- B The URL and Image of the picture must be provided. If both are provided, only the Url will be used. 
- Images stored in Tencent Cloud's Url can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. 
- The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent. 
- If the picture contains multiple faces, only the face with the largest face area is selected. 
- Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     * 
                     */
                    std::string GetUrlB() const;

                    /**
                     * 设置B The URL of the image. 
- The size of the corresponding image after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- B The URL and Image of the picture must be provided. If both are provided, only the Url will be used. 
- Images stored in Tencent Cloud's Url can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. 
- The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent. 
- If the picture contains multiple faces, only the face with the largest face area is selected. 
- Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     * @param _urlB B The URL of the image. 
- The size of the corresponding image after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- B The URL and Image of the picture must be provided. If both are provided, only the Url will be used. 
- Images stored in Tencent Cloud's Url can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. 
- The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent. 
- If the picture contains multiple faces, only the face with the largest face area is selected. 
- Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
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
                     * 获取Image quality control. 
- Value range: 0: No control; 1: Lower quality requirements, the image is very blurry, and the eyes, nose, and mouth cover at least one or more of them; 2: General quality requirements, the image is bright, Dark, blurry or generally blurred, eyebrows covered, cheeks covered, chin covered, at least three of them; 3: High quality requirements, the image may be brighter, darker, generally blurry, eyebrows blocked, cheeks blocked, chin blocked, one or two of them; 4: Very high quality requirements, all dimensions are the best or the most , there is a slight problem in one dimension; default is 0. 
- If the image quality does not meet the requirements, the returned result will prompt that the image quality test does not meet the requirements.
                     * @return QualityControl Image quality control. 
- Value range: 0: No control; 1: Lower quality requirements, the image is very blurry, and the eyes, nose, and mouth cover at least one or more of them; 2: General quality requirements, the image is bright, Dark, blurry or generally blurred, eyebrows covered, cheeks covered, chin covered, at least three of them; 3: High quality requirements, the image may be brighter, darker, generally blurry, eyebrows blocked, cheeks blocked, chin blocked, one or two of them; 4: Very high quality requirements, all dimensions are the best or the most , there is a slight problem in one dimension; default is 0. 
- If the image quality does not meet the requirements, the returned result will prompt that the image quality test does not meet the requirements.
                     * 
                     */
                    uint64_t GetQualityControl() const;

                    /**
                     * 设置Image quality control. 
- Value range: 0: No control; 1: Lower quality requirements, the image is very blurry, and the eyes, nose, and mouth cover at least one or more of them; 2: General quality requirements, the image is bright, Dark, blurry or generally blurred, eyebrows covered, cheeks covered, chin covered, at least three of them; 3: High quality requirements, the image may be brighter, darker, generally blurry, eyebrows blocked, cheeks blocked, chin blocked, one or two of them; 4: Very high quality requirements, all dimensions are the best or the most , there is a slight problem in one dimension; default is 0. 
- If the image quality does not meet the requirements, the returned result will prompt that the image quality test does not meet the requirements.
                     * @param _qualityControl Image quality control. 
- Value range: 0: No control; 1: Lower quality requirements, the image is very blurry, and the eyes, nose, and mouth cover at least one or more of them; 2: General quality requirements, the image is bright, Dark, blurry or generally blurred, eyebrows covered, cheeks covered, chin covered, at least three of them; 3: High quality requirements, the image may be brighter, darker, generally blurry, eyebrows blocked, cheeks blocked, chin blocked, one or two of them; 4: Very high quality requirements, all dimensions are the best or the most , there is a slight problem in one dimension; default is 0. 
- If the image quality does not meet the requirements, the returned result will prompt that the image quality test does not meet the requirements.
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
                     * A image base64 data.
 - The size after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- If the picture contains multiple faces, only the face with the highest confidence is selected. - Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     */
                    std::string m_imageA;
                    bool m_imageAHasBeenSet;

                    /**
                     * B image base64 data.
 - The size after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- If the picture contains multiple faces, only the face with the highest confidence is selected. - Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     */
                    std::string m_imageB;
                    bool m_imageBHasBeenSet;

                    /**
                     * A URL for the image. 
- The size of the corresponding image after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- A The URL and Image of the picture must be provided. If both are provided, only the Url will be used. 
- Images stored in Tencent Cloud's Url can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. 
- The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent. 
- If the picture contains multiple faces, only the face with the largest face area is selected. 
- Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     */
                    std::string m_urlA;
                    bool m_urlAHasBeenSet;

                    /**
                     * B The URL of the image. 
- The size of the corresponding image after base64 encoding cannot exceed 5M. 
- The long side pixels of jpg format cannot exceed 4000, and the long side pixels of pictures in other formats cannot exceed 2000. The short side of images in all formats must be no less than 64 pixels. 
- B The URL and Image of the picture must be provided. If both are provided, only the Url will be used. 
- Images stored in Tencent Cloud's Url can ensure higher download speed and stability. It is recommended that images be stored in Tencent Cloud. 
- The URL speed and stability of non-Tencent cloud storage may be affected to a certain extent. 
- If the picture contains multiple faces, only the face with the largest face area is selected. 
- Supports PNG, JPG, JPEG, BMP, but does not support GIF images.
                     */
                    std::string m_urlB;
                    bool m_urlBHasBeenSet;

                    /**
                     * Image quality control. 
- Value range: 0: No control; 1: Lower quality requirements, the image is very blurry, and the eyes, nose, and mouth cover at least one or more of them; 2: General quality requirements, the image is bright, Dark, blurry or generally blurred, eyebrows covered, cheeks covered, chin covered, at least three of them; 3: High quality requirements, the image may be brighter, darker, generally blurry, eyebrows blocked, cheeks blocked, chin blocked, one or two of them; 4: Very high quality requirements, all dimensions are the best or the most , there is a slight problem in one dimension; default is 0. 
- If the image quality does not meet the requirements, the returned result will prompt that the image quality test does not meet the requirements.
                     */
                    uint64_t m_qualityControl;
                    bool m_qualityControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DETECTFACESIMILARITYREQUEST_H_
