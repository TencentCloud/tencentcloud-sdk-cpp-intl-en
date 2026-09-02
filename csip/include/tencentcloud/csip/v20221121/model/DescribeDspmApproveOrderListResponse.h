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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMAPPROVEORDERLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMAPPROVEORDERLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmApproverOrder.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmApproveOrderList response structure.
                */
                class DescribeDspmApproveOrderListResponse : public AbstractModel
                {
                public:
                    DescribeDspmApproveOrderListResponse();
                    ~DescribeDspmApproveOrderListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of approval forms
                     * @return TotalCount Total number of approval forms
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
                     * 获取Approval order details
                     * @return OrderSet Approval order details
                     * 
                     */
                    std::vector<DspmApproverOrder> GetOrderSet() const;

                    /**
                     * 判断参数 OrderSet 是否已赋值
                     * @return OrderSet 是否已赋值
                     * 
                     */
                    bool OrderSetHasBeenSet() const;

                private:

                    /**
                     * Total number of approval forms
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Approval order details
                     */
                    std::vector<DspmApproverOrder> m_orderSet;
                    bool m_orderSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMAPPROVEORDERLISTRESPONSE_H_
