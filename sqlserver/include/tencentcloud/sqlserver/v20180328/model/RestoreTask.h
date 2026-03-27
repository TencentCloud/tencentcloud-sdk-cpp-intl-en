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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTORETASK_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTORETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Rollback Task Record
                */
                class RestoreTask : public AbstractModel
                {
                public:
                    RestoreTask();
                    ~RestoreTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target Instance ID
                     * @return TargetInstanceId Target Instance ID
                     * 
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置Target Instance ID
                     * @param _targetInstanceId Target Instance ID
                     * 
                     */
                    void SetTargetInstanceId(const std::string& _targetInstanceId);

                    /**
                     * 判断参数 TargetInstanceId 是否已赋值
                     * @return TargetInstanceId 是否已赋值
                     * 
                     */
                    bool TargetInstanceIdHasBeenSet() const;

                    /**
                     * 获取Target Instance Name
                     * @return TargetInstanceName Target Instance Name
                     * 
                     */
                    std::string GetTargetInstanceName() const;

                    /**
                     * 设置Target Instance Name
                     * @param _targetInstanceName Target Instance Name
                     * 
                     */
                    void SetTargetInstanceName(const std::string& _targetInstanceName);

                    /**
                     * 判断参数 TargetInstanceName 是否已赋值
                     * @return TargetInstanceName 是否已赋值
                     * 
                     */
                    bool TargetInstanceNameHasBeenSet() const;

                    /**
                     * 获取Target Instance Status. Valid values:
1: Creating
2: Running
3: Restricted Running (primary/secondary switching)
4: Isolated
5: Recycling
6: Recycled
7: Task Executing (instance backup, rollback, etc.)
8: Offline
9: Instance Scaling
10: Instance Migrating
11: Read-Only
12: Restarting
                     * @return TargetInstanceStatus Target Instance Status. Valid values:
1: Creating
2: Running
3: Restricted Running (primary/secondary switching)
4: Isolated
5: Recycling
6: Recycled
7: Task Executing (instance backup, rollback, etc.)
8: Offline
9: Instance Scaling
10: Instance Migrating
11: Read-Only
12: Restarting
                     * 
                     */
                    int64_t GetTargetInstanceStatus() const;

                    /**
                     * 设置Target Instance Status. Valid values:
1: Creating
2: Running
3: Restricted Running (primary/secondary switching)
4: Isolated
5: Recycling
6: Recycled
7: Task Executing (instance backup, rollback, etc.)
8: Offline
9: Instance Scaling
10: Instance Migrating
11: Read-Only
12: Restarting
                     * @param _targetInstanceStatus Target Instance Status. Valid values:
1: Creating
2: Running
3: Restricted Running (primary/secondary switching)
4: Isolated
5: Recycling
6: Recycled
7: Task Executing (instance backup, rollback, etc.)
8: Offline
9: Instance Scaling
10: Instance Migrating
11: Read-Only
12: Restarting
                     * 
                     */
                    void SetTargetInstanceStatus(const int64_t& _targetInstanceStatus);

                    /**
                     * 判断参数 TargetInstanceStatus 是否已赋值
                     * @return TargetInstanceStatus 是否已赋值
                     * 
                     */
                    bool TargetInstanceStatusHasBeenSet() const;

                    /**
                     * 获取Target Instance Region
                     * @return TargetRegion Target Instance Region
                     * 
                     */
                    std::string GetTargetRegion() const;

                    /**
                     * 设置Target Instance Region
                     * @param _targetRegion Target Instance Region
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
                     * 获取Rollback Record ID
                     * @return RestoreId Rollback Record ID
                     * 
                     */
                    int64_t GetRestoreId() const;

                    /**
                     * 设置Rollback Record ID
                     * @param _restoreId Rollback Record ID
                     * 
                     */
                    void SetRestoreId(const int64_t& _restoreId);

                    /**
                     * 判断参数 RestoreId 是否已赋值
                     * @return RestoreId 是否已赋值
                     * 
                     */
                    bool RestoreIdHasBeenSet() const;

                    /**
                     * 获取Restoration target instance type: 0 - current instance, 1 - existing instance, 2 - new instance
                     * @return TargetType Restoration target instance type: 0 - current instance, 1 - existing instance, 2 - new instance
                     * 
                     */
                    int64_t GetTargetType() const;

                    /**
                     * 设置Restoration target instance type: 0 - current instance, 1 - existing instance, 2 - new instance
                     * @param _targetType Restoration target instance type: 0 - current instance, 1 - existing instance, 2 - new instance
                     * 
                     */
                    void SetTargetType(const int64_t& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Rollback method: 0 - by point-in-time, 1 - by backup set
                     * @return RestoreType Rollback method: 0 - by point-in-time, 1 - by backup set
                     * 
                     */
                    int64_t GetRestoreType() const;

                    /**
                     * 设置Rollback method: 0 - by point-in-time, 1 - by backup set
                     * @param _restoreType Rollback method: 0 - by point-in-time, 1 - by backup set
                     * 
                     */
                    void SetRestoreType(const int64_t& _restoreType);

                    /**
                     * 判断参数 RestoreType 是否已赋值
                     * @return RestoreType 是否已赋值
                     * 
                     */
                    bool RestoreTypeHasBeenSet() const;

                    /**
                     * 获取Rollback Target Time
                     * @return RestoreTime Rollback Target Time
                     * 
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置Rollback Target Time
                     * @param _restoreTime Rollback Target Time
                     * 
                     */
                    void SetRestoreTime(const std::string& _restoreTime);

                    /**
                     * 判断参数 RestoreTime 是否已赋值
                     * @return RestoreTime 是否已赋值
                     * 
                     */
                    bool RestoreTimeHasBeenSet() const;

                    /**
                     * 获取Start Time
                     * @return StartTime Start Time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start Time
                     * @param _startTime Start Time
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
                     * 获取End Time
                     * @return EndTime End Time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End Time
                     * @param _endTime End Time
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
                     * 获取Rollback status: 0 - Initialization, 1 - Running, 2 - Success, 3 - Failure
                     * @return Status Rollback status: 0 - Initialization, 1 - Running, 2 - Success, 3 - Failure
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Rollback status: 0 - Initialization, 1 - Running, 2 - Success, 3 - Failure
                     * @param _status Rollback status: 0 - Initialization, 1 - Running, 2 - Success, 3 - Failure
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Rollback Asynchronous Task ID
                     * @return FlowId Rollback Asynchronous Task ID
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置Rollback Asynchronous Task ID
                     * @param _flowId Rollback Asynchronous Task ID
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
                     * Target Instance ID
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                    /**
                     * Target Instance Name
                     */
                    std::string m_targetInstanceName;
                    bool m_targetInstanceNameHasBeenSet;

                    /**
                     * Target Instance Status. Valid values:
1: Creating
2: Running
3: Restricted Running (primary/secondary switching)
4: Isolated
5: Recycling
6: Recycled
7: Task Executing (instance backup, rollback, etc.)
8: Offline
9: Instance Scaling
10: Instance Migrating
11: Read-Only
12: Restarting
                     */
                    int64_t m_targetInstanceStatus;
                    bool m_targetInstanceStatusHasBeenSet;

                    /**
                     * Target Instance Region
                     */
                    std::string m_targetRegion;
                    bool m_targetRegionHasBeenSet;

                    /**
                     * Rollback Record ID
                     */
                    int64_t m_restoreId;
                    bool m_restoreIdHasBeenSet;

                    /**
                     * Restoration target instance type: 0 - current instance, 1 - existing instance, 2 - new instance
                     */
                    int64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Rollback method: 0 - by point-in-time, 1 - by backup set
                     */
                    int64_t m_restoreType;
                    bool m_restoreTypeHasBeenSet;

                    /**
                     * Rollback Target Time
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

                    /**
                     * Start Time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End Time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Rollback status: 0 - Initialization, 1 - Running, 2 - Success, 3 - Failure
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Rollback Asynchronous Task ID
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTORETASK_H_
