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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSBUCKETBILLINGINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSBUCKETBILLINGINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosBucketBillingInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCosBucketBillingInfo response structure.
                */
                class DescribeCosBucketBillingInfoResponse : public AbstractModel
                {
                public:
                    DescribeCosBucketBillingInfoResponse();
                    ~DescribeCosBucketBillingInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Bucket billing information
                     * @return CosBucketBillingInfoSet Bucket billing information
                     * 
                     */
                    std::vector<CosBucketBillingInfo> GetCosBucketBillingInfoSet() const;

                    /**
                     * 判断参数 CosBucketBillingInfoSet 是否已赋值
                     * @return CosBucketBillingInfoSet 是否已赋值
                     * 
                     */
                    bool CosBucketBillingInfoSetHasBeenSet() const;

                    /**
                     * 获取Total number.
                     * @return Total Total number.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Bucket billing information
                     */
                    std::vector<CosBucketBillingInfo> m_cosBucketBillingInfoSet;
                    bool m_cosBucketBillingInfoSetHasBeenSet;

                    /**
                     * Total number.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSBUCKETBILLINGINFORESPONSE_H_
