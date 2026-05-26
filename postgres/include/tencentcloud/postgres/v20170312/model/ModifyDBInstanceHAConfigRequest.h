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
                     * 获取Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @return DBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @param _dBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
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
                     * 获取Primary-Standby sync mode.
<Li>Semi-Sync: semi-sync</li>.
<Li>Async: asynchronous</li>.

                     * @return SyncMode Primary-Standby sync mode.
<Li>Semi-Sync: semi-sync</li>.
<Li>Async: asynchronous</li>.

                     * 
                     */
                    std::string GetSyncMode() const;

                    /**
                     * 设置Primary-Standby sync mode.
<Li>Semi-Sync: semi-sync</li>.
<Li>Async: asynchronous</li>.

                     * @param _syncMode Primary-Standby sync mode.
<Li>Semi-Sync: semi-sync</li>.
<Li>Async: asynchronous</li>.

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
                     * 获取Maximum delayed data volume for high-availability standby server. switchover to primary node is allowed when backup node latency is less than or equal to this value and standby lag time is less than or equal to MaxStandbyLag.
<Li>Unit: byte.</li>.
<Li>Value range: [1073741824, 322122547200]</li>.
                     * @return MaxStandbyLatency Maximum delayed data volume for high-availability standby server. switchover to primary node is allowed when backup node latency is less than or equal to this value and standby lag time is less than or equal to MaxStandbyLag.
<Li>Unit: byte.</li>.
<Li>Value range: [1073741824, 322122547200]</li>.
                     * 
                     */
                    uint64_t GetMaxStandbyLatency() const;

                    /**
                     * 设置Maximum delayed data volume for high-availability standby server. switchover to primary node is allowed when backup node latency is less than or equal to this value and standby lag time is less than or equal to MaxStandbyLag.
<Li>Unit: byte.</li>.
<Li>Value range: [1073741824, 322122547200]</li>.
                     * @param _maxStandbyLatency Maximum delayed data volume for high-availability standby server. switchover to primary node is allowed when backup node latency is less than or equal to this value and standby lag time is less than or equal to MaxStandbyLag.
<Li>Unit: byte.</li>.
<Li>Value range: [1073741824, 322122547200]</li>.
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
                     * 获取Maximum delay time for high-availability standby servers. a backup node can switchover to the primary node when its latency is less than or equal to this value and its data volume is less than or equal to MaxStandbyLatency.
<Li>Unit: s.</li>.
<Li>Value range: [5, 10]</li>.
                     * @return MaxStandbyLag Maximum delay time for high-availability standby servers. a backup node can switchover to the primary node when its latency is less than or equal to this value and its data volume is less than or equal to MaxStandbyLatency.
<Li>Unit: s.</li>.
<Li>Value range: [5, 10]</li>.
                     * 
                     */
                    uint64_t GetMaxStandbyLag() const;

                    /**
                     * 设置Maximum delay time for high-availability standby servers. a backup node can switchover to the primary node when its latency is less than or equal to this value and its data volume is less than or equal to MaxStandbyLatency.
<Li>Unit: s.</li>.
<Li>Value range: [5, 10]</li>.
                     * @param _maxStandbyLag Maximum delay time for high-availability standby servers. a backup node can switchover to the primary node when its latency is less than or equal to this value and its data volume is less than or equal to MaxStandbyLatency.
<Li>Unit: s.</li>.
<Li>Value range: [5, 10]</li>.
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
                     * Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Primary-Standby sync mode.
<Li>Semi-Sync: semi-sync</li>.
<Li>Async: asynchronous</li>.

                     */
                    std::string m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * Maximum delayed data volume for high-availability standby server. switchover to primary node is allowed when backup node latency is less than or equal to this value and standby lag time is less than or equal to MaxStandbyLag.
<Li>Unit: byte.</li>.
<Li>Value range: [1073741824, 322122547200]</li>.
                     */
                    uint64_t m_maxStandbyLatency;
                    bool m_maxStandbyLatencyHasBeenSet;

                    /**
                     * Maximum delay time for high-availability standby servers. a backup node can switchover to the primary node when its latency is less than or equal to this value and its data volume is less than or equal to MaxStandbyLatency.
<Li>Unit: s.</li>.
<Li>Value range: [5, 10]</li>.
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
