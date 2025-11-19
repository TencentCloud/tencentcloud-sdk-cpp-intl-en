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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMSERVICEMETRICREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMSERVICEMETRICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/OrderBy.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>
#include <tencentcloud/apm/v20210622/model/Filter.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeApmServiceMetric request structure.
                */
                class DescribeApmServiceMetricRequest : public AbstractModel
                {
                public:
                    DescribeApmServiceMetricRequest();
                    ~DescribeApmServiceMetricRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Business system ID
                     * @return InstanceId Business system ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Business system ID
                     * @param _instanceId Business system ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Application name
                     * @return ServiceName Application name
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Application name
                     * @param _serviceName Application name
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return ServiceID Application ID
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置Application ID
                     * @param _serviceID Application ID
                     * 
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     * 
                     */
                    bool ServiceIDHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Order.
                     * @return OrderBy Order.
                     * 
                     */
                    OrderBy GetOrderBy() const;

                    /**
                     * 设置Order.
                     * @param _orderBy Order.
                     * 
                     */
                    void SetOrderBy(const OrderBy& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Whether to use the demo mode.
                     * @return Demo Whether to use the demo mode.
                     * 
                     */
                    bool GetDemo() const;

                    /**
                     * 设置Whether to use the demo mode.
                     * @param _demo Whether to use the demo mode.
                     * 
                     */
                    void SetDemo(const bool& _demo);

                    /**
                     * 判断参数 Demo 是否已赋值
                     * @return Demo 是否已赋值
                     * 
                     */
                    bool DemoHasBeenSet() const;

                    /**
                     * 获取Application status filter criteria. valid values: health, warning, error. if multiple statuses are selected, separate them by commas, for example: "warning,error".
                     * @return ServiceStatus Application status filter criteria. valid values: health, warning, error. if multiple statuses are selected, separate them by commas, for example: "warning,error".
                     * 
                     */
                    std::string GetServiceStatus() const;

                    /**
                     * 设置Application status filter criteria. valid values: health, warning, error. if multiple statuses are selected, separate them by commas, for example: "warning,error".
                     * @param _serviceStatus Application status filter criteria. valid values: health, warning, error. if multiple statuses are selected, separate them by commas, for example: "warning,error".
                     * 
                     */
                    void SetServiceStatus(const std::string& _serviceStatus);

                    /**
                     * 判断参数 ServiceStatus 是否已赋值
                     * @return ServiceStatus 是否已赋值
                     * 
                     */
                    bool ServiceStatusHasBeenSet() const;

                    /**
                     * 获取Tag list
                     * @return Tags Tag list
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置Tag list
                     * @param _tags Tag list
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Page number.
                     * @return Page Page number.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Page number.
                     * @param _page Page number.
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Page size.
                     * @return PageSize Page size.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size.
                     * @param _pageSize Page size.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Filter criteria.
                     * @return Filters Filter criteria.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria.
                     * @param _filters Filter criteria.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Business system ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Application name
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Application ID
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * Start time.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Order.
                     */
                    OrderBy m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Whether to use the demo mode.
                     */
                    bool m_demo;
                    bool m_demoHasBeenSet;

                    /**
                     * Application status filter criteria. valid values: health, warning, error. if multiple statuses are selected, separate them by commas, for example: "warning,error".
                     */
                    std::string m_serviceStatus;
                    bool m_serviceStatusHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Page number.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Page size.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Filter criteria.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMSERVICEMETRICREQUEST_H_
