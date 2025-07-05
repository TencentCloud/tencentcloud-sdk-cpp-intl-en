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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBETASKINFORESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBETASKINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/SubscribeRecordUserIds.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeTaskInfo response structure.
                */
                class DescribeTaskInfoResponse : public AbstractModel
                {
                public:
                    DescribeTaskInfoResponse();
                    ~DescribeTaskInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the ongoing task, which is returned from the `StartRecord` API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId ID of the ongoing task, which is returned from the `StartRecord` API.
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

                    /**
                     * 获取Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordMode Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRecordMode() const;

                    /**
                     * 判断参数 RecordMode 是否已赋值
                     * @return RecordMode 是否已赋值
                     * 
                     */
                    bool RecordModeHasBeenSet() const;

                    /**
                     * 获取Allowlist or blocklist for stream subscription.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubscribeRecordUserIds Allowlist or blocklist for stream subscription.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SubscribeRecordUserIds GetSubscribeRecordUserIds() const;

                    /**
                     * 判断参数 SubscribeRecordUserIds 是否已赋值
                     * @return SubscribeRecordUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeRecordUserIdsHasBeenSet() const;

                private:

                    /**
                     * ID of the ongoing task, which is returned from the `StartRecord` API.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_recordMode;
                    bool m_recordModeHasBeenSet;

                    /**
                     * Allowlist or blocklist for stream subscription.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SubscribeRecordUserIds m_subscribeRecordUserIds;
                    bool m_subscribeRecordUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBETASKINFORESPONSE_H_
