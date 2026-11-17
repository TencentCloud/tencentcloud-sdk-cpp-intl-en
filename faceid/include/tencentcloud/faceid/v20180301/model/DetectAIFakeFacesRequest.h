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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>
#include <tencentcloud/faceid/v20180301/model/ExtraRiskInfo.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * DetectAIFakeFaces request structure.
                */
                class DetectAIFakeFacesRequest : public AbstractModel
                {
                public:
                    DetectAIFakeFacesRequest();
                    ~DetectAIFakeFacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Pass in the face image or face video to be detected (currently only single-face detection is supported), encoded in Base64. If both video and image are available in your scenario, we recommend using video for detection. For better detection results, note the following restrictions and recommendations for input data:</p><ul><li><p>Base64 value of the image:<br>Recommended overall image resolution is 480x640, with the face size above 100X100, captured by the front camera of a mobile phone.<br>The Base64-encoded image data is recommended to be no more than 3 MB, and must not exceed 10 MB. Only jpg and png formats are supported.<br>Use the standard Base64 encoding method (with = padding). For encoding specifications, refer to RFC4648.</p></li><li><p>Base64 value of the video:<br>The Base64-encoded size is recommended to be within 8 MB, and must not exceed 10 MB. mp4, avi, flv, and mov formats are supported, captured by the front camera of a mobile phone.<br>Recommended video duration is 2 to 5 seconds, and must not exceed 20 seconds.<br>Recommended video resolution is 480x640 (up to 720p supported), with a frame rate between 25 fps and 30 fps.<br>Use the standard Base64 encoding method (with = padding). For encoding specifications, refer to RFC4648.</p></li></ul><p>If you do not use Encryption for encrypted transmission, this field is required.</p>
                     * @return FaceInput <p>Pass in the face image or face video to be detected (currently only single-face detection is supported), encoded in Base64. If both video and image are available in your scenario, we recommend using video for detection. For better detection results, note the following restrictions and recommendations for input data:</p><ul><li><p>Base64 value of the image:<br>Recommended overall image resolution is 480x640, with the face size above 100X100, captured by the front camera of a mobile phone.<br>The Base64-encoded image data is recommended to be no more than 3 MB, and must not exceed 10 MB. Only jpg and png formats are supported.<br>Use the standard Base64 encoding method (with = padding). For encoding specifications, refer to RFC4648.</p></li><li><p>Base64 value of the video:<br>The Base64-encoded size is recommended to be within 8 MB, and must not exceed 10 MB. mp4, avi, flv, and mov formats are supported, captured by the front camera of a mobile phone.<br>Recommended video duration is 2 to 5 seconds, and must not exceed 20 seconds.<br>Recommended video resolution is 480x640 (up to 720p supported), with a frame rate between 25 fps and 30 fps.<br>Use the standard Base64 encoding method (with = padding). For encoding specifications, refer to RFC4648.</p></li></ul><p>If you do not use Encryption for encrypted transmission, this field is required.</p>
                     * 
                     */
                    std::string GetFaceInput() const;

                    /**
                     * 设置<p>Pass in the face image or face video to be detected (currently only single-face detection is supported), encoded in Base64. If both video and image are available in your scenario, we recommend using video for detection. For better detection results, note the following restrictions and recommendations for input data:</p><ul><li><p>Base64 value of the image:<br>Recommended overall image resolution is 480x640, with the face size above 100X100, captured by the front camera of a mobile phone.<br>The Base64-encoded image data is recommended to be no more than 3 MB, and must not exceed 10 MB. Only jpg and png formats are supported.<br>Use the standard Base64 encoding method (with = padding). For encoding specifications, refer to RFC4648.</p></li><li><p>Base64 value of the video:<br>The Base64-encoded size is recommended to be within 8 MB, and must not exceed 10 MB. mp4, avi, flv, and mov formats are supported, captured by the front camera of a mobile phone.<br>Recommended video duration is 2 to 5 seconds, and must not exceed 20 seconds.<br>Recommended video resolution is 480x640 (up to 720p supported), with a frame rate between 25 fps and 30 fps.<br>Use the standard Base64 encoding method (with = padding). For encoding specifications, refer to RFC4648.</p></li></ul><p>If you do not use Encryption for encrypted transmission, this field is required.</p>
                     * @param _faceInput <p>Pass in the face image or face video to be detected (currently only single-face detection is supported), encoded in Base64. If both video and image are available in your scenario, we recommend using video for detection. For better detection results, note the following restrictions and recommendations for input data:</p><ul><li><p>Base64 value of the image:<br>Recommended overall image resolution is 480x640, with the face size above 100X100, captured by the front camera of a mobile phone.<br>The Base64-encoded image data is recommended to be no more than 3 MB, and must not exceed 10 MB. Only jpg and png formats are supported.<br>Use the standard Base64 encoding method (with = padding). For encoding specifications, refer to RFC4648.</p></li><li><p>Base64 value of the video:<br>The Base64-encoded size is recommended to be within 8 MB, and must not exceed 10 MB. mp4, avi, flv, and mov formats are supported, captured by the front camera of a mobile phone.<br>Recommended video duration is 2 to 5 seconds, and must not exceed 20 seconds.<br>Recommended video resolution is 480x640 (up to 720p supported), with a frame rate between 25 fps and 30 fps.<br>Use the standard Base64 encoding method (with = padding). For encoding specifications, refer to RFC4648.</p></li></ul><p>If you do not use Encryption for encrypted transmission, this field is required.</p>
                     * 
                     */
                    void SetFaceInput(const std::string& _faceInput);

                    /**
                     * 判断参数 FaceInput 是否已赋值
                     * @return FaceInput 是否已赋值
                     * 
                     */
                    bool FaceInputHasBeenSet() const;

                    /**
                     * 获取<p>Type of the input.</p><ul><li>Valid values:<br>1: image type.<br>2: video type.<br>Others: the error code InvalidParameter is returned.</li></ul><p>If you do not use Encryption for encrypted transmission, this field is required.</p>
                     * @return FaceInputType <p>Type of the input.</p><ul><li>Valid values:<br>1: image type.<br>2: video type.<br>Others: the error code InvalidParameter is returned.</li></ul><p>If you do not use Encryption for encrypted transmission, this field is required.</p>
                     * 
                     */
                    int64_t GetFaceInputType() const;

                    /**
                     * 设置<p>Type of the input.</p><ul><li>Valid values:<br>1: image type.<br>2: video type.<br>Others: the error code InvalidParameter is returned.</li></ul><p>If you do not use Encryption for encrypted transmission, this field is required.</p>
                     * @param _faceInputType <p>Type of the input.</p><ul><li>Valid values:<br>1: image type.<br>2: video type.<br>Others: the error code InvalidParameter is returned.</li></ul><p>If you do not use Encryption for encrypted transmission, this field is required.</p>
                     * 
                     */
                    void SetFaceInputType(const int64_t& _faceInputType);

                    /**
                     * 判断参数 FaceInputType 是否已赋值
                     * @return FaceInputType 是否已赋值
                     * 
                     */
                    bool FaceInputTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to encrypt the entire request body.</p><ul><li>Supported encryption algorithms: AES-256-CBC and SM4-GCM.</li><li>Users with encryption requirements can use this parameter. For details, click the link on the left.</li></ul>
                     * @return Encryption <p>Whether to encrypt the entire request body.</p><ul><li>Supported encryption algorithms: AES-256-CBC and SM4-GCM.</li><li>Users with encryption requirements can use this parameter. For details, click the link on the left.</li></ul>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>Whether to encrypt the entire request body.</p><ul><li>Supported encryption algorithms: AES-256-CBC and SM4-GCM.</li><li>Users with encryption requirements can use this parameter. For details, click the link on the left.</li></ul>
                     * @param _encryption <p>Whether to encrypt the entire request body.</p><ul><li>Supported encryption algorithms: AES-256-CBC and SM4-GCM.</li><li>Users with encryption requirements can use this parameter. For details, click the link on the left.</li></ul>
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
                     * 获取<p>Encrypted ciphertext.</p><ul><li>The data format before encryption is as follows: {&quot;FaceInput&quot;:&quot;AAAAA&quot;,&quot;FaceInputType&quot;:1}.</li></ul>
                     * @return EncryptedBody <p>Encrypted ciphertext.</p><ul><li>The data format before encryption is as follows: {&quot;FaceInput&quot;:&quot;AAAAA&quot;,&quot;FaceInputType&quot;:1}.</li></ul>
                     * 
                     */
                    std::string GetEncryptedBody() const;

                    /**
                     * 设置<p>Encrypted ciphertext.</p><ul><li>The data format before encryption is as follows: {&quot;FaceInput&quot;:&quot;AAAAA&quot;,&quot;FaceInputType&quot;:1}.</li></ul>
                     * @param _encryptedBody <p>Encrypted ciphertext.</p><ul><li>The data format before encryption is as follows: {&quot;FaceInput&quot;:&quot;AAAAA&quot;,&quot;FaceInputType&quot;:1}.</li></ul>
                     * 
                     */
                    void SetEncryptedBody(const std::string& _encryptedBody);

                    /**
                     * 判断参数 EncryptedBody 是否已赋值
                     * @return EncryptedBody 是否已赋值
                     * 
                     */
                    bool EncryptedBodyHasBeenSet() const;

                    /**
                     * 获取<p>Carries the risk control context of this request at one time, that is, "who, where, and from which IP the request is initiated".</p>
                     * @return ExtraRiskInfo <p>Carries the risk control context of this request at one time, that is, "who, where, and from which IP the request is initiated".</p>
                     * 
                     */
                    ExtraRiskInfo GetExtraRiskInfo() const;

                    /**
                     * 设置<p>Carries the risk control context of this request at one time, that is, "who, where, and from which IP the request is initiated".</p>
                     * @param _extraRiskInfo <p>Carries the risk control context of this request at one time, that is, "who, where, and from which IP the request is initiated".</p>
                     * 
                     */
                    void SetExtraRiskInfo(const ExtraRiskInfo& _extraRiskInfo);

                    /**
                     * 判断参数 ExtraRiskInfo 是否已赋值
                     * @return ExtraRiskInfo 是否已赋值
                     * 
                     */
                    bool ExtraRiskInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Pass in the face image or face video to be detected (currently only single-face detection is supported), encoded in Base64. If both video and image are available in your scenario, we recommend using video for detection. For better detection results, note the following restrictions and recommendations for input data:</p><ul><li><p>Base64 value of the image:<br>Recommended overall image resolution is 480x640, with the face size above 100X100, captured by the front camera of a mobile phone.<br>The Base64-encoded image data is recommended to be no more than 3 MB, and must not exceed 10 MB. Only jpg and png formats are supported.<br>Use the standard Base64 encoding method (with = padding). For encoding specifications, refer to RFC4648.</p></li><li><p>Base64 value of the video:<br>The Base64-encoded size is recommended to be within 8 MB, and must not exceed 10 MB. mp4, avi, flv, and mov formats are supported, captured by the front camera of a mobile phone.<br>Recommended video duration is 2 to 5 seconds, and must not exceed 20 seconds.<br>Recommended video resolution is 480x640 (up to 720p supported), with a frame rate between 25 fps and 30 fps.<br>Use the standard Base64 encoding method (with = padding). For encoding specifications, refer to RFC4648.</p></li></ul><p>If you do not use Encryption for encrypted transmission, this field is required.</p>
                     */
                    std::string m_faceInput;
                    bool m_faceInputHasBeenSet;

                    /**
                     * <p>Type of the input.</p><ul><li>Valid values:<br>1: image type.<br>2: video type.<br>Others: the error code InvalidParameter is returned.</li></ul><p>If you do not use Encryption for encrypted transmission, this field is required.</p>
                     */
                    int64_t m_faceInputType;
                    bool m_faceInputTypeHasBeenSet;

                    /**
                     * <p>Whether to encrypt the entire request body.</p><ul><li>Supported encryption algorithms: AES-256-CBC and SM4-GCM.</li><li>Users with encryption requirements can use this parameter. For details, click the link on the left.</li></ul>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>Encrypted ciphertext.</p><ul><li>The data format before encryption is as follows: {&quot;FaceInput&quot;:&quot;AAAAA&quot;,&quot;FaceInputType&quot;:1}.</li></ul>
                     */
                    std::string m_encryptedBody;
                    bool m_encryptedBodyHasBeenSet;

                    /**
                     * <p>Carries the risk control context of this request at one time, that is, "who, where, and from which IP the request is initiated".</p>
                     */
                    ExtraRiskInfo m_extraRiskInfo;
                    bool m_extraRiskInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESREQUEST_H_
