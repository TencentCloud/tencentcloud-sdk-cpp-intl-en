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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RECOVERBACKUPJOBREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RECOVERBACKUPJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/CosSourceInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * RecoverBackUpJob request structure.
                */
                class RecoverBackUpJobRequest : public AbstractModel
                {
                public:
                    RecoverBackUpJobRequest();
                    ~RecoverBackUpJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return InstanceId Cluster ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID
                     * @param _instanceId Cluster ID
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
                     * 获取Task ID
                     * @return BackUpJobId Task ID
                     * 
                     */
                    int64_t GetBackUpJobId() const;

                    /**
                     * 设置Task ID
                     * @param _backUpJobId Task ID
                     * 
                     */
                    void SetBackUpJobId(const int64_t& _backUpJobId);

                    /**
                     * 判断参数 BackUpJobId 是否已赋值
                     * @return BackUpJobId 是否已赋值
                     * 
                     */
                    bool BackUpJobIdHasBeenSet() const;

                    /**
                     * 获取Number of new table replicas recovered
                     * @return ReplicationNum Number of new table replicas recovered
                     * 
                     */
                    int64_t GetReplicationNum() const;

                    /**
                     * 设置Number of new table replicas recovered
                     * @param _replicationNum Number of new table replicas recovered
                     * 
                     */
                    void SetReplicationNum(const int64_t& _replicationNum);

                    /**
                     * 判断参数 ReplicationNum 是否已赋值
                     * @return ReplicationNum 是否已赋值
                     * 
                     */
                    bool ReplicationNumHasBeenSet() const;

                    /**
                     * 获取Whether to retain the configuration in the source table during recovery. 1 indicates that the configurations in the source table are retained.
                     * @return ReserveSourceConfig Whether to retain the configuration in the source table during recovery. 1 indicates that the configurations in the source table are retained.
                     * 
                     */
                    int64_t GetReserveSourceConfig() const;

                    /**
                     * 设置Whether to retain the configuration in the source table during recovery. 1 indicates that the configurations in the source table are retained.
                     * @param _reserveSourceConfig Whether to retain the configuration in the source table during recovery. 1 indicates that the configurations in the source table are retained.
                     * 
                     */
                    void SetReserveSourceConfig(const int64_t& _reserveSourceConfig);

                    /**
                     * 判断参数 ReserveSourceConfig 是否已赋值
                     * @return ReserveSourceConfig 是否已赋值
                     * 
                     */
                    bool ReserveSourceConfigHasBeenSet() const;

                    /**
                     * 获取0: default; 1: cos recovery
                     * @return RecoverType 0: default; 1: cos recovery
                     * 
                     */
                    int64_t GetRecoverType() const;

                    /**
                     * 设置0: default; 1: cos recovery
                     * @param _recoverType 0: default; 1: cos recovery
                     * 
                     */
                    void SetRecoverType(const int64_t& _recoverType);

                    /**
                     * 判断参数 RecoverType 是否已赋值
                     * @return RecoverType 是否已赋值
                     * 
                     */
                    bool RecoverTypeHasBeenSet() const;

                    /**
                     * 获取CosSourceInfo object
                     * @return CosSourceInfo CosSourceInfo object
                     * 
                     */
                    CosSourceInfo GetCosSourceInfo() const;

                    /**
                     * 设置CosSourceInfo object
                     * @param _cosSourceInfo CosSourceInfo object
                     * 
                     */
                    void SetCosSourceInfo(const CosSourceInfo& _cosSourceInfo);

                    /**
                     * 判断参数 CosSourceInfo 是否已赋值
                     * @return CosSourceInfo 是否已赋值
                     * 
                     */
                    bool CosSourceInfoHasBeenSet() const;

                    /**
                     * 获取0: default; 1: regular execution
                     * @return ScheduleType 0: default; 1: regular execution
                     * 
                     */
                    int64_t GetScheduleType() const;

                    /**
                     * 设置0: default; 1: regular execution
                     * @param _scheduleType 0: default; 1: regular execution
                     * 
                     */
                    void SetScheduleType(const int64_t& _scheduleType);

                    /**
                     * 判断参数 ScheduleType 是否已赋值
                     * @return ScheduleType 是否已赋值
                     * 
                     */
                    bool ScheduleTypeHasBeenSet() const;

                    /**
                     * 获取YY-MM-DD Hour : Minute : Second
                     * @return NextTime YY-MM-DD Hour : Minute : Second
                     * 
                     */
                    std::string GetNextTime() const;

                    /**
                     * 设置YY-MM-DD Hour : Minute : Second
                     * @param _nextTime YY-MM-DD Hour : Minute : Second
                     * 
                     */
                    void SetNextTime(const std::string& _nextTime);

                    /**
                     * 判断参数 NextTime 是否已赋值
                     * @return NextTime 是否已赋值
                     * 
                     */
                    bool NextTimeHasBeenSet() const;

                    /**
                     * 获取Scheduling name
                     * @return ScheduleName Scheduling name
                     * 
                     */
                    std::string GetScheduleName() const;

                    /**
                     * 设置Scheduling name
                     * @param _scheduleName Scheduling name
                     * 
                     */
                    void SetScheduleName(const std::string& _scheduleName);

                    /**
                     * 判断参数 ScheduleName 是否已赋值
                     * @return ScheduleName 是否已赋值
                     * 
                     */
                    bool ScheduleNameHasBeenSet() const;

                    /**
                     * 获取create update
                     * @return OperationType create update
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置create update
                     * @param _operationType create update
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取Recovery granularity: All, Database, and Table
                     * @return RecoverScope Recovery granularity: All, Database, and Table
                     * 
                     */
                    std::string GetRecoverScope() const;

                    /**
                     * 设置Recovery granularity: All, Database, and Table
                     * @param _recoverScope Recovery granularity: All, Database, and Table
                     * 
                     */
                    void SetRecoverScope(const std::string& _recoverScope);

                    /**
                     * 判断参数 RecoverScope 是否已赋值
                     * @return RecoverScope 是否已赋值
                     * 
                     */
                    bool RecoverScopeHasBeenSet() const;

                    /**
                     * 获取Recover database: If you back up by database, this field is required. Use commas to separate databases.
                     * @return RecoverDatabase Recover database: If you back up by database, this field is required. Use commas to separate databases.
                     * 
                     */
                    std::string GetRecoverDatabase() const;

                    /**
                     * 设置Recover database: If you back up by database, this field is required. Use commas to separate databases.
                     * @param _recoverDatabase Recover database: If you back up by database, this field is required. Use commas to separate databases.
                     * 
                     */
                    void SetRecoverDatabase(const std::string& _recoverDatabase);

                    /**
                     * 判断参数 RecoverDatabase 是否已赋值
                     * @return RecoverDatabase 是否已赋值
                     * 
                     */
                    bool RecoverDatabaseHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Task ID
                     */
                    int64_t m_backUpJobId;
                    bool m_backUpJobIdHasBeenSet;

                    /**
                     * Number of new table replicas recovered
                     */
                    int64_t m_replicationNum;
                    bool m_replicationNumHasBeenSet;

                    /**
                     * Whether to retain the configuration in the source table during recovery. 1 indicates that the configurations in the source table are retained.
                     */
                    int64_t m_reserveSourceConfig;
                    bool m_reserveSourceConfigHasBeenSet;

                    /**
                     * 0: default; 1: cos recovery
                     */
                    int64_t m_recoverType;
                    bool m_recoverTypeHasBeenSet;

                    /**
                     * CosSourceInfo object
                     */
                    CosSourceInfo m_cosSourceInfo;
                    bool m_cosSourceInfoHasBeenSet;

                    /**
                     * 0: default; 1: regular execution
                     */
                    int64_t m_scheduleType;
                    bool m_scheduleTypeHasBeenSet;

                    /**
                     * YY-MM-DD Hour : Minute : Second
                     */
                    std::string m_nextTime;
                    bool m_nextTimeHasBeenSet;

                    /**
                     * Scheduling name
                     */
                    std::string m_scheduleName;
                    bool m_scheduleNameHasBeenSet;

                    /**
                     * create update
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * Recovery granularity: All, Database, and Table
                     */
                    std::string m_recoverScope;
                    bool m_recoverScopeHasBeenSet;

                    /**
                     * Recover database: If you back up by database, this field is required. Use commas to separate databases.
                     */
                    std::string m_recoverDatabase;
                    bool m_recoverDatabaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RECOVERBACKUPJOBREQUEST_H_
