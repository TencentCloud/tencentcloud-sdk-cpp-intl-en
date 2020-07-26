/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_CREATEFACEREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_CREATEFACEREQUEST_H_

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
                * CreateFace request structure.
                */
                class CreateFaceRequest : public AbstractModel
                {
                public:
                    CreateFaceRequest();
                    ~CreateFaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Person ID.
                     * @return PersonId Person ID.
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置Person ID.
                     * @param PersonId Person ID.
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取Base64-encoded image data, which cannot exceed 5 MB.
There can be up to 5 faces in one image.
If there are multiple faces in the image, only the face with the largest size will be selected.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     * @return Images Base64-encoded image data, which cannot exceed 5 MB.
There can be up to 5 faces in one image.
If there are multiple faces in the image, only the face with the largest size will be selected.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置Base64-encoded image data, which cannot exceed 5 MB.
There can be up to 5 faces in one image.
If there are multiple faces in the image, only the face with the largest size will be selected.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     * @param Images Base64-encoded image data, which cannot exceed 5 MB.
There can be up to 5 faces in one image.
If there are multiple faces in the image, only the face with the largest size will be selected.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.  
You are recommended to store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
There can be up to 5 faces in one image.
If there are multiple faces in the image, only the face with the largest size will be selected.
                     * @return Urls Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.  
You are recommended to store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
There can be up to 5 faces in one image.
If there are multiple faces in the image, only the face with the largest size will be selected.
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.  
You are recommended to store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
There can be up to 5 faces in one image.
If there are multiple faces in the image, only the face with the largest size will be selected.
                     * @param Urls Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.  
You are recommended to store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
There can be up to 5 faces in one image.
If there are multiple faces in the image, only the face with the largest size will be selected.
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取Only faces whose similarity to an existing face of the person is above the value of `FaceMatchThreshold` can be added successfully. 
Default value: 60. Value range: [0,100].
                     * @return FaceMatchThreshold Only faces whose similarity to an existing face of the person is above the value of `FaceMatchThreshold` can be added successfully. 
Default value: 60. Value range: [0,100].
                     */
                    double GetFaceMatchThreshold() const;

                    /**
                     * 设置Only faces whose similarity to an existing face of the person is above the value of `FaceMatchThreshold` can be added successfully. 
Default value: 60. Value range: [0,100].
                     * @param FaceMatchThreshold Only faces whose similarity to an existing face of the person is above the value of `FaceMatchThreshold` can be added successfully. 
Default value: 60. Value range: [0,100].
                     */
                    void SetFaceMatchThreshold(const double& _faceMatchThreshold);

                    /**
                     * 判断参数 FaceMatchThreshold 是否已赋值
                     * @return FaceMatchThreshold 是否已赋值
                     */
                    bool FaceMatchThresholdHasBeenSet() const;

                    /**
                     * 获取Image quality control. 
0: no control. 
1: low quality requirement. The image has one or more of the following problems: extreme blurriness, covered eyes, covered nose, and covered mouth. 
2: average quality requirement. The image has at least three of following problems: extreme brightness, extreme dimness, blurriness or average blurriness, covered eyebrows, covered cheeks, and covered chin. 
3: high quality requirement. The image has one to two of following problems: extreme brightness, extreme dimness, average blurriness, covered eyebrows, covered cheeks, and covered chin. 
4: very high quality requirement. The image is optimal in all dimensions or only has a slight problem in one dimension. 
Default value: 0. 
If the image quality does not meet the requirement, the returned result will prompt that the detected image quality is unsatisfactory.
                     * @return QualityControl Image quality control. 
0: no control. 
1: low quality requirement. The image has one or more of the following problems: extreme blurriness, covered eyes, covered nose, and covered mouth. 
2: average quality requirement. The image has at least three of following problems: extreme brightness, extreme dimness, blurriness or average blurriness, covered eyebrows, covered cheeks, and covered chin. 
3: high quality requirement. The image has one to two of following problems: extreme brightness, extreme dimness, average blurriness, covered eyebrows, covered cheeks, and covered chin. 
4: very high quality requirement. The image is optimal in all dimensions or only has a slight problem in one dimension. 
Default value: 0. 
If the image quality does not meet the requirement, the returned result will prompt that the detected image quality is unsatisfactory.
                     */
                    uint64_t GetQualityControl() const;

                    /**
                     * 设置Image quality control. 
0: no control. 
1: low quality requirement. The image has one or more of the following problems: extreme blurriness, covered eyes, covered nose, and covered mouth. 
2: average quality requirement. The image has at least three of following problems: extreme brightness, extreme dimness, blurriness or average blurriness, covered eyebrows, covered cheeks, and covered chin. 
3: high quality requirement. The image has one to two of following problems: extreme brightness, extreme dimness, average blurriness, covered eyebrows, covered cheeks, and covered chin. 
4: very high quality requirement. The image is optimal in all dimensions or only has a slight problem in one dimension. 
Default value: 0. 
If the image quality does not meet the requirement, the returned result will prompt that the detected image quality is unsatisfactory.
                     * @param QualityControl Image quality control. 
0: no control. 
1: low quality requirement. The image has one or more of the following problems: extreme blurriness, covered eyes, covered nose, and covered mouth. 
2: average quality requirement. The image has at least three of following problems: extreme brightness, extreme dimness, blurriness or average blurriness, covered eyebrows, covered cheeks, and covered chin. 
3: high quality requirement. The image has one to two of following problems: extreme brightness, extreme dimness, average blurriness, covered eyebrows, covered cheeks, and covered chin. 
4: very high quality requirement. The image is optimal in all dimensions or only has a slight problem in one dimension. 
Default value: 0. 
If the image quality does not meet the requirement, the returned result will prompt that the detected image quality is unsatisfactory.
                     */
                    void SetQualityControl(const uint64_t& _qualityControl);

                    /**
                     * 判断参数 QualityControl 是否已赋值
                     * @return QualityControl 是否已赋值
                     */
                    bool QualityControlHasBeenSet() const;

                    /**
                     * 获取Whether to enable the support for rotated image recognition. 0: no; 1: yes. Default value: 0. When the face in the image is rotated and the image has no EXIF information, if this parameter is not enabled, the face in the image cannot be correctly detected and recognized. If you are sure that the input image contains EXIF information or the face in the image will not be rotated, do not enable this parameter, as the overall time consumption may increase by hundreds of milliseconds after it is enabled.
                     * @return NeedRotateDetection Whether to enable the support for rotated image recognition. 0: no; 1: yes. Default value: 0. When the face in the image is rotated and the image has no EXIF information, if this parameter is not enabled, the face in the image cannot be correctly detected and recognized. If you are sure that the input image contains EXIF information or the face in the image will not be rotated, do not enable this parameter, as the overall time consumption may increase by hundreds of milliseconds after it is enabled.
                     */
                    uint64_t GetNeedRotateDetection() const;

                    /**
                     * 设置Whether to enable the support for rotated image recognition. 0: no; 1: yes. Default value: 0. When the face in the image is rotated and the image has no EXIF information, if this parameter is not enabled, the face in the image cannot be correctly detected and recognized. If you are sure that the input image contains EXIF information or the face in the image will not be rotated, do not enable this parameter, as the overall time consumption may increase by hundreds of milliseconds after it is enabled.
                     * @param NeedRotateDetection Whether to enable the support for rotated image recognition. 0: no; 1: yes. Default value: 0. When the face in the image is rotated and the image has no EXIF information, if this parameter is not enabled, the face in the image cannot be correctly detected and recognized. If you are sure that the input image contains EXIF information or the face in the image will not be rotated, do not enable this parameter, as the overall time consumption may increase by hundreds of milliseconds after it is enabled.
                     */
                    void SetNeedRotateDetection(const uint64_t& _needRotateDetection);

                    /**
                     * 判断参数 NeedRotateDetection 是否已赋值
                     * @return NeedRotateDetection 是否已赋值
                     */
                    bool NeedRotateDetectionHasBeenSet() const;

                private:

                    /**
                     * Person ID.
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * Base64-encoded image data, which cannot exceed 5 MB.
There can be up to 5 faces in one image.
If there are multiple faces in the image, only the face with the largest size will be selected.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.  
You are recommended to store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
There can be up to 5 faces in one image.
If there are multiple faces in the image, only the face with the largest size will be selected.
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * Only faces whose similarity to an existing face of the person is above the value of `FaceMatchThreshold` can be added successfully. 
Default value: 60. Value range: [0,100].
                     */
                    double m_faceMatchThreshold;
                    bool m_faceMatchThresholdHasBeenSet;

                    /**
                     * Image quality control. 
0: no control. 
1: low quality requirement. The image has one or more of the following problems: extreme blurriness, covered eyes, covered nose, and covered mouth. 
2: average quality requirement. The image has at least three of following problems: extreme brightness, extreme dimness, blurriness or average blurriness, covered eyebrows, covered cheeks, and covered chin. 
3: high quality requirement. The image has one to two of following problems: extreme brightness, extreme dimness, average blurriness, covered eyebrows, covered cheeks, and covered chin. 
4: very high quality requirement. The image is optimal in all dimensions or only has a slight problem in one dimension. 
Default value: 0. 
If the image quality does not meet the requirement, the returned result will prompt that the detected image quality is unsatisfactory.
                     */
                    uint64_t m_qualityControl;
                    bool m_qualityControlHasBeenSet;

                    /**
                     * Whether to enable the support for rotated image recognition. 0: no; 1: yes. Default value: 0. When the face in the image is rotated and the image has no EXIF information, if this parameter is not enabled, the face in the image cannot be correctly detected and recognized. If you are sure that the input image contains EXIF information or the face in the image will not be rotated, do not enable this parameter, as the overall time consumption may increase by hundreds of milliseconds after it is enabled.
                     */
                    uint64_t m_needRotateDetection;
                    bool m_needRotateDetectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CREATEFACEREQUEST_H_
