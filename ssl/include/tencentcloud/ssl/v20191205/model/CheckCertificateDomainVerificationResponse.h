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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATEDOMAINVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATEDOMAINVERIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/DomainValidationResult.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * CheckCertificateDomainVerification response structure.
                */
                class CheckCertificateDomainVerificationResponse : public AbstractModel
                {
                public:
                    CheckCertificateDomainVerificationResponse();
                    ~CheckCertificateDomainVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain validation result list. If the cert is bound to multiple domain names, the return array contains multiple items.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VerificationResults Domain validation result list. If the cert is bound to multiple domain names, the return array contains multiple items.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DomainValidationResult> GetVerificationResults() const;

                    /**
                     * 判断参数 VerificationResults 是否已赋值
                     * @return VerificationResults 是否已赋值
                     * 
                     */
                    bool VerificationResultsHasBeenSet() const;

                private:

                    /**
                     * Domain validation result list. If the cert is bound to multiple domain names, the return array contains multiple items.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DomainValidationResult> m_verificationResults;
                    bool m_verificationResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATEDOMAINVERIFICATIONRESPONSE_H_
