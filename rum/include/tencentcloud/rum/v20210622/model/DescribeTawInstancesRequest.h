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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWINSTANCESREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/Filter.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTawInstances request structure.
                */
                class DescribeTawInstancesRequest : public AbstractModel
                {
                public:
                    DescribeTawInstancesRequest();
                    ~DescribeTawInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Billing status
                     * @return ChargeStatuses Billing status
                     * 
                     */
                    std::vector<int64_t> GetChargeStatuses() const;

                    /**
                     * 设置Billing status
                     * @param _chargeStatuses Billing status
                     * 
                     */
                    void SetChargeStatuses(const std::vector<int64_t>& _chargeStatuses);

                    /**
                     * 判断参数 ChargeStatuses 是否已赋值
                     * @return ChargeStatuses 是否已赋值
                     * 
                     */
                    bool ChargeStatusesHasBeenSet() const;

                    /**
                     * 获取Billing type
                     * @return ChargeTypes Billing type
                     * 
                     */
                    std::vector<int64_t> GetChargeTypes() const;

                    /**
                     * 设置Billing type
                     * @param _chargeTypes Billing type
                     * 
                     */
                    void SetChargeTypes(const std::vector<int64_t>& _chargeTypes);

                    /**
                     * 判断参数 ChargeTypes 是否已赋值
                     * @return ChargeTypes 是否已赋值
                     * 
                     */
                    bool ChargeTypesHasBeenSet() const;

                    /**
                     * 获取Pagination limit
                     * @return Limit Pagination limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination limit
                     * @param _limit Pagination limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param _offset Pagination offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Region Id
                     * @return AreaIds Region Id
                     * 
                     */
                    std::vector<int64_t> GetAreaIds() const;

                    /**
                     * 设置Region Id
                     * @param _areaIds Region Id
                     * 
                     */
                    void SetAreaIds(const std::vector<int64_t>& _areaIds);

                    /**
                     * 判断参数 AreaIds 是否已赋值
                     * @return AreaIds 是否已赋值
                     * 
                     */
                    bool AreaIdsHasBeenSet() const;

                    /**
                     * 获取Instance status (1=creating, 2=running, 3=abnormal, 4=restarting, 5=stopping, 6=stopped, 7=being destroyed, 8=terminated). Deprecated. Please note in Filters.
                     * @return InstanceStatuses Instance status (1=creating, 2=running, 3=abnormal, 4=restarting, 5=stopping, 6=stopped, 7=being destroyed, 8=terminated). Deprecated. Please note in Filters.
                     * @deprecated
                     */
                    std::vector<int64_t> GetInstanceStatuses() const;

                    /**
                     * 设置Instance status (1=creating, 2=running, 3=abnormal, 4=restarting, 5=stopping, 6=stopped, 7=being destroyed, 8=terminated). Deprecated. Please note in Filters.
                     * @param _instanceStatuses Instance status (1=creating, 2=running, 3=abnormal, 4=restarting, 5=stopping, 6=stopped, 7=being destroyed, 8=terminated). Deprecated. Please note in Filters.
                     * @deprecated
                     */
                    void SetInstanceStatuses(const std::vector<int64_t>& _instanceStatuses);

                    /**
                     * 判断参数 InstanceStatuses 是否已赋值
                     * @return InstanceStatuses 是否已赋值
                     * @deprecated
                     */
                    bool InstanceStatusesHasBeenSet() const;

                    /**
                     * 获取Instance Id, deprecated. Please note in Filters.
                     * @return InstanceIds Instance Id, deprecated. Please note in Filters.
                     * @deprecated
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance Id, deprecated. Please note in Filters.
                     * @param _instanceIds Instance Id, deprecated. Please note in Filters.
                     * @deprecated
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * @deprecated
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Filter parameters; In demo mode, pass {"Name": "IsDemo", "Values":["1"]}.
                     * @return Filters Filter parameters; In demo mode, pass {"Name": "IsDemo", "Values":["1"]}.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter parameters; In demo mode, pass {"Name": "IsDemo", "Values":["1"]}.
                     * @param _filters Filter parameters; In demo mode, pass {"Name": "IsDemo", "Values":["1"]}.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Deprecated. For demo mode, please note in Filters.
                     * @return IsDemo Deprecated. For demo mode, please note in Filters.
                     * @deprecated
                     */
                    int64_t GetIsDemo() const;

                    /**
                     * 设置Deprecated. For demo mode, please note in Filters.
                     * @param _isDemo Deprecated. For demo mode, please note in Filters.
                     * @deprecated
                     */
                    void SetIsDemo(const int64_t& _isDemo);

                    /**
                     * 判断参数 IsDemo 是否已赋值
                     * @return IsDemo 是否已赋值
                     * @deprecated
                     */
                    bool IsDemoHasBeenSet() const;

                private:

                    /**
                     * Billing status
                     */
                    std::vector<int64_t> m_chargeStatuses;
                    bool m_chargeStatusesHasBeenSet;

                    /**
                     * Billing type
                     */
                    std::vector<int64_t> m_chargeTypes;
                    bool m_chargeTypesHasBeenSet;

                    /**
                     * Pagination limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Region Id
                     */
                    std::vector<int64_t> m_areaIds;
                    bool m_areaIdsHasBeenSet;

                    /**
                     * Instance status (1=creating, 2=running, 3=abnormal, 4=restarting, 5=stopping, 6=stopped, 7=being destroyed, 8=terminated). Deprecated. Please note in Filters.
                     */
                    std::vector<int64_t> m_instanceStatuses;
                    bool m_instanceStatusesHasBeenSet;

                    /**
                     * Instance Id, deprecated. Please note in Filters.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Filter parameters; In demo mode, pass {"Name": "IsDemo", "Values":["1"]}.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Deprecated. For demo mode, please note in Filters.
                     */
                    int64_t m_isDemo;
                    bool m_isDemoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWINSTANCESREQUEST_H_
