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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNATTACHEDINSTANCESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNATTACHEDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeCcnAttachedInstances request structure.
                */
                class DescribeCcnAttachedInstancesRequest : public AbstractModel
                {
                public:
                    DescribeCcnAttachedInstancesRequest();
                    ~DescribeCcnAttachedInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset
                     * @return Offset Offset
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param Offset Offset
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The returned quantity
                     * @return Limit The returned quantity
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The returned quantity
                     * @param Limit The returned quantity
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter conditions:
<li>ccn-id - String - (Filter condition) The CCN instance ID.</li>
<li>instance-type - String - (Filter condition) The associated instance type.</li>
<li>instance-region - String - (Filter condition) The associated instance region.</li>
<li>instance-type - String - (Filter condition) The instance ID of the associated instance.</li>
                     * @return Filters Filter conditions:
<li>ccn-id - String - (Filter condition) The CCN instance ID.</li>
<li>instance-type - String - (Filter condition) The associated instance type.</li>
<li>instance-region - String - (Filter condition) The associated instance region.</li>
<li>instance-type - String - (Filter condition) The instance ID of the associated instance.</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions:
<li>ccn-id - String - (Filter condition) The CCN instance ID.</li>
<li>instance-type - String - (Filter condition) The associated instance type.</li>
<li>instance-region - String - (Filter condition) The associated instance region.</li>
<li>instance-type - String - (Filter condition) The instance ID of the associated instance.</li>
                     * @param Filters Filter conditions:
<li>ccn-id - String - (Filter condition) The CCN instance ID.</li>
<li>instance-type - String - (Filter condition) The associated instance type.</li>
<li>instance-region - String - (Filter condition) The associated instance region.</li>
<li>instance-type - String - (Filter condition) The instance ID of the associated instance.</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The ID of the CCN instance
                     * @return CcnId The ID of the CCN instance
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置The ID of the CCN instance
                     * @param CcnId The ID of the CCN instance
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取The order field supports `CcnId`, `InstanceType`, `InstanceId`, `InstanceName`, `InstanceRegion`, `AttachedTime`, and `State`.
                     * @return OrderField The order field supports `CcnId`, `InstanceType`, `InstanceId`, `InstanceName`, `InstanceRegion`, `AttachedTime`, and `State`.
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置The order field supports `CcnId`, `InstanceType`, `InstanceId`, `InstanceName`, `InstanceRegion`, `AttachedTime`, and `State`.
                     * @param OrderField The order field supports `CcnId`, `InstanceType`, `InstanceId`, `InstanceName`, `InstanceRegion`, `AttachedTime`, and `State`.
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取Order methods. Ascending: `ASC`, Descending: `DESC`.
                     * @return OrderDirection Order methods. Ascending: `ASC`, Descending: `DESC`.
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置Order methods. Ascending: `ASC`, Descending: `DESC`.
                     * @param OrderDirection Order methods. Ascending: `ASC`, Descending: `DESC`.
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The returned quantity
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter conditions:
<li>ccn-id - String - (Filter condition) The CCN instance ID.</li>
<li>instance-type - String - (Filter condition) The associated instance type.</li>
<li>instance-region - String - (Filter condition) The associated instance region.</li>
<li>instance-type - String - (Filter condition) The instance ID of the associated instance.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The ID of the CCN instance
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * The order field supports `CcnId`, `InstanceType`, `InstanceId`, `InstanceName`, `InstanceRegion`, `AttachedTime`, and `State`.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Order methods. Ascending: `ASC`, Descending: `DESC`.
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNATTACHEDINSTANCESREQUEST_H_
