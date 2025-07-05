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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_SENDCUSTOMALARMMSGREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_SENDCUSTOMALARMMSGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * SendCustomAlarmMsg request structure.
                */
                class SendCustomAlarmMsgRequest : public AbstractModel
                {
                public:
                    SendCustomAlarmMsgRequest();
                    ~SendCustomAlarmMsgRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API component name. The value for the current API is monitor.
                     * @return Module API component name. The value for the current API is monitor.
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置API component name. The value for the current API is monitor.
                     * @param _module API component name. The value for the current API is monitor.
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Message policy ID, which is configured on the custom message page.
                     * @return PolicyId Message policy ID, which is configured on the custom message page.
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Message policy ID, which is configured on the custom message page.
                     * @param _policyId Message policy ID, which is configured on the custom message page.
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Custom message content that a user wants to send.
                     * @return Msg Custom message content that a user wants to send.
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置Custom message content that a user wants to send.
                     * @param _msg Custom message content that a user wants to send.
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * API component name. The value for the current API is monitor.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Message policy ID, which is configured on the custom message page.
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Custom message content that a user wants to send.
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_SENDCUSTOMALARMMSGREQUEST_H_
