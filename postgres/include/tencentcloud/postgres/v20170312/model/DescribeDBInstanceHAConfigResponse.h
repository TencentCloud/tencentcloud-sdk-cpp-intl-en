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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCEHACONFIGRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCEHACONFIGRESPONSE_H_

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
                * DescribeDBInstanceHAConfig response structure.
                */
                class DescribeDBInstanceHAConfigResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceHAConfigResponse();
                    ~DescribeDBInstanceHAConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


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
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum delayed data volume of the high-availability standby server. the backup node can switchover to the primary node when its latency data volume is less than or equal to this value and its delay time is less than or equal to MaxStandbyLag.
<Li>Unit: byte</li>.
<Li>Value range: [1073741824, 322122547200]</li>.
                     * @return MaxStandbyLatency Specifies the maximum delayed data volume of the high-availability standby server. the backup node can switchover to the primary node when its latency data volume is less than or equal to this value and its delay time is less than or equal to MaxStandbyLag.
<Li>Unit: byte</li>.
<Li>Value range: [1073741824, 322122547200]</li>.
                     * 
                     */
                    uint64_t GetMaxStandbyLatency() const;

                    /**
                     * 判断参数 MaxStandbyLatency 是否已赋值
                     * @return MaxStandbyLatency 是否已赋值
                     * 
                     */
                    bool MaxStandbyLatencyHasBeenSet() const;

                    /**
                     * 获取Maximum delay time of the high-availability standby server. the secondary node can be switched to the primary node when the backup node latency is less than or equal to this value and the delayed data volume is less than or equal to MaxStandbyLatency.
<Li>Specifies the unit in seconds.</li>.
<Li>Parameter range: [5, 10].</li>.
                     * @return MaxStandbyLag Maximum delay time of the high-availability standby server. the secondary node can be switched to the primary node when the backup node latency is less than or equal to this value and the delayed data volume is less than or equal to MaxStandbyLatency.
<Li>Specifies the unit in seconds.</li>.
<Li>Parameter range: [5, 10].</li>.
                     * 
                     */
                    uint64_t GetMaxStandbyLag() const;

                    /**
                     * 判断参数 MaxStandbyLag 是否已赋值
                     * @return MaxStandbyLag 是否已赋值
                     * 
                     */
                    bool MaxStandbyLagHasBeenSet() const;

                    /**
                     * 获取Maximum data sync lag for standby server. If data lag of the standby node and the delay time are both less than or equals to the values of `MaxSyncStandbyLatency` and `MaxSyncStandbyLag` respectively, the standby server adopts semi-sync replication; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
This field returns null for async instance
and semi-sync (non-downgradable to async) instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxSyncStandbyLatency Maximum data sync lag for standby server. If data lag of the standby node and the delay time are both less than or equals to the values of `MaxSyncStandbyLatency` and `MaxSyncStandbyLag` respectively, the standby server adopts semi-sync replication; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
This field returns null for async instance
and semi-sync (non-downgradable to async) instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMaxSyncStandbyLatency() const;

                    /**
                     * 判断参数 MaxSyncStandbyLatency 是否已赋值
                     * @return MaxSyncStandbyLatency 是否已赋值
                     * 
                     */
                    bool MaxSyncStandbyLatencyHasBeenSet() const;

                    /**
                     * 获取Maximum sync delay time for standby server. If the delay time for standby server and the data lag are both less than or equals to the values of `MaxSyncStandbyLag` and `MaxSyncStandbyLatency` respectively, the standby server adopts sync replication mode; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
This field will not return for async instance
and semi-sync (non-downgradable to async) instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxSyncStandbyLag Maximum sync delay time for standby server. If the delay time for standby server and the data lag are both less than or equals to the values of `MaxSyncStandbyLag` and `MaxSyncStandbyLatency` respectively, the standby server adopts sync replication mode; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
This field will not return for async instance
and semi-sync (non-downgradable to async) instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMaxSyncStandbyLag() const;

                    /**
                     * 判断参数 MaxSyncStandbyLag 是否已赋值
                     * @return MaxSyncStandbyLag 是否已赋值
                     * 
                     */
                    bool MaxSyncStandbyLagHasBeenSet() const;

                private:

                    /**
                     * Primary-Standby sync mode.
<Li>Semi-Sync: semi-sync</li>.
<Li>Async: asynchronous</li>.
                     */
                    std::string m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * Specifies the maximum delayed data volume of the high-availability standby server. the backup node can switchover to the primary node when its latency data volume is less than or equal to this value and its delay time is less than or equal to MaxStandbyLag.
<Li>Unit: byte</li>.
<Li>Value range: [1073741824, 322122547200]</li>.
                     */
                    uint64_t m_maxStandbyLatency;
                    bool m_maxStandbyLatencyHasBeenSet;

                    /**
                     * Maximum delay time of the high-availability standby server. the secondary node can be switched to the primary node when the backup node latency is less than or equal to this value and the delayed data volume is less than or equal to MaxStandbyLatency.
<Li>Specifies the unit in seconds.</li>.
<Li>Parameter range: [5, 10].</li>.
                     */
                    uint64_t m_maxStandbyLag;
                    bool m_maxStandbyLagHasBeenSet;

                    /**
                     * Maximum data sync lag for standby server. If data lag of the standby node and the delay time are both less than or equals to the values of `MaxSyncStandbyLatency` and `MaxSyncStandbyLag` respectively, the standby server adopts semi-sync replication; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
This field returns null for async instance
and semi-sync (non-downgradable to async) instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxSyncStandbyLatency;
                    bool m_maxSyncStandbyLatencyHasBeenSet;

                    /**
                     * Maximum sync delay time for standby server. If the delay time for standby server and the data lag are both less than or equals to the values of `MaxSyncStandbyLag` and `MaxSyncStandbyLatency` respectively, the standby server adopts sync replication mode; if not, it adopts async replication.
This value is only valid for the instance with `SyncMode` set to `Semi-sync`.
This field will not return for async instance
and semi-sync (non-downgradable to async) instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxSyncStandbyLag;
                    bool m_maxSyncStandbyLagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCEHACONFIGRESPONSE_H_
