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
                     * 获取DTS task ID.
                     * @return JobId DTS task ID.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取DTS task name.
                     * @return JobName DTS task name.
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Task status. 1: creating (Creating); 3: checking (Checking); 4: check successful (CheckPass); 5: check failed (CheckNotPass); 7: task running (Running); 8: preparation completed (ReadyComplete); 9: task successful (Success); 10: task failed (Failed); 11: stopping (Stopping); 12: completing (Completing).
                     * @return Status Task status. 1: creating (Creating); 3: checking (Checking); 4: check successful (CheckPass); 5: check failed (CheckNotPass); 7: task running (Running); 8: preparation completed (ReadyComplete); 9: task successful (Success); 10: task failed (Failed); 11: stopping (Stopping); 12: completing (Completing).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Status description.
                     * @return StatusDesc Status description.
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Synchronization delay. Unit: bytes.
                     * @return Offset Synchronization delay. Unit: bytes.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Disconnection time.
                     * @return CutDownTime Disconnection time.
                     * 
                     */
                    std::string GetCutDownTime() const;

                    /**
                     * 判断参数 CutDownTime 是否已赋值
                     * @return CutDownTime 是否已赋值
                     * 
                     */
                    bool CutDownTimeHasBeenSet() const;

                    /**
                     * 获取Source instance information.
                     * @return SrcInfo Source instance information.
                     * 
                     */
                    DescribeInstanceDTSInstanceInfo GetSrcInfo() const;

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取Destination instance information.
                     * @return DstInfo Destination instance information.
                     * 
                     */
                    DescribeInstanceDTSInstanceInfo GetDstInfo() const;

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     * 
                     */
                    bool DstInfoHasBeenSet() const;

                private:

                    /**
                     * DTS task ID.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * DTS task name.
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Task status. 1: creating (Creating); 3: checking (Checking); 4: check successful (CheckPass); 5: check failed (CheckNotPass); 7: task running (Running); 8: preparation completed (ReadyComplete); 9: task successful (Success); 10: task failed (Failed); 11: stopping (Stopping); 12: completing (Completing).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status description.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Synchronization delay. Unit: bytes.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Disconnection time.
                     */
                    std::string m_cutDownTime;
                    bool m_cutDownTimeHasBeenSet;

                    /**
                     * Source instance information.
                     */
                    DescribeInstanceDTSInstanceInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * Destination instance information.
                     */
                    DescribeInstanceDTSInstanceInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDTSINFORESPONSE_H_
