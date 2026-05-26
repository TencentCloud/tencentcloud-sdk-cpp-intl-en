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
                     * 获取<p>Import the face image or facial video to be detected (currently only single face detection is supported) in base64 encoding. If your scenario involves both video and image, we recommend using video for detection. For better detection results, please note the following input data limits and suggestions:</p><ul><li><p>base64 value of the image:<br>Recommend an overall image resolution of 480x640, with the face size no less than 100x100, captured by the mobile front camera.<br>The size of the base64-encoded image data should not exceed 3M, with a maximum of 10M. Only jpg and png formats are supported.<br>Please use the standard base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.</p></li><li><p>base64 value of the video:<br>The size after base64 encoding should be within 8M, with a maximum of 10M. Supported formats include mp4, avi, and flv, captured by the mobile front camera.<br>Video duration is recommended to be 2–5s, with a maximum of 20s.<br>Video resolution is recommended at 480x640 (maximum support for 720p), with a frame rate between 25fps and 30fps.<br>Please use the standard base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.</p></li></ul><p>If you do not use Encryption for secure transmission, this field is a required parameter.</p>
                     * @return FaceInput <p>Import the face image or facial video to be detected (currently only single face detection is supported) in base64 encoding. If your scenario involves both video and image, we recommend using video for detection. For better detection results, please note the following input data limits and suggestions:</p><ul><li><p>base64 value of the image:<br>Recommend an overall image resolution of 480x640, with the face size no less than 100x100, captured by the mobile front camera.<br>The size of the base64-encoded image data should not exceed 3M, with a maximum of 10M. Only jpg and png formats are supported.<br>Please use the standard base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.</p></li><li><p>base64 value of the video:<br>The size after base64 encoding should be within 8M, with a maximum of 10M. Supported formats include mp4, avi, and flv, captured by the mobile front camera.<br>Video duration is recommended to be 2–5s, with a maximum of 20s.<br>Video resolution is recommended at 480x640 (maximum support for 720p), with a frame rate between 25fps and 30fps.<br>Please use the standard base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.</p></li></ul><p>If you do not use Encryption for secure transmission, this field is a required parameter.</p>
                     * 
                     */
                    std::string GetFaceInput() const;

                    /**
                     * 设置<p>Import the face image or facial video to be detected (currently only single face detection is supported) in base64 encoding. If your scenario involves both video and image, we recommend using video for detection. For better detection results, please note the following input data limits and suggestions:</p><ul><li><p>base64 value of the image:<br>Recommend an overall image resolution of 480x640, with the face size no less than 100x100, captured by the mobile front camera.<br>The size of the base64-encoded image data should not exceed 3M, with a maximum of 10M. Only jpg and png formats are supported.<br>Please use the standard base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.</p></li><li><p>base64 value of the video:<br>The size after base64 encoding should be within 8M, with a maximum of 10M. Supported formats include mp4, avi, and flv, captured by the mobile front camera.<br>Video duration is recommended to be 2–5s, with a maximum of 20s.<br>Video resolution is recommended at 480x640 (maximum support for 720p), with a frame rate between 25fps and 30fps.<br>Please use the standard base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.</p></li></ul><p>If you do not use Encryption for secure transmission, this field is a required parameter.</p>
                     * @param _faceInput <p>Import the face image or facial video to be detected (currently only single face detection is supported) in base64 encoding. If your scenario involves both video and image, we recommend using video for detection. For better detection results, please note the following input data limits and suggestions:</p><ul><li><p>base64 value of the image:<br>Recommend an overall image resolution of 480x640, with the face size no less than 100x100, captured by the mobile front camera.<br>The size of the base64-encoded image data should not exceed 3M, with a maximum of 10M. Only jpg and png formats are supported.<br>Please use the standard base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.</p></li><li><p>base64 value of the video:<br>The size after base64 encoding should be within 8M, with a maximum of 10M. Supported formats include mp4, avi, and flv, captured by the mobile front camera.<br>Video duration is recommended to be 2–5s, with a maximum of 20s.<br>Video resolution is recommended at 480x640 (maximum support for 720p), with a frame rate between 25fps and 30fps.<br>Please use the standard base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.</p></li></ul><p>If you do not use Encryption for secure transmission, this field is a required parameter.</p>
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
                     * 获取<p>Passed in type.</p><ul><li>Value ranges from 1 to 2:<br>1: Passed in image type.<br>2: Passed in video type.<br>Other: Return error code InvalidParameter.</li></ul><p>If you do not use Encryption for encrypting transmission, this field is mandatory.</p>
                     * @return FaceInputType <p>Passed in type.</p><ul><li>Value ranges from 1 to 2:<br>1: Passed in image type.<br>2: Passed in video type.<br>Other: Return error code InvalidParameter.</li></ul><p>If you do not use Encryption for encrypting transmission, this field is mandatory.</p>
                     * 
                     */
                    int64_t GetFaceInputType() const;

                    /**
                     * 设置<p>Passed in type.</p><ul><li>Value ranges from 1 to 2:<br>1: Passed in image type.<br>2: Passed in video type.<br>Other: Return error code InvalidParameter.</li></ul><p>If you do not use Encryption for encrypting transmission, this field is mandatory.</p>
                     * @param _faceInputType <p>Passed in type.</p><ul><li>Value ranges from 1 to 2:<br>1: Passed in image type.<br>2: Passed in video type.<br>Other: Return error code InvalidParameter.</li></ul><p>If you do not use Encryption for encrypting transmission, this field is mandatory.</p>
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
                     * 获取<p>Whether to encrypt the entire request information.</p><ul><li>Supported encryption algorithms: AES-256-CBC, SM4-GCM.</li><li>The user with encryption requirements can use this parameter. For details, please click the left-side link.</li></ul>
                     * @return Encryption <p>Whether to encrypt the entire request information.</p><ul><li>Supported encryption algorithms: AES-256-CBC, SM4-GCM.</li><li>The user with encryption requirements can use this parameter. For details, please click the left-side link.</li></ul>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>Whether to encrypt the entire request information.</p><ul><li>Supported encryption algorithms: AES-256-CBC, SM4-GCM.</li><li>The user with encryption requirements can use this parameter. For details, please click the left-side link.</li></ul>
                     * @param _encryption <p>Whether to encrypt the entire request information.</p><ul><li>Supported encryption algorithms: AES-256-CBC, SM4-GCM.</li><li>The user with encryption requirements can use this parameter. For details, please click the left-side link.</li></ul>
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
                     * 获取<p>Encrypted ciphertext.</p><ul><li>The data format before encryption is as follows: {"FaceInput":"AAAAA","FaceInputType":1}.</li></ul>
                     * @return EncryptedBody <p>Encrypted ciphertext.</p><ul><li>The data format before encryption is as follows: {"FaceInput":"AAAAA","FaceInputType":1}.</li></ul>
                     * 
                     */
                    std::string GetEncryptedBody() const;

                    /**
                     * 设置<p>Encrypted ciphertext.</p><ul><li>The data format before encryption is as follows: {"FaceInput":"AAAAA","FaceInputType":1}.</li></ul>
                     * @param _encryptedBody <p>Encrypted ciphertext.</p><ul><li>The data format before encryption is as follows: {"FaceInput":"AAAAA","FaceInputType":1}.</li></ul>
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
                     * <p>Import the face image or facial video to be detected (currently only single face detection is supported) in base64 encoding. If your scenario involves both video and image, we recommend using video for detection. For better detection results, please note the following input data limits and suggestions:</p><ul><li><p>base64 value of the image:<br>Recommend an overall image resolution of 480x640, with the face size no less than 100x100, captured by the mobile front camera.<br>The size of the base64-encoded image data should not exceed 3M, with a maximum of 10M. Only jpg and png formats are supported.<br>Please use the standard base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.</p></li><li><p>base64 value of the video:<br>The size after base64 encoding should be within 8M, with a maximum of 10M. Supported formats include mp4, avi, and flv, captured by the mobile front camera.<br>Video duration is recommended to be 2–5s, with a maximum of 20s.<br>Video resolution is recommended at 480x640 (maximum support for 720p), with a frame rate between 25fps and 30fps.<br>Please use the standard base64 encoding method (with = padding). Refer to RFC4648 for the coding specification.</p></li></ul><p>If you do not use Encryption for secure transmission, this field is a required parameter.</p>
                     */
                    std::string m_faceInput;
                    bool m_faceInputHasBeenSet;

                    /**
                     * <p>Passed in type.</p><ul><li>Value ranges from 1 to 2:<br>1: Passed in image type.<br>2: Passed in video type.<br>Other: Return error code InvalidParameter.</li></ul><p>If you do not use Encryption for encrypting transmission, this field is mandatory.</p>
                     */
                    int64_t m_faceInputType;
                    bool m_faceInputTypeHasBeenSet;

                    /**
                     * <p>Whether to encrypt the entire request information.</p><ul><li>Supported encryption algorithms: AES-256-CBC, SM4-GCM.</li><li>The user with encryption requirements can use this parameter. For details, please click the left-side link.</li></ul>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>Encrypted ciphertext.</p><ul><li>The data format before encryption is as follows: {"FaceInput":"AAAAA","FaceInputType":1}.</li></ul>
                     */
                    std::string m_encryptedBody;
                    bool m_encryptedBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESREQUEST_H_
