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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/PersonExDescriptionInfo.h>
#include <tencentcloud/iai/v20200303/model/Encryption.h>


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
                     * 获取<p>ID of the personnel database to be added, which is the GroupId in the API for creating a personnel database.</p>
                     * @return GroupId <p>ID of the personnel database to be added, which is the GroupId in the API for creating a personnel database.</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>ID of the personnel database to be added, which is the GroupId in the API for creating a personnel database.</p>
                     * @param _groupId <p>ID of the personnel database to be added, which is the GroupId in the API for creating a personnel database.</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Person name. [1, 60] characters, modifiable, repeatable.</p>
                     * @return PersonName <p>Person name. [1, 60] characters, modifiable, repeatable.</p>
                     * 
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置<p>Person name. [1, 60] characters, modifiable, repeatable.</p>
                     * @param _personName <p>Person name. [1, 60] characters, modifiable, repeatable.</p>
                     * 
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     * 
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取<p>Person ID.</p><ul><li>Cannot be modified or repeated under a single Tencent Cloud account.</li><li>Supports English letters, digits, -%@#&amp;_, length limited to 64B.</li></ul>
                     * @return PersonId <p>Person ID.</p><ul><li>Cannot be modified or repeated under a single Tencent Cloud account.</li><li>Supports English letters, digits, -%@#&amp;_, length limited to 64B.</li></ul>
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置<p>Person ID.</p><ul><li>Cannot be modified or repeated under a single Tencent Cloud account.</li><li>Supports English letters, digits, -%@#&amp;_, length limited to 64B.</li></ul>
                     * @param _personId <p>Person ID.</p><ul><li>Cannot be modified or repeated under a single Tencent Cloud account.</li><li>Supports English letters, digits, -%@#&amp;_, length limited to 64B.</li></ul>
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
                     * 获取<p>Gender.</p><ul><li>Value range: 0 represents empty, 1 represents man, 2 represents woman.</li></ul>
                     * @return Gender <p>Gender.</p><ul><li>Value range: 0 represents empty, 1 represents man, 2 represents woman.</li></ul>
                     * 
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置<p>Gender.</p><ul><li>Value range: 0 represents empty, 1 represents man, 2 represents woman.</li></ul>
                     * @param _gender <p>Gender.</p><ul><li>Value range: 0 represents empty, 1 represents man, 2 represents woman.</li></ul>
                     * 
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取<p>Person description field content, key-value. [0, 60] characters, modifiable, repeatable.</p>
                     * @return PersonExDescriptionInfos <p>Person description field content, key-value. [0, 60] characters, modifiable, repeatable.</p>
                     * 
                     */
                    std::vector<PersonExDescriptionInfo> GetPersonExDescriptionInfos() const;

                    /**
                     * 设置<p>Person description field content, key-value. [0, 60] characters, modifiable, repeatable.</p>
                     * @param _personExDescriptionInfos <p>Person description field content, key-value. [0, 60] characters, modifiable, repeatable.</p>
                     * 
                     */
                    void SetPersonExDescriptionInfos(const std::vector<PersonExDescriptionInfo>& _personExDescriptionInfos);

                    /**
                     * 判断参数 PersonExDescriptionInfos 是否已赋值
                     * @return PersonExDescriptionInfos 是否已赋值
                     * 
                     */
                    bool PersonExDescriptionInfosHasBeenSet() const;

                    /**
                     * 获取<p>base64 image data.</p><ul><li>base64-encoded data must not exceed 5 MB.</li><li>For jpg images, the long edge must not exceed 4000 pixels. For other formats, the long edge must not exceed 2000 pixels. The short edge of images in all formats must be at least 64 pixels.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * @return Image <p>base64 image data.</p><ul><li>base64-encoded data must not exceed 5 MB.</li><li>For jpg images, the long edge must not exceed 4000 pixels. For other formats, the long edge must not exceed 2000 pixels. The short edge of images in all formats must be at least 64 pixels.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>base64 image data.</p><ul><li>base64-encoded data must not exceed 5 MB.</li><li>For jpg images, the long edge must not exceed 4000 pixels. For other formats, the long edge must not exceed 2000 pixels. The short edge of images in all formats must be at least 64 pixels.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * @param _image <p>base64 image data.</p><ul><li>base64-encoded data must not exceed 5 MB.</li><li>For jpg images, the long edge must not exceed 4000 pixels. For other formats, the long edge must not exceed 2000 pixels. The short edge of images in all formats must be at least 64 pixels.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
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
                     * 获取<p>Image Url.</p><ul><li>The corresponding Image size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel of images in all formats must not be less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * @return Url <p>Image Url.</p><ul><li>The corresponding Image size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel of images in all formats must not be less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Image Url.</p><ul><li>The corresponding Image size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel of images in all formats must not be less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * @param _url <p>Image Url.</p><ul><li>The corresponding Image size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel of images in all formats must not be less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
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
                     * 获取<p>This parameter is used to control whether the human face contained in the image specified by Image or Url is determined to be a suspected duplicate person already existing in the person library. </p><ul><li>If determined to be the same person already in the person library, no new person will be created, and the personnel information of the suspected duplicate person will be returned. </li><li>If not, the person will be created. </li><li>Value range:<br>0: No judgment is performed, and the person will be stored regardless of whether there is a suspected duplicate person in the library;<br>1: Low duplicate person judgment requirement (1% false recognition rate);<br>2: Normal duplicate person judgment requirement (0.1% false recognition rate);<br>3: High duplicate person judgment requirement (0.01% false recognition rate);<br>4: Very high duplicate person judgment requirement (0.001% false recognition rate). </li><li>Default value: 0. </li><li>Note: The higher the requirement, the lower the probability of suspected duplicate persons. The false recognition rates for different requirements are for reference only and can be adjusted according to the actual situation.</li></ul>
                     * @return UniquePersonControl <p>This parameter is used to control whether the human face contained in the image specified by Image or Url is determined to be a suspected duplicate person already existing in the person library. </p><ul><li>If determined to be the same person already in the person library, no new person will be created, and the personnel information of the suspected duplicate person will be returned. </li><li>If not, the person will be created. </li><li>Value range:<br>0: No judgment is performed, and the person will be stored regardless of whether there is a suspected duplicate person in the library;<br>1: Low duplicate person judgment requirement (1% false recognition rate);<br>2: Normal duplicate person judgment requirement (0.1% false recognition rate);<br>3: High duplicate person judgment requirement (0.01% false recognition rate);<br>4: Very high duplicate person judgment requirement (0.001% false recognition rate). </li><li>Default value: 0. </li><li>Note: The higher the requirement, the lower the probability of suspected duplicate persons. The false recognition rates for different requirements are for reference only and can be adjusted according to the actual situation.</li></ul>
                     * 
                     */
                    uint64_t GetUniquePersonControl() const;

                    /**
                     * 设置<p>This parameter is used to control whether the human face contained in the image specified by Image or Url is determined to be a suspected duplicate person already existing in the person library. </p><ul><li>If determined to be the same person already in the person library, no new person will be created, and the personnel information of the suspected duplicate person will be returned. </li><li>If not, the person will be created. </li><li>Value range:<br>0: No judgment is performed, and the person will be stored regardless of whether there is a suspected duplicate person in the library;<br>1: Low duplicate person judgment requirement (1% false recognition rate);<br>2: Normal duplicate person judgment requirement (0.1% false recognition rate);<br>3: High duplicate person judgment requirement (0.01% false recognition rate);<br>4: Very high duplicate person judgment requirement (0.001% false recognition rate). </li><li>Default value: 0. </li><li>Note: The higher the requirement, the lower the probability of suspected duplicate persons. The false recognition rates for different requirements are for reference only and can be adjusted according to the actual situation.</li></ul>
                     * @param _uniquePersonControl <p>This parameter is used to control whether the human face contained in the image specified by Image or Url is determined to be a suspected duplicate person already existing in the person library. </p><ul><li>If determined to be the same person already in the person library, no new person will be created, and the personnel information of the suspected duplicate person will be returned. </li><li>If not, the person will be created. </li><li>Value range:<br>0: No judgment is performed, and the person will be stored regardless of whether there is a suspected duplicate person in the library;<br>1: Low duplicate person judgment requirement (1% false recognition rate);<br>2: Normal duplicate person judgment requirement (0.1% false recognition rate);<br>3: High duplicate person judgment requirement (0.01% false recognition rate);<br>4: Very high duplicate person judgment requirement (0.001% false recognition rate). </li><li>Default value: 0. </li><li>Note: The higher the requirement, the lower the probability of suspected duplicate persons. The false recognition rates for different requirements are for reference only and can be adjusted according to the actual situation.</li></ul>
                     * 
                     */
                    void SetUniquePersonControl(const uint64_t& _uniquePersonControl);

                    /**
                     * 判断参数 UniquePersonControl 是否已赋值
                     * @return UniquePersonControl 是否已赋值
                     * 
                     */
                    bool UniquePersonControlHasBeenSet() const;

                    /**
                     * 获取<p>Image quality control. </p><ul><li>Value range: <br>0: no control; <br>1: low quality requirement, where the image is very blurry, or at least one or more of the eyes, nose, or mouth are occluded; <br>2: general quality requirement, where the image is bright, dark, blurry or generally blurry, with at least three of the following: eyebrow occlusion, cheek occlusion, or chin occlusion; <br>3: high quality requirement, where the image is bright, dark, generally blurry, with one or two of the following: eyebrow occlusion, cheek occlusion, or chin occlusion; <br>4: very high quality requirement, where each dimension is optimal or at most one dimension has a minor problem; </li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
                     * @return QualityControl <p>Image quality control. </p><ul><li>Value range: <br>0: no control; <br>1: low quality requirement, where the image is very blurry, or at least one or more of the eyes, nose, or mouth are occluded; <br>2: general quality requirement, where the image is bright, dark, blurry or generally blurry, with at least three of the following: eyebrow occlusion, cheek occlusion, or chin occlusion; <br>3: high quality requirement, where the image is bright, dark, generally blurry, with one or two of the following: eyebrow occlusion, cheek occlusion, or chin occlusion; <br>4: very high quality requirement, where each dimension is optimal or at most one dimension has a minor problem; </li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
                     * 
                     */
                    uint64_t GetQualityControl() const;

                    /**
                     * 设置<p>Image quality control. </p><ul><li>Value range: <br>0: no control; <br>1: low quality requirement, where the image is very blurry, or at least one or more of the eyes, nose, or mouth are occluded; <br>2: general quality requirement, where the image is bright, dark, blurry or generally blurry, with at least three of the following: eyebrow occlusion, cheek occlusion, or chin occlusion; <br>3: high quality requirement, where the image is bright, dark, generally blurry, with one or two of the following: eyebrow occlusion, cheek occlusion, or chin occlusion; <br>4: very high quality requirement, where each dimension is optimal or at most one dimension has a minor problem; </li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
                     * @param _qualityControl <p>Image quality control. </p><ul><li>Value range: <br>0: no control; <br>1: low quality requirement, where the image is very blurry, or at least one or more of the eyes, nose, or mouth are occluded; <br>2: general quality requirement, where the image is bright, dark, blurry or generally blurry, with at least three of the following: eyebrow occlusion, cheek occlusion, or chin occlusion; <br>3: high quality requirement, where the image is bright, dark, generally blurry, with one or two of the following: eyebrow occlusion, cheek occlusion, or chin occlusion; <br>4: very high quality requirement, where each dimension is optimal or at most one dimension has a minor problem; </li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
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
                     * 获取<p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 for disabled, 1 for enabled.</li><li>Default value: 0.</li><li>This parameter is used to correctly detect and recognize human faces in an image when the faces are rotated and the image has no exif information. If image rotation recognition support is not enabled in this case, the faces cannot be detected or recognized.</li><li>If you confirm that the image contains exif information or that the human faces in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
                     * @return NeedRotateDetection <p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 for disabled, 1 for enabled.</li><li>Default value: 0.</li><li>This parameter is used to correctly detect and recognize human faces in an image when the faces are rotated and the image has no exif information. If image rotation recognition support is not enabled in this case, the faces cannot be detected or recognized.</li><li>If you confirm that the image contains exif information or that the human faces in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
                     * 
                     */
                    uint64_t GetNeedRotateDetection() const;

                    /**
                     * 设置<p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 for disabled, 1 for enabled.</li><li>Default value: 0.</li><li>This parameter is used to correctly detect and recognize human faces in an image when the faces are rotated and the image has no exif information. If image rotation recognition support is not enabled in this case, the faces cannot be detected or recognized.</li><li>If you confirm that the image contains exif information or that the human faces in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
                     * @param _needRotateDetection <p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 for disabled, 1 for enabled.</li><li>Default value: 0.</li><li>This parameter is used to correctly detect and recognize human faces in an image when the faces are rotated and the image has no exif information. If image rotation recognition support is not enabled in this case, the faces cannot be detected or recognized.</li><li>If you confirm that the image contains exif information or that the human faces in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
                     * 
                     */
                    void SetNeedRotateDetection(const uint64_t& _needRotateDetection);

                    /**
                     * 判断参数 NeedRotateDetection 是否已赋值
                     * @return NeedRotateDetection 是否已赋值
                     * 
                     */
                    bool NeedRotateDetectionHasBeenSet() const;

                    /**
                     * 获取<p>Whether to encrypt the entire request body. Supported encryption algorithm: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
                     * @return Encryption <p>Whether to encrypt the entire request body. Supported encryption algorithm: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>Whether to encrypt the entire request body. Supported encryption algorithm: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
                     * @param _encryption <p>Whether to encrypt the entire request body. Supported encryption algorithm: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取<p>Encrypted ciphertext. The data format before encryption is as follows: {&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}.</p>
                     * @return EncryptedBody <p>Encrypted ciphertext. The data format before encryption is as follows: {&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}.</p>
                     * 
                     */
                    std::string GetEncryptedBody() const;

                    /**
                     * 设置<p>Encrypted ciphertext. The data format before encryption is as follows: {&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}.</p>
                     * @param _encryptedBody <p>Encrypted ciphertext. The data format before encryption is as follows: {&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}.</p>
                     * 
                     */
                    void SetEncryptedBody(const std::string& _encryptedBody);

                    /**
                     * 判断参数 EncryptedBody 是否已赋值
                     * @return EncryptedBody 是否已赋值
                     * 
                     */
                    bool EncryptedBodyHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the personnel database to be added, which is the GroupId in the API for creating a personnel database.</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>Person name. [1, 60] characters, modifiable, repeatable.</p>
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * <p>Person ID.</p><ul><li>Cannot be modified or repeated under a single Tencent Cloud account.</li><li>Supports English letters, digits, -%@#&amp;_, length limited to 64B.</li></ul>
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * <p>Gender.</p><ul><li>Value range: 0 represents empty, 1 represents man, 2 represents woman.</li></ul>
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>Person description field content, key-value. [0, 60] characters, modifiable, repeatable.</p>
                     */
                    std::vector<PersonExDescriptionInfo> m_personExDescriptionInfos;
                    bool m_personExDescriptionInfosHasBeenSet;

                    /**
                     * <p>base64 image data.</p><ul><li>base64-encoded data must not exceed 5 MB.</li><li>For jpg images, the long edge must not exceed 4000 pixels. For other formats, the long edge must not exceed 2000 pixels. The short edge of images in all formats must be at least 64 pixels.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>Image Url.</p><ul><li>The corresponding Image size after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000. The short side pixel of images in all formats must not be less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>This parameter is used to control whether the human face contained in the image specified by Image or Url is determined to be a suspected duplicate person already existing in the person library. </p><ul><li>If determined to be the same person already in the person library, no new person will be created, and the personnel information of the suspected duplicate person will be returned. </li><li>If not, the person will be created. </li><li>Value range:<br>0: No judgment is performed, and the person will be stored regardless of whether there is a suspected duplicate person in the library;<br>1: Low duplicate person judgment requirement (1% false recognition rate);<br>2: Normal duplicate person judgment requirement (0.1% false recognition rate);<br>3: High duplicate person judgment requirement (0.01% false recognition rate);<br>4: Very high duplicate person judgment requirement (0.001% false recognition rate). </li><li>Default value: 0. </li><li>Note: The higher the requirement, the lower the probability of suspected duplicate persons. The false recognition rates for different requirements are for reference only and can be adjusted according to the actual situation.</li></ul>
                     */
                    uint64_t m_uniquePersonControl;
                    bool m_uniquePersonControlHasBeenSet;

                    /**
                     * <p>Image quality control. </p><ul><li>Value range: <br>0: no control; <br>1: low quality requirement, where the image is very blurry, or at least one or more of the eyes, nose, or mouth are occluded; <br>2: general quality requirement, where the image is bright, dark, blurry or generally blurry, with at least three of the following: eyebrow occlusion, cheek occlusion, or chin occlusion; <br>3: high quality requirement, where the image is bright, dark, generally blurry, with one or two of the following: eyebrow occlusion, cheek occlusion, or chin occlusion; <br>4: very high quality requirement, where each dimension is optimal or at most one dimension has a minor problem; </li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
                     */
                    uint64_t m_qualityControl;
                    bool m_qualityControlHasBeenSet;

                    /**
                     * <p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 for disabled, 1 for enabled.</li><li>Default value: 0.</li><li>This parameter is used to correctly detect and recognize human faces in an image when the faces are rotated and the image has no exif information. If image rotation recognition support is not enabled in this case, the faces cannot be detected or recognized.</li><li>If you confirm that the image contains exif information or that the human faces in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
                     */
                    uint64_t m_needRotateDetection;
                    bool m_needRotateDetectionHasBeenSet;

                    /**
                     * <p>Whether to encrypt the entire request body. Supported encryption algorithm: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>Encrypted ciphertext. The data format before encryption is as follows: {&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}.</p>
                     */
                    std::string m_encryptedBody;
                    bool m_encryptedBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONREQUEST_H_
