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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSQUOTARESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Quota.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAddressQuota response structure.
                */
                class DescribeAddressQuotaResponse : public AbstractModel
                {
                public:
                    DescribeAddressQuotaResponse();
                    ~DescribeAddressQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The quota information of EIPs in an account.
                     * @return QuotaSet The quota information of EIPs in an account.
                     * 
                     */
                    std::vector<Quota> GetQuotaSet() const;

                    /**
                     * 判断参数 QuotaSet 是否已赋值
                     * @return QuotaSet 是否已赋值
                     * 
                     */
                    bool QuotaSetHasBeenSet() const;

                private:

                    /**
                     * The quota information of EIPs in an account.
                     */
                    std::vector<Quota> m_quotaSet;
                    bool m_quotaSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSQUOTARESPONSE_H_
