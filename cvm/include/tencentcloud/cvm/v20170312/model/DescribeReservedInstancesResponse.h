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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/ReservedInstances.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeReservedInstances response structure.
                */
                class DescribeReservedInstancesResponse : public AbstractModel
                {
                public:
                    DescribeReservedInstancesResponse();
                    ~DescribeReservedInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of reserved instances that meet the conditions.
                     * @return TotalCount Number of reserved instances that meet the conditions.
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
                     * 获取List of reserved instances that meet the conditions.
                     * @return ReservedInstancesSet List of reserved instances that meet the conditions.
                     * 
                     */
                    std::vector<ReservedInstances> GetReservedInstancesSet() const;

                    /**
                     * 判断参数 ReservedInstancesSet 是否已赋值
                     * @return ReservedInstancesSet 是否已赋值
                     * 
                     */
                    bool ReservedInstancesSetHasBeenSet() const;

                private:

                    /**
                     * Number of reserved instances that meet the conditions.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of reserved instances that meet the conditions.
                     */
                    std::vector<ReservedInstances> m_reservedInstancesSet;
                    bool m_reservedInstancesSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESRESPONSE_H_
