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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTBYWHITEBOXREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTBYWHITEBOXREQUEST_H_

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
                * EncryptByWhiteBox request structure.
                */
                class EncryptByWhiteBoxRequest : public AbstractModel
                {
                public:
                    EncryptByWhiteBoxRequest();
                    ~EncryptByWhiteBoxRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Globally unique white-box key ID
                     * @return KeyId Globally unique white-box key ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Globally unique white-box key ID
                     * @param _keyId Globally unique white-box key ID
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
                     * 获取Base64-encoded text to be encrypted. The size of the original text cannot exceed 4 KB.
                     * @return PlainText Base64-encoded text to be encrypted. The size of the original text cannot exceed 4 KB.
                     * 
                     */
                    std::string GetPlainText() const;

                    /**
                     * 设置Base64-encoded text to be encrypted. The size of the original text cannot exceed 4 KB.
                     * @param _plainText Base64-encoded text to be encrypted. The size of the original text cannot exceed 4 KB.
                     * 
                     */
                    void SetPlainText(const std::string& _plainText);

                    /**
                     * 判断参数 PlainText 是否已赋值
                     * @return PlainText 是否已赋值
                     * 
                     */
                    bool PlainTextHasBeenSet() const;

                    /**
                     * 获取Base64-encoded initialization vector of 16 bytes, which will be used by the encryption algorithm. If this parameter is not passed in, the backend service will generate a random one. You should save this value as a parameter for decryption.
                     * @return InitializationVector Base64-encoded initialization vector of 16 bytes, which will be used by the encryption algorithm. If this parameter is not passed in, the backend service will generate a random one. You should save this value as a parameter for decryption.
                     * 
                     */
                    std::string GetInitializationVector() const;

                    /**
                     * 设置Base64-encoded initialization vector of 16 bytes, which will be used by the encryption algorithm. If this parameter is not passed in, the backend service will generate a random one. You should save this value as a parameter for decryption.
                     * @param _initializationVector Base64-encoded initialization vector of 16 bytes, which will be used by the encryption algorithm. If this parameter is not passed in, the backend service will generate a random one. You should save this value as a parameter for decryption.
                     * 
                     */
                    void SetInitializationVector(const std::string& _initializationVector);

                    /**
                     * 判断参数 InitializationVector 是否已赋值
                     * @return InitializationVector 是否已赋值
                     * 
                     */
                    bool InitializationVectorHasBeenSet() const;

                private:

                    /**
                     * Globally unique white-box key ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Base64-encoded text to be encrypted. The size of the original text cannot exceed 4 KB.
                     */
                    std::string m_plainText;
                    bool m_plainTextHasBeenSet;

                    /**
                     * Base64-encoded initialization vector of 16 bytes, which will be used by the encryption algorithm. If this parameter is not passed in, the backend service will generate a random one. You should save this value as a parameter for decryption.
                     */
                    std::string m_initializationVector;
                    bool m_initializationVectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTBYWHITEBOXREQUEST_H_
