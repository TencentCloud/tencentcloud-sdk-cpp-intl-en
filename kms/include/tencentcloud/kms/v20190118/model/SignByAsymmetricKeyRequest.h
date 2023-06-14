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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_SIGNBYASYMMETRICKEYREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_SIGNBYASYMMETRICKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * SignByAsymmetricKey request structure.
                */
                class SignByAsymmetricKeyRequest : public AbstractModel
                {
                public:
                    SignByAsymmetricKeyRequest();
                    ~SignByAsymmetricKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Signature algorithm. The valid values include `SM2DSA`, `ECC_P256_R1`, `RSA_PSS_SHA_256`, and `RSA_PKCS1_SHA_256`, etc. You can get a full list of supported algorithms using the ListAlgorithms API.
                     * @return Algorithm Signature algorithm. The valid values include `SM2DSA`, `ECC_P256_R1`, `RSA_PSS_SHA_256`, and `RSA_PKCS1_SHA_256`, etc. You can get a full list of supported algorithms using the ListAlgorithms API.
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置Signature algorithm. The valid values include `SM2DSA`, `ECC_P256_R1`, `RSA_PSS_SHA_256`, and `RSA_PKCS1_SHA_256`, etc. You can get a full list of supported algorithms using the ListAlgorithms API.
                     * @param _algorithm Signature algorithm. The valid values include `SM2DSA`, `ECC_P256_R1`, `RSA_PSS_SHA_256`, and `RSA_PKCS1_SHA_256`, etc. You can get a full list of supported algorithms using the ListAlgorithms API.
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取Full message or message abstract. Before Base64 encoding, an original message can contain up to 4,096 bytes while a message abstract must be 32 bytes.
                     * @return Message Full message or message abstract. Before Base64 encoding, an original message can contain up to 4,096 bytes while a message abstract must be 32 bytes.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Full message or message abstract. Before Base64 encoding, an original message can contain up to 4,096 bytes while a message abstract must be 32 bytes.
                     * @param _message Full message or message abstract. Before Base64 encoding, an original message can contain up to 4,096 bytes while a message abstract must be 32 bytes.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Unique ID of a key
                     * @return KeyId Unique ID of a key
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Unique ID of a key
                     * @param _keyId Unique ID of a key
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Message type. Valid values: `RAW` (indicating an original message; used by default if the parameter is not passed in) and `DIGEST`.
                     * @return MessageType Message type. Valid values: `RAW` (indicating an original message; used by default if the parameter is not passed in) and `DIGEST`.
                     * 
                     */
                    std::string GetMessageType() const;

                    /**
                     * 设置Message type. Valid values: `RAW` (indicating an original message; used by default if the parameter is not passed in) and `DIGEST`.
                     * @param _messageType Message type. Valid values: `RAW` (indicating an original message; used by default if the parameter is not passed in) and `DIGEST`.
                     * 
                     */
                    void SetMessageType(const std::string& _messageType);

                    /**
                     * 判断参数 MessageType 是否已赋值
                     * @return MessageType 是否已赋值
                     * 
                     */
                    bool MessageTypeHasBeenSet() const;

                private:

                    /**
                     * Signature algorithm. The valid values include `SM2DSA`, `ECC_P256_R1`, `RSA_PSS_SHA_256`, and `RSA_PKCS1_SHA_256`, etc. You can get a full list of supported algorithms using the ListAlgorithms API.
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * Full message or message abstract. Before Base64 encoding, an original message can contain up to 4,096 bytes while a message abstract must be 32 bytes.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Unique ID of a key
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Message type. Valid values: `RAW` (indicating an original message; used by default if the parameter is not passed in) and `DIGEST`.
                     */
                    std::string m_messageType;
                    bool m_messageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_SIGNBYASYMMETRICKEYREQUEST_H_
