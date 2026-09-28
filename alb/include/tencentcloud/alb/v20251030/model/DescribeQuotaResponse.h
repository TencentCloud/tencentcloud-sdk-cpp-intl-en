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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEQUOTARESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/QuotaInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeQuota response structure.
                */
                class DescribeQuotaResponse : public AbstractModel
                {
                public:
                    DescribeQuotaResponse();
                    ~DescribeQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Quota list. Each element represents the query result of a quota type. When ResourceIds is input in the request, each element represents the query result of a composite of a quota type and a resource ID.
                     * @return Quotas Quota list. Each element represents the query result of a quota type. When ResourceIds is input in the request, each element represents the query result of a composite of a quota type and a resource ID.
                     * 
                     */
                    std::vector<QuotaInfo> GetQuotas() const;

                    /**
                     * 判断参数 Quotas 是否已赋值
                     * @return Quotas 是否已赋值
                     * 
                     */
                    bool QuotasHasBeenSet() const;

                private:

                    /**
                     * Quota list. Each element represents the query result of a quota type. When ResourceIds is input in the request, each element represents the query result of a composite of a quota type and a resource ID.
                     */
                    std::vector<QuotaInfo> m_quotas;
                    bool m_quotasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEQUOTARESPONSE_H_
