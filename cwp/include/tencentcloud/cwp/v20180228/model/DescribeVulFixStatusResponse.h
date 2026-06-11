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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULFIXSTATUSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULFIXSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulFixStatusSnapshotInfo.h>
#include <tencentcloud/cwp/v20180228/model/VulFixStatusInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulFixStatus response structure.
                */
                class DescribeVulFixStatusResponse : public AbstractModel
                {
                public:
                    DescribeVulFixStatusResponse();
                    ~DescribeVulFixStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Fixing start time
                     * @return FixStartTime Fixing start time
                     * 
                     */
                    std::string GetFixStartTime() const;

                    /**
                     * 判断参数 FixStartTime 是否已赋值
                     * @return FixStartTime 是否已赋值
                     * 
                     */
                    bool FixStartTimeHasBeenSet() const;

                    /**
                     * 获取Fixing end time. If this parameter is left blank, fixing is not ended.
                     * @return FixEndTime Fixing end time. If this parameter is left blank, fixing is not ended.
                     * 
                     */
                    std::string GetFixEndTime() const;

                    /**
                     * 判断参数 FixEndTime 是否已赋值
                     * @return FixEndTime 是否已赋值
                     * 
                     */
                    bool FixEndTimeHasBeenSet() const;

                    /**
                     * 获取Number of successfully fixed hosts
                     * @return FixSuccessCnt Number of successfully fixed hosts
                     * 
                     */
                    uint64_t GetFixSuccessCnt() const;

                    /**
                     * 判断参数 FixSuccessCnt 是否已赋值
                     * @return FixSuccessCnt 是否已赋值
                     * 
                     */
                    bool FixSuccessCntHasBeenSet() const;

                    /**
                     * 获取Number of hosts failed to be fixed
                     * @return FixFailCnt Number of hosts failed to be fixed
                     * 
                     */
                    uint64_t GetFixFailCnt() const;

                    /**
                     * 判断参数 FixFailCnt 是否已赋值
                     * @return FixFailCnt 是否已赋值
                     * 
                     */
                    bool FixFailCntHasBeenSet() const;

                    /**
                     * 获取Total number of hosts
                     * @return HostCnt Total number of hosts
                     * 
                     */
                    uint64_t GetHostCnt() const;

                    /**
                     * 判断参数 HostCnt 是否已赋值
                     * @return HostCnt 是否已赋值
                     * 
                     */
                    bool HostCntHasBeenSet() const;

                    /**
                     * 获取Fixing task ID
                     * @return FixId Fixing task ID
                     * 
                     */
                    uint64_t GetFixId() const;

                    /**
                     * 判断参数 FixId 是否已赋值
                     * @return FixId 是否已赋值
                     * 
                     */
                    bool FixIdHasBeenSet() const;

                    /**
                     * 获取Status list of snapshots to be fixed
                     * @return SnapshotList Status list of snapshots to be fixed
                     * 
                     */
                    std::vector<VulFixStatusSnapshotInfo> GetSnapshotList() const;

                    /**
                     * 判断参数 SnapshotList 是否已赋值
                     * @return SnapshotList 是否已赋值
                     * 
                     */
                    bool SnapshotListHasBeenSet() const;

                    /**
                     * 获取Details list of vulnerabilities to be fixed
                     * @return VulFixList Details list of vulnerabilities to be fixed
                     * 
                     */
                    std::vector<VulFixStatusInfo> GetVulFixList() const;

                    /**
                     * 判断参数 VulFixList 是否已赋值
                     * @return VulFixList 是否已赋值
                     * 
                     */
                    bool VulFixListHasBeenSet() const;

                    /**
                     * 获取Snapshot creation progress (0-100)
                     * @return SnapshotProgress Snapshot creation progress (0-100)
                     * 
                     */
                    uint64_t GetSnapshotProgress() const;

                    /**
                     * 判断参数 SnapshotProgress 是否已赋值
                     * @return SnapshotProgress 是否已赋值
                     * 
                     */
                    bool SnapshotProgressHasBeenSet() const;

                    /**
                     * 获取Fixing progress (0-100).
                     * @return FixProgress Fixing progress (0-100).
                     * 
                     */
                    uint64_t GetFixProgress() const;

                    /**
                     * 判断参数 FixProgress 是否已赋值
                     * @return FixProgress 是否已赋值
                     * 
                     */
                    bool FixProgressHasBeenSet() const;

                    /**
                     * 获取Estimated remaining time (seconds)
                     * @return RemainingTime Estimated remaining time (seconds)
                     * 
                     */
                    uint64_t GetRemainingTime() const;

                    /**
                     * 判断参数 RemainingTime 是否已赋值
                     * @return RemainingTime 是否已赋值
                     * 
                     */
                    bool RemainingTimeHasBeenSet() const;

                    /**
                     * 获取Whether the snapshot is retried. 0: no; 1: yes.
                     * @return IsRetrySnapshot Whether the snapshot is retried. 0: no; 1: yes.
                     * 
                     */
                    uint64_t GetIsRetrySnapshot() const;

                    /**
                     * 判断参数 IsRetrySnapshot 是否已赋值
                     * @return IsRetrySnapshot 是否已赋值
                     * 
                     */
                    bool IsRetrySnapshotHasBeenSet() const;

                    /**
                     * 获取Snapshot creation failures
                     * @return SnapshotFailCnt Snapshot creation failures
                     * 
                     */
                    uint64_t GetSnapshotFailCnt() const;

                    /**
                     * 判断参数 SnapshotFailCnt 是否已赋值
                     * @return SnapshotFailCnt 是否已赋值
                     * 
                     */
                    bool SnapshotFailCntHasBeenSet() const;

                    /**
                     * 获取Whether to allow retry 0: not allowed 1: allowed
                     * @return IsAllowRetry Whether to allow retry 0: not allowed 1: allowed
                     * 
                     */
                    uint64_t GetIsAllowRetry() const;

                    /**
                     * 判断参数 IsAllowRetry 是否已赋值
                     * @return IsAllowRetry 是否已赋值
                     * 
                     */
                    bool IsAllowRetryHasBeenSet() const;

                private:

                    /**
                     * Fixing start time
                     */
                    std::string m_fixStartTime;
                    bool m_fixStartTimeHasBeenSet;

                    /**
                     * Fixing end time. If this parameter is left blank, fixing is not ended.
                     */
                    std::string m_fixEndTime;
                    bool m_fixEndTimeHasBeenSet;

                    /**
                     * Number of successfully fixed hosts
                     */
                    uint64_t m_fixSuccessCnt;
                    bool m_fixSuccessCntHasBeenSet;

                    /**
                     * Number of hosts failed to be fixed
                     */
                    uint64_t m_fixFailCnt;
                    bool m_fixFailCntHasBeenSet;

                    /**
                     * Total number of hosts
                     */
                    uint64_t m_hostCnt;
                    bool m_hostCntHasBeenSet;

                    /**
                     * Fixing task ID
                     */
                    uint64_t m_fixId;
                    bool m_fixIdHasBeenSet;

                    /**
                     * Status list of snapshots to be fixed
                     */
                    std::vector<VulFixStatusSnapshotInfo> m_snapshotList;
                    bool m_snapshotListHasBeenSet;

                    /**
                     * Details list of vulnerabilities to be fixed
                     */
                    std::vector<VulFixStatusInfo> m_vulFixList;
                    bool m_vulFixListHasBeenSet;

                    /**
                     * Snapshot creation progress (0-100)
                     */
                    uint64_t m_snapshotProgress;
                    bool m_snapshotProgressHasBeenSet;

                    /**
                     * Fixing progress (0-100).
                     */
                    uint64_t m_fixProgress;
                    bool m_fixProgressHasBeenSet;

                    /**
                     * Estimated remaining time (seconds)
                     */
                    uint64_t m_remainingTime;
                    bool m_remainingTimeHasBeenSet;

                    /**
                     * Whether the snapshot is retried. 0: no; 1: yes.
                     */
                    uint64_t m_isRetrySnapshot;
                    bool m_isRetrySnapshotHasBeenSet;

                    /**
                     * Snapshot creation failures
                     */
                    uint64_t m_snapshotFailCnt;
                    bool m_snapshotFailCntHasBeenSet;

                    /**
                     * Whether to allow retry 0: not allowed 1: allowed
                     */
                    uint64_t m_isAllowRetry;
                    bool m_isAllowRetryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULFIXSTATUSRESPONSE_H_
