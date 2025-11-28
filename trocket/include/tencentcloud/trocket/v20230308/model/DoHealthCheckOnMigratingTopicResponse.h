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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DOHEALTHCHECKONMIGRATINGTOPICRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DOHEALTHCHECKONMIGRATINGTOPICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DoHealthCheckOnMigratingTopic response structure.
                */
                class DoHealthCheckOnMigratingTopicResponse : public AbstractModel
                {
                public:
                    DoHealthCheckOnMigratingTopicResponse();
                    ~DoHealthCheckOnMigratingTopicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to Pass		
                     * @return Passed Whether to Pass		
                     * 
                     */
                    bool GetPassed() const;

                    /**
                     * 判断参数 Passed 是否已赋值
                     * @return Passed 是否已赋值
                     * 
                     */
                    bool PassedHasBeenSet() const;

                    /**
                     * 获取Error information returned by health check.
NotChecked indicates the check is not executed. 
Unknown error. 
TopicNotImported. specifies the topic is not imported.
TopicNotExistsInSourceCluster specifies the topic does not exist in the source cluster. 
Topic does not exist in the target cluster. 
ConsumerConnectedOnTarget specifies whether consumer connections exist on the target cluster. 
SourceTopicHasNewMessagesIn5Minutes indicates that new messages were written to the source cluster topic in the last 5 minutes. 
TargetTopicHasNewMessagesIn5Minutes specifies whether new messages were written to the target cluster topic in the last 5 minutes. 
SourceTopicHasNoMessagesIn5Minutes specifies no new messages were written to the source cluster in the last 5 minutes. 
TargetTopicHasNoMessagesIn5Minutes specifies that no new messages were written to the source cluster in the last 5 minutes. 
Inconsistent number of subscription groups. 
SourceTopicHasUnconsumedMessages specifies that unconsumed messages exist in the source cluster topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Reason Error information returned by health check.
NotChecked indicates the check is not executed. 
Unknown error. 
TopicNotImported. specifies the topic is not imported.
TopicNotExistsInSourceCluster specifies the topic does not exist in the source cluster. 
Topic does not exist in the target cluster. 
ConsumerConnectedOnTarget specifies whether consumer connections exist on the target cluster. 
SourceTopicHasNewMessagesIn5Minutes indicates that new messages were written to the source cluster topic in the last 5 minutes. 
TargetTopicHasNewMessagesIn5Minutes specifies whether new messages were written to the target cluster topic in the last 5 minutes. 
SourceTopicHasNoMessagesIn5Minutes specifies no new messages were written to the source cluster in the last 5 minutes. 
TargetTopicHasNoMessagesIn5Minutes specifies that no new messages were written to the source cluster in the last 5 minutes. 
Inconsistent number of subscription groups. 
SourceTopicHasUnconsumedMessages specifies that unconsumed messages exist in the source cluster topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取List of error information returned by health check.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReasonList List of error information returned by health check.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetReasonList() const;

                    /**
                     * 判断参数 ReasonList 是否已赋值
                     * @return ReasonList 是否已赋值
                     * 
                     */
                    bool ReasonListHasBeenSet() const;

                private:

                    /**
                     * Whether to Pass		
                     */
                    bool m_passed;
                    bool m_passedHasBeenSet;

                    /**
                     * Error information returned by health check.
NotChecked indicates the check is not executed. 
Unknown error. 
TopicNotImported. specifies the topic is not imported.
TopicNotExistsInSourceCluster specifies the topic does not exist in the source cluster. 
Topic does not exist in the target cluster. 
ConsumerConnectedOnTarget specifies whether consumer connections exist on the target cluster. 
SourceTopicHasNewMessagesIn5Minutes indicates that new messages were written to the source cluster topic in the last 5 minutes. 
TargetTopicHasNewMessagesIn5Minutes specifies whether new messages were written to the target cluster topic in the last 5 minutes. 
SourceTopicHasNoMessagesIn5Minutes specifies no new messages were written to the source cluster in the last 5 minutes. 
TargetTopicHasNoMessagesIn5Minutes specifies that no new messages were written to the source cluster in the last 5 minutes. 
Inconsistent number of subscription groups. 
SourceTopicHasUnconsumedMessages specifies that unconsumed messages exist in the source cluster topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * List of error information returned by health check.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_reasonList;
                    bool m_reasonListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DOHEALTHCHECKONMIGRATINGTOPICRESPONSE_H_
