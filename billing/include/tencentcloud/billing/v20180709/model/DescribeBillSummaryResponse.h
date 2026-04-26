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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/SummaryDetail.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillSummary response structure.
                */
                class DescribeBillSummaryResponse : public AbstractModel
                {
                public:
                    DescribeBillSummaryResponse();
                    ~DescribeBillSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Data readiness, 0 preparing, 1 ready. (Ready=0 indicates the first time initialization billing is in progress for the present UIN, is expected to take 5-10 minutes. Just retry after 10 minutes.)</p>
                     * @return Ready <p>Data readiness, 0 preparing, 1 ready. (Ready=0 indicates the first time initialization billing is in progress for the present UIN, is expected to take 5-10 minutes. Just retry after 10 minutes.)</p>
                     * 
                     */
                    uint64_t GetReady() const;

                    /**
                     * 判断参数 Ready 是否已赋值
                     * @return Ready 是否已赋值
                     * 
                     */
                    bool ReadyHasBeenSet() const;

                    /**
                     * 获取<p>Multidimensional bill summary of consumption detail</p>
                     * @return SummaryDetail <p>Multidimensional bill summary of consumption detail</p>
                     * 
                     */
                    std::vector<SummaryDetail> GetSummaryDetail() const;

                    /**
                     * 判断参数 SummaryDetail 是否已赋值
                     * @return SummaryDetail 是否已赋值
                     * 
                     */
                    bool SummaryDetailHasBeenSet() const;

                private:

                    /**
                     * <p>Data readiness, 0 preparing, 1 ready. (Ready=0 indicates the first time initialization billing is in progress for the present UIN, is expected to take 5-10 minutes. Just retry after 10 minutes.)</p>
                     */
                    uint64_t m_ready;
                    bool m_readyHasBeenSet;

                    /**
                     * <p>Multidimensional bill summary of consumption detail</p>
                     */
                    std::vector<SummaryDetail> m_summaryDetail;
                    bool m_summaryDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYRESPONSE_H_
