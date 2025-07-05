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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYPERSONREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYPERSONREQUEST_H_

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
                * VerifyPerson request structure.
                */
                class VerifyPersonRequest : public AbstractModel
                {
                public:
                    VerifyPersonRequest();
                    ~VerifyPersonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the person to be verified. For more information on `PersonId`, please see the group management APIs.
                     * @return PersonId ID of the person to be verified. For more information on `PersonId`, please see the group management APIs.
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置ID of the person to be verified. For more information on `PersonId`, please see the group management APIs.
                     * @param _personId ID of the person to be verified. For more information on `PersonId`, please see the group management APIs.
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取Base64-encoded data of the image.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     * @return Image Base64-encoded data of the image.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置Base64-encoded data of the image.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     * @param _image Base64-encoded data of the image.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
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
                     * 获取Image URL 
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
 Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     * @return Url Image URL 
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
 Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Image URL 
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
 Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     * @param _url Image URL 
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
 Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
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
                     * 获取Image quality control. 
0: no control. 
1: low quality requirement. The image has one or more of the following problems: extreme blurriness, covered eyes, covered nose, and covered mouth. 
2: average quality requirement. The image has at least three of the following problems: excessive brightness, excessive dimness, blurriness or average blurriness, covered eyebrows, covered cheeks, and covered chin. 
3: high-quality requirement. The image has one to two of the following problems: excessive brightness, excessive dimness, average blurriness, covered eyebrows, covered cheeks, and covered chin. 
4: very high-quality requirement. The image is optimal in all dimensions or only has a slight problem in one dimension. 
Default value: 0. 
If the image quality does not meet the requirement, the returned result will prompt that the detected image quality is unsatisfactory.
                     * @return QualityControl Image quality control. 
0: no control. 
1: low quality requirement. The image has one or more of the following problems: extreme blurriness, covered eyes, covered nose, and covered mouth. 
2: average quality requirement. The image has at least three of the following problems: excessive brightness, excessive dimness, blurriness or average blurriness, covered eyebrows, covered cheeks, and covered chin. 
3: high-quality requirement. The image has one to two of the following problems: excessive brightness, excessive dimness, average blurriness, covered eyebrows, covered cheeks, and covered chin. 
4: very high-quality requirement. The image is optimal in all dimensions or only has a slight problem in one dimension. 
Default value: 0. 
If the image quality does not meet the requirement, the returned result will prompt that the detected image quality is unsatisfactory.
                     * 
                     */
                    uint64_t GetQualityControl() const;

                    /**
                     * 设置Image quality control. 
0: no control. 
1: low quality requirement. The image has one or more of the following problems: extreme blurriness, covered eyes, covered nose, and covered mouth. 
2: average quality requirement. The image has at least three of the following problems: excessive brightness, excessive dimness, blurriness or average blurriness, covered eyebrows, covered cheeks, and covered chin. 
3: high-quality requirement. The image has one to two of the following problems: excessive brightness, excessive dimness, average blurriness, covered eyebrows, covered cheeks, and covered chin. 
4: very high-quality requirement. The image is optimal in all dimensions or only has a slight problem in one dimension. 
Default value: 0. 
If the image quality does not meet the requirement, the returned result will prompt that the detected image quality is unsatisfactory.
                     * @param _qualityControl Image quality control. 
0: no control. 
1: low quality requirement. The image has one or more of the following problems: extreme blurriness, covered eyes, covered nose, and covered mouth. 
2: average quality requirement. The image has at least three of the following problems: excessive brightness, excessive dimness, blurriness or average blurriness, covered eyebrows, covered cheeks, and covered chin. 
3: high-quality requirement. The image has one to two of the following problems: excessive brightness, excessive dimness, average blurriness, covered eyebrows, covered cheeks, and covered chin. 
4: very high-quality requirement. The image is optimal in all dimensions or only has a slight problem in one dimension. 
Default value: 0. 
If the image quality does not meet the requirement, the returned result will prompt that the detected image quality is unsatisfactory.
                     * 
                     */
                    void SetQualityControl(const uint64_t& _qualityControl);

                    /**
                     * 判断参数 QualityControl 是否已赋值
                     * @return QualityControl 是否已赋值
                     * 
                     */
                    bool QualityControlHasBeenSet() const;

                    /**
                     * 获取Whether to enable the support for rotated image recognition. 0: no; 1: yes. Default value: 0. When the face in the image is rotated and the image has no EXIF information, if this parameter is not enabled, the face in the image cannot be correctly detected and recognized. If you are sure that the input image contains EXIF information or the face in the image will not be rotated, do not enable this parameter, as the overall time consumption may increase by hundreds of milliseconds after it is enabled.
                     * @return NeedRotateDetection Whether to enable the support for rotated image recognition. 0: no; 1: yes. Default value: 0. When the face in the image is rotated and the image has no EXIF information, if this parameter is not enabled, the face in the image cannot be correctly detected and recognized. If you are sure that the input image contains EXIF information or the face in the image will not be rotated, do not enable this parameter, as the overall time consumption may increase by hundreds of milliseconds after it is enabled.
                     * 
                     */
                    uint64_t GetNeedRotateDetection() const;

                    /**
                     * 设置Whether to enable the support for rotated image recognition. 0: no; 1: yes. Default value: 0. When the face in the image is rotated and the image has no EXIF information, if this parameter is not enabled, the face in the image cannot be correctly detected and recognized. If you are sure that the input image contains EXIF information or the face in the image will not be rotated, do not enable this parameter, as the overall time consumption may increase by hundreds of milliseconds after it is enabled.
                     * @param _needRotateDetection Whether to enable the support for rotated image recognition. 0: no; 1: yes. Default value: 0. When the face in the image is rotated and the image has no EXIF information, if this parameter is not enabled, the face in the image cannot be correctly detected and recognized. If you are sure that the input image contains EXIF information or the face in the image will not be rotated, do not enable this parameter, as the overall time consumption may increase by hundreds of milliseconds after it is enabled.
                     * 
                     */
                    void SetNeedRotateDetection(const uint64_t& _needRotateDetection);

                    /**
                     * 判断参数 NeedRotateDetection 是否已赋值
                     * @return NeedRotateDetection 是否已赋值
                     * 
                     */
                    bool NeedRotateDetectionHasBeenSet() const;

                private:

                    /**
                     * ID of the person to be verified. For more information on `PersonId`, please see the group management APIs.
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * Base64-encoded data of the image.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * Image URL 
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
 Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used. 
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Image quality control. 
0: no control. 
1: low quality requirement. The image has one or more of the following problems: extreme blurriness, covered eyes, covered nose, and covered mouth. 
2: average quality requirement. The image has at least three of the following problems: excessive brightness, excessive dimness, blurriness or average blurriness, covered eyebrows, covered cheeks, and covered chin. 
3: high-quality requirement. The image has one to two of the following problems: excessive brightness, excessive dimness, average blurriness, covered eyebrows, covered cheeks, and covered chin. 
4: very high-quality requirement. The image is optimal in all dimensions or only has a slight problem in one dimension. 
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

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_VERIFYPERSONREQUEST_H_
