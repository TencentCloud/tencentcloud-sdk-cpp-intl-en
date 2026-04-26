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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECPQBILLINGMAPPINGRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECPQBILLINGMAPPINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ResourceSpuSet.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCPQBillingMapping response structure.
                */
                class DescribeCPQBillingMappingResponse : public AbstractModel
                {
                public:
                    DescribeCPQBillingMappingResponse();
                    ~DescribeCPQBillingMappingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Return data details
                     * @return ResourceSpuSet Return data details
                     * 
                     */
                    std::vector<ResourceSpuSet> GetResourceSpuSet() const;

                    /**
                     * 判断参数 ResourceSpuSet 是否已赋值
                     * @return ResourceSpuSet 是否已赋值
                     * 
                     */
                    bool ResourceSpuSetHasBeenSet() const;

                    /**
                     * 获取10
                     * @return Total 10
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Return data details
                     */
                    std::vector<ResourceSpuSet> m_resourceSpuSet;
                    bool m_resourceSpuSetHasBeenSet;

                    /**
                     * 10
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECPQBILLINGMAPPINGRESPONSE_H_
