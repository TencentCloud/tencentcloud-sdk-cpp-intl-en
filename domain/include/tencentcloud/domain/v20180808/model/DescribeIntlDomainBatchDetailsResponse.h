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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINBATCHDETAILSRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINBATCHDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/BatchDomainBuyDetails.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeIntlDomainBatchDetails response structure.
                */
                class DescribeIntlDomainBatchDetailsResponse : public AbstractModel
                {
                public:
                    DescribeIntlDomainBatchDetailsResponse();
                    ~DescribeIntlDomainBatchDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total count.
                     * @return TotalCount The total count.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取The list of log details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DomainBatchDetailSet The list of log details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BatchDomainBuyDetails> GetDomainBatchDetailSet() const;

                    /**
                     * 判断参数 DomainBatchDetailSet 是否已赋值
                     * @return DomainBatchDetailSet 是否已赋值
                     * 
                     */
                    bool DomainBatchDetailSetHasBeenSet() const;

                private:

                    /**
                     * The total count.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * The list of log details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BatchDomainBuyDetails> m_domainBatchDetailSet;
                    bool m_domainBatchDetailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINBATCHDETAILSRESPONSE_H_
