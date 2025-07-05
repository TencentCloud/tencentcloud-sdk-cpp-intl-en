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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SYNCASSETSCANRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SYNCASSETSCANRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * SyncAssetScan response structure.
                */
                class SyncAssetScanResponse : public AbstractModel
                {
                public:
                    SyncAssetScanResponse();
                    ~SyncAssetScanResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Enumeration values are (in uppercase): NOTASK (no synchronization task), SYNCING (synchronizing), and FINISHED (synchronization completed)
                     * @return State Enumeration values are (in uppercase): NOTASK (no synchronization task), SYNCING (synchronizing), and FINISHED (synchronization completed)
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Latest synchronization start time
                     * @return LatestStartTime Latest synchronization start time
                     * 
                     */
                    std::string GetLatestStartTime() const;

                    /**
                     * 判断参数 LatestStartTime 是否已赋值
                     * @return LatestStartTime 是否已赋值
                     * 
                     */
                    bool LatestStartTimeHasBeenSet() const;

                    /**
                     * 获取Last sync end time
                     * @return LatestEndTime Last sync end time
                     * 
                     */
                    std::string GetLatestEndTime() const;

                    /**
                     * 判断参数 LatestEndTime 是否已赋值
                     * @return LatestEndTime 是否已赋值
                     * 
                     */
                    bool LatestEndTimeHasBeenSet() const;

                    /**
                     * 获取Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Enumeration values are (in uppercase): NOTASK (no synchronization task), SYNCING (synchronizing), and FINISHED (synchronization completed)
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Latest synchronization start time
                     */
                    std::string m_latestStartTime;
                    bool m_latestStartTimeHasBeenSet;

                    /**
                     * Last sync end time
                     */
                    std::string m_latestEndTime;
                    bool m_latestEndTimeHasBeenSet;

                    /**
                     * Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SYNCASSETSCANRESPONSE_H_
