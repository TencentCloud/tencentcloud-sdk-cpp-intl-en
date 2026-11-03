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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SESSIONRATECONTROL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SESSIONRATECONTROL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Session rate and periodic feature verification configuration.
                */
                class SessionRateControl : public AbstractModel
                {
                public:
                    SessionRateControl();
                    ~SessionRateControl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether session rate and periodic feature verification are enabled. Valid values: <li>on: enable</li><li>off: disable</li>
                     * @return Enabled Whether session rate and periodic feature verification are enabled. Valid values: <li>on: enable</li><li>off: disable</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether session rate and periodic feature verification are enabled. Valid values: <li>on: enable</li><li>off: disable</li>
                     * @param _enabled Whether session rate and periodic feature verification are enabled. Valid values: <li>on: enable</li><li>off: disable</li>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Session rate and periodic feature verification for high-risk executed actions. The Name parameter of SecurityAction supports the following values: <li>Deny: block, with Stall configuration supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * @return HighRateSessionAction Session rate and periodic feature verification for high-risk executed actions. The Name parameter of SecurityAction supports the following values: <li>Deny: block, with Stall configuration supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * 
                     */
                    SecurityAction GetHighRateSessionAction() const;

                    /**
                     * 设置Session rate and periodic feature verification for high-risk executed actions. The Name parameter of SecurityAction supports the following values: <li>Deny: block, with Stall configuration supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * @param _highRateSessionAction Session rate and periodic feature verification for high-risk executed actions. The Name parameter of SecurityAction supports the following values: <li>Deny: block, with Stall configuration supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * 
                     */
                    void SetHighRateSessionAction(const SecurityAction& _highRateSessionAction);

                    /**
                     * 判断参数 HighRateSessionAction 是否已赋值
                     * @return HighRateSessionAction 是否已赋值
                     * 
                     */
                    bool HighRateSessionActionHasBeenSet() const;

                    /**
                     * 获取Execution action for medium-risk session rate and periodic feature verification. Supported values of SecurityAction Name: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * @return MidRateSessionAction Execution action for medium-risk session rate and periodic feature verification. Supported values of SecurityAction Name: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * 
                     */
                    SecurityAction GetMidRateSessionAction() const;

                    /**
                     * 设置Execution action for medium-risk session rate and periodic feature verification. Supported values of SecurityAction Name: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * @param _midRateSessionAction Execution action for medium-risk session rate and periodic feature verification. Supported values of SecurityAction Name: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * 
                     */
                    void SetMidRateSessionAction(const SecurityAction& _midRateSessionAction);

                    /**
                     * 判断参数 MidRateSessionAction 是否已赋值
                     * @return MidRateSessionAction 是否已赋值
                     * 
                     */
                    bool MidRateSessionActionHasBeenSet() const;

                    /**
                     * 获取Session rate and periodic feature verification are low-risk execution actions. The Name parameter of SecurityAction supports: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: wait then respond, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * @return LowRateSessionAction Session rate and periodic feature verification are low-risk execution actions. The Name parameter of SecurityAction supports: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: wait then respond, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * 
                     */
                    SecurityAction GetLowRateSessionAction() const;

                    /**
                     * 设置Session rate and periodic feature verification are low-risk execution actions. The Name parameter of SecurityAction supports: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: wait then respond, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * @param _lowRateSessionAction Session rate and periodic feature verification are low-risk execution actions. The Name parameter of SecurityAction supports: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: wait then respond, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     * 
                     */
                    void SetLowRateSessionAction(const SecurityAction& _lowRateSessionAction);

                    /**
                     * 判断参数 LowRateSessionAction 是否已赋值
                     * @return LowRateSessionAction 是否已赋值
                     * 
                     */
                    bool LowRateSessionActionHasBeenSet() const;

                private:

                    /**
                     * Whether session rate and periodic feature verification are enabled. Valid values: <li>on: enable</li><li>off: disable</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Session rate and periodic feature verification for high-risk executed actions. The Name parameter of SecurityAction supports the following values: <li>Deny: block, with Stall configuration supported in DenyActionParameters;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     */
                    SecurityAction m_highRateSessionAction;
                    bool m_highRateSessionActionHasBeenSet;

                    /**
                     * Execution action for medium-risk session rate and periodic feature verification. Supported values of SecurityAction Name: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: respond after waiting, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     */
                    SecurityAction m_midRateSessionAction;
                    bool m_midRateSessionActionHasBeenSet;

                    /**
                     * Session rate and periodic feature verification are low-risk execution actions. The Name parameter of SecurityAction supports: <li>Deny: block, where DenyActionParameters supports Stall configuration;</li><li>Monitor: observe;</li><li>Allow: wait then respond, where AllowActionParameters requires MinDelayTime and MaxDelayTime configuration.</li>
                     */
                    SecurityAction m_lowRateSessionAction;
                    bool m_lowRateSessionActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SESSIONRATECONTROL_H_
