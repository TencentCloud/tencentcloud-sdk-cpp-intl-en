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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICECALLBACKSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICECALLBACKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/URLNotice.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlarmNoticeCallbacks response structure.
                */
                class DescribeAlarmNoticeCallbacksResponse : public AbstractModel
                {
                public:
                    DescribeAlarmNoticeCallbacksResponse();
                    ~DescribeAlarmNoticeCallbacksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm callback notification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return URLNotices Alarm callback notification
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<URLNotice> GetURLNotices() const;

                    /**
                     * 判断参数 URLNotices 是否已赋值
                     * @return URLNotices 是否已赋值
                     * 
                     */
                    bool URLNoticesHasBeenSet() const;

                private:

                    /**
                     * Alarm callback notification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<URLNotice> m_uRLNotices;
                    bool m_uRLNoticesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICECALLBACKSRESPONSE_H_
