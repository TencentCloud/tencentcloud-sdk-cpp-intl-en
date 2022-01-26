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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHPERSONSREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHPERSONSREQUEST_H_

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
                * SearchPersons request structure.
                */
                class SearchPersonsRequest : public AbstractModel
                {
                public:
                    SearchPersonsRequest();
                    ~SearchPersonsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of groups to be searched in (up to 100). The array element value is the `GroupId` in the `CreateGroup` API.
                     * @return GroupIds List of groups to be searched in (up to 100). The array element value is the `GroupId` in the `CreateGroup` API.
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置List of groups to be searched in (up to 100). The array element value is the `GroupId` in the `CreateGroup` API.
                     * @param GroupIds List of groups to be searched in (up to 100). The array element value is the `GroupId` in the `CreateGroup` API.
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     * @return Image Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     */
                    std::string GetImage() const;

                    /**
                     * 设置Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     * @param Image Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     * @return Url Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     * @param Url Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Maximum number of recognizable faces. Default value: 1 (i.e., detecting only the face with the largest size in the image). Maximum value: 10.
`MaxFaceNum` is used to control the number of faces to be searched for if there are multiple faces in the input image to be recognized.
For example, if the input image in `Image` or `Url` contains multiple faces and `MaxFaceNum` is 5, top 5 faces with the largest size in the image will be recognized.
                     * @return MaxFaceNum Maximum number of recognizable faces. Default value: 1 (i.e., detecting only the face with the largest size in the image). Maximum value: 10.
`MaxFaceNum` is used to control the number of faces to be searched for if there are multiple faces in the input image to be recognized.
For example, if the input image in `Image` or `Url` contains multiple faces and `MaxFaceNum` is 5, top 5 faces with the largest size in the image will be recognized.
                     */
                    uint64_t GetMaxFaceNum() const;

                    /**
                     * 设置Maximum number of recognizable faces. Default value: 1 (i.e., detecting only the face with the largest size in the image). Maximum value: 10.
`MaxFaceNum` is used to control the number of faces to be searched for if there are multiple faces in the input image to be recognized.
For example, if the input image in `Image` or `Url` contains multiple faces and `MaxFaceNum` is 5, top 5 faces with the largest size in the image will be recognized.
                     * @param MaxFaceNum Maximum number of recognizable faces. Default value: 1 (i.e., detecting only the face with the largest size in the image). Maximum value: 10.
`MaxFaceNum` is used to control the number of faces to be searched for if there are multiple faces in the input image to be recognized.
For example, if the input image in `Image` or `Url` contains multiple faces and `MaxFaceNum` is 5, top 5 faces with the largest size in the image will be recognized.
                     */
                    void SetMaxFaceNum(const uint64_t& _maxFaceNum);

                    /**
                     * 判断参数 MaxFaceNum 是否已赋值
                     * @return MaxFaceNum 是否已赋值
                     */
                    bool MaxFaceNumHasBeenSet() const;

                    /**
                     * 获取Minimum height and width of face in px. Default value: 34. A value below 34 will affect the search accuracy. We recommend setting this parameter to 80.
                     * @return MinFaceSize Minimum height and width of face in px. Default value: 34. A value below 34 will affect the search accuracy. We recommend setting this parameter to 80.
                     */
                    uint64_t GetMinFaceSize() const;

                    /**
                     * 设置Minimum height and width of face in px. Default value: 34. A value below 34 will affect the search accuracy. We recommend setting this parameter to 80.
                     * @param MinFaceSize Minimum height and width of face in px. Default value: 34. A value below 34 will affect the search accuracy. We recommend setting this parameter to 80.
                     */
                    void SetMinFaceSize(const uint64_t& _minFaceSize);

                    /**
                     * 判断参数 MinFaceSize 是否已赋值
                     * @return MinFaceSize 是否已赋值
                     */
                    bool MinFaceSizeHasBeenSet() const;

                    /**
                     * 获取Number of the most similar persons returned for one single recognized face image. Default value: 5. Maximum value: 100.
For example, if `MaxFaceNum` is 1 and `MaxPersonNum` is 8, information of the top 8 most similar persons will be returned.
The greater the value, the longer the processing time. We recommend setting a value below 10.
                     * @return MaxPersonNum Number of the most similar persons returned for one single recognized face image. Default value: 5. Maximum value: 100.
For example, if `MaxFaceNum` is 1 and `MaxPersonNum` is 8, information of the top 8 most similar persons will be returned.
The greater the value, the longer the processing time. We recommend setting a value below 10.
                     */
                    uint64_t GetMaxPersonNum() const;

                    /**
                     * 设置Number of the most similar persons returned for one single recognized face image. Default value: 5. Maximum value: 100.
For example, if `MaxFaceNum` is 1 and `MaxPersonNum` is 8, information of the top 8 most similar persons will be returned.
The greater the value, the longer the processing time. We recommend setting a value below 10.
                     * @param MaxPersonNum Number of the most similar persons returned for one single recognized face image. Default value: 5. Maximum value: 100.
For example, if `MaxFaceNum` is 1 and `MaxPersonNum` is 8, information of the top 8 most similar persons will be returned.
The greater the value, the longer the processing time. We recommend setting a value below 10.
                     */
                    void SetMaxPersonNum(const uint64_t& _maxPersonNum);

                    /**
                     * 判断参数 MaxPersonNum 是否已赋值
                     * @return MaxPersonNum 是否已赋值
                     */
                    bool MaxPersonNumHasBeenSet() const;

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
                     * @param QualityControl Image quality control. 
0: no control. 
1: low quality requirement. The image has one or more of the following problems: extreme blurriness, covered eyes, covered nose, and covered mouth. 
2: average quality requirement. The image has at least three of the following problems: excessive brightness, excessive dimness, blurriness or average blurriness, covered eyebrows, covered cheeks, and covered chin. 
3: high-quality requirement. The image has one to two of the following problems: excessive brightness, excessive dimness, average blurriness, covered eyebrows, covered cheeks, and covered chin. 
4: very high-quality requirement. The image is optimal in all dimensions or only has a slight problem in one dimension. 
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
                     * 获取In the output parameter `Score`, the result will be returned only if the result value is greater than or equal to the `FaceMatchThreshold` value. Default value: 0. Value range: [0.0,100.0).
                     * @return FaceMatchThreshold In the output parameter `Score`, the result will be returned only if the result value is greater than or equal to the `FaceMatchThreshold` value. Default value: 0. Value range: [0.0,100.0).
                     */
                    double GetFaceMatchThreshold() const;

                    /**
                     * 设置In the output parameter `Score`, the result will be returned only if the result value is greater than or equal to the `FaceMatchThreshold` value. Default value: 0. Value range: [0.0,100.0).
                     * @param FaceMatchThreshold In the output parameter `Score`, the result will be returned only if the result value is greater than or equal to the `FaceMatchThreshold` value. Default value: 0. Value range: [0.0,100.0).
                     */
                    void SetFaceMatchThreshold(const double& _faceMatchThreshold);

                    /**
                     * 判断参数 FaceMatchThreshold 是否已赋值
                     * @return FaceMatchThreshold 是否已赋值
                     */
                    bool FaceMatchThresholdHasBeenSet() const;

                    /**
                     * 获取Whether to return person details. 0: no; 1: yes. Default value: 0. Other values will be considered as 0 by default.
                     * @return NeedPersonInfo Whether to return person details. 0: no; 1: yes. Default value: 0. Other values will be considered as 0 by default.
                     */
                    int64_t GetNeedPersonInfo() const;

                    /**
                     * 设置Whether to return person details. 0: no; 1: yes. Default value: 0. Other values will be considered as 0 by default.
                     * @param NeedPersonInfo Whether to return person details. 0: no; 1: yes. Default value: 0. Other values will be considered as 0 by default.
                     */
                    void SetNeedPersonInfo(const int64_t& _needPersonInfo);

                    /**
                     * 判断参数 NeedPersonInfo 是否已赋值
                     * @return NeedPersonInfo 是否已赋值
                     */
                    bool NeedPersonInfoHasBeenSet() const;

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
                     * List of groups to be searched in (up to 100). The array element value is the `GroupId` in the `CreateGroup` API.
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * Base64-encoded image data, which cannot exceed 5 MB.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
If there are multiple faces in the image, only the face with the largest size will be selected.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
The long side cannot exceed 4,000 px for images in JPG format or 2,000 px for images in other formats.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.
We recommend storing the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability.
The download speed and stability of non-Tencent Cloud URLs may be low.
PNG, JPG, JPEG, and BMP images are supported, while GIF images are not.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Maximum number of recognizable faces. Default value: 1 (i.e., detecting only the face with the largest size in the image). Maximum value: 10.
`MaxFaceNum` is used to control the number of faces to be searched for if there are multiple faces in the input image to be recognized.
For example, if the input image in `Image` or `Url` contains multiple faces and `MaxFaceNum` is 5, top 5 faces with the largest size in the image will be recognized.
                     */
                    uint64_t m_maxFaceNum;
                    bool m_maxFaceNumHasBeenSet;

                    /**
                     * Minimum height and width of face in px. Default value: 34. A value below 34 will affect the search accuracy. We recommend setting this parameter to 80.
                     */
                    uint64_t m_minFaceSize;
                    bool m_minFaceSizeHasBeenSet;

                    /**
                     * Number of the most similar persons returned for one single recognized face image. Default value: 5. Maximum value: 100.
For example, if `MaxFaceNum` is 1 and `MaxPersonNum` is 8, information of the top 8 most similar persons will be returned.
The greater the value, the longer the processing time. We recommend setting a value below 10.
                     */
                    uint64_t m_maxPersonNum;
                    bool m_maxPersonNumHasBeenSet;

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
                     * In the output parameter `Score`, the result will be returned only if the result value is greater than or equal to the `FaceMatchThreshold` value. Default value: 0. Value range: [0.0,100.0).
                     */
                    double m_faceMatchThreshold;
                    bool m_faceMatchThresholdHasBeenSet;

                    /**
                     * Whether to return person details. 0: no; 1: yes. Default value: 0. Other values will be considered as 0 by default.
                     */
                    int64_t m_needPersonInfo;
                    bool m_needPersonInfoHasBeenSet;

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

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHPERSONSREQUEST_H_
