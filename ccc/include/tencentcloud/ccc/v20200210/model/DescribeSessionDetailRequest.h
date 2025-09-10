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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESESSIONDETAILREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESESSIONDETAILREQUEST_H_

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
                * DescribeSessionDetail request structure.
                */
                class DescribeSessionDetailRequest : public AbstractModel
                {
                public:
                    DescribeSessionDetailRequest();
                    ~DescribeSessionDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
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
                     * 获取Specifies the session id of the call.
                     * @return SessionId Specifies the session id of the call.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Specifies the session id of the call.
                     * @param _sessionId Specifies the session id of the call.
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
                     * 获取Start timestamp. Unix second-level timestamp. supports up to nearly 180 days.
                     * @return StartTimestamp Start timestamp. Unix second-level timestamp. supports up to nearly 180 days.
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置Start timestamp. Unix second-level timestamp. supports up to nearly 180 days.
                     * @param _startTimestamp Start timestamp. Unix second-level timestamp. supports up to nearly 180 days.
                     * 
                     */
                    void SetStartTimestamp(const int64_t& _startTimestamp);

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     * 
                     */
                    bool StartTimestampHasBeenSet() const;

                    /**
                     * 获取End timestamp, Unix second-level timestamp. the interval range between end time and start time is less than 90 days.
                     * @return EndTimestamp End timestamp, Unix second-level timestamp. the interval range between end time and start time is less than 90 days.
                     * 
                     */
                    int64_t GetEndTimestamp() const;

                    /**
                     * 设置End timestamp, Unix second-level timestamp. the interval range between end time and start time is less than 90 days.
                     * @param _endTimestamp End timestamp, Unix second-level timestamp. the interval range between end time and start time is less than 90 days.
                     * 
                     */
                    void SetEndTimestamp(const int64_t& _endTimestamp);

                    /**
                     * 判断参数 EndTimestamp 是否已赋值
                     * @return EndTimestamp 是否已赋值
                     * 
                     */
                    bool EndTimestampHasBeenSet() const;

                private:

                    /**
                     * App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Specifies the session id of the call.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Start timestamp. Unix second-level timestamp. supports up to nearly 180 days.
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * End timestamp, Unix second-level timestamp. the interval range between end time and start time is less than 90 days.
                     */
                    int64_t m_endTimestamp;
                    bool m_endTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESESSIONDETAILREQUEST_H_
