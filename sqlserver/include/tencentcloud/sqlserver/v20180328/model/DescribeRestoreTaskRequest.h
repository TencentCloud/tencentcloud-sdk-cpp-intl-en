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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBERESTORETASKREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBERESTORETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeRestoreTask request structure.
                */
                class DescribeRestoreTaskRequest : public AbstractModel
                {
                public:
                    DescribeRestoreTaskRequest();
                    ~DescribeRestoreTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Source Instance ID.
                     * @return InstanceId Source Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Source Instance ID.
                     * @param _instanceId Source Instance ID.
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
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
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
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
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
                     * 获取Rollback method. 0 - roll back by time point; 1 - roll back by backup set.
                     * @return RestoreType Rollback method. 0 - roll back by time point; 1 - roll back by backup set.
                     * 
                     */
                    uint64_t GetRestoreType() const;

                    /**
                     * 设置Rollback method. 0 - roll back by time point; 1 - roll back by backup set.
                     * @param _restoreType Rollback method. 0 - roll back by time point; 1 - roll back by backup set.
                     * 
                     */
                    void SetRestoreType(const uint64_t& _restoreType);

                    /**
                     * 判断参数 RestoreType 是否已赋值
                     * @return RestoreType 是否已赋值
                     * 
                     */
                    bool RestoreTypeHasBeenSet() const;

                    /**
                     * 获取Region where the target instance is located for rollback.
                     * @return TargetRegion Region where the target instance is located for rollback.
                     * 
                     */
                    std::string GetTargetRegion() const;

                    /**
                     * 设置Region where the target instance is located for rollback.
                     * @param _targetRegion Region where the target instance is located for rollback.
                     * 
                     */
                    void SetTargetRegion(const std::string& _targetRegion);

                    /**
                     * 判断参数 TargetRegion 是否已赋值
                     * @return TargetRegion 是否已赋值
                     * 
                     */
                    bool TargetRegionHasBeenSet() const;

                    /**
                     * 获取Type of the target instance for rollback. 0 - current instance; 1 - existing instance; 2 - new instance.
                     * @return TargetType Type of the target instance for rollback. 0 - current instance; 1 - existing instance; 2 - new instance.
                     * 
                     */
                    uint64_t GetTargetType() const;

                    /**
                     * 设置Type of the target instance for rollback. 0 - current instance; 1 - existing instance; 2 - new instance.
                     * @param _targetType Type of the target instance for rollback. 0 - current instance; 1 - existing instance; 2 - new instance.
                     * 
                     */
                    void SetTargetType(const uint64_t& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Rollback status, 0: initialized; 1: running; 2: successful; 3: failed.
                     * @return Status Rollback status, 0: initialized; 1: running; 2: successful; 3: failed.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Rollback status, 0: initialized; 1: running; 2: successful; 3: failed.
                     * @param _status Rollback status, 0: initialized; 1: running; 2: successful; 3: failed.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
                     * @return Offset The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
                     * @param _offset The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
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
                     * 获取Page number in pagination mode. The default value is 0.
                     * @return Limit Page number in pagination mode. The default value is 0.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Page number in pagination mode. The default value is 0.
                     * @param _limit Page number in pagination mode. The default value is 0.
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
                     * 获取Sorting field. restoreTime - rollback time; startTime-task start time; endTime-task end time. By default, the results are sorted in descending order by task start time.
                     * @return OrderBy Sorting field. restoreTime - rollback time; startTime-task start time; endTime-task end time. By default, the results are sorted in descending order by task start time.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. restoreTime - rollback time; startTime-task start time; endTime-task end time. By default, the results are sorted in descending order by task start time.
                     * @param _orderBy Sorting field. restoreTime - rollback time; startTime-task start time; endTime-task end time. By default, the results are sorted in descending order by task start time.
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
                     * 获取Sorting rule. desc - descending order; asc - ascending order. The default value is desc.
                     * @return OrderByType Sorting rule. desc - descending order; asc - ascending order. The default value is desc.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting rule. desc - descending order; asc - ascending order. The default value is desc.
                     * @param _orderByType Sorting rule. desc - descending order; asc - ascending order. The default value is desc.
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
                     * 获取Asynchronous rollback task ID.
                     * @return FlowId Asynchronous rollback task ID.
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置Asynchronous rollback task ID.
                     * @param _flowId Asynchronous rollback task ID.
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * Source Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Rollback method. 0 - roll back by time point; 1 - roll back by backup set.
                     */
                    uint64_t m_restoreType;
                    bool m_restoreTypeHasBeenSet;

                    /**
                     * Region where the target instance is located for rollback.
                     */
                    std::string m_targetRegion;
                    bool m_targetRegionHasBeenSet;

                    /**
                     * Type of the target instance for rollback. 0 - current instance; 1 - existing instance; 2 - new instance.
                     */
                    uint64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Rollback status, 0: initialized; 1: running; 2: successful; 3: failed.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page number in pagination mode. The default value is 0.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting field. restoreTime - rollback time; startTime-task start time; endTime-task end time. By default, the results are sorted in descending order by task start time.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting rule. desc - descending order; asc - ascending order. The default value is desc.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Asynchronous rollback task ID.
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBERESTORETASKREQUEST_H_
