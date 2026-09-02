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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENOTIFYAGENTOFFLINEDURATIONRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENOTIFYAGENTOFFLINEDURATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeNotifyAgentOfflineDuration response structure.
                */
                class DescribeNotifyAgentOfflineDurationResponse : public AbstractModel
                {
                public:
                    DescribeNotifyAgentOfflineDurationResponse();
                    ~DescribeNotifyAgentOfflineDurationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Offline duration: minute-level 20-50 m, step length 10; hour-level 1-24 h, step length 1</p>
                     * @return Duration <p>Offline duration: minute-level 20-50 m, step length 10; hour-level 1-24 h, step length 1</p>
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * <p>Offline duration: minute-level 20-50 m, step length 10; hour-level 1-24 h, step length 1</p>
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENOTIFYAGENTOFFLINEDURATIONRESPONSE_H_
