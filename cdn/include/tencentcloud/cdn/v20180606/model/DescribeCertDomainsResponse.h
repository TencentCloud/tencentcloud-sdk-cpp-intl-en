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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECERTDOMAINSRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECERTDOMAINSRESPONSE_H_

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
                * DescribeCertDomains response structure.
                */
                class DescribeCertDomainsResponse : public AbstractModel
                {
                public:
                    DescribeCertDomainsResponse();
                    ~DescribeCertDomainsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取List of domain names connected to CDN
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Domains List of domain names connected to CDN
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取List of CDN domain names with certificates configured
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertifiedDomains List of CDN domain names with certificates configured
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetCertifiedDomains() const;

                    /**
                     * 判断参数 CertifiedDomains 是否已赋值
                     * @return CertifiedDomains 是否已赋值
                     */
                    bool CertifiedDomainsHasBeenSet() const;

                private:

                    /**
                     * List of domain names connected to CDN
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * List of CDN domain names with certificates configured
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_certifiedDomains;
                    bool m_certifiedDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECERTDOMAINSRESPONSE_H_
