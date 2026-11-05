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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_CREATEFACEREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_CREATEFACEREQUEST_H_

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
                * CreateFace request structure.
                */
                class CreateFaceRequest : public AbstractModel
                {
                public:
                    CreateFaceRequest();
                    ~CreateFaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Person ID, which is the PersonId in the person creation API.</p>
                     * @return PersonId <p>Person ID, which is the PersonId in the person creation API.</p>
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置<p>Person ID, which is the PersonId in the person creation API.</p>
                     * @param _personId <p>Person ID, which is the PersonId in the person creation API.</p>
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
                     * 获取<p>base64 data of the image.</p><ul><li>base64 encoded size must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the image long edge must not exceed 2000. The short side pixel of images in all formats must be not less than 64.</li><li>The total number of faces must not exceed 5.</li><li>If the image contains several faces, only the face with the maximum area is selected.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * @return Images <p>base64 data of the image.</p><ul><li>base64 encoded size must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the image long edge must not exceed 2000. The short side pixel of images in all formats must be not less than 64.</li><li>The total number of faces must not exceed 5.</li><li>If the image contains several faces, only the face with the maximum area is selected.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置<p>base64 data of the image.</p><ul><li>base64 encoded size must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the image long edge must not exceed 2000. The short side pixel of images in all formats must be not less than 64.</li><li>The total number of faces must not exceed 5.</li><li>If the image contains several faces, only the face with the maximum area is selected.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * @param _images <p>base64 data of the image.</p><ul><li>base64 encoded size must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the image long edge must not exceed 2000. The short side pixel of images in all formats must be not less than 64.</li><li>The total number of faces must not exceed 5.</li><li>If the image contains several faces, only the face with the maximum area is selected.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取<p>Image Url.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other Image formats, the long side pixel must not exceed 2000. The short side pixel of images in all formats must be not less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>Images stored in Tencent Cloud URLs can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of non-Tencent Cloud Storage URLs may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li><li>The total number of human faces must not exceed 5.</li><li>If the Image contains several faces, only the face with the maximum area is selected.</li></ul>
                     * @return Urls <p>Image Url.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other Image formats, the long side pixel must not exceed 2000. The short side pixel of images in all formats must be not less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>Images stored in Tencent Cloud URLs can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of non-Tencent Cloud Storage URLs may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li><li>The total number of human faces must not exceed 5.</li><li>If the Image contains several faces, only the face with the maximum area is selected.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置<p>Image Url.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other Image formats, the long side pixel must not exceed 2000. The short side pixel of images in all formats must be not less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>Images stored in Tencent Cloud URLs can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of non-Tencent Cloud Storage URLs may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li><li>The total number of human faces must not exceed 5.</li><li>If the Image contains several faces, only the face with the maximum area is selected.</li></ul>
                     * @param _urls <p>Image Url.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other Image formats, the long side pixel must not exceed 2000. The short side pixel of images in all formats must be not less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>Images stored in Tencent Cloud URLs can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of non-Tencent Cloud Storage URLs may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li><li>The total number of human faces must not exceed 5.</li><li>If the Image contains several faces, only the face with the maximum area is selected.</li></ul>
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取<p>Only faces with a similarity to the person's existing faces exceeding the FaceMatchThreshold can be added successfully. </p><ul><li>Default value: 60. </li><li>Value range: [0,100]. </li></ul>
                     * @return FaceMatchThreshold <p>Only faces with a similarity to the person's existing faces exceeding the FaceMatchThreshold can be added successfully. </p><ul><li>Default value: 60. </li><li>Value range: [0,100]. </li></ul>
                     * 
                     */
                    double GetFaceMatchThreshold() const;

                    /**
                     * 设置<p>Only faces with a similarity to the person's existing faces exceeding the FaceMatchThreshold can be added successfully. </p><ul><li>Default value: 60. </li><li>Value range: [0,100]. </li></ul>
                     * @param _faceMatchThreshold <p>Only faces with a similarity to the person's existing faces exceeding the FaceMatchThreshold can be added successfully. </p><ul><li>Default value: 60. </li><li>Value range: [0,100]. </li></ul>
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
                     * 获取<p>Image quality control. </p><ul><li>Value range: <br>0: no control; <br>1: low quality requirement, where the image is super blurry, or at least one or more of the following exist: eye occlusion, nose occlusion, or mouth occlusion; <br>2: normal quality requirement, where the image is bright, dark, blurry or generally blurry, or at least three of the following exist: eyebrow obstruction, cheek obstruction, or chin obstruction; <br>3: high quality requirement, where the image is bright, dark, generally blurry, or one to two of the following exist: eyebrow obstruction, cheek obstruction, or chin obstruction; <br>4: super high quality requirement, where each dimension is at its best or at most one dimension has a minor problem; </li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
                     * @return QualityControl <p>Image quality control. </p><ul><li>Value range: <br>0: no control; <br>1: low quality requirement, where the image is super blurry, or at least one or more of the following exist: eye occlusion, nose occlusion, or mouth occlusion; <br>2: normal quality requirement, where the image is bright, dark, blurry or generally blurry, or at least three of the following exist: eyebrow obstruction, cheek obstruction, or chin obstruction; <br>3: high quality requirement, where the image is bright, dark, generally blurry, or one to two of the following exist: eyebrow obstruction, cheek obstruction, or chin obstruction; <br>4: super high quality requirement, where each dimension is at its best or at most one dimension has a minor problem; </li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
                     * 
                     */
                    uint64_t GetQualityControl() const;

                    /**
                     * 设置<p>Image quality control. </p><ul><li>Value range: <br>0: no control; <br>1: low quality requirement, where the image is super blurry, or at least one or more of the following exist: eye occlusion, nose occlusion, or mouth occlusion; <br>2: normal quality requirement, where the image is bright, dark, blurry or generally blurry, or at least three of the following exist: eyebrow obstruction, cheek obstruction, or chin obstruction; <br>3: high quality requirement, where the image is bright, dark, generally blurry, or one to two of the following exist: eyebrow obstruction, cheek obstruction, or chin obstruction; <br>4: super high quality requirement, where each dimension is at its best or at most one dimension has a minor problem; </li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
                     * @param _qualityControl <p>Image quality control. </p><ul><li>Value range: <br>0: no control; <br>1: low quality requirement, where the image is super blurry, or at least one or more of the following exist: eye occlusion, nose occlusion, or mouth occlusion; <br>2: normal quality requirement, where the image is bright, dark, blurry or generally blurry, or at least three of the following exist: eyebrow obstruction, cheek obstruction, or chin obstruction; <br>3: high quality requirement, where the image is bright, dark, generally blurry, or one to two of the following exist: eyebrow obstruction, cheek obstruction, or chin obstruction; <br>4: super high quality requirement, where each dimension is at its best or at most one dimension has a minor problem; </li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
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
                     * 获取<p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 means not enabled, 1 means enabled.</li><li>Default value: 0.</li><li>This parameter is used when the human face in the image is rotated and the image has no exif information. If image rotation recognition support is not enabled, the human face in the image cannot be correctly detected or recognized.</li><li>If you confirm that the image contains exif information or that the human face in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
                     * @return NeedRotateDetection <p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 means not enabled, 1 means enabled.</li><li>Default value: 0.</li><li>This parameter is used when the human face in the image is rotated and the image has no exif information. If image rotation recognition support is not enabled, the human face in the image cannot be correctly detected or recognized.</li><li>If you confirm that the image contains exif information or that the human face in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
                     * 
                     */
                    uint64_t GetNeedRotateDetection() const;

                    /**
                     * 设置<p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 means not enabled, 1 means enabled.</li><li>Default value: 0.</li><li>This parameter is used when the human face in the image is rotated and the image has no exif information. If image rotation recognition support is not enabled, the human face in the image cannot be correctly detected or recognized.</li><li>If you confirm that the image contains exif information or that the human face in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
                     * @param _needRotateDetection <p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 means not enabled, 1 means enabled.</li><li>Default value: 0.</li><li>This parameter is used when the human face in the image is rotated and the image has no exif information. If image rotation recognition support is not enabled, the human face in the image cannot be correctly detected or recognized.</li><li>If you confirm that the image contains exif information or that the human face in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
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
                     * 获取<p>Whether full-body encryption is required for the request information. Supported encryption algorithm: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
                     * @return Encryption <p>Whether full-body encryption is required for the request information. Supported encryption algorithm: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>Whether full-body encryption is required for the request information. Supported encryption algorithm: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
                     * @param _encryption <p>Whether full-body encryption is required for the request information. Supported encryption algorithm: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
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
                     * 获取<p>Encrypted ciphertext. The data format before encryption is as follows: {&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}。</p>
                     * @return EncryptedBody <p>Encrypted ciphertext. The data format before encryption is as follows: {&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}。</p>
                     * 
                     */
                    std::string GetEncryptedBody() const;

                    /**
                     * 设置<p>Encrypted ciphertext. The data format before encryption is as follows: {&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}。</p>
                     * @param _encryptedBody <p>Encrypted ciphertext. The data format before encryption is as follows: {&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}。</p>
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
                     * <p>Person ID, which is the PersonId in the person creation API.</p>
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * <p>base64 data of the image.</p><ul><li>base64 encoded size must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other formats, the image long edge must not exceed 2000. The short side pixel of images in all formats must be not less than 64.</li><li>The total number of faces must not exceed 5.</li><li>If the image contains several faces, only the face with the maximum area is selected.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li></ul>
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>Image Url.</p><ul><li>The size of the corresponding Image after base64 encoding must not exceed 5M.</li><li>For jpg format, the long side pixel must not exceed 4000. For other Image formats, the long side pixel must not exceed 2000. The short side pixel of images in all formats must be not less than 64.</li><li>Either Url or Image must be provided. If both are provided, only Url is used.</li><li>Images stored in Tencent Cloud URLs can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud.</li><li>The speed and stability of non-Tencent Cloud Storage URLs may be affected to a certain extent.</li><li>PNG, jpg, JPEG, and BMP are supported. GIF images are not supported.</li><li>The total number of human faces must not exceed 5.</li><li>If the Image contains several faces, only the face with the maximum area is selected.</li></ul>
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * <p>Only faces with a similarity to the person's existing faces exceeding the FaceMatchThreshold can be added successfully. </p><ul><li>Default value: 60. </li><li>Value range: [0,100]. </li></ul>
                     */
                    double m_faceMatchThreshold;
                    bool m_faceMatchThresholdHasBeenSet;

                    /**
                     * <p>Image quality control. </p><ul><li>Value range: <br>0: no control; <br>1: low quality requirement, where the image is super blurry, or at least one or more of the following exist: eye occlusion, nose occlusion, or mouth occlusion; <br>2: normal quality requirement, where the image is bright, dark, blurry or generally blurry, or at least three of the following exist: eyebrow obstruction, cheek obstruction, or chin obstruction; <br>3: high quality requirement, where the image is bright, dark, generally blurry, or one to two of the following exist: eyebrow obstruction, cheek obstruction, or chin obstruction; <br>4: super high quality requirement, where each dimension is at its best or at most one dimension has a minor problem; </li><li>Default: 0. </li><li>If the image quality fails to satisfy the requirement, the returned result will prompt that the image quality detection does not meet the requirement.</li></ul>
                     */
                    uint64_t m_qualityControl;
                    bool m_qualityControlHasBeenSet;

                    /**
                     * <p>Whether to enable image rotation recognition support.</p><ul><li>Value range: 0 means not enabled, 1 means enabled.</li><li>Default value: 0.</li><li>This parameter is used when the human face in the image is rotated and the image has no exif information. If image rotation recognition support is not enabled, the human face in the image cannot be correctly detected or recognized.</li><li>If you confirm that the image contains exif information or that the human face in the input image will not be rotated, do not enable this parameter. Once enabled, the overall duration may increase by several hundred milliseconds.</li></ul>
                     */
                    uint64_t m_needRotateDetection;
                    bool m_needRotateDetectionHasBeenSet;

                    /**
                     * <p>Whether full-body encryption is required for the request information. Supported encryption algorithm: AES-256-CBC. Users with encryption requirements can use this parameter.</p>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>Encrypted ciphertext. The data format before encryption is as follows: {&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}。</p>
                     */
                    std::string m_encryptedBody;
                    bool m_encryptedBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CREATEFACEREQUEST_H_
