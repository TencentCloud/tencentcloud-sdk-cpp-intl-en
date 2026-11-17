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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMSTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyLLMStatus request structure.
                */
                class ModifyLLMStatusRequest : public AbstractModel
                {
                public:
                    ModifyLLMStatusRequest();
                    ~ModifyLLMStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Switch status. true: enabled; false: disabled.</p>
                     * @return Status <p>Switch status. true: enabled; false: disabled.</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>Switch status. true: enabled; false: disabled.</p>
                     * @param _status <p>Switch status. true: enabled; false: disabled.</p>
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Domain or service ID to operate on</p>
                     * @return Domain <p>Domain or service ID to operate on</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>Domain or service ID to operate on</p>
                     * @param _domain <p>Domain or service ID to operate on</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>Switch type, used to specify the protection module switch to operate on. Valid values: <br>1: Master protection switch, controls the global enablement/disablement of the large model protection feature. <br>2: Compute consumption protection rule switch, controls the enablement/disablement of the compute consumption limiting feature. <br>3: Custom protection rule switch, controls the enablement/disablement of the custom content security rule feature. <br>4: ToolCall protection switch, controls the enablement/disablement of the tool call security detection feature. <br>5: Prompt attack protection switch, controls the enablement/disablement of the prompt injection/jailbreak attack detection feature. <br>6: Content compliance detection switch, controls the enablement/disablement of the input/output content compliance detection feature. <br>7: Sensitive data detection switch, controls the enablement/disablement of the sensitive information leakage detection (DLP) feature. <br>8: Skill security detection switch, controls the enablement/disablement of the Skill/Plugin call security detection feature. <br>9: Intent behavior detection switch, controls the enablement/disablement of the user intent recognition and behavior detection feature. <br>10: Malicious URL detection switch, controls the enablement/disablement of the malicious link detection feature in responses.</p>
                     * @return SwitchType <p>Switch type, used to specify the protection module switch to operate on. Valid values: <br>1: Master protection switch, controls the global enablement/disablement of the large model protection feature. <br>2: Compute consumption protection rule switch, controls the enablement/disablement of the compute consumption limiting feature. <br>3: Custom protection rule switch, controls the enablement/disablement of the custom content security rule feature. <br>4: ToolCall protection switch, controls the enablement/disablement of the tool call security detection feature. <br>5: Prompt attack protection switch, controls the enablement/disablement of the prompt injection/jailbreak attack detection feature. <br>6: Content compliance detection switch, controls the enablement/disablement of the input/output content compliance detection feature. <br>7: Sensitive data detection switch, controls the enablement/disablement of the sensitive information leakage detection (DLP) feature. <br>8: Skill security detection switch, controls the enablement/disablement of the Skill/Plugin call security detection feature. <br>9: Intent behavior detection switch, controls the enablement/disablement of the user intent recognition and behavior detection feature. <br>10: Malicious URL detection switch, controls the enablement/disablement of the malicious link detection feature in responses.</p>
                     * 
                     */
                    uint64_t GetSwitchType() const;

                    /**
                     * 设置<p>Switch type, used to specify the protection module switch to operate on. Valid values: <br>1: Master protection switch, controls the global enablement/disablement of the large model protection feature. <br>2: Compute consumption protection rule switch, controls the enablement/disablement of the compute consumption limiting feature. <br>3: Custom protection rule switch, controls the enablement/disablement of the custom content security rule feature. <br>4: ToolCall protection switch, controls the enablement/disablement of the tool call security detection feature. <br>5: Prompt attack protection switch, controls the enablement/disablement of the prompt injection/jailbreak attack detection feature. <br>6: Content compliance detection switch, controls the enablement/disablement of the input/output content compliance detection feature. <br>7: Sensitive data detection switch, controls the enablement/disablement of the sensitive information leakage detection (DLP) feature. <br>8: Skill security detection switch, controls the enablement/disablement of the Skill/Plugin call security detection feature. <br>9: Intent behavior detection switch, controls the enablement/disablement of the user intent recognition and behavior detection feature. <br>10: Malicious URL detection switch, controls the enablement/disablement of the malicious link detection feature in responses.</p>
                     * @param _switchType <p>Switch type, used to specify the protection module switch to operate on. Valid values: <br>1: Master protection switch, controls the global enablement/disablement of the large model protection feature. <br>2: Compute consumption protection rule switch, controls the enablement/disablement of the compute consumption limiting feature. <br>3: Custom protection rule switch, controls the enablement/disablement of the custom content security rule feature. <br>4: ToolCall protection switch, controls the enablement/disablement of the tool call security detection feature. <br>5: Prompt attack protection switch, controls the enablement/disablement of the prompt injection/jailbreak attack detection feature. <br>6: Content compliance detection switch, controls the enablement/disablement of the input/output content compliance detection feature. <br>7: Sensitive data detection switch, controls the enablement/disablement of the sensitive information leakage detection (DLP) feature. <br>8: Skill security detection switch, controls the enablement/disablement of the Skill/Plugin call security detection feature. <br>9: Intent behavior detection switch, controls the enablement/disablement of the user intent recognition and behavior detection feature. <br>10: Malicious URL detection switch, controls the enablement/disablement of the malicious link detection feature in responses.</p>
                     * 
                     */
                    void SetSwitchType(const uint64_t& _switchType);

                    /**
                     * 判断参数 SwitchType 是否已赋值
                     * @return SwitchType 是否已赋值
                     * 
                     */
                    bool SwitchTypeHasBeenSet() const;

                    /**
                     * 获取<p>WAF instance ID, indicating the WAF instance to which the current operation belongs. It can be obtained through the DescribeInstances API.</p>
                     * @return InstanceId <p>WAF instance ID, indicating the WAF instance to which the current operation belongs. It can be obtained through the DescribeInstances API.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>WAF instance ID, indicating the WAF instance to which the current operation belongs. It can be obtained through the DescribeInstances API.</p>
                     * @param _instanceId <p>WAF instance ID, indicating the WAF instance to which the current operation belongs. It can be obtained through the DescribeInstances API.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Switch status. true: enabled; false: disabled.</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Domain or service ID to operate on</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Switch type, used to specify the protection module switch to operate on. Valid values: <br>1: Master protection switch, controls the global enablement/disablement of the large model protection feature. <br>2: Compute consumption protection rule switch, controls the enablement/disablement of the compute consumption limiting feature. <br>3: Custom protection rule switch, controls the enablement/disablement of the custom content security rule feature. <br>4: ToolCall protection switch, controls the enablement/disablement of the tool call security detection feature. <br>5: Prompt attack protection switch, controls the enablement/disablement of the prompt injection/jailbreak attack detection feature. <br>6: Content compliance detection switch, controls the enablement/disablement of the input/output content compliance detection feature. <br>7: Sensitive data detection switch, controls the enablement/disablement of the sensitive information leakage detection (DLP) feature. <br>8: Skill security detection switch, controls the enablement/disablement of the Skill/Plugin call security detection feature. <br>9: Intent behavior detection switch, controls the enablement/disablement of the user intent recognition and behavior detection feature. <br>10: Malicious URL detection switch, controls the enablement/disablement of the malicious link detection feature in responses.</p>
                     */
                    uint64_t m_switchType;
                    bool m_switchTypeHasBeenSet;

                    /**
                     * <p>WAF instance ID, indicating the WAF instance to which the current operation belongs. It can be obtained through the DescribeInstances API.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMSTATUSREQUEST_H_
