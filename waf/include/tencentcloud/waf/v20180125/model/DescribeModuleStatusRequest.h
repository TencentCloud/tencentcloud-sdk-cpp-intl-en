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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEMODULESTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEMODULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeModuleStatus request structure.
                */
                class DescribeModuleStatusRequest : public AbstractModel
                {
                public:
                    DescribeModuleStatusRequest();
                    ~DescribeModuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain to query status
                     * @return Domain Domain to query status
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain to query status
                     * @param _domain Domain to query status
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
                     * Domain to query status
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEMODULESTATUSREQUEST_H_
