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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_SECURITYDYNAMIC_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_SECURITYDYNAMIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Security event message data.
                */
                class SecurityDynamic : public AbstractModel
                {
                public:
                    SecurityDynamic();
                    ~SecurityDynamic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CWP agent `UUID`.
                     * @return Uuid CWP agent `UUID`.
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP agent `UUID`.
                     * @param Uuid CWP agent `UUID`.
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Security event occurrence time.
                     * @return EventTime Security event occurrence time.
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置Security event occurrence time.
                     * @param EventTime Security event occurrence time.
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取Security event type.
<li>MALWARE: trojan event</li>
<li>NON_LOCAL_LOGIN: unusual login location</li>
<li>BRUTEATTACK_SUCCESS: brute force attack succeeded</li>
<li>VUL: vulnerability</li>
<li>BASELINE: security baseline</li>
                     * @return EventType Security event type.
<li>MALWARE: trojan event</li>
<li>NON_LOCAL_LOGIN: unusual login location</li>
<li>BRUTEATTACK_SUCCESS: brute force attack succeeded</li>
<li>VUL: vulnerability</li>
<li>BASELINE: security baseline</li>
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Security event type.
<li>MALWARE: trojan event</li>
<li>NON_LOCAL_LOGIN: unusual login location</li>
<li>BRUTEATTACK_SUCCESS: brute force attack succeeded</li>
<li>VUL: vulnerability</li>
<li>BASELINE: security baseline</li>
                     * @param EventType Security event type.
<li>MALWARE: trojan event</li>
<li>NON_LOCAL_LOGIN: unusual login location</li>
<li>BRUTEATTACK_SUCCESS: brute force attack succeeded</li>
<li>VUL: vulnerability</li>
<li>BASELINE: security baseline</li>
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Security event message.
                     * @return Message Security event message.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Security event message.
                     * @param Message Security event message.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Security event level.
<li>RISK: severe</li>
<li>HIGH: high</li>
<li>NORMAL: medium</li>
<li>LOW: low</li>
                     * @return SecurityLevel Security event level.
<li>RISK: severe</li>
<li>HIGH: high</li>
<li>NORMAL: medium</li>
<li>LOW: low</li>
                     */
                    std::string GetSecurityLevel() const;

                    /**
                     * 设置Security event level.
<li>RISK: severe</li>
<li>HIGH: high</li>
<li>NORMAL: medium</li>
<li>LOW: low</li>
                     * @param SecurityLevel Security event level.
<li>RISK: severe</li>
<li>HIGH: high</li>
<li>NORMAL: medium</li>
<li>LOW: low</li>
                     */
                    void SetSecurityLevel(const std::string& _securityLevel);

                    /**
                     * 判断参数 SecurityLevel 是否已赋值
                     * @return SecurityLevel 是否已赋值
                     */
                    bool SecurityLevelHasBeenSet() const;

                private:

                    /**
                     * CWP agent `UUID`.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Security event occurrence time.
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * Security event type.
<li>MALWARE: trojan event</li>
<li>NON_LOCAL_LOGIN: unusual login location</li>
<li>BRUTEATTACK_SUCCESS: brute force attack succeeded</li>
<li>VUL: vulnerability</li>
<li>BASELINE: security baseline</li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Security event message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Security event level.
<li>RISK: severe</li>
<li>HIGH: high</li>
<li>NORMAL: medium</li>
<li>LOW: low</li>
                     */
                    std::string m_securityLevel;
                    bool m_securityLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_SECURITYDYNAMIC_H_
