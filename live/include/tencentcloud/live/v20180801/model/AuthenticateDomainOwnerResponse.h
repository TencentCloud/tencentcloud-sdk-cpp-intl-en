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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AUTHENTICATEDOMAINOWNERRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AUTHENTICATEDOMAINOWNERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * AuthenticateDomainOwner response structure.
                */
                class AuthenticateDomainOwnerResponse : public AbstractModel
                {
                public:
                    AuthenticateDomainOwnerResponse();
                    ~AuthenticateDomainOwnerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The content verified.
If `VerifyType` is `dnsCheck`, this is the TXT record that should be added for verification.
If `VerifyType` is `fileCheck`, this is the file that should be uploaded for verification.
                     * @return Content The content verified.
If `VerifyType` is `dnsCheck`, this is the TXT record that should be added for verification.
If `VerifyType` is `fileCheck`, this is the file that should be uploaded for verification.
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取The verification status.
If the value of this parameter is 0 or greater, the domain has been verified.
If the value of this parameter is smaller than 0, the domain has not been verified.
                     * @return Status The verification status.
If the value of this parameter is 0 or greater, the domain has been verified.
If the value of this parameter is smaller than 0, the domain has not been verified.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The primary domain of the domain verified.
Verification is not required if another domain under the same primary domain has been successfully verified.
                     * @return MainDomain The primary domain of the domain verified.
Verification is not required if another domain under the same primary domain has been successfully verified.
                     */
                    std::string GetMainDomain() const;

                    /**
                     * 判断参数 MainDomain 是否已赋值
                     * @return MainDomain 是否已赋值
                     */
                    bool MainDomainHasBeenSet() const;

                private:

                    /**
                     * The content verified.
If `VerifyType` is `dnsCheck`, this is the TXT record that should be added for verification.
If `VerifyType` is `fileCheck`, this is the file that should be uploaded for verification.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * The verification status.
If the value of this parameter is 0 or greater, the domain has been verified.
If the value of this parameter is smaller than 0, the domain has not been verified.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The primary domain of the domain verified.
Verification is not required if another domain under the same primary domain has been successfully verified.
                     */
                    std::string m_mainDomain;
                    bool m_mainDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AUTHENTICATEDOMAINOWNERRESPONSE_H_
