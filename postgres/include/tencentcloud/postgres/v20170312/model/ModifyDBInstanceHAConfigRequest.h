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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEHACONFIGREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEHACONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceHAConfig request structure.
                */
                class ModifyDBInstanceHAConfigRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceHAConfigRequest();
                    ~ModifyDBInstanceHAConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return DBInstanceId Instance ID
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _dBInstanceId Instance ID
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Primary-standby sync mode. Valid values:
<li>`Semi-sync`
<li>`Async`

                     * @return SyncMode Primary-standby sync mode. Valid values:
<li>`Semi-sync`
<li>`Async`

                     * 
                     */
                    std::string GetSyncMode() const;

                    /**
                     * 设置Primary-standby sync mode. Valid values:
<li>`Semi-sync`
<li>`Async`

                     * @param _syncMode Primary-standby sync mode. Valid values:
<li>`Semi-sync`
<li>`Async`

                     * 
                     */
                    void SetSyncMode(const std::string& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                    /**
                     * 获取Maximum data lag for high-availability standby server. The standby node can be promoted to the primary node when its data lag and the delay time are both less than the value of `MaxStandbyLatency` and `MaxStandbyLag` respectively.
<li>Unit: byte
<li>Value range: 1073741824-322122547200
                     * @return MaxStandbyLatency Maximum data lag for high-availability standby server. The standby node can be promoted to the primary node when its data lag and the delay time are both less than the value of `MaxStandbyLatency` and `MaxStandbyLag` respectively.
<li>Unit: byte
<li>Value range: 1073741824-322122547200
                     * 
                     */
                    uint64_t GetMaxStandbyLatency() const;

                    /**
                     * 设置Maximum data lag for high-availability standby server. The standby node can be promoted to the primary node when its data lag and the delay time are both less than the value of `MaxStandbyLatency` and `MaxStandbyLag` respectively.
<li>Unit: byte
<li>Value range: 1073741824-322122547200
                     * @param _maxStandbyLatency Maximum data lag for high-availability standby server. The standby node can be promoted to the primary node when its data lag and the delay time are both less than the value of `MaxStandbyLatency` and `MaxStandbyLag` respectively.
<li>Unit: byte
<li>Value range: 1073741824-322122547200
                     * 
                     */
                    void SetMaxStandbyLatency(const uint64_t& _maxStandbyLatency);

                    /**
                     * 判断参数 MaxStandbyLatency 是否已赋值
                     * @return MaxStandbyLatency 是否已赋值
                     * 
                     */
                    bool MaxStandbyLatencyHasBeenSet() const;

                    /**
                     * 获取The maximum delay for high-availability standby server The standby node can be promoted to the primary node when its data lag and the delay time are both less or equals to the value of `MaxStandbyLatency` and `MaxStandbyLag` respectively.
<li>Unit: s
<li>Value range: 5-10
                     * @return MaxStandbyLag The maximum delay for high-availability standby server The standby node can be promoted to the primary node when its data lag and the delay time are both less or equals to the value of `MaxStandbyLatency` and `MaxStandbyLag` respectively.
<li>Unit: s
<li>Value range: 5-10
                     * 
                     */
                    uint64_t GetMaxStandbyLag() const;

                    /**
                     * 设置The maximum delay for high-availability standby server The standby node can be promoted to the primary node when its data lag and the delay time are both less or equals to the value of `MaxStandbyLatency` and `MaxStandbyLag` respectively.
<li>Unit: s
<li>Value range: 5-10
                     * @param _maxStandbyLag The maximum delay for high-availability standby server The standby node can be promoted to the primary node when its data lag and the delay time are both less or equals to the value of `MaxStandbyLatency` and `MaxStandbyLag` respectively.
<li>Unit: s
<li>Value range: 5-10
                     * 
                     */
                    void SetMaxStandbyLag(const uint64_t& _maxStandbyLag);

                    /**
                     * 判断参数 MaxStandbyLag 是否已赋值
                     * @return MaxStandbyLag 是否已赋值
                     * 
                     */
                    bool MaxStandbyLagHasBeenSet() const;

                    /**
                     * 获取Maximum data sync lag for standby server. If data lag of the standby node and the delay ime are both less than or equals to the values of `MaxSyncStandbyLatency` and `MaxSyncStandbyLag`, the standby server adopts semi-sync replication; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
When the semi-sync replication mode of the instance is not allowed to downgrade to async replication, `MaxSyncStandbyLatency` and `MaxSyncStandbyLag` are not required.
When the semi-sync instance is allowed to downgrade to async replication, `MaxSyncStandbyLatency` is required and `MaxSyncStandbyLag` must be left empty for PostgreSQL 9; `MaxSyncStandbyLatency` and MaxSyncStandbyLag` are required for PostgreSQL 10 and later.
                     * @return MaxSyncStandbyLatency Maximum data sync lag for standby server. If data lag of the standby node and the delay ime are both less than or equals to the values of `MaxSyncStandbyLatency` and `MaxSyncStandbyLag`, the standby server adopts semi-sync replication; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
When the semi-sync replication mode of the instance is not allowed to downgrade to async replication, `MaxSyncStandbyLatency` and `MaxSyncStandbyLag` are not required.
When the semi-sync instance is allowed to downgrade to async replication, `MaxSyncStandbyLatency` is required and `MaxSyncStandbyLag` must be left empty for PostgreSQL 9; `MaxSyncStandbyLatency` and MaxSyncStandbyLag` are required for PostgreSQL 10 and later.
                     * 
                     */
                    uint64_t GetMaxSyncStandbyLatency() const;

                    /**
                     * 设置Maximum data sync lag for standby server. If data lag of the standby node and the delay ime are both less than or equals to the values of `MaxSyncStandbyLatency` and `MaxSyncStandbyLag`, the standby server adopts semi-sync replication; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
When the semi-sync replication mode of the instance is not allowed to downgrade to async replication, `MaxSyncStandbyLatency` and `MaxSyncStandbyLag` are not required.
When the semi-sync instance is allowed to downgrade to async replication, `MaxSyncStandbyLatency` is required and `MaxSyncStandbyLag` must be left empty for PostgreSQL 9; `MaxSyncStandbyLatency` and MaxSyncStandbyLag` are required for PostgreSQL 10 and later.
                     * @param _maxSyncStandbyLatency Maximum data sync lag for standby server. If data lag of the standby node and the delay ime are both less than or equals to the values of `MaxSyncStandbyLatency` and `MaxSyncStandbyLag`, the standby server adopts semi-sync replication; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
When the semi-sync replication mode of the instance is not allowed to downgrade to async replication, `MaxSyncStandbyLatency` and `MaxSyncStandbyLag` are not required.
When the semi-sync instance is allowed to downgrade to async replication, `MaxSyncStandbyLatency` is required and `MaxSyncStandbyLag` must be left empty for PostgreSQL 9; `MaxSyncStandbyLatency` and MaxSyncStandbyLag` are required for PostgreSQL 10 and later.
                     * 
                     */
                    void SetMaxSyncStandbyLatency(const uint64_t& _maxSyncStandbyLatency);

                    /**
                     * 判断参数 MaxSyncStandbyLatency 是否已赋值
                     * @return MaxSyncStandbyLatency 是否已赋值
                     * 
                     */
                    bool MaxSyncStandbyLatencyHasBeenSet() const;

                    /**
                     * 获取Maximum delay for sync standby server. If the delay time for standby server and the data lag are both less than or equals to the value of `MaxSyncStandbyLag` and `MaxSyncStandbyLatency` respectively, the standby server adopts sync replication mode; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
When the semi-sync replication mode of the instance is not allowed to downgrade to async replication, `MaxSyncStandbyLatency` and `MaxSyncStandbyLag` are not required.
When the semi-sync instance is allowed to downgrade to async replication, `MaxSyncStandbyLatency` is required and `MaxSyncStandbyLag` must be left empty for PostgreSQL 9; `MaxSyncStandbyLatency` and MaxSyncStandbyLag` are required for PostgreSQL 10 and later.
                     * @return MaxSyncStandbyLag Maximum delay for sync standby server. If the delay time for standby server and the data lag are both less than or equals to the value of `MaxSyncStandbyLag` and `MaxSyncStandbyLatency` respectively, the standby server adopts sync replication mode; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
When the semi-sync replication mode of the instance is not allowed to downgrade to async replication, `MaxSyncStandbyLatency` and `MaxSyncStandbyLag` are not required.
When the semi-sync instance is allowed to downgrade to async replication, `MaxSyncStandbyLatency` is required and `MaxSyncStandbyLag` must be left empty for PostgreSQL 9; `MaxSyncStandbyLatency` and MaxSyncStandbyLag` are required for PostgreSQL 10 and later.
                     * 
                     */
                    uint64_t GetMaxSyncStandbyLag() const;

                    /**
                     * 设置Maximum delay for sync standby server. If the delay time for standby server and the data lag are both less than or equals to the value of `MaxSyncStandbyLag` and `MaxSyncStandbyLatency` respectively, the standby server adopts sync replication mode; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
When the semi-sync replication mode of the instance is not allowed to downgrade to async replication, `MaxSyncStandbyLatency` and `MaxSyncStandbyLag` are not required.
When the semi-sync instance is allowed to downgrade to async replication, `MaxSyncStandbyLatency` is required and `MaxSyncStandbyLag` must be left empty for PostgreSQL 9; `MaxSyncStandbyLatency` and MaxSyncStandbyLag` are required for PostgreSQL 10 and later.
                     * @param _maxSyncStandbyLag Maximum delay for sync standby server. If the delay time for standby server and the data lag are both less than or equals to the value of `MaxSyncStandbyLag` and `MaxSyncStandbyLatency` respectively, the standby server adopts sync replication mode; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
When the semi-sync replication mode of the instance is not allowed to downgrade to async replication, `MaxSyncStandbyLatency` and `MaxSyncStandbyLag` are not required.
When the semi-sync instance is allowed to downgrade to async replication, `MaxSyncStandbyLatency` is required and `MaxSyncStandbyLag` must be left empty for PostgreSQL 9; `MaxSyncStandbyLatency` and MaxSyncStandbyLag` are required for PostgreSQL 10 and later.
                     * 
                     */
                    void SetMaxSyncStandbyLag(const uint64_t& _maxSyncStandbyLag);

                    /**
                     * 判断参数 MaxSyncStandbyLag 是否已赋值
                     * @return MaxSyncStandbyLag 是否已赋值
                     * 
                     */
                    bool MaxSyncStandbyLagHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Primary-standby sync mode. Valid values:
<li>`Semi-sync`
<li>`Async`

                     */
                    std::string m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * Maximum data lag for high-availability standby server. The standby node can be promoted to the primary node when its data lag and the delay time are both less than the value of `MaxStandbyLatency` and `MaxStandbyLag` respectively.
<li>Unit: byte
<li>Value range: 1073741824-322122547200
                     */
                    uint64_t m_maxStandbyLatency;
                    bool m_maxStandbyLatencyHasBeenSet;

                    /**
                     * The maximum delay for high-availability standby server The standby node can be promoted to the primary node when its data lag and the delay time are both less or equals to the value of `MaxStandbyLatency` and `MaxStandbyLag` respectively.
<li>Unit: s
<li>Value range: 5-10
                     */
                    uint64_t m_maxStandbyLag;
                    bool m_maxStandbyLagHasBeenSet;

                    /**
                     * Maximum data sync lag for standby server. If data lag of the standby node and the delay ime are both less than or equals to the values of `MaxSyncStandbyLatency` and `MaxSyncStandbyLag`, the standby server adopts semi-sync replication; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
When the semi-sync replication mode of the instance is not allowed to downgrade to async replication, `MaxSyncStandbyLatency` and `MaxSyncStandbyLag` are not required.
When the semi-sync instance is allowed to downgrade to async replication, `MaxSyncStandbyLatency` is required and `MaxSyncStandbyLag` must be left empty for PostgreSQL 9; `MaxSyncStandbyLatency` and MaxSyncStandbyLag` are required for PostgreSQL 10 and later.
                     */
                    uint64_t m_maxSyncStandbyLatency;
                    bool m_maxSyncStandbyLatencyHasBeenSet;

                    /**
                     * Maximum delay for sync standby server. If the delay time for standby server and the data lag are both less than or equals to the value of `MaxSyncStandbyLag` and `MaxSyncStandbyLatency` respectively, the standby server adopts sync replication mode; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
When the semi-sync replication mode of the instance is not allowed to downgrade to async replication, `MaxSyncStandbyLatency` and `MaxSyncStandbyLag` are not required.
When the semi-sync instance is allowed to downgrade to async replication, `MaxSyncStandbyLatency` is required and `MaxSyncStandbyLag` must be left empty for PostgreSQL 9; `MaxSyncStandbyLatency` and MaxSyncStandbyLag` are required for PostgreSQL 10 and later.
                     */
                    uint64_t m_maxSyncStandbyLag;
                    bool m_maxSyncStandbyLagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEHACONFIGREQUEST_H_
