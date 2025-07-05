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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_STOPCDNDOMAINREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_STOPCDNDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * StopCdnDomain request structure.
                */
                class StopCdnDomainRequest : public AbstractModel
                {
                public:
                    StopCdnDomainRequest();
                    ~StopCdnDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name
The domain name status should be **Enabled**
                     * @return Domain Domain name
The domain name status should be **Enabled**
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
The domain name status should be **Enabled**
                     * @param _domain Domain name
The domain name status should be **Enabled**
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Domain name
The domain name status should be **Enabled**
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_STOPCDNDOMAINREQUEST_H_
