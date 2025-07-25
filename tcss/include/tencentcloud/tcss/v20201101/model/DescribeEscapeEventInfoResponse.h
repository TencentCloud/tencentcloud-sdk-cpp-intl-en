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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEESCAPEEVENTINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEESCAPEEVENTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/EscapeEventInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeEscapeEventInfo response structure.
                */
                class DescribeEscapeEventInfoResponse : public AbstractModel
                {
                public:
                    DescribeEscapeEventInfoResponse();
                    ~DescribeEscapeEventInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of escape events
                     * @return EventSet Array of escape events
                     * 
                     */
                    std::vector<EscapeEventInfo> GetEventSet() const;

                    /**
                     * 判断参数 EventSet 是否已赋值
                     * @return EventSet 是否已赋值
                     * 
                     */
                    bool EventSetHasBeenSet() const;

                    /**
                     * 获取Total number of events
                     * @return TotalCount Total number of events
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Array of escape events
                     */
                    std::vector<EscapeEventInfo> m_eventSet;
                    bool m_eventSetHasBeenSet;

                    /**
                     * Total number of events
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEESCAPEEVENTINFORESPONSE_H_
