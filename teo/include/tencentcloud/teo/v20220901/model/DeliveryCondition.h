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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELIVERYCONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELIVERYCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/QueryCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Real-time log delivery conditions, used to define the scope of delivered logs. Multiple items in the `DeliveryCondition` array are in an "OR" relationship, and multiple items in the inner `Conditions` array are in an "AND" relationship.
                */
                class DeliveryCondition : public AbstractModel
                {
                public:
                    DeliveryCondition();
                    ~DeliveryCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Log filter conditions. The supported conditions are as follows:<ul><li>`EdgeResponseStatusCode`: filters by the status code that the EdgeOne node returns to the client.<ul><li>Supported operators: `equal`, `great`, `less`, `great_equal`, `less_equal`</li><li>Value range: any integer greater than or equal to 0</li></ul></li><li>`OriginResponseStatusCode`: filters by the status code returned by the origin server.<ul><li>Supported operators: `equal`, `great`, `less`, `great_equal`, `less_equal`</li><li>Value range: any integer greater than or equal to -1</li></ul></li><li>`SecurityAction`: filters by the final action taken after the request hits a security rule.<ul><li>Supported operators: `equal`</li><li>Valid values:<ul><li>`-`: unknown or no rule hit</li><li>`Monitor`: Monitor</li><li>`JSChallenge`: JavaScript Challenge</li><li>`Deny`: Deny</li><li>`Allow`: Allow</li><li>`BlockIP`: Block IP</li><li>`Redirect`: Redirect</li><li>`ReturnCustomPage`: Return custom page</li><li>`ManagedChallenge`: Managed Challenge</li><li>`Silence`: Silence</li><li>`LongDelay`: Respond after a long delay</li><li>`ShortDelay`: Respond after a short delay</li></ul></li></ul></li><li>`SecurityModule`: filters by the name of the security module that finally handled the request.<ul><li>Supported operators: `equal`</li><li>Valid values:<ul><li>`-`: unknown or no rule hit</li><li>`CustomRule`: Web Security - Custom Rules</li><li>`RateLimitingCustomRule`: Web Security - Rate Limiting Rules</li><li>`ManagedRule`: Web Security - Managed Rules</li><li>`L7DDoS`: Web Security - CC Attack Defense</li><li>`BotManagement`: Bot Management - Basic Bot Management</li><li>`BotClientReputation`: Bot Management - Client Reputation Analysis</li><li>`BotBehaviorAnalysis`: Bot Management - Intelligent Bot Analysis</li><li>`BotCustomRule`: Bot Management - Custom Bot Rules</li><li>`BotActiveDetection`: Bot Management - Active Detection</li></ul></li></ul></li></ul></p>
                     * @return Conditions <p>Log filter conditions. The supported conditions are as follows:<ul><li>`EdgeResponseStatusCode`: filters by the status code that the EdgeOne node returns to the client.<ul><li>Supported operators: `equal`, `great`, `less`, `great_equal`, `less_equal`</li><li>Value range: any integer greater than or equal to 0</li></ul></li><li>`OriginResponseStatusCode`: filters by the status code returned by the origin server.<ul><li>Supported operators: `equal`, `great`, `less`, `great_equal`, `less_equal`</li><li>Value range: any integer greater than or equal to -1</li></ul></li><li>`SecurityAction`: filters by the final action taken after the request hits a security rule.<ul><li>Supported operators: `equal`</li><li>Valid values:<ul><li>`-`: unknown or no rule hit</li><li>`Monitor`: Monitor</li><li>`JSChallenge`: JavaScript Challenge</li><li>`Deny`: Deny</li><li>`Allow`: Allow</li><li>`BlockIP`: Block IP</li><li>`Redirect`: Redirect</li><li>`ReturnCustomPage`: Return custom page</li><li>`ManagedChallenge`: Managed Challenge</li><li>`Silence`: Silence</li><li>`LongDelay`: Respond after a long delay</li><li>`ShortDelay`: Respond after a short delay</li></ul></li></ul></li><li>`SecurityModule`: filters by the name of the security module that finally handled the request.<ul><li>Supported operators: `equal`</li><li>Valid values:<ul><li>`-`: unknown or no rule hit</li><li>`CustomRule`: Web Security - Custom Rules</li><li>`RateLimitingCustomRule`: Web Security - Rate Limiting Rules</li><li>`ManagedRule`: Web Security - Managed Rules</li><li>`L7DDoS`: Web Security - CC Attack Defense</li><li>`BotManagement`: Bot Management - Basic Bot Management</li><li>`BotClientReputation`: Bot Management - Client Reputation Analysis</li><li>`BotBehaviorAnalysis`: Bot Management - Intelligent Bot Analysis</li><li>`BotCustomRule`: Bot Management - Custom Bot Rules</li><li>`BotActiveDetection`: Bot Management - Active Detection</li></ul></li></ul></li></ul></p>
                     * 
                     */
                    std::vector<QueryCondition> GetConditions() const;

                    /**
                     * 设置<p>Log filter conditions. The supported conditions are as follows:<ul><li>`EdgeResponseStatusCode`: filters by the status code that the EdgeOne node returns to the client.<ul><li>Supported operators: `equal`, `great`, `less`, `great_equal`, `less_equal`</li><li>Value range: any integer greater than or equal to 0</li></ul></li><li>`OriginResponseStatusCode`: filters by the status code returned by the origin server.<ul><li>Supported operators: `equal`, `great`, `less`, `great_equal`, `less_equal`</li><li>Value range: any integer greater than or equal to -1</li></ul></li><li>`SecurityAction`: filters by the final action taken after the request hits a security rule.<ul><li>Supported operators: `equal`</li><li>Valid values:<ul><li>`-`: unknown or no rule hit</li><li>`Monitor`: Monitor</li><li>`JSChallenge`: JavaScript Challenge</li><li>`Deny`: Deny</li><li>`Allow`: Allow</li><li>`BlockIP`: Block IP</li><li>`Redirect`: Redirect</li><li>`ReturnCustomPage`: Return custom page</li><li>`ManagedChallenge`: Managed Challenge</li><li>`Silence`: Silence</li><li>`LongDelay`: Respond after a long delay</li><li>`ShortDelay`: Respond after a short delay</li></ul></li></ul></li><li>`SecurityModule`: filters by the name of the security module that finally handled the request.<ul><li>Supported operators: `equal`</li><li>Valid values:<ul><li>`-`: unknown or no rule hit</li><li>`CustomRule`: Web Security - Custom Rules</li><li>`RateLimitingCustomRule`: Web Security - Rate Limiting Rules</li><li>`ManagedRule`: Web Security - Managed Rules</li><li>`L7DDoS`: Web Security - CC Attack Defense</li><li>`BotManagement`: Bot Management - Basic Bot Management</li><li>`BotClientReputation`: Bot Management - Client Reputation Analysis</li><li>`BotBehaviorAnalysis`: Bot Management - Intelligent Bot Analysis</li><li>`BotCustomRule`: Bot Management - Custom Bot Rules</li><li>`BotActiveDetection`: Bot Management - Active Detection</li></ul></li></ul></li></ul></p>
                     * @param _conditions <p>Log filter conditions. The supported conditions are as follows:<ul><li>`EdgeResponseStatusCode`: filters by the status code that the EdgeOne node returns to the client.<ul><li>Supported operators: `equal`, `great`, `less`, `great_equal`, `less_equal`</li><li>Value range: any integer greater than or equal to 0</li></ul></li><li>`OriginResponseStatusCode`: filters by the status code returned by the origin server.<ul><li>Supported operators: `equal`, `great`, `less`, `great_equal`, `less_equal`</li><li>Value range: any integer greater than or equal to -1</li></ul></li><li>`SecurityAction`: filters by the final action taken after the request hits a security rule.<ul><li>Supported operators: `equal`</li><li>Valid values:<ul><li>`-`: unknown or no rule hit</li><li>`Monitor`: Monitor</li><li>`JSChallenge`: JavaScript Challenge</li><li>`Deny`: Deny</li><li>`Allow`: Allow</li><li>`BlockIP`: Block IP</li><li>`Redirect`: Redirect</li><li>`ReturnCustomPage`: Return custom page</li><li>`ManagedChallenge`: Managed Challenge</li><li>`Silence`: Silence</li><li>`LongDelay`: Respond after a long delay</li><li>`ShortDelay`: Respond after a short delay</li></ul></li></ul></li><li>`SecurityModule`: filters by the name of the security module that finally handled the request.<ul><li>Supported operators: `equal`</li><li>Valid values:<ul><li>`-`: unknown or no rule hit</li><li>`CustomRule`: Web Security - Custom Rules</li><li>`RateLimitingCustomRule`: Web Security - Rate Limiting Rules</li><li>`ManagedRule`: Web Security - Managed Rules</li><li>`L7DDoS`: Web Security - CC Attack Defense</li><li>`BotManagement`: Bot Management - Basic Bot Management</li><li>`BotClientReputation`: Bot Management - Client Reputation Analysis</li><li>`BotBehaviorAnalysis`: Bot Management - Intelligent Bot Analysis</li><li>`BotCustomRule`: Bot Management - Custom Bot Rules</li><li>`BotActiveDetection`: Bot Management - Active Detection</li></ul></li></ul></li></ul></p>
                     * 
                     */
                    void SetConditions(const std::vector<QueryCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * <p>Log filter conditions. The supported conditions are as follows:<ul><li>`EdgeResponseStatusCode`: filters by the status code that the EdgeOne node returns to the client.<ul><li>Supported operators: `equal`, `great`, `less`, `great_equal`, `less_equal`</li><li>Value range: any integer greater than or equal to 0</li></ul></li><li>`OriginResponseStatusCode`: filters by the status code returned by the origin server.<ul><li>Supported operators: `equal`, `great`, `less`, `great_equal`, `less_equal`</li><li>Value range: any integer greater than or equal to -1</li></ul></li><li>`SecurityAction`: filters by the final action taken after the request hits a security rule.<ul><li>Supported operators: `equal`</li><li>Valid values:<ul><li>`-`: unknown or no rule hit</li><li>`Monitor`: Monitor</li><li>`JSChallenge`: JavaScript Challenge</li><li>`Deny`: Deny</li><li>`Allow`: Allow</li><li>`BlockIP`: Block IP</li><li>`Redirect`: Redirect</li><li>`ReturnCustomPage`: Return custom page</li><li>`ManagedChallenge`: Managed Challenge</li><li>`Silence`: Silence</li><li>`LongDelay`: Respond after a long delay</li><li>`ShortDelay`: Respond after a short delay</li></ul></li></ul></li><li>`SecurityModule`: filters by the name of the security module that finally handled the request.<ul><li>Supported operators: `equal`</li><li>Valid values:<ul><li>`-`: unknown or no rule hit</li><li>`CustomRule`: Web Security - Custom Rules</li><li>`RateLimitingCustomRule`: Web Security - Rate Limiting Rules</li><li>`ManagedRule`: Web Security - Managed Rules</li><li>`L7DDoS`: Web Security - CC Attack Defense</li><li>`BotManagement`: Bot Management - Basic Bot Management</li><li>`BotClientReputation`: Bot Management - Client Reputation Analysis</li><li>`BotBehaviorAnalysis`: Bot Management - Intelligent Bot Analysis</li><li>`BotCustomRule`: Bot Management - Custom Bot Rules</li><li>`BotActiveDetection`: Bot Management - Active Detection</li></ul></li></ul></li></ul></p>
                     */
                    std::vector<QueryCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELIVERYCONDITION_H_
