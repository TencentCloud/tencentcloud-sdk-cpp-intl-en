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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillResourceSummary.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillResourceSummary response structure.
                */
                class DescribeBillResourceSummaryResponse : public AbstractModel
                {
                public:
                    DescribeBillResourceSummaryResponse();
                    ~DescribeBillResourceSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Resource summary list
                     * @return ResourceSummarySet Resource summary list
                     */
                    std::vector<BillResourceSummary> GetResourceSummarySet() const;

                    /**
                     * 判断参数 ResourceSummarySet 是否已赋值
                     * @return ResourceSummarySet 是否已赋值
                     */
                    bool ResourceSummarySetHasBeenSet() const;

                    /**
                     * 获取Total number of resource summary lists
Note: This field may return null, indicating that no valid value was found.
                     * @return Total Total number of resource summary lists
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Resource summary list
                     */
                    std::vector<BillResourceSummary> m_resourceSummarySet;
                    bool m_resourceSummarySetHasBeenSet;

                    /**
                     * Total number of resource summary lists
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYRESPONSE_H_
