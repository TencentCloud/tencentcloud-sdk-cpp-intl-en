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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_SETINTLDOMAINAUTORENEWREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_SETINTLDOMAINAUTORENEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * SetIntlDomainAutoRenew request structure.
                */
                class SetIntlDomainAutoRenewRequest : public AbstractModel
                {
                public:
                    SetIntlDomainAutoRenewRequest();
                    ~SetIntlDomainAutoRenewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The domain ID.
                     * @return DomainId The domain ID.
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置The domain ID.
                     * @param _domainId The domain ID.
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable auto-renewal. Valid values: `1` (enable), `2` (disable).
                     * @return AutoRenew Whether to enable auto-renewal. Valid values: `1` (enable), `2` (disable).
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置Whether to enable auto-renewal. Valid values: `1` (enable), `2` (disable).
                     * @param _autoRenew Whether to enable auto-renewal. Valid values: `1` (enable), `2` (disable).
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                private:

                    /**
                     * The domain ID.
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Whether to enable auto-renewal. Valid values: `1` (enable), `2` (disable).
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_SETINTLDOMAINAUTORENEWREQUEST_H_
