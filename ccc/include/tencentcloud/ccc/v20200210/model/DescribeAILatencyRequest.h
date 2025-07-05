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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAILATENCYREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAILATENCYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeAILatency request structure.
                */
                class DescribeAILatencyRequest : public AbstractModel
                {
                public:
                    DescribeAILatencyRequest();
                    ~DescribeAILatencyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取App ID (required), which can be viewed at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId App ID (required), which can be viewed at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置App ID (required), which can be viewed at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId App ID (required), which can be viewed at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Session ID.
                     * @return SessionId Session ID.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session ID.
                     * @param _sessionId Session ID.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Search start time.	
                     * @return StartTime Search start time.	
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Search start time.	
                     * @param _startTime Search start time.	
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取1737350008
                     * @return EndTime 1737350008
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置1737350008
                     * @param _endTime 1737350008
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * App ID (required), which can be viewed at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Session ID.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Search start time.	
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 1737350008
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAILATENCYREQUEST_H_
