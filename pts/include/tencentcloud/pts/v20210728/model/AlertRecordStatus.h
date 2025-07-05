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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORDSTATUS_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORDSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Status of alert history record
                */
                class AlertRecordStatus : public AbstractModel
                {
                public:
                    AlertRecordStatus();
                    ~AlertRecordStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Success or failure of stopping performance test job.

Note: This field may return null, indicating that no valid value is found.
                     * @return AbortJob Success or failure of stopping performance test job.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    uint64_t GetAbortJob() const;

                    /**
                     * 设置Success or failure of stopping performance test job.

Note: This field may return null, indicating that no valid value is found.
                     * @param _abortJob Success or failure of stopping performance test job.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAbortJob(const uint64_t& _abortJob);

                    /**
                     * 判断参数 AbortJob 是否已赋值
                     * @return AbortJob 是否已赋值
                     * 
                     */
                    bool AbortJobHasBeenSet() const;

                    /**
                     * 获取Success or failure of sending alert notification.

Note: This field may return null, indicating that no valid value is found.
                     * @return SendNotice Success or failure of sending alert notification.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    uint64_t GetSendNotice() const;

                    /**
                     * 设置Success or failure of sending alert notification.

Note: This field may return null, indicating that no valid value is found.
                     * @param _sendNotice Success or failure of sending alert notification.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetSendNotice(const uint64_t& _sendNotice);

                    /**
                     * 判断参数 SendNotice 是否已赋值
                     * @return SendNotice 是否已赋值
                     * 
                     */
                    bool SendNoticeHasBeenSet() const;

                private:

                    /**
                     * Success or failure of stopping performance test job.

Note: This field may return null, indicating that no valid value is found.
                     */
                    uint64_t m_abortJob;
                    bool m_abortJobHasBeenSet;

                    /**
                     * Success or failure of sending alert notification.

Note: This field may return null, indicating that no valid value is found.
                     */
                    uint64_t m_sendNotice;
                    bool m_sendNoticeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORDSTATUS_H_
