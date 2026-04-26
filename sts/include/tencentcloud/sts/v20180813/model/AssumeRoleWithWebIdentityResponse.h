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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEWITHWEBIDENTITYRESPONSE_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEWITHWEBIDENTITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sts/v20180813/model/Credentials.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * AssumeRoleWithWebIdentity response structure.
                */
                class AssumeRoleWithWebIdentityResponse : public AbstractModel
                {
                public:
                    AssumeRoleWithWebIdentityResponse();
                    ~AssumeRoleWithWebIdentityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Expiration time of the temporary access credentials (timestamp).
                     * @return ExpiredTime Expiration time of the temporary access credentials (timestamp).
                     * 
                     */
                    uint64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time of the temporary access credentials.
                     * @return Expiration Expiration time of the temporary access credentials.
                     * 
                     */
                    std::string GetExpiration() const;

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                    /**
                     * 获取Temporary access credentials
                     * @return Credentials Temporary access credentials
                     * 
                     */
                    Credentials GetCredentials() const;

                    /**
                     * 判断参数 Credentials 是否已赋值
                     * @return Credentials 是否已赋值
                     * 
                     */
                    bool CredentialsHasBeenSet() const;

                private:

                    /**
                     * Expiration time of the temporary access credentials (timestamp).
                     */
                    uint64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Expiration time of the temporary access credentials.
                     */
                    std::string m_expiration;
                    bool m_expirationHasBeenSet;

                    /**
                     * Temporary access credentials
                     */
                    Credentials m_credentials;
                    bool m_credentialsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEWITHWEBIDENTITYRESPONSE_H_
