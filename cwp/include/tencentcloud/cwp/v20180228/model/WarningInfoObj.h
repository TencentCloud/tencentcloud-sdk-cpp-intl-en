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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_WARNINGINFOOBJ_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_WARNINGINFOOBJ_H_

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
                * List of alarm settings
                */
                class WarningInfoObj : public AbstractModel
                {
                public:
                    WarningInfoObj();
                    ~WarningInfoObj() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event alarm type. 1: offline; 2: Trojan; 3: abnormal log-in; 4: brute force cracking; 5: vulnerability (including types of values 9, 10, 11, and 12); 6: high-risk command; 7: reverse shell; 8: local privilege escalation; 9: application vulnerability; 10: web CMS vulnerability; 11: emergency vulnerability; 12: security baseline; 13: tampering prevention; 14: malicious request; 15: network attack; 16: Windows system vulnerability; 17: Linux software vulnerability; 18: core file monitoring; 19: client uninstallation; 20: client offline.
                     * @return Type Event alarm type. 1: offline; 2: Trojan; 3: abnormal log-in; 4: brute force cracking; 5: vulnerability (including types of values 9, 10, 11, and 12); 6: high-risk command; 7: reverse shell; 8: local privilege escalation; 9: application vulnerability; 10: web CMS vulnerability; 11: emergency vulnerability; 12: security baseline; 13: tampering prevention; 14: malicious request; 15: network attack; 16: Windows system vulnerability; 17: Linux software vulnerability; 18: core file monitoring; 19: client uninstallation; 20: client offline.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Event alarm type. 1: offline; 2: Trojan; 3: abnormal log-in; 4: brute force cracking; 5: vulnerability (including types of values 9, 10, 11, and 12); 6: high-risk command; 7: reverse shell; 8: local privilege escalation; 9: application vulnerability; 10: web CMS vulnerability; 11: emergency vulnerability; 12: security baseline; 13: tampering prevention; 14: malicious request; 15: network attack; 16: Windows system vulnerability; 17: Linux software vulnerability; 18: core file monitoring; 19: client uninstallation; 20: client offline.
                     * @param _type Event alarm type. 1: offline; 2: Trojan; 3: abnormal log-in; 4: brute force cracking; 5: vulnerability (including types of values 9, 10, 11, and 12); 6: high-risk command; 7: reverse shell; 8: local privilege escalation; 9: application vulnerability; 10: web CMS vulnerability; 11: emergency vulnerability; 12: security baseline; 13: tampering prevention; 14: malicious request; 15: network attack; 16: Windows system vulnerability; 17: Linux software vulnerability; 18: core file monitoring; 19: client uninstallation; 20: client offline.
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
                     * 获取1: disable alarm; 0: enable alarm
                     * @return DisablePhoneWarning 1: disable alarm; 0: enable alarm
                     * 
                     */
                    uint64_t GetDisablePhoneWarning() const;

                    /**
                     * 设置1: disable alarm; 0: enable alarm
                     * @param _disablePhoneWarning 1: disable alarm; 0: enable alarm
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
                     * 获取Time zone information
                     * @return TimeZone Time zone information
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置Time zone information
                     * @param _timeZone Time zone information
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取Vulnerability level control bit (corresponding to the decimal storage in the database)
                     * @return ControlBit Vulnerability level control bit (corresponding to the decimal storage in the database)
                     * 
                     */
                    uint64_t GetControlBit() const;

                    /**
                     * 设置Vulnerability level control bit (corresponding to the decimal storage in the database)
                     * @param _controlBit Vulnerability level control bit (corresponding to the decimal storage in the database)
                     * 
                     */
                    void SetControlBit(const uint64_t& _controlBit);

                    /**
                     * 判断参数 ControlBit 是否已赋值
                     * @return ControlBit 是否已赋值
                     * 
                     */
                    bool ControlBitHasBeenSet() const;

                    /**
                     * 获取Vulnerability level control bits in binary. Each bit indicates the enabling status of the corresponding vulnerability level on the page: low, medium, and high (0: disabled; 1: enabled). For example, 101 indicates that both low and high levels are enabled.
                     * @return ControlBits Vulnerability level control bits in binary. Each bit indicates the enabling status of the corresponding vulnerability level on the page: low, medium, and high (0: disabled; 1: enabled). For example, 101 indicates that both low and high levels are enabled.
                     * 
                     */
                    std::string GetControlBits() const;

                    /**
                     * 设置Vulnerability level control bits in binary. Each bit indicates the enabling status of the corresponding vulnerability level on the page: low, medium, and high (0: disabled; 1: enabled). For example, 101 indicates that both low and high levels are enabled.
                     * @param _controlBits Vulnerability level control bits in binary. Each bit indicates the enabling status of the corresponding vulnerability level on the page: low, medium, and high (0: disabled; 1: enabled). For example, 101 indicates that both low and high levels are enabled.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostRange Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHostRange() const;

                    /**
                     * 设置Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostRange Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostRange(const int64_t& _hostRange);

                    /**
                     * 判断参数 HostRange 是否已赋值
                     * @return HostRange 是否已赋值
                     * 
                     */
                    bool HostRangeHasBeenSet() const;

                    /**
                     * 获取Configured Number of Hosts in the Range of Alarm, used by the frontend to decide when to display prompt information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Count Configured Number of Hosts in the Range of Alarm, used by the frontend to decide when to display prompt information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Configured Number of Hosts in the Range of Alarm, used by the frontend to decide when to display prompt information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _count Configured Number of Hosts in the Range of Alarm, used by the frontend to decide when to display prompt information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Event alarm type. 1: offline; 2: Trojan; 3: abnormal log-in; 4: brute force cracking; 5: vulnerability (including types of values 9, 10, 11, and 12); 6: high-risk command; 7: reverse shell; 8: local privilege escalation; 9: application vulnerability; 10: web CMS vulnerability; 11: emergency vulnerability; 12: security baseline; 13: tampering prevention; 14: malicious request; 15: network attack; 16: Windows system vulnerability; 17: Linux software vulnerability; 18: core file monitoring; 19: client uninstallation; 20: client offline.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 1: disable alarm; 0: enable alarm
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
                     * Time zone information
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * Vulnerability level control bit (corresponding to the decimal storage in the database)
                     */
                    uint64_t m_controlBit;
                    bool m_controlBitHasBeenSet;

                    /**
                     * Vulnerability level control bits in binary. Each bit indicates the enabling status of the corresponding vulnerability level on the page: low, medium, and high (0: disabled; 1: enabled). For example, 101 indicates that both low and high levels are enabled.
                     */
                    std::string m_controlBits;
                    bool m_controlBitsHasBeenSet;

                    /**
                     * Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hostRange;
                    bool m_hostRangeHasBeenSet;

                    /**
                     * Configured Number of Hosts in the Range of Alarm, used by the frontend to decide when to display prompt information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_WARNINGINFOOBJ_H_
