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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECEVENTSTENDENCYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECEVENTSTENDENCYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/SecTendencyEventInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeSecEventsTendency response structure.
                */
                class DescribeSecEventsTendencyResponse : public AbstractModel
                {
                public:
                    DescribeSecEventsTendencyResponse();
                    ~DescribeSecEventsTendencyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of trends of security events at runtime
                     * @return EventTendencySet List of trends of security events at runtime
                     * 
                     */
                    std::vector<SecTendencyEventInfo> GetEventTendencySet() const;

                    /**
                     * 判断参数 EventTendencySet 是否已赋值
                     * @return EventTendencySet 是否已赋值
                     * 
                     */
                    bool EventTendencySetHasBeenSet() const;

                private:

                    /**
                     * List of trends of security events at runtime
                     */
                    std::vector<SecTendencyEventInfo> m_eventTendencySet;
                    bool m_eventTendencySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECEVENTSTENDENCYRESPONSE_H_
