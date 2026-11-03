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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ALLOWACTIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ALLOWACTIONPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Additional parameter when the executed action is allow.

This parameter is used to specify the extra handling action taken by the system when a security rule is hit and the Allow action is executed.
Different handling actions are configured with different fixed parameter combinations. The system will determine the actually effective handling action type according to the configured parameter combination.
During the same release execution, only one handling action can be configured and made effective. Parameters for multiple handling actions cannot appear at the same time. Otherwise, it is deemed as an invalid configuration. If empty, the default release action is used.
AllowActionParameters supports the following additional handling actions: <li>Default: When AllowActionParameters is empty, immediately skip the remaining rules of the current security module and continue matching subsequent security modules.</li><li>Delayed release: Add response delay to the request and continue matching the remaining rules of the current module. Corresponding parameters: MinDelayTime, MaxDelayTime.</li>
                */
                class AllowActionParameters : public AbstractModel
                {
                public:
                    AllowActionParameters();
                    ~AllowActionParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Minimum delayed response time. When configured as 0s, it means no delay and direct response. Supported units: <li>s: second, value ranges from 0 to 5.</li>
                     * @return MinDelayTime Minimum delayed response time. When configured as 0s, it means no delay and direct response. Supported units: <li>s: second, value ranges from 0 to 5.</li>
                     * 
                     */
                    std::string GetMinDelayTime() const;

                    /**
                     * 设置Minimum delayed response time. When configured as 0s, it means no delay and direct response. Supported units: <li>s: second, value ranges from 0 to 5.</li>
                     * @param _minDelayTime Minimum delayed response time. When configured as 0s, it means no delay and direct response. Supported units: <li>s: second, value ranges from 0 to 5.</li>
                     * 
                     */
                    void SetMinDelayTime(const std::string& _minDelayTime);

                    /**
                     * 判断参数 MinDelayTime 是否已赋值
                     * @return MinDelayTime 是否已赋值
                     * 
                     */
                    bool MinDelayTimeHasBeenSet() const;

                    /**
                     * 获取Maximum delayed response time. Supported units: <li>s: seconds, value range: 5–10.</li>
                     * @return MaxDelayTime Maximum delayed response time. Supported units: <li>s: seconds, value range: 5–10.</li>
                     * 
                     */
                    std::string GetMaxDelayTime() const;

                    /**
                     * 设置Maximum delayed response time. Supported units: <li>s: seconds, value range: 5–10.</li>
                     * @param _maxDelayTime Maximum delayed response time. Supported units: <li>s: seconds, value range: 5–10.</li>
                     * 
                     */
                    void SetMaxDelayTime(const std::string& _maxDelayTime);

                    /**
                     * 判断参数 MaxDelayTime 是否已赋值
                     * @return MaxDelayTime 是否已赋值
                     * 
                     */
                    bool MaxDelayTimeHasBeenSet() const;

                private:

                    /**
                     * Minimum delayed response time. When configured as 0s, it means no delay and direct response. Supported units: <li>s: second, value ranges from 0 to 5.</li>
                     */
                    std::string m_minDelayTime;
                    bool m_minDelayTimeHasBeenSet;

                    /**
                     * Maximum delayed response time. Supported units: <li>s: seconds, value range: 5–10.</li>
                     */
                    std::string m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ALLOWACTIONPARAMETERS_H_
