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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SECTENDENCYEVENTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SECTENDENCYEVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeTendencyInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Trend information of security events at runtime
                */
                class SecTendencyEventInfo : public AbstractModel
                {
                public:
                    SecTendencyEventInfo();
                    ~SecTendencyEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of trends
                     * @return EventSet List of trends
                     */
                    std::vector<RunTimeTendencyInfo> GetEventSet() const;

                    /**
                     * 设置List of trends
                     * @param EventSet List of trends
                     */
                    void SetEventSet(const std::vector<RunTimeTendencyInfo>& _eventSet);

                    /**
                     * 判断参数 EventSet 是否已赋值
                     * @return EventSet 是否已赋值
                     */
                    bool EventSetHasBeenSet() const;

                    /**
                     * 获取Event type:
ET_ESCAPE: Container escape
ET_REVERSE_SHELL: Reverse shell
ET_RISK_SYSCALL: High-risk system calls
ET_ABNORMAL_PROCESS: Abnormal process
ET_ACCESS_CONTROL: File tampering
ET_VIRUS: Trojan event
ET_MALICIOUS_CONNECTION: Malicious connection event
                     * @return EventType Event type:
ET_ESCAPE: Container escape
ET_REVERSE_SHELL: Reverse shell
ET_RISK_SYSCALL: High-risk system calls
ET_ABNORMAL_PROCESS: Abnormal process
ET_ACCESS_CONTROL: File tampering
ET_VIRUS: Trojan event
ET_MALICIOUS_CONNECTION: Malicious connection event
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Event type:
ET_ESCAPE: Container escape
ET_REVERSE_SHELL: Reverse shell
ET_RISK_SYSCALL: High-risk system calls
ET_ABNORMAL_PROCESS: Abnormal process
ET_ACCESS_CONTROL: File tampering
ET_VIRUS: Trojan event
ET_MALICIOUS_CONNECTION: Malicious connection event
                     * @param EventType Event type:
ET_ESCAPE: Container escape
ET_REVERSE_SHELL: Reverse shell
ET_RISK_SYSCALL: High-risk system calls
ET_ABNORMAL_PROCESS: Abnormal process
ET_ACCESS_CONTROL: File tampering
ET_VIRUS: Trojan event
ET_MALICIOUS_CONNECTION: Malicious connection event
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                private:

                    /**
                     * List of trends
                     */
                    std::vector<RunTimeTendencyInfo> m_eventSet;
                    bool m_eventSetHasBeenSet;

                    /**
                     * Event type:
ET_ESCAPE: Container escape
ET_REVERSE_SHELL: Reverse shell
ET_RISK_SYSCALL: High-risk system calls
ET_ABNORMAL_PROCESS: Abnormal process
ET_ACCESS_CONTROL: File tampering
ET_VIRUS: Trojan event
ET_MALICIOUS_CONNECTION: Malicious connection event
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SECTENDENCYEVENTINFO_H_
