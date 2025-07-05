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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKINTLDOMAINNEWREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKINTLDOMAINNEWREQUEST_H_

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
                * CheckIntlDomainNew request structure.
                */
                class CheckIntlDomainNewRequest : public AbstractModel
                {
                public:
                    CheckIntlDomainNewRequest();
                    ~CheckIntlDomainNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The name of the domain to be checked.
                     * @return Domain The name of the domain to be checked.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The name of the domain to be checked.
                     * @param _domain The name of the domain to be checked.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Period, in years. If this parameter is left empty, premium domains cannot be queried.
                     * @return Period Period, in years. If this parameter is left empty, premium domains cannot be queried.
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置Period, in years. If this parameter is left empty, premium domains cannot be queried.
                     * @param _period Period, in years. If this parameter is left empty, premium domains cannot be queried.
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * The name of the domain to be checked.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Period, in years. If this parameter is left empty, premium domains cannot be queried.
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKINTLDOMAINNEWREQUEST_H_
