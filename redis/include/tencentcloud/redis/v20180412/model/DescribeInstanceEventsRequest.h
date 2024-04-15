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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEEVENTSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceEvents request structure.
                */
                class DescribeInstanceEventsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceEventsRequest();
                    ~DescribeInstanceEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Configures the start date for querying the event execution schedule.
                     * @return ExecutionStartDate Configures the start date for querying the event execution schedule.
                     * 
                     */
                    std::string GetExecutionStartDate() const;

                    /**
                     * 设置Configures the start date for querying the event execution schedule.
                     * @param _executionStartDate Configures the start date for querying the event execution schedule.
                     * 
                     */
                    void SetExecutionStartDate(const std::string& _executionStartDate);

                    /**
                     * 判断参数 ExecutionStartDate 是否已赋值
                     * @return ExecutionStartDate 是否已赋值
                     * 
                     */
                    bool ExecutionStartDateHasBeenSet() const;

                    /**
                     * 获取Configures the end date for querying the event execution schedule.
                     * @return ExecutionEndDate Configures the end date for querying the event execution schedule.
                     * 
                     */
                    std::string GetExecutionEndDate() const;

                    /**
                     * 设置Configures the end date for querying the event execution schedule.
                     * @param _executionEndDate Configures the end date for querying the event execution schedule.
                     * 
                     */
                    void SetExecutionEndDate(const std::string& _executionEndDate);

                    /**
                     * 判断参数 ExecutionEndDate 是否已赋值
                     * @return ExecutionEndDate 是否已赋值
                     * 
                     */
                    bool ExecutionEndDateHasBeenSet() const;

                    /**
                     * 获取Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     * @return InstanceId Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     * @param _instanceId Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
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
                     * 获取Outputs the number of events displayed per page. Default value: 10.
                     * @return PageSize Outputs the number of events displayed per page. Default value: 10.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Outputs the number of events displayed per page. Default value: 10.
                     * @param _pageSize Outputs the number of events displayed per page. Default value: 10.
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
                     * 获取Configures the page number for querying events. You can query events on a certain page by specifying PageNo and PageSize. Default value: 1.
                     * @return PageNo Configures the page number for querying events. You can query events on a certain page by specifying PageNo and PageSize. Default value: 1.
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置Configures the page number for querying events. You can query events on a certain page by specifying PageNo and PageSize. Default value: 1.
                     * @param _pageNo Configures the page number for querying events. You can query events on a certain page by specifying PageNo and PageSize. Default value: 1.
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取Current status of the event.- Waiting: The event is waiting for execution on the execution date or during the operations period.- Running: The event is being executed during the operations period.- Finished: Execution of the event is completed.- Canceled: Execution of the event is canceled.
                     * @return Status Current status of the event.- Waiting: The event is waiting for execution on the execution date or during the operations period.- Running: The event is being executed during the operations period.- Finished: Execution of the event is completed.- Canceled: Execution of the event is canceled.
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置Current status of the event.- Waiting: The event is waiting for execution on the execution date or during the operations period.- Running: The event is being executed during the operations period.- Finished: Execution of the event is completed.- Canceled: Execution of the event is canceled.
                     * @param _status Current status of the event.- Waiting: The event is waiting for execution on the execution date or during the operations period.- Running: The event is being executed during the operations period.- Finished: Execution of the event is completed.- Canceled: Execution of the event is canceled.
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be set only to **InstanceMigration**.
                     * @return EventTypes Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be set only to **InstanceMigration**.
                     * 
                     */
                    std::vector<std::string> GetEventTypes() const;

                    /**
                     * 设置Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be set only to **InstanceMigration**.
                     * @param _eventTypes Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be set only to **InstanceMigration**.
                     * 
                     */
                    void SetEventTypes(const std::vector<std::string>& _eventTypes);

                    /**
                     * 判断参数 EventTypes 是否已赋值
                     * @return EventTypes 是否已赋值
                     * 
                     */
                    bool EventTypesHasBeenSet() const;

                    /**
                     * 获取Configures the level of the queried event. Events are divided into Critical, High, Medium, and Low events according to the severity and urgency.- Critical- High- Medium- Low
                     * @return Grades Configures the level of the queried event. Events are divided into Critical, High, Medium, and Low events according to the severity and urgency.- Critical- High- Medium- Low
                     * 
                     */
                    std::vector<std::string> GetGrades() const;

                    /**
                     * 设置Configures the level of the queried event. Events are divided into Critical, High, Medium, and Low events according to the severity and urgency.- Critical- High- Medium- Low
                     * @param _grades Configures the level of the queried event. Events are divided into Critical, High, Medium, and Low events according to the severity and urgency.- Critical- High- Medium- Low
                     * 
                     */
                    void SetGrades(const std::vector<std::string>& _grades);

                    /**
                     * 判断参数 Grades 是否已赋值
                     * @return Grades 是否已赋值
                     * 
                     */
                    bool GradesHasBeenSet() const;

                private:

                    /**
                     * Configures the start date for querying the event execution schedule.
                     */
                    std::string m_executionStartDate;
                    bool m_executionStartDateHasBeenSet;

                    /**
                     * Configures the end date for querying the event execution schedule.
                     */
                    std::string m_executionEndDate;
                    bool m_executionEndDateHasBeenSet;

                    /**
                     * Specifies the instance ID. Example: crs-xjhsdj****. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Outputs the number of events displayed per page. Default value: 10.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Configures the page number for querying events. You can query events on a certain page by specifying PageNo and PageSize. Default value: 1.
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * Current status of the event.- Waiting: The event is waiting for execution on the execution date or during the operations period.- Running: The event is being executed during the operations period.- Finished: Execution of the event is completed.- Canceled: Execution of the event is canceled.
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Event type. Currently, the type can only be related to instance migration, resource movement, and IDC deletion. This parameter can be set only to **InstanceMigration**.
                     */
                    std::vector<std::string> m_eventTypes;
                    bool m_eventTypesHasBeenSet;

                    /**
                     * Configures the level of the queried event. Events are divided into Critical, High, Medium, and Low events according to the severity and urgency.- Critical- High- Medium- Low
                     */
                    std::vector<std::string> m_grades;
                    bool m_gradesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEEVENTSREQUEST_H_
