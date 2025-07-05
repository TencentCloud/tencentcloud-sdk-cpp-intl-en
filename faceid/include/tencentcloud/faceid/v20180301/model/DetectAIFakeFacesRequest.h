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
                     * 获取Enter the image or video with a face to be detected, in base64 encoding. Base64 value of the image: The overall image resolution is recommended to be 480x640, and the face size is 100X100 or larger; The image data size after Base64 encoding does not exceed 3M, and only supports jpg and png formats. Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. Base64 value of the video: The size after Base64 encoding does not exceed 8M, and supports mp4, avi, and flv formats. Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. The maximum supported video length is 20s, and the recommended length is 2 to 5s. The recommended video resolution is 480x640, and the frame rate is between 25fps and 30fps.
                     * @return FaceInput Enter the image or video with a face to be detected, in base64 encoding. Base64 value of the image: The overall image resolution is recommended to be 480x640, and the face size is 100X100 or larger; The image data size after Base64 encoding does not exceed 3M, and only supports jpg and png formats. Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. Base64 value of the video: The size after Base64 encoding does not exceed 8M, and supports mp4, avi, and flv formats. Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. The maximum supported video length is 20s, and the recommended length is 2 to 5s. The recommended video resolution is 480x640, and the frame rate is between 25fps and 30fps.
                     * 
                     */
                    std::string GetFaceInput() const;

                    /**
                     * 设置Enter the image or video with a face to be detected, in base64 encoding. Base64 value of the image: The overall image resolution is recommended to be 480x640, and the face size is 100X100 or larger; The image data size after Base64 encoding does not exceed 3M, and only supports jpg and png formats. Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. Base64 value of the video: The size after Base64 encoding does not exceed 8M, and supports mp4, avi, and flv formats. Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. The maximum supported video length is 20s, and the recommended length is 2 to 5s. The recommended video resolution is 480x640, and the frame rate is between 25fps and 30fps.
                     * @param _faceInput Enter the image or video with a face to be detected, in base64 encoding. Base64 value of the image: The overall image resolution is recommended to be 480x640, and the face size is 100X100 or larger; The image data size after Base64 encoding does not exceed 3M, and only supports jpg and png formats. Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. Base64 value of the video: The size after Base64 encoding does not exceed 8M, and supports mp4, avi, and flv formats. Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. The maximum supported video length is 20s, and the recommended length is 2 to 5s. The recommended video resolution is 480x640, and the frame rate is between 25fps and 30fps.
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
                     * 获取The type of input is 1- The input type is a picture 2- The input type is a video Others - Return error code InvalidParameter
                     * @return FaceInputType The type of input is 1- The input type is a picture 2- The input type is a video Others - Return error code InvalidParameter
                     * 
                     */
                    int64_t GetFaceInputType() const;

                    /**
                     * 设置The type of input is 1- The input type is a picture 2- The input type is a video Others - Return error code InvalidParameter
                     * @param _faceInputType The type of input is 1- The input type is a picture 2- The input type is a video Others - Return error code InvalidParameter
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
                     * 获取Whether the request information needs to be fully encrypted; Supported encryption algorithms: AES-256-CBC, SM4-GCM; Users with encryption requirements can use this parameter, for details, please click the link on the left.
                     * @return Encryption Whether the request information needs to be fully encrypted; Supported encryption algorithms: AES-256-CBC, SM4-GCM; Users with encryption requirements can use this parameter, for details, please click the link on the left.
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置Whether the request information needs to be fully encrypted; Supported encryption algorithms: AES-256-CBC, SM4-GCM; Users with encryption requirements can use this parameter, for details, please click the link on the left.
                     * @param _encryption Whether the request information needs to be fully encrypted; Supported encryption algorithms: AES-256-CBC, SM4-GCM; Users with encryption requirements can use this parameter, for details, please click the link on the left.
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
                     * 获取Encrypted ciphertext; The data format before encryption is as follows:{"FaceInput":"AAAAA","FaceInputType":1}
                     * @return EncryptedBody Encrypted ciphertext; The data format before encryption is as follows:{"FaceInput":"AAAAA","FaceInputType":1}
                     * 
                     */
                    std::string GetEncryptedBody() const;

                    /**
                     * 设置Encrypted ciphertext; The data format before encryption is as follows:{"FaceInput":"AAAAA","FaceInputType":1}
                     * @param _encryptedBody Encrypted ciphertext; The data format before encryption is as follows:{"FaceInput":"AAAAA","FaceInputType":1}
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
                     * Enter the image or video with a face to be detected, in base64 encoding. Base64 value of the image: The overall image resolution is recommended to be 480x640, and the face size is 100X100 or larger; The image data size after Base64 encoding does not exceed 3M, and only supports jpg and png formats. Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. Base64 value of the video: The size after Base64 encoding does not exceed 8M, and supports mp4, avi, and flv formats. Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. The maximum supported video length is 20s, and the recommended length is 2 to 5s. The recommended video resolution is 480x640, and the frame rate is between 25fps and 30fps.
                     */
                    std::string m_faceInput;
                    bool m_faceInputHasBeenSet;

                    /**
                     * The type of input is 1- The input type is a picture 2- The input type is a video Others - Return error code InvalidParameter
                     */
                    int64_t m_faceInputType;
                    bool m_faceInputTypeHasBeenSet;

                    /**
                     * Whether the request information needs to be fully encrypted; Supported encryption algorithms: AES-256-CBC, SM4-GCM; Users with encryption requirements can use this parameter, for details, please click the link on the left.
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * Encrypted ciphertext; The data format before encryption is as follows:{"FaceInput":"AAAAA","FaceInputType":1}
                     */
                    std::string m_encryptedBody;
                    bool m_encryptedBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESREQUEST_H_
