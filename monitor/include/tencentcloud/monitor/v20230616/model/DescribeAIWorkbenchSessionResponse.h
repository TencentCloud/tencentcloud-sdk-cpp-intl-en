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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSESSIONRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSESSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/SessionInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeAIWorkbenchSession response structure.
                */
                class DescribeAIWorkbenchSessionResponse : public AbstractModel
                {
                public:
                    DescribeAIWorkbenchSessionResponse();
                    ~DescribeAIWorkbenchSessionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Session information</p>
                     * @return Session <p>Session information</p>
                     * 
                     */
                    SessionInfo GetSession() const;

                    /**
                     * 判断参数 Session 是否已赋值
                     * @return Session 是否已赋值
                     * 
                     */
                    bool SessionHasBeenSet() const;

                private:

                    /**
                     * <p>Session information</p>
                     */
                    SessionInfo m_session;
                    bool m_sessionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSESSIONRESPONSE_H_
