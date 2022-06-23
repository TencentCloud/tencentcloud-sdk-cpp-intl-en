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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDTSINFORESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDTSINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/DescribeInstanceDTSInstanceInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceDTSInfo response structure.
                */
                class DescribeInstanceDTSInfoResponse : public AbstractModel
                {
                public:
                    DescribeInstanceDTSInfoResponse();
                    ~DescribeInstanceDTSInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DTS task ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return JobId DTS task ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取DTS task name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return JobName DTS task name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetJobName() const;

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: 1 (Creating), 3 (Checking), 4 (CheckPass), 5 (CheckNotPass), 7 (Running), 8 (ReadyComplete), 9 (Success), 10 (Failed), 11 (Stopping), 12 (Completing)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status Task status. Valid values: 1 (Creating), 3 (Checking), 4 (CheckPass), 5 (CheckNotPass), 7 (Running), 8 (ReadyComplete), 9 (Success), 10 (Failed), 11 (Stopping), 12 (Completing)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Status description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StatusDesc Status description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Synchronization latency in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Offset Synchronization latency in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Disconnection time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CutDownTime Disconnection time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCutDownTime() const;

                    /**
                     * 判断参数 CutDownTime 是否已赋值
                     * @return CutDownTime 是否已赋值
                     */
                    bool CutDownTimeHasBeenSet() const;

                    /**
                     * 获取Source instance information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SrcInfo Source instance information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DescribeInstanceDTSInstanceInfo GetSrcInfo() const;

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取Target instance information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DstInfo Target instance information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DescribeInstanceDTSInstanceInfo GetDstInfo() const;

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     */
                    bool DstInfoHasBeenSet() const;

                private:

                    /**
                     * DTS task ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * DTS task name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Task status. Valid values: 1 (Creating), 3 (Checking), 4 (CheckPass), 5 (CheckNotPass), 7 (Running), 8 (ReadyComplete), 9 (Success), 10 (Failed), 11 (Stopping), 12 (Completing)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Synchronization latency in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Disconnection time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cutDownTime;
                    bool m_cutDownTimeHasBeenSet;

                    /**
                     * Source instance information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DescribeInstanceDTSInstanceInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * Target instance information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DescribeInstanceDTSInstanceInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDTSINFORESPONSE_H_
