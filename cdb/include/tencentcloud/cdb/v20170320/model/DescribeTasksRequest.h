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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeTasks request structure.
                */
                class DescribeTasksRequest : public AbstractModel
                {
                public:
                    DescribeTasksRequest();
                    ~DescribeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     * @param _instanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
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
                     * 获取ID of an async task request, i.e., `AsyncRequestId` returned by relevant TencentDB operations.
                     * @return AsyncRequestId ID of an async task request, i.e., `AsyncRequestId` returned by relevant TencentDB operations.
                     * 
                     */
                    std::string GetAsyncRequestId() const;

                    /**
                     * 设置ID of an async task request, i.e., `AsyncRequestId` returned by relevant TencentDB operations.
                     * @param _asyncRequestId ID of an async task request, i.e., `AsyncRequestId` returned by relevant TencentDB operations.
                     * 
                     */
                    void SetAsyncRequestId(const std::string& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取Task type. If no value is passed in, all task types will be queried. Valid values:
1 - rolling back a database;
2 - performing an SQL operation;
3 - importing data;
5 - setting a parameter;
6 - initializing a TencentDB instance;
7 - restarting a TencentDB instance;
8 - enabling GTID of a TencentDB instance;
9 - upgrading a read-only instance;
10 - rolling back databases in batches;
11 - upgrading a primary instance;
12 - deleting a TencentDB table;
13 - promoting a disaster recovery instance.
                     * @return TaskTypes Task type. If no value is passed in, all task types will be queried. Valid values:
1 - rolling back a database;
2 - performing an SQL operation;
3 - importing data;
5 - setting a parameter;
6 - initializing a TencentDB instance;
7 - restarting a TencentDB instance;
8 - enabling GTID of a TencentDB instance;
9 - upgrading a read-only instance;
10 - rolling back databases in batches;
11 - upgrading a primary instance;
12 - deleting a TencentDB table;
13 - promoting a disaster recovery instance.
                     * 
                     */
                    std::vector<int64_t> GetTaskTypes() const;

                    /**
                     * 设置Task type. If no value is passed in, all task types will be queried. Valid values:
1 - rolling back a database;
2 - performing an SQL operation;
3 - importing data;
5 - setting a parameter;
6 - initializing a TencentDB instance;
7 - restarting a TencentDB instance;
8 - enabling GTID of a TencentDB instance;
9 - upgrading a read-only instance;
10 - rolling back databases in batches;
11 - upgrading a primary instance;
12 - deleting a TencentDB table;
13 - promoting a disaster recovery instance.
                     * @param _taskTypes Task type. If no value is passed in, all task types will be queried. Valid values:
1 - rolling back a database;
2 - performing an SQL operation;
3 - importing data;
5 - setting a parameter;
6 - initializing a TencentDB instance;
7 - restarting a TencentDB instance;
8 - enabling GTID of a TencentDB instance;
9 - upgrading a read-only instance;
10 - rolling back databases in batches;
11 - upgrading a primary instance;
12 - deleting a TencentDB table;
13 - promoting a disaster recovery instance.
                     * 
                     */
                    void SetTaskTypes(const std::vector<int64_t>& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     * 
                     */
                    bool TaskTypesHasBeenSet() const;

                    /**
                     * 获取Task status. If no value is passed in, all task statuses will be queried. Valid values:
-1 - undefined;
0 - initializing;
1 - running;
2 - succeeded;
3 - failed;
4 - terminated;
5 - deleted;
6 - paused.
                     * @return TaskStatus Task status. If no value is passed in, all task statuses will be queried. Valid values:
-1 - undefined;
0 - initializing;
1 - running;
2 - succeeded;
3 - failed;
4 - terminated;
5 - deleted;
6 - paused.
                     * 
                     */
                    std::vector<int64_t> GetTaskStatus() const;

                    /**
                     * 设置Task status. If no value is passed in, all task statuses will be queried. Valid values:
-1 - undefined;
0 - initializing;
1 - running;
2 - succeeded;
3 - failed;
4 - terminated;
5 - deleted;
6 - paused.
                     * @param _taskStatus Task status. If no value is passed in, all task statuses will be queried. Valid values:
-1 - undefined;
0 - initializing;
1 - running;
2 - succeeded;
3 - failed;
4 - terminated;
5 - deleted;
6 - paused.
                     * 
                     */
                    void SetTaskStatus(const std::vector<int64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Start time of the first task in the format of yyyy-MM-dd HH:mm:ss, such as 2017-12-31 10:40:01. It is used for queries by time range.
                     * @return StartTimeBegin Start time of the first task in the format of yyyy-MM-dd HH:mm:ss, such as 2017-12-31 10:40:01. It is used for queries by time range.
                     * 
                     */
                    std::string GetStartTimeBegin() const;

                    /**
                     * 设置Start time of the first task in the format of yyyy-MM-dd HH:mm:ss, such as 2017-12-31 10:40:01. It is used for queries by time range.
                     * @param _startTimeBegin Start time of the first task in the format of yyyy-MM-dd HH:mm:ss, such as 2017-12-31 10:40:01. It is used for queries by time range.
                     * 
                     */
                    void SetStartTimeBegin(const std::string& _startTimeBegin);

                    /**
                     * 判断参数 StartTimeBegin 是否已赋值
                     * @return StartTimeBegin 是否已赋值
                     * 
                     */
                    bool StartTimeBeginHasBeenSet() const;

                    /**
                     * 获取End time of the last task in the format of yyyy-MM-dd HH:mm:ss, such as 2017-12-31 10:40:01. It is used for queries by time range.
                     * @return StartTimeEnd End time of the last task in the format of yyyy-MM-dd HH:mm:ss, such as 2017-12-31 10:40:01. It is used for queries by time range.
                     * 
                     */
                    std::string GetStartTimeEnd() const;

                    /**
                     * 设置End time of the last task in the format of yyyy-MM-dd HH:mm:ss, such as 2017-12-31 10:40:01. It is used for queries by time range.
                     * @param _startTimeEnd End time of the last task in the format of yyyy-MM-dd HH:mm:ss, such as 2017-12-31 10:40:01. It is used for queries by time range.
                     * 
                     */
                    void SetStartTimeEnd(const std::string& _startTimeEnd);

                    /**
                     * 判断参数 StartTimeEnd 是否已赋值
                     * @return StartTimeEnd 是否已赋值
                     * 
                     */
                    bool StartTimeEndHasBeenSet() const;

                    /**
                     * 获取Record offset. Default value: 0.
                     * @return Offset Record offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Record offset. Default value: 0.
                     * @param _offset Record offset. Default value: 0.
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
                     * 获取Number of results to be returned for a single request. Default value: 20. Maximum value: 100.
                     * @return Limit Number of results to be returned for a single request. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned for a single request. Default value: 20. Maximum value: 100.
                     * @param _limit Number of results to be returned for a single request. Default value: 20. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ID of an async task request, i.e., `AsyncRequestId` returned by relevant TencentDB operations.
                     */
                    std::string m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * Task type. If no value is passed in, all task types will be queried. Valid values:
1 - rolling back a database;
2 - performing an SQL operation;
3 - importing data;
5 - setting a parameter;
6 - initializing a TencentDB instance;
7 - restarting a TencentDB instance;
8 - enabling GTID of a TencentDB instance;
9 - upgrading a read-only instance;
10 - rolling back databases in batches;
11 - upgrading a primary instance;
12 - deleting a TencentDB table;
13 - promoting a disaster recovery instance.
                     */
                    std::vector<int64_t> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                    /**
                     * Task status. If no value is passed in, all task statuses will be queried. Valid values:
-1 - undefined;
0 - initializing;
1 - running;
2 - succeeded;
3 - failed;
4 - terminated;
5 - deleted;
6 - paused.
                     */
                    std::vector<int64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Start time of the first task in the format of yyyy-MM-dd HH:mm:ss, such as 2017-12-31 10:40:01. It is used for queries by time range.
                     */
                    std::string m_startTimeBegin;
                    bool m_startTimeBeginHasBeenSet;

                    /**
                     * End time of the last task in the format of yyyy-MM-dd HH:mm:ss, such as 2017-12-31 10:40:01. It is used for queries by time range.
                     */
                    std::string m_startTimeEnd;
                    bool m_startTimeEndHasBeenSet;

                    /**
                     * Record offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned for a single request. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETASKSREQUEST_H_
