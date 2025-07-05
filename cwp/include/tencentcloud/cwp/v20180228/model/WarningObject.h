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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_WARNINGOBJECT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_WARNINGOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Parameters used to update alarms or inserted into alarms
                */
                class WarningObject : public AbstractModel
                {
                public:
                    WarningObject();
                    ~WarningObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event Alarm Type. 1: Offline; 2: Trojan; 3: Exceptional login; 4: Brute force; 5: Vulnerability (split into four types ranging from 9 to 12); 6: High-risk command; 7: Reverse sell; 8: Local privilege escalation;, 9: System component vulnerabilities; 10: Web application vulnerabilities; 11: Emergency vulnerabilities; 12: Security baseline; 14: Malicious request; 15: Network attack; 16: Windows system vulnerabilities; 17: Linux software vulnerabilities
                     * @return Type Event Alarm Type. 1: Offline; 2: Trojan; 3: Exceptional login; 4: Brute force; 5: Vulnerability (split into four types ranging from 9 to 12); 6: High-risk command; 7: Reverse sell; 8: Local privilege escalation;, 9: System component vulnerabilities; 10: Web application vulnerabilities; 11: Emergency vulnerabilities; 12: Security baseline; 14: Malicious request; 15: Network attack; 16: Windows system vulnerabilities; 17: Linux software vulnerabilities
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Event Alarm Type. 1: Offline; 2: Trojan; 3: Exceptional login; 4: Brute force; 5: Vulnerability (split into four types ranging from 9 to 12); 6: High-risk command; 7: Reverse sell; 8: Local privilege escalation;, 9: System component vulnerabilities; 10: Web application vulnerabilities; 11: Emergency vulnerabilities; 12: Security baseline; 14: Malicious request; 15: Network attack; 16: Windows system vulnerabilities; 17: Linux software vulnerabilities
                     * @param _type Event Alarm Type. 1: Offline; 2: Trojan; 3: Exceptional login; 4: Brute force; 5: Vulnerability (split into four types ranging from 9 to 12); 6: High-risk command; 7: Reverse sell; 8: Local privilege escalation;, 9: System component vulnerabilities; 10: Web application vulnerabilities; 11: Emergency vulnerabilities; 12: Security baseline; 14: Malicious request; 15: Network attack; 16: Windows system vulnerabilities; 17: Linux software vulnerabilities
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取1: disable alarm; 0: enable alarm.
                     * @return DisablePhoneWarning 1: disable alarm; 0: enable alarm.
                     * 
                     */
                    uint64_t GetDisablePhoneWarning() const;

                    /**
                     * 设置1: disable alarm; 0: enable alarm.
                     * @param _disablePhoneWarning 1: disable alarm; 0: enable alarm.
                     * 
                     */
                    void SetDisablePhoneWarning(const uint64_t& _disablePhoneWarning);

                    /**
                     * 判断参数 DisablePhoneWarning 是否已赋值
                     * @return DisablePhoneWarning 是否已赋值
                     * 
                     */
                    bool DisablePhoneWarningHasBeenSet() const;

                    /**
                     * 获取Start time. Format: HH:mm.
                     * @return BeginTime Start time. Format: HH:mm.
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Start time. Format: HH:mm.
                     * @param _beginTime Start time. Format: HH:mm.
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time. Format: HH:mm.
                     * @return EndTime End time. Format: HH:mm.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. Format: HH:mm.
                     * @param _endTime End time. Format: HH:mm.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取1. Vulnerability level control bits in binary. Each bit corresponds to the vulnerability level enabling status on the corresponding page. Level: low, medium, high (0: disabled; 1: enabled). Example: 101, indicating both the low and high levels are enabled. 2. Brute force cracking control bits in binary. 01: notify upon successful brute force cracking; 10: notify upon brute force cracking failure.
                     * @return ControlBits 1. Vulnerability level control bits in binary. Each bit corresponds to the vulnerability level enabling status on the corresponding page. Level: low, medium, high (0: disabled; 1: enabled). Example: 101, indicating both the low and high levels are enabled. 2. Brute force cracking control bits in binary. 01: notify upon successful brute force cracking; 10: notify upon brute force cracking failure.
                     * 
                     */
                    std::string GetControlBits() const;

                    /**
                     * 设置1. Vulnerability level control bits in binary. Each bit corresponds to the vulnerability level enabling status on the corresponding page. Level: low, medium, high (0: disabled; 1: enabled). Example: 101, indicating both the low and high levels are enabled. 2. Brute force cracking control bits in binary. 01: notify upon successful brute force cracking; 10: notify upon brute force cracking failure.
                     * @param _controlBits 1. Vulnerability level control bits in binary. Each bit corresponds to the vulnerability level enabling status on the corresponding page. Level: low, medium, high (0: disabled; 1: enabled). Example: 101, indicating both the low and high levels are enabled. 2. Brute force cracking control bits in binary. 01: notify upon successful brute force cracking; 10: notify upon brute force cracking failure.
                     * 
                     */
                    void SetControlBits(const std::string& _controlBits);

                    /**
                     * 判断参数 ControlBits 是否已赋值
                     * @return ControlBits 是否已赋值
                     * 
                     */
                    bool ControlBitsHasBeenSet() const;

                    /**
                     * 获取Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
                     * @return HostRange Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
                     * 
                     */
                    int64_t GetHostRange() const;

                    /**
                     * 设置Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
                     * @param _hostRange Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
                     * 
                     */
                    void SetHostRange(const int64_t& _hostRange);

                    /**
                     * 判断参数 HostRange 是否已赋值
                     * @return HostRange 是否已赋值
                     * 
                     */
                    bool HostRangeHasBeenSet() const;

                private:

                    /**
                     * Event Alarm Type. 1: Offline; 2: Trojan; 3: Exceptional login; 4: Brute force; 5: Vulnerability (split into four types ranging from 9 to 12); 6: High-risk command; 7: Reverse sell; 8: Local privilege escalation;, 9: System component vulnerabilities; 10: Web application vulnerabilities; 11: Emergency vulnerabilities; 12: Security baseline; 14: Malicious request; 15: Network attack; 16: Windows system vulnerabilities; 17: Linux software vulnerabilities
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 1: disable alarm; 0: enable alarm.
                     */
                    uint64_t m_disablePhoneWarning;
                    bool m_disablePhoneWarningHasBeenSet;

                    /**
                     * Start time. Format: HH:mm.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time. Format: HH:mm.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 1. Vulnerability level control bits in binary. Each bit corresponds to the vulnerability level enabling status on the corresponding page. Level: low, medium, high (0: disabled; 1: enabled). Example: 101, indicating both the low and high levels are enabled. 2. Brute force cracking control bits in binary. 01: notify upon successful brute force cracking; 10: notify upon brute force cracking failure.
                     */
                    std::string m_controlBits;
                    bool m_controlBitsHasBeenSet;

                    /**
                     * Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
                     */
                    int64_t m_hostRange;
                    bool m_hostRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_WARNINGOBJECT_H_
