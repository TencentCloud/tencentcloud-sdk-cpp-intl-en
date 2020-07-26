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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTBYWHITEBOXRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTBYWHITEBOXRESPONSE_H_

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
                * EncryptByWhiteBox response structure.
                */
                class EncryptByWhiteBoxResponse : public AbstractModel
                {
                public:
                    EncryptByWhiteBoxResponse();
                    ~EncryptByWhiteBoxResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Base64-encoded initialization vector, which will be used by the encryption algorithm. If this parameter is passed in by the caller, it will be returned as-is; otherwise, the backend service will generate a random one and return it.
                     * @return InitializationVector Base64-encoded initialization vector, which will be used by the encryption algorithm. If this parameter is passed in by the caller, it will be returned as-is; otherwise, the backend service will generate a random one and return it.
                     */
                    std::string GetInitializationVector() const;

                    /**
                     * 判断参数 InitializationVector 是否已赋值
                     * @return InitializationVector 是否已赋值
                     */
                    bool InitializationVectorHasBeenSet() const;

                    /**
                     * 获取Base64-encoded ciphertext after encryption
                     * @return CipherText Base64-encoded ciphertext after encryption
                     */
                    std::string GetCipherText() const;

                    /**
                     * 判断参数 CipherText 是否已赋值
                     * @return CipherText 是否已赋值
                     */
                    bool CipherTextHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded initialization vector, which will be used by the encryption algorithm. If this parameter is passed in by the caller, it will be returned as-is; otherwise, the backend service will generate a random one and return it.
                     */
                    std::string m_initializationVector;
                    bool m_initializationVectorHasBeenSet;

                    /**
                     * Base64-encoded ciphertext after encryption
                     */
                    std::string m_cipherText;
                    bool m_cipherTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTBYWHITEBOXRESPONSE_H_
