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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/IntlDomainInfo.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeIntlDomain response structure.
                */
                class DescribeIntlDomainResponse : public AbstractModel
                {
                public:
                    DescribeIntlDomainResponse();
                    ~DescribeIntlDomainResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The domain information.
                     * @return DomainInfo The domain information.
                     * 
                     */
                    IntlDomainInfo GetDomainInfo() const;

                    /**
                     * 判断参数 DomainInfo 是否已赋值
                     * @return DomainInfo 是否已赋值
                     * 
                     */
                    bool DomainInfoHasBeenSet() const;

                private:

                    /**
                     * The domain information.
                     */
                    IntlDomainInfo m_domainInfo;
                    bool m_domainInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINRESPONSE_H_
