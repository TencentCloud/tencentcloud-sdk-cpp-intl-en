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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHFACESREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHFACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * SearchFaces request structure.
                */
                class SearchFacesRequest : public AbstractModel
                {
                public:
                    SearchFacesRequest();
                    ~SearchFacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>List of person libraries to search, with a maximum of 100.</p><ul><li>The array element value is the GroupId in the person library creation API.</li><li>You cannot search person libraries with different algorithm model versions (FaceModelVersion) at the same time.</li></ul>
                     * @return GroupIds <p>List of person libraries to search, with a maximum of 100.</p><ul><li>The array element value is the GroupId in the person library creation API.</li><li>You cannot search person libraries with different algorithm model versions (FaceModelVersion) at the same time.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置<p>List of person libraries to search, with a maximum of 100.</p><ul><li>The array element value is the GroupId in the person library creation API.</li><li>You cannot search person libraries with different algorithm model versions (FaceModelVersion) at the same time.</li></ul>
                     * @param _groupIds <p>List of person libraries to search, with a maximum of 100.</p><ul><li>The array element value is the GroupId in the person library creation API.</li><li>You cannot search person libraries with different algorithm model versions (FaceModelVersion) at the same time.</li></ul>
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>base64 data of the image.</p><ul><li>base64-encoded data must not exceed 5 MB.</li><li>For jpg images, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000.</li><li>The short side pixel of images in all formats must be at least 64.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * @return Image <p>base64 data of the image.</p><ul><li>base64-encoded data must not exceed 5 MB.</li><li>For jpg images, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000.</li><li>The short side pixel of images in all formats must be at least 64.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>base64 data of the image.</p><ul><li>base64-encoded data must not exceed 5 MB.</li><li>For jpg images, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000.</li><li>The short side pixel of images in all formats must be at least 64.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * @param _image <p>base64 data of the image.</p><ul><li>base64-encoded data must not exceed 5 MB.</li><li>For jpg images, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000.</li><li>The short side pixel of images in all formats must be at least 64.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
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
                     * 获取<p>The Url of the Image.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>The long side pixel of a jpg Image cannot exceed 4000, and that of other formats cannot exceed 2000.</li><li>The short side pixel of images in all formats must be not less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>An Image stored in Tencent Cloud via Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported, while GIF images are not supported.</li></ul>
                     * @return Url <p>The Url of the Image.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>The long side pixel of a jpg Image cannot exceed 4000, and that of other formats cannot exceed 2000.</li><li>The short side pixel of images in all formats must be not less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>An Image stored in Tencent Cloud via Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported, while GIF images are not supported.</li></ul>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>The Url of the Image.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>The long side pixel of a jpg Image cannot exceed 4000, and that of other formats cannot exceed 2000.</li><li>The short side pixel of images in all formats must be not less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>An Image stored in Tencent Cloud via Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported, while GIF images are not supported.</li></ul>
                     * @param _url <p>The Url of the Image.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>The long side pixel of a jpg Image cannot exceed 4000, and that of other formats cannot exceed 2000.</li><li>The short side pixel of images in all formats must be not less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>An Image stored in Tencent Cloud via Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported, while GIF images are not supported.</li></ul>
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
                     * 获取<p>Maximum number of faces to be recognized.</p><ul><li>Default value: 1 (only the face with the maximum area in the image is detected). Maximum value: 10. </li><li>MaxFaceNum is used to set the number of faces to search when the input image to be recognized contains several faces. </li><li>For example, if the image in the input Image or Url contains several faces and MaxFaceNum is set to 5, the 5 faces with the maximum area in the image will be recognized.</li></ul>
                     * @return MaxFaceNum <p>Maximum number of faces to be recognized.</p><ul><li>Default value: 1 (only the face with the maximum area in the image is detected). Maximum value: 10. </li><li>MaxFaceNum is used to set the number of faces to search when the input image to be recognized contains several faces. </li><li>For example, if the image in the input Image or Url contains several faces and MaxFaceNum is set to 5, the 5 faces with the maximum area in the image will be recognized.</li></ul>
                     * 
                     */
                    uint64_t GetMaxFaceNum() const;

                    /**
                     * 设置<p>Maximum number of faces to be recognized.</p><ul><li>Default value: 1 (only the face with the maximum area in the image is detected). Maximum value: 10. </li><li>MaxFaceNum is used to set the number of faces to search when the input image to be recognized contains several faces. </li><li>For example, if the image in the input Image or Url contains several faces and MaxFaceNum is set to 5, the 5 faces with the maximum area in the image will be recognized.</li></ul>
                     * @param _maxFaceNum <p>Maximum number of faces to be recognized.</p><ul><li>Default value: 1 (only the face with the maximum area in the image is detected). Maximum value: 10. </li><li>MaxFaceNum is used to set the number of faces to search when the input image to be recognized contains several faces. </li><li>For example, if the image in the input Image or Url contains several faces and MaxFaceNum is set to 5, the 5 faces with the maximum area in the image will be recognized.</li></ul>
                     * 
                     */
                    void SetMaxFaceNum(const uint64_t& _maxFaceNum);

                    /**
                     * 判断参数 MaxFaceNum 是否已赋值
                     * @return MaxFaceNum 是否已赋值
                     * 
                     */
                    bool MaxFaceNumHasBeenSet() const;

                    /**
                     * 获取<p>Minimum size of the face length and width, unit: pixel.</p><ul><li>Default value: 34.</li><li>Face images smaller than 34 cannot be recognized.</li><li>It is recommended to set it to 80.</li></ul>
                     * @return MinFaceSize <p>Minimum size of the face length and width, unit: pixel.</p><ul><li>Default value: 34.</li><li>Face images smaller than 34 cannot be recognized.</li><li>It is recommended to set it to 80.</li></ul>
                     * 
                     */
                    uint64_t GetMinFaceSize() const;

                    /**
                     * 设置<p>Minimum size of the face length and width, unit: pixel.</p><ul><li>Default value: 34.</li><li>Face images smaller than 34 cannot be recognized.</li><li>It is recommended to set it to 80.</li></ul>
                     * @param _minFaceSize <p>Minimum size of the face length and width, unit: pixel.</p><ul><li>Default value: 34.</li><li>Face images smaller than 34 cannot be recognized.</li><li>It is recommended to set it to 80.</li></ul>
                     * 
                     */
                    void SetMinFaceSize(const uint64_t& _minFaceSize);

                    /**
                     * 判断参数 MinFaceSize 是否已赋值
                     * @return MinFaceSize 是否已赋值
                     * 
                     */
                    bool MinFaceSizeHasBeenSet() const;

                    /**
                     * 获取<p>Number of most similar persons returned for a single recognized human face.</p><ul><li>Default value: 5. Maximum value: 100. </li><li>For example, if MaxFaceNum is 1 and MaxPersonNum is 8, the Top 8 similar personnel information is returned.</li><li>A larger value means a longer time to process.</li><li>It is recommended not to exceed 10.</li></ul>
                     * @return MaxPersonNum <p>Number of most similar persons returned for a single recognized human face.</p><ul><li>Default value: 5. Maximum value: 100. </li><li>For example, if MaxFaceNum is 1 and MaxPersonNum is 8, the Top 8 similar personnel information is returned.</li><li>A larger value means a longer time to process.</li><li>It is recommended not to exceed 10.</li></ul>
                     * 
                     */
                    uint64_t GetMaxPersonNum() const;

                    /**
                     * 设置<p>Number of most similar persons returned for a single recognized human face.</p><ul><li>Default value: 5. Maximum value: 100. </li><li>For example, if MaxFaceNum is 1 and MaxPersonNum is 8, the Top 8 similar personnel information is returned.</li><li>A larger value means a longer time to process.</li><li>It is recommended not to exceed 10.</li></ul>
                     * @param _maxPersonNum <p>Number of most similar persons returned for a single recognized human face.</p><ul><li>Default value: 5. Maximum value: 100. </li><li>For example, if MaxFaceNum is 1 and MaxPersonNum is 8, the Top 8 similar personnel information is returned.</li><li>A larger value means a longer time to process.</li><li>It is recommended not to exceed 10.</li></ul>
                     * 
                     */
                    void SetMaxPersonNum(const uint64_t& _maxPersonNum);

                    /**
                     * 判断参数 MaxPersonNum 是否已赋值
                     * @return MaxPersonNum 是否已赋值
                     * 
                     */
                    bool MaxPersonNumHasBeenSet() const;

                    /**
                     * 获取<p>Whether to return detailed personnel information.</p><ul><li>Value range: 0 to disable, 1 to enable.</li><li>Default value: 0.</li><li>Other values other than 0 and 1 default to 0.</li></ul>
                     * @return NeedPersonInfo <p>Whether to return detailed personnel information.</p><ul><li>Value range: 0 to disable, 1 to enable.</li><li>Default value: 0.</li><li>Other values other than 0 and 1 default to 0.</li></ul>
                     * 
                     */
                    int64_t GetNeedPersonInfo() const;

                    /**
                     * 设置<p>Whether to return detailed personnel information.</p><ul><li>Value range: 0 to disable, 1 to enable.</li><li>Default value: 0.</li><li>Other values other than 0 and 1 default to 0.</li></ul>
                     * @param _needPersonInfo <p>Whether to return detailed personnel information.</p><ul><li>Value range: 0 to disable, 1 to enable.</li><li>Default value: 0.</li><li>Other values other than 0 and 1 default to 0.</li></ul>
                     * 
                     */
                    void SetNeedPersonInfo(const int64_t& _needPersonInfo);

                    /**
                     * 判断参数 NeedPersonInfo 是否已赋值
                     * @return NeedPersonInfo 是否已赋值
                     * 
                     */
                    bool NeedPersonInfoHasBeenSet() const;

                    /**
                     * 获取<p>Image quality control. </p><ul><li>Value range: <br>0: No control. <br>1: Low quality requirement. The image is super blurry, with at least one or more of the following: eye, nose, or mouth occlusion. <br>2: General quality requirement. The image is bright, dark, blurry or generally blurry, with at least three of the following: eyebrow occlusion, cheek occlusion, or chin occlusion. <br>3: High quality requirement. The image is bright, dark, generally blurry, with one or two of the following: eyebrow occlusion, cheek occlusion, or chin occlusion. <br>4: Very high quality requirement. Each dimension is optimal or at most one dimension has a minor problem.</li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
                     * @return QualityControl <p>Image quality control. </p><ul><li>Value range: <br>0: No control. <br>1: Low quality requirement. The image is super blurry, with at least one or more of the following: eye, nose, or mouth occlusion. <br>2: General quality requirement. The image is bright, dark, blurry or generally blurry, with at least three of the following: eyebrow occlusion, cheek occlusion, or chin occlusion. <br>3: High quality requirement. The image is bright, dark, generally blurry, with one or two of the following: eyebrow occlusion, cheek occlusion, or chin occlusion. <br>4: Very high quality requirement. Each dimension is optimal or at most one dimension has a minor problem.</li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
                     * 
                     */
                    uint64_t GetQualityControl() const;

                    /**
                     * 设置<p>Image quality control. </p><ul><li>Value range: <br>0: No control. <br>1: Low quality requirement. The image is super blurry, with at least one or more of the following: eye, nose, or mouth occlusion. <br>2: General quality requirement. The image is bright, dark, blurry or generally blurry, with at least three of the following: eyebrow occlusion, cheek occlusion, or chin occlusion. <br>3: High quality requirement. The image is bright, dark, generally blurry, with one or two of the following: eyebrow occlusion, cheek occlusion, or chin occlusion. <br>4: Very high quality requirement. Each dimension is optimal or at most one dimension has a minor problem.</li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
                     * @param _qualityControl <p>Image quality control. </p><ul><li>Value range: <br>0: No control. <br>1: Low quality requirement. The image is super blurry, with at least one or more of the following: eye, nose, or mouth occlusion. <br>2: General quality requirement. The image is bright, dark, blurry or generally blurry, with at least three of the following: eyebrow occlusion, cheek occlusion, or chin occlusion. <br>3: High quality requirement. The image is bright, dark, generally blurry, with one or two of the following: eyebrow occlusion, cheek occlusion, or chin occlusion. <br>4: Very high quality requirement. Each dimension is optimal or at most one dimension has a minor problem.</li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
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
                     * 获取<p>In the output parameter Score, only results exceeding the FaceMatchThreshold value will be returned. The default is 0.</p>
                     * @return FaceMatchThreshold <p>In the output parameter Score, only results exceeding the FaceMatchThreshold value will be returned. The default is 0.</p>
                     * 
                     */
                    double GetFaceMatchThreshold() const;

                    /**
                     * 设置<p>In the output parameter Score, only results exceeding the FaceMatchThreshold value will be returned. The default is 0.</p>
                     * @param _faceMatchThreshold <p>In the output parameter Score, only results exceeding the FaceMatchThreshold value will be returned. The default is 0.</p>
                     * 
                     */
                    void SetFaceMatchThreshold(const double& _faceMatchThreshold);

                    /**
                     * 判断参数 FaceMatchThreshold 是否已赋值
                     * @return FaceMatchThreshold 是否已赋值
                     * 
                     */
                    bool FaceMatchThresholdHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 for not enabled, 1 for enabled.</li><li>Default value: 0.</li><li>This parameter is used to correctly detect and recognize human faces in the input image when the faces are rotated and the image has no exif information. If image rotation recognition support is not enabled, the faces cannot be detected or recognized correctly.</li><li>If you confirm that the image contains exif information or that the human faces in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
                     * @return NeedRotateDetection <p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 for not enabled, 1 for enabled.</li><li>Default value: 0.</li><li>This parameter is used to correctly detect and recognize human faces in the input image when the faces are rotated and the image has no exif information. If image rotation recognition support is not enabled, the faces cannot be detected or recognized correctly.</li><li>If you confirm that the image contains exif information or that the human faces in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
                     * 
                     */
                    uint64_t GetNeedRotateDetection() const;

                    /**
                     * 设置<p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 for not enabled, 1 for enabled.</li><li>Default value: 0.</li><li>This parameter is used to correctly detect and recognize human faces in the input image when the faces are rotated and the image has no exif information. If image rotation recognition support is not enabled, the faces cannot be detected or recognized correctly.</li><li>If you confirm that the image contains exif information or that the human faces in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
                     * @param _needRotateDetection <p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 for not enabled, 1 for enabled.</li><li>Default value: 0.</li><li>This parameter is used to correctly detect and recognize human faces in the input image when the faces are rotated and the image has no exif information. If image rotation recognition support is not enabled, the faces cannot be detected or recognized correctly.</li><li>If you confirm that the image contains exif information or that the human faces in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
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
                     * 获取<p>Whether to encrypt the entire request body. Supported encryption algorithms: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
                     * @return Encryption <p>Whether to encrypt the entire request body. Supported encryption algorithms: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>Whether to encrypt the entire request body. Supported encryption algorithms: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
                     * @param _encryption <p>Whether to encrypt the entire request body. Supported encryption algorithms: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
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
                     * <p>List of person libraries to search, with a maximum of 100.</p><ul><li>The array element value is the GroupId in the person library creation API.</li><li>You cannot search person libraries with different algorithm model versions (FaceModelVersion) at the same time.</li></ul>
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * <p>base64 data of the image.</p><ul><li>base64-encoded data must not exceed 5 MB.</li><li>For jpg images, the long side pixel cannot exceed 4000. For other formats, the long side pixel cannot exceed 2000.</li><li>The short side pixel of images in all formats must be at least 64.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>The Url of the Image.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>The long side pixel of a jpg Image cannot exceed 4000, and that of other formats cannot exceed 2000.</li><li>The short side pixel of images in all formats must be not less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>An Image stored in Tencent Cloud via Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of URLs not stored in Tencent Cloud may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported, while GIF images are not supported.</li></ul>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Maximum number of faces to be recognized.</p><ul><li>Default value: 1 (only the face with the maximum area in the image is detected). Maximum value: 10. </li><li>MaxFaceNum is used to set the number of faces to search when the input image to be recognized contains several faces. </li><li>For example, if the image in the input Image or Url contains several faces and MaxFaceNum is set to 5, the 5 faces with the maximum area in the image will be recognized.</li></ul>
                     */
                    uint64_t m_maxFaceNum;
                    bool m_maxFaceNumHasBeenSet;

                    /**
                     * <p>Minimum size of the face length and width, unit: pixel.</p><ul><li>Default value: 34.</li><li>Face images smaller than 34 cannot be recognized.</li><li>It is recommended to set it to 80.</li></ul>
                     */
                    uint64_t m_minFaceSize;
                    bool m_minFaceSizeHasBeenSet;

                    /**
                     * <p>Number of most similar persons returned for a single recognized human face.</p><ul><li>Default value: 5. Maximum value: 100. </li><li>For example, if MaxFaceNum is 1 and MaxPersonNum is 8, the Top 8 similar personnel information is returned.</li><li>A larger value means a longer time to process.</li><li>It is recommended not to exceed 10.</li></ul>
                     */
                    uint64_t m_maxPersonNum;
                    bool m_maxPersonNumHasBeenSet;

                    /**
                     * <p>Whether to return detailed personnel information.</p><ul><li>Value range: 0 to disable, 1 to enable.</li><li>Default value: 0.</li><li>Other values other than 0 and 1 default to 0.</li></ul>
                     */
                    int64_t m_needPersonInfo;
                    bool m_needPersonInfoHasBeenSet;

                    /**
                     * <p>Image quality control. </p><ul><li>Value range: <br>0: No control. <br>1: Low quality requirement. The image is super blurry, with at least one or more of the following: eye, nose, or mouth occlusion. <br>2: General quality requirement. The image is bright, dark, blurry or generally blurry, with at least three of the following: eyebrow occlusion, cheek occlusion, or chin occlusion. <br>3: High quality requirement. The image is bright, dark, generally blurry, with one or two of the following: eyebrow occlusion, cheek occlusion, or chin occlusion. <br>4: Very high quality requirement. Each dimension is optimal or at most one dimension has a minor problem.</li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
                     */
                    uint64_t m_qualityControl;
                    bool m_qualityControlHasBeenSet;

                    /**
                     * <p>In the output parameter Score, only results exceeding the FaceMatchThreshold value will be returned. The default is 0.</p>
                     */
                    double m_faceMatchThreshold;
                    bool m_faceMatchThresholdHasBeenSet;

                    /**
                     * <p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 for not enabled, 1 for enabled.</li><li>Default value: 0.</li><li>This parameter is used to correctly detect and recognize human faces in the input image when the faces are rotated and the image has no exif information. If image rotation recognition support is not enabled, the faces cannot be detected or recognized correctly.</li><li>If you confirm that the image contains exif information or that the human faces in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
                     */
                    uint64_t m_needRotateDetection;
                    bool m_needRotateDetectionHasBeenSet;

                    /**
                     * <p>Whether to encrypt the entire request body. Supported encryption algorithms: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
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

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHFACESREQUEST_H_
