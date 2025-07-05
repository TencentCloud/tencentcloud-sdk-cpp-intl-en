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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_WARNINGRULE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_WARNINGRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Alert configuration policy
                */
                class WarningRule : public AbstractModel
                {
                public:
                    WarningRule();
                    ~WarningRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alert event type:
Image repository security - Trojan: `IMG_REG_VIRUS`.
Image repository security - Vulnerability: `IMG_REG_VUL`.
Image repository security - Sensitive data: `IMG_REG_RISK`.
Image security - Trojan: `IMG_VIRUS`.
Image security - Vulnerability: `IMG_VUL`.
Image security - Sensitive data: `IMG_RISK`.
Image security - Image blocking: `IMG_INTERCEPT`.
Runtime security - Container escape: `RUNTIME_ESCAPE`.
Runtime security - Abnormal process: `RUNTIME_FILE`.
Runtime security - Abnormal file access: `RUNTIME_PROCESS`.
Runtime security - High-risk syscall: `RUNTIME_SYSCALL`.
Runtime security - Reverse shell: `RUNTIME_REVERSE_SHELL`.
Runtime security - Trojan: `RUNTIME_VIRUS`.
                     * @return Type Alert event type:
Image repository security - Trojan: `IMG_REG_VIRUS`.
Image repository security - Vulnerability: `IMG_REG_VUL`.
Image repository security - Sensitive data: `IMG_REG_RISK`.
Image security - Trojan: `IMG_VIRUS`.
Image security - Vulnerability: `IMG_VUL`.
Image security - Sensitive data: `IMG_RISK`.
Image security - Image blocking: `IMG_INTERCEPT`.
Runtime security - Container escape: `RUNTIME_ESCAPE`.
Runtime security - Abnormal process: `RUNTIME_FILE`.
Runtime security - Abnormal file access: `RUNTIME_PROCESS`.
Runtime security - High-risk syscall: `RUNTIME_SYSCALL`.
Runtime security - Reverse shell: `RUNTIME_REVERSE_SHELL`.
Runtime security - Trojan: `RUNTIME_VIRUS`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Alert event type:
Image repository security - Trojan: `IMG_REG_VIRUS`.
Image repository security - Vulnerability: `IMG_REG_VUL`.
Image repository security - Sensitive data: `IMG_REG_RISK`.
Image security - Trojan: `IMG_VIRUS`.
Image security - Vulnerability: `IMG_VUL`.
Image security - Sensitive data: `IMG_RISK`.
Image security - Image blocking: `IMG_INTERCEPT`.
Runtime security - Container escape: `RUNTIME_ESCAPE`.
Runtime security - Abnormal process: `RUNTIME_FILE`.
Runtime security - Abnormal file access: `RUNTIME_PROCESS`.
Runtime security - High-risk syscall: `RUNTIME_SYSCALL`.
Runtime security - Reverse shell: `RUNTIME_REVERSE_SHELL`.
Runtime security - Trojan: `RUNTIME_VIRUS`.
                     * @param _type Alert event type:
Image repository security - Trojan: `IMG_REG_VIRUS`.
Image repository security - Vulnerability: `IMG_REG_VUL`.
Image repository security - Sensitive data: `IMG_REG_RISK`.
Image security - Trojan: `IMG_VIRUS`.
Image security - Vulnerability: `IMG_VUL`.
Image security - Sensitive data: `IMG_RISK`.
Image security - Image blocking: `IMG_INTERCEPT`.
Runtime security - Container escape: `RUNTIME_ESCAPE`.
Runtime security - Abnormal process: `RUNTIME_FILE`.
Runtime security - Abnormal file access: `RUNTIME_PROCESS`.
Runtime security - High-risk syscall: `RUNTIME_SYSCALL`.
Runtime security - Reverse shell: `RUNTIME_REVERSE_SHELL`.
Runtime security - Trojan: `RUNTIME_VIRUS`.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Switch status:
`ON`: On.
`OFF`: Off.
                     * @return Switch Switch status:
`ON`: On.
`OFF`: Off.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch status:
`ON`: On.
`OFF`: Off.
                     * @param _switch Switch status:
`ON`: On.
`OFF`: Off.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Alert start time in the format of "HH:mm"
                     * @return BeginTime Alert start time in the format of "HH:mm"
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Alert start time in the format of "HH:mm"
                     * @param _beginTime Alert start time in the format of "HH:mm"
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
                     * 获取Alert end time in the format of "HH:mm"
                     * @return EndTime Alert end time in the format of "HH:mm"
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Alert end time in the format of "HH:mm"
                     * @param _endTime Alert end time in the format of "HH:mm"
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
                     * 获取Alert level policy control. Each binary bit represents a meaning, and the value is passed as a string.
The control switch can be high, medium, or low, corresponding to the third, second, and first binary bit, respectively. Valid values: `0` (off); `1` (on).
For example, if the high and medium levels indicate to enable the alert and the low level indicates to disable it, the binary value is `110`.
If level control does not take effect for the alert type, pass in `1`.
                     * @return ControlBits Alert level policy control. Each binary bit represents a meaning, and the value is passed as a string.
The control switch can be high, medium, or low, corresponding to the third, second, and first binary bit, respectively. Valid values: `0` (off); `1` (on).
For example, if the high and medium levels indicate to enable the alert and the low level indicates to disable it, the binary value is `110`.
If level control does not take effect for the alert type, pass in `1`.
                     * 
                     */
                    std::string GetControlBits() const;

                    /**
                     * 设置Alert level policy control. Each binary bit represents a meaning, and the value is passed as a string.
The control switch can be high, medium, or low, corresponding to the third, second, and first binary bit, respectively. Valid values: `0` (off); `1` (on).
For example, if the high and medium levels indicate to enable the alert and the low level indicates to disable it, the binary value is `110`.
If level control does not take effect for the alert type, pass in `1`.
                     * @param _controlBits Alert level policy control. Each binary bit represents a meaning, and the value is passed as a string.
The control switch can be high, medium, or low, corresponding to the third, second, and first binary bit, respectively. Valid values: `0` (off); `1` (on).
For example, if the high and medium levels indicate to enable the alert and the low level indicates to disable it, the binary value is `110`.
If level control does not take effect for the alert type, pass in `1`.
                     * 
                     */
                    void SetControlBits(const std::string& _controlBits);

                    /**
                     * 判断参数 ControlBits 是否已赋值
                     * @return ControlBits 是否已赋值
                     * 
                     */
                    bool ControlBitsHasBeenSet() const;

                private:

                    /**
                     * Alert event type:
Image repository security - Trojan: `IMG_REG_VIRUS`.
Image repository security - Vulnerability: `IMG_REG_VUL`.
Image repository security - Sensitive data: `IMG_REG_RISK`.
Image security - Trojan: `IMG_VIRUS`.
Image security - Vulnerability: `IMG_VUL`.
Image security - Sensitive data: `IMG_RISK`.
Image security - Image blocking: `IMG_INTERCEPT`.
Runtime security - Container escape: `RUNTIME_ESCAPE`.
Runtime security - Abnormal process: `RUNTIME_FILE`.
Runtime security - Abnormal file access: `RUNTIME_PROCESS`.
Runtime security - High-risk syscall: `RUNTIME_SYSCALL`.
Runtime security - Reverse shell: `RUNTIME_REVERSE_SHELL`.
Runtime security - Trojan: `RUNTIME_VIRUS`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Switch status:
`ON`: On.
`OFF`: Off.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Alert start time in the format of "HH:mm"
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Alert end time in the format of "HH:mm"
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Alert level policy control. Each binary bit represents a meaning, and the value is passed as a string.
The control switch can be high, medium, or low, corresponding to the third, second, and first binary bit, respectively. Valid values: `0` (off); `1` (on).
For example, if the high and medium levels indicate to enable the alert and the low level indicates to disable it, the binary value is `110`.
If level control does not take effect for the alert type, pass in `1`.
                     */
                    std::string m_controlBits;
                    bool m_controlBitsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_WARNINGRULE_H_
