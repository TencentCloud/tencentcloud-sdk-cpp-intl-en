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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLELOGSRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLELOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/SampleLog.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeSampleLogs response structure.
                */
                class DescribeSampleLogsResponse : public AbstractModel
                {
                public:
                    DescribeSampleLogsResponse();
                    ~DescribeSampleLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of logs.
                     * @return Total Total number of logs.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Log context, used when loading more logs. Pass through the Context value returned last time to retrieve subsequent log content. The expiration time is 1 hour.
Note: This field may return null, indicating that no valid value is found.
                     * @return Context Log context, used when loading more logs. Pass through the Context value returned last time to retrieve subsequent log content. The expiration time is 1 hour.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Array of request logs.

Note: This field may return null, indicating that no valid value is found.
                     * @return SampleLogs Array of request logs.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<SampleLog> GetSampleLogs() const;

                    /**
                     * 判断参数 SampleLogs 是否已赋值
                     * @return SampleLogs 是否已赋值
                     * 
                     */
                    bool SampleLogsHasBeenSet() const;

                private:

                    /**
                     * Total number of logs.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Log context, used when loading more logs. Pass through the Context value returned last time to retrieve subsequent log content. The expiration time is 1 hour.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Array of request logs.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<SampleLog> m_sampleLogs;
                    bool m_sampleLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLELOGSRESPONSE_H_
