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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBENORMALLOGSRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBENORMALLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/NormalLog.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeNormalLogs response structure.
                */
                class DescribeNormalLogsResponse : public AbstractModel
                {
                public:
                    DescribeNormalLogsResponse();
                    ~DescribeNormalLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


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
                     * 获取Array of logs.

Note: This field may return null, indicating that no valid value is found.
                     * @return NormalLogs Array of logs.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<NormalLog> GetNormalLogs() const;

                    /**
                     * 判断参数 NormalLogs 是否已赋值
                     * @return NormalLogs 是否已赋值
                     * 
                     */
                    bool NormalLogsHasBeenSet() const;

                private:

                    /**
                     * Log context, used when loading more logs. Pass through the Context value returned last time to retrieve subsequent log content. The expiration time is 1 hour.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Array of logs.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<NormalLog> m_normalLogs;
                    bool m_normalLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBENORMALLOGSRESPONSE_H_
