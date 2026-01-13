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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPDOWNLOADTASKREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPDOWNLOADTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeBackupDownloadTask request structure.
                */
                class DescribeBackupDownloadTaskRequest : public AbstractModel
                {
                public:
                    DescribeBackupDownloadTaskRequest();
                    ~DescribeBackupDownloadTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * @return InstanceId Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * @param _instanceId Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
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
                     * 获取Specifies the backup file name for filtering download tasks of the specified file. The [DescribeDBBackups](https://www.tencentcloud.com/document/product/240/38574?from_cn_redirect=1) API can be called to obtain the backup file name.
                     * @return BackupName Specifies the backup file name for filtering download tasks of the specified file. The [DescribeDBBackups](https://www.tencentcloud.com/document/product/240/38574?from_cn_redirect=1) API can be called to obtain the backup file name.
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置Specifies the backup file name for filtering download tasks of the specified file. The [DescribeDBBackups](https://www.tencentcloud.com/document/product/240/38574?from_cn_redirect=1) API can be called to obtain the backup file name.
                     * @param _backupName Specifies the backup file name for filtering download tasks of the specified file. The [DescribeDBBackups](https://www.tencentcloud.com/document/product/240/38574?from_cn_redirect=1) API can be called to obtain the backup file name.
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取Specifies the task within the query time range, and StartTime specifies the start time. If not specified, there are no limitations on the start time by default.
                     * @return StartTime Specifies the task within the query time range, and StartTime specifies the start time. If not specified, there are no limitations on the start time by default.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Specifies the task within the query time range, and StartTime specifies the start time. If not specified, there are no limitations on the start time by default.
                     * @param _startTime Specifies the task within the query time range, and StartTime specifies the start time. If not specified, there are no limitations on the start time by default.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the task within the query time range, and EndTime specifies the end time. If not specified, there are no limitations on the end time by default.
                     * @return EndTime Specifies the task within the query time range, and EndTime specifies the end time. If not specified, there are no limitations on the end time by default.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Specifies the task within the query time range, and EndTime specifies the end time. If not specified, there are no limitations on the end time by default.
                     * @param _endTime Specifies the task within the query time range, and EndTime specifies the end time. If not specified, there are no limitations on the end time by default.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Number of entries returned for this query. Value range: 1–100. The default value is 20.
                     * @return Limit Number of entries returned for this query. Value range: 1–100. The default value is 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries returned for this query. Value range: 1–100. The default value is 20.
                     * @param _limit Number of entries returned for this query. Value range: 1–100. The default value is 20.
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
                     * 获取Specifies the number of pages returned for this query. The default value is 0.
                     * @return Offset Specifies the number of pages returned for this query. The default value is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Specifies the number of pages returned for this query. The default value is 0.
                     * @param _offset Specifies the number of pages returned for this query. The default value is 0.
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
                     * 获取Sorting field.
- createTime: sort by the creation time of the backup download task. The default value is createTime.
- finishTime: sort by the completion time of the backup download task.
                     * @return OrderBy Sorting field.
- createTime: sort by the creation time of the backup download task. The default value is createTime.
- finishTime: sort by the completion time of the backup download task.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field.
- createTime: sort by the creation time of the backup download task. The default value is createTime.
- finishTime: sort by the completion time of the backup download task.
                     * @param _orderBy Sorting field.
- createTime: sort by the creation time of the backup download task. The default value is createTime.
- finishTime: sort by the completion time of the backup download task.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting method.
- asc: ascending order.
- desc: descending order. The default value is desc.
                     * @return OrderByType Sorting method.
- asc: ascending order.
- desc: descending order. The default value is desc.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting method.
- asc: ascending order.
- desc: descending order. The default value is desc.
                     * @param _orderByType Sorting method.
- asc: ascending order.
- desc: descending order. The default value is desc.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the task status for filtering download tasks. If this parameter is not configured, tasks of all status types will be returned.
- 0: wait for execution.
- 1: downloading.
- 2: download completed.
- 3: download failed.
- 4: wait for retry.
                     * @return Status Specifies the task status for filtering download tasks. If this parameter is not configured, tasks of all status types will be returned.
- 0: wait for execution.
- 1: downloading.
- 2: download completed.
- 3: download failed.
- 4: wait for retry.
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置Specifies the task status for filtering download tasks. If this parameter is not configured, tasks of all status types will be returned.
- 0: wait for execution.
- 1: downloading.
- 2: download completed.
- 3: download failed.
- 4: wait for retry.
                     * @param _status Specifies the task status for filtering download tasks. If this parameter is not configured, tasks of all status types will be returned.
- 0: wait for execution.
- 1: downloading.
- 2: download completed.
- 3: download failed.
- 4: wait for retry.
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the backup file name for filtering download tasks of the specified file. The [DescribeDBBackups](https://www.tencentcloud.com/document/product/240/38574?from_cn_redirect=1) API can be called to obtain the backup file name.
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * Specifies the task within the query time range, and StartTime specifies the start time. If not specified, there are no limitations on the start time by default.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Specifies the task within the query time range, and EndTime specifies the end time. If not specified, there are no limitations on the end time by default.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Number of entries returned for this query. Value range: 1–100. The default value is 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Specifies the number of pages returned for this query. The default value is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting field.
- createTime: sort by the creation time of the backup download task. The default value is createTime.
- finishTime: sort by the completion time of the backup download task.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting method.
- asc: ascending order.
- desc: descending order. The default value is desc.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Specifies the task status for filtering download tasks. If this parameter is not configured, tasks of all status types will be returned.
- 0: wait for execution.
- 1: downloading.
- 2: download completed.
- 3: download failed.
- 4: wait for retry.
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPDOWNLOADTASKREQUEST_H_
