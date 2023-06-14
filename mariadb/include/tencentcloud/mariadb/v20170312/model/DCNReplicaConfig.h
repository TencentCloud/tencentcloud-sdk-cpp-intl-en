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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNREPLICACONFIG_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNREPLICACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DCN configuration
                */
                class DCNReplicaConfig : public AbstractModel
                {
                public:
                    DCNReplicaConfig();
                    ~DCNReplicaConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DCN running status. Valid values: `START` (running), `STOP` (pause)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoReplicationMode DCN running status. Valid values: `START` (running), `STOP` (pause)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoReplicationMode() const;

                    /**
                     * 设置DCN running status. Valid values: `START` (running), `STOP` (pause)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roReplicationMode DCN running status. Valid values: `START` (running), `STOP` (pause)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoReplicationMode(const std::string& _roReplicationMode);

                    /**
                     * 判断参数 RoReplicationMode 是否已赋值
                     * @return RoReplicationMode 是否已赋值
                     * 
                     */
                    bool RoReplicationModeHasBeenSet() const;

                    /**
                     * 获取Delayed replication type. Valid values: `DEFAULT` (no delay), `DUE_TIME` (specified replication time)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DelayReplicationType Delayed replication type. Valid values: `DEFAULT` (no delay), `DUE_TIME` (specified replication time)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDelayReplicationType() const;

                    /**
                     * 设置Delayed replication type. Valid values: `DEFAULT` (no delay), `DUE_TIME` (specified replication time)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _delayReplicationType Delayed replication type. Valid values: `DEFAULT` (no delay), `DUE_TIME` (specified replication time)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDelayReplicationType(const std::string& _delayReplicationType);

                    /**
                     * 判断参数 DelayReplicationType 是否已赋值
                     * @return DelayReplicationType 是否已赋值
                     * 
                     */
                    bool DelayReplicationTypeHasBeenSet() const;

                    /**
                     * 获取Specified time for delayed replication
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DueTime Specified time for delayed replication
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDueTime() const;

                    /**
                     * 设置Specified time for delayed replication
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dueTime Specified time for delayed replication
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDueTime(const std::string& _dueTime);

                    /**
                     * 判断参数 DueTime 是否已赋值
                     * @return DueTime 是否已赋值
                     * 
                     */
                    bool DueTimeHasBeenSet() const;

                    /**
                     * 获取The number of seconds to delay the replication
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReplicationDelay The number of seconds to delay the replication
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetReplicationDelay() const;

                    /**
                     * 设置The number of seconds to delay the replication
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _replicationDelay The number of seconds to delay the replication
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReplicationDelay(const int64_t& _replicationDelay);

                    /**
                     * 判断参数 ReplicationDelay 是否已赋值
                     * @return ReplicationDelay 是否已赋值
                     * 
                     */
                    bool ReplicationDelayHasBeenSet() const;

                private:

                    /**
                     * DCN running status. Valid values: `START` (running), `STOP` (pause)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_roReplicationMode;
                    bool m_roReplicationModeHasBeenSet;

                    /**
                     * Delayed replication type. Valid values: `DEFAULT` (no delay), `DUE_TIME` (specified replication time)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_delayReplicationType;
                    bool m_delayReplicationTypeHasBeenSet;

                    /**
                     * Specified time for delayed replication
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dueTime;
                    bool m_dueTimeHasBeenSet;

                    /**
                     * The number of seconds to delay the replication
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_replicationDelay;
                    bool m_replicationDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DCNREPLICACONFIG_H_
