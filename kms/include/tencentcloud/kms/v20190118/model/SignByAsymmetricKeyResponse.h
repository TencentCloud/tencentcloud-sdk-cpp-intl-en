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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_SIGNBYASYMMETRICKEYRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_SIGNBYASYMMETRICKEYRESPONSE_H_

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
                * SignByAsymmetricKey response structure.
                */
                class SignByAsymmetricKeyResponse : public AbstractModel
                {
                public:
                    SignByAsymmetricKeyResponse();
                    ~SignByAsymmetricKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64-encoded signature
                     * @return Signature Base64-encoded signature
                     * 
                     */
                    std::string GetSignature() const;

                    /**
                     * 判断参数 Signature 是否已赋值
                     * @return Signature 是否已赋值
                     * 
                     */
                    bool SignatureHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded signature
                     */
                    std::string m_signature;
                    bool m_signatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_SIGNBYASYMMETRICKEYRESPONSE_H_
