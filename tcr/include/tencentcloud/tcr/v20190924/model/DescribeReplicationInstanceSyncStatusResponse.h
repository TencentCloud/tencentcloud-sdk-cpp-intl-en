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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/ReplicationLog.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeReplicationInstanceSyncStatus response structure.
                */
                class DescribeReplicationInstanceSyncStatusResponse : public AbstractModel
                {
                public:
                    DescribeReplicationInstanceSyncStatusResponse();
                    ~DescribeReplicationInstanceSyncStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Synchronization status
                     * @return ReplicationStatus Synchronization status
                     * 
                     */
                    std::string GetReplicationStatus() const;

                    /**
                     * 判断参数 ReplicationStatus 是否已赋值
                     * @return ReplicationStatus 是否已赋值
                     * 
                     */
                    bool ReplicationStatusHasBeenSet() const;

                    /**
                     * 获取Synchronization completion time
                     * @return ReplicationTime Synchronization completion time
                     * 
                     */
                    std::string GetReplicationTime() const;

                    /**
                     * 判断参数 ReplicationTime 是否已赋值
                     * @return ReplicationTime 是否已赋值
                     * 
                     */
                    bool ReplicationTimeHasBeenSet() const;

                    /**
                     * 获取Synchronization log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ReplicationLog Synchronization log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    ReplicationLog GetReplicationLog() const;

                    /**
                     * 判断参数 ReplicationLog 是否已赋值
                     * @return ReplicationLog 是否已赋值
                     * 
                     */
                    bool ReplicationLogHasBeenSet() const;

                private:

                    /**
                     * Synchronization status
                     */
                    std::string m_replicationStatus;
                    bool m_replicationStatusHasBeenSet;

                    /**
                     * Synchronization completion time
                     */
                    std::string m_replicationTime;
                    bool m_replicationTimeHasBeenSet;

                    /**
                     * Synchronization log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ReplicationLog m_replicationLog;
                    bool m_replicationLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSRESPONSE_H_
