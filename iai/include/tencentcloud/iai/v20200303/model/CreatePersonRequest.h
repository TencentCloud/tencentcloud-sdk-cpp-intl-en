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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/PersonExDescriptionInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * CreatePerson request structure.
                */
                class CreatePersonRequest : public AbstractModel
                {
                public:
                    CreatePersonRequest();
                    ~CreatePersonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the group to add to.
                     * @return GroupId ID of the group to add to.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置ID of the group to add to.
                     * @param GroupId ID of the group to add to.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Person name, which can contain 1–60 characters and is modifiable and repeatable.
                     * @return PersonName Person name, which can contain 1–60 characters and is modifiable and repeatable.
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置Person name, which can contain 1–60 characters and is modifiable and repeatable.
                     * @param PersonName Person name, which can contain 1–60 characters and is modifiable and repeatable.
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取Person ID, which is unmodifiable, must be unique under a Tencent Cloud account, and can contain letters, digits, and special symbols (-%@#&_) of up to 64B.
                     * @return PersonId Person ID, which is unmodifiable, must be unique under a Tencent Cloud account, and can contain letters, digits, and special symbols (-%@#&_) of up to 64B.
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置Person ID, which is unmodifiable, must be unique under a Tencent Cloud account, and can contain letters, digits, and special symbols (-%@#&_) of up to 64B.
                     * @param PersonId Person ID, which is unmodifiable, must be unique under a Tencent Cloud account, and can contain letters, digits, and special symbols (-%@#&_) of up to 64B.
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取0: empty; 1: male; 2: female.
                     * @return Gender 0: empty; 1: male; 2: female.
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置0: empty; 1: male; 2: female.
                     * @param Gender 0: empty; 1: male; 2: female.
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取Content of person description field, which is a `key-value` pair, can contain 0–60 characters, and is modifiable and repeatable.
                     * @return PersonExDescriptionInfos Content of person description field, which is a `key-value` pair, can contain 0–60 characters, and is modifiable and repeatable.
                     */
                    std::vector<PersonExDescriptionInfo> GetPersonExDescriptionInfos() const;

                    /**
                     * 设置Content of person description field, which is a `key-value` pair, can contain 0–60 characters, and is modifiable and repeatable.
                     * @param PersonExDescriptionInfos Content of person description field, which is a `key-value` pair, can contain 0–60 characters, and is modifiable and repeatable.
                     */
                    void SetPersonExDescriptionInfos(const std::vector<PersonExDescriptionInfo>& _personExDescriptionInfos);

                    /**
                     * 判断参数 PersonExDescriptionInfos 是否已赋值
                     * @return PersonExDescriptionInfos 是否已赋值
                     */
                    bool PersonExDescriptionInfosHasBeenSet() const;

                    /**
                     * 获取Base64-encoded image data, which cannot exceed 5 MB.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     * @return Image Base64-encoded image data, which cannot exceed 5 MB.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     */
                    std::string GetImage() const;

                    /**
                     * 设置Base64-encoded image data, which cannot exceed 5 MB.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     * @param Image Base64-encoded image data, which cannot exceed 5 MB.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.  
You are recommended to store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     * @return Url Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.  
You are recommended to store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.  
You are recommended to store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     * @param Url Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.  
You are recommended to store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取This parameter is used to control the judgment whether the face contained in the image in `Image` or `Url` corresponds to an existing person in the group. 
If it is judged that a duplicate person exists in the group, no new person will be created, and information of the suspected duplicate person will be returned. 
Otherwise, the new person will be created. 
0: do not judge, i.e., the person will be created no matter whether a duplicate person exists in the group. 
1: low duplicate person judgment requirement (1% FAR); 
2: average duplicate person judgment requirement (0.1% FAR); 
3: high duplicate person judgment requirement (0.01% FAR); 
4: very high duplicate person judgment requirement (0.001% FAR). 
Default value: 0.  
Note: the higher the requirement, the lower the probability of duplicate person. The FARs corresponding to different requirements are for reference only and can be adjusted as needed.
                     * @return UniquePersonControl This parameter is used to control the judgment whether the face contained in the image in `Image` or `Url` corresponds to an existing person in the group. 
If it is judged that a duplicate person exists in the group, no new person will be created, and information of the suspected duplicate person will be returned. 
Otherwise, the new person will be created. 
0: do not judge, i.e., the person will be created no matter whether a duplicate person exists in the group. 
1: low duplicate person judgment requirement (1% FAR); 
2: average duplicate person judgment requirement (0.1% FAR); 
3: high duplicate person judgment requirement (0.01% FAR); 
4: very high duplicate person judgment requirement (0.001% FAR). 
Default value: 0.  
Note: the higher the requirement, the lower the probability of duplicate person. The FARs corresponding to different requirements are for reference only and can be adjusted as needed.
                     */
                    uint64_t GetUniquePersonControl() const;

                    /**
                     * 设置This parameter is used to control the judgment whether the face contained in the image in `Image` or `Url` corresponds to an existing person in the group. 
If it is judged that a duplicate person exists in the group, no new person will be created, and information of the suspected duplicate person will be returned. 
Otherwise, the new person will be created. 
0: do not judge, i.e., the person will be created no matter whether a duplicate person exists in the group. 
1: low duplicate person judgment requirement (1% FAR); 
2: average duplicate person judgment requirement (0.1% FAR); 
3: high duplicate person judgment requirement (0.01% FAR); 
4: very high duplicate person judgment requirement (0.001% FAR). 
Default value: 0.  
Note: the higher the requirement, the lower the probability of duplicate person. The FARs corresponding to different requirements are for reference only and can be adjusted as needed.
                     * @param UniquePersonControl This parameter is used to control the judgment whether the face contained in the image in `Image` or `Url` corresponds to an existing person in the group. 
If it is judged that a duplicate person exists in the group, no new person will be created, and information of the suspected duplicate person will be returned. 
Otherwise, the new person will be created. 
0: do not judge, i.e., the person will be created no matter whether a duplicate person exists in the group. 
1: low duplicate person judgment requirement (1% FAR); 
2: average duplicate person judgment requirement (0.1% FAR); 
3: high duplicate person judgment requirement (0.01% FAR); 
4: very high duplicate person judgment requirement (0.001% FAR). 
Default value: 0.  
Note: the higher the requirement, the lower the probability of duplicate person. The FARs corresponding to different requirements are for reference only and can be adjusted as needed.
                     */
                    void SetUniquePersonControl(const uint64_t& _uniquePersonControl);

                    /**
                     * 判断参数 UniquePersonControl 是否已赋值
                     * @return UniquePersonControl 是否已赋值
                     */
                    bool UniquePersonControlHasBeenSet() const;

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
                     * ID of the group to add to.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Person name, which can contain 1–60 characters and is modifiable and repeatable.
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * Person ID, which is unmodifiable, must be unique under a Tencent Cloud account, and can contain letters, digits, and special symbols (-%@#&_) of up to 64B.
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 0: empty; 1: male; 2: female.
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * Content of person description field, which is a `key-value` pair, can contain 0–60 characters, and is modifiable and repeatable.
                     */
                    std::vector<PersonExDescriptionInfo> m_personExDescriptionInfos;
                    bool m_personExDescriptionInfosHasBeenSet;

                    /**
                     * Base64-encoded image data, which cannot exceed 5 MB.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * Image URL. The image cannot exceed 5 MB in size after being Base64-encoded.
Either `Url` or `Image` must be provided; if both are provided, only `Url` will be used.  
You are recommended to store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. 
The download speed and stability of non-Tencent Cloud URLs may be low.
.png, .jpg, .jpeg, and .bmp images are supported, while .gif images are not.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * This parameter is used to control the judgment whether the face contained in the image in `Image` or `Url` corresponds to an existing person in the group. 
If it is judged that a duplicate person exists in the group, no new person will be created, and information of the suspected duplicate person will be returned. 
Otherwise, the new person will be created. 
0: do not judge, i.e., the person will be created no matter whether a duplicate person exists in the group. 
1: low duplicate person judgment requirement (1% FAR); 
2: average duplicate person judgment requirement (0.1% FAR); 
3: high duplicate person judgment requirement (0.01% FAR); 
4: very high duplicate person judgment requirement (0.001% FAR). 
Default value: 0.  
Note: the higher the requirement, the lower the probability of duplicate person. The FARs corresponding to different requirements are for reference only and can be adjusted as needed.
                     */
                    uint64_t m_uniquePersonControl;
                    bool m_uniquePersonControlHasBeenSet;

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

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONREQUEST_H_
