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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTOVERIFYRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTOVERIFYRESPONSE_H_

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
                * PostQuantumCryptoVerify response structure.
                */
                class PostQuantumCryptoVerifyResponse : public AbstractModel
                {
                public:
                    PostQuantumCryptoVerifyResponse();
                    ~PostQuantumCryptoVerifyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Verify whether the signature is valid. `true`: The signature is valid. `false`: The signature is invalid.
                     * @return SignatureValid Verify whether the signature is valid. `true`: The signature is valid. `false`: The signature is invalid.
                     * 
                     */
                    bool GetSignatureValid() const;

                    /**
                     * 判断参数 SignatureValid 是否已赋值
                     * @return SignatureValid 是否已赋值
                     * 
                     */
                    bool SignatureValidHasBeenSet() const;

                private:

                    /**
                     * Verify whether the signature is valid. `true`: The signature is valid. `false`: The signature is invalid.
                     */
                    bool m_signatureValid;
                    bool m_signatureValidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTOVERIFYRESPONSE_H_
