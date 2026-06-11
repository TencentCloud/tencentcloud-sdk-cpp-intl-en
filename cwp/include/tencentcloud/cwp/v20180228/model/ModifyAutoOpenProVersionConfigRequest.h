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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYAUTOOPENPROVERSIONCONFIGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYAUTOOPENPROVERSIONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyAutoOpenProVersionConfig request structure.
                */
                class ModifyAutoOpenProVersionConfigRequest : public AbstractModel
                {
                public:
                    ModifyAutoOpenProVersionConfigRequest();
                    ~ModifyAutoOpenProVersionConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Set the auto-activation status.
<li>CLOSE: off</li>
<li>OPEN: on</li>
                     * @return Status Set the auto-activation status.
<li>CLOSE: off</li>
<li>OPEN: on</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Set the auto-activation status.
<li>CLOSE: off</li>
<li>OPEN: on</li>
                     * @param _status Set the auto-activation status.
<li>CLOSE: off</li>
<li>OPEN: on</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Strengthen protection mode
PROVERSION_POSTPAY indicates the Pro Edition pay-as-you-go mode.
PROVERSION_PREPAY Professional Edition - Subscription
FLAGSHIP_PREPAY Flagship Edition - Subscription
                     * @return ProtectType Strengthen protection mode
PROVERSION_POSTPAY indicates the Pro Edition pay-as-you-go mode.
PROVERSION_PREPAY Professional Edition - Subscription
FLAGSHIP_PREPAY Flagship Edition - Subscription
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 设置Strengthen protection mode
PROVERSION_POSTPAY indicates the Pro Edition pay-as-you-go mode.
PROVERSION_PREPAY Professional Edition - Subscription
FLAGSHIP_PREPAY Flagship Edition - Subscription
                     * @param _protectType Strengthen protection mode
PROVERSION_POSTPAY indicates the Pro Edition pay-as-you-go mode.
PROVERSION_PREPAY Professional Edition - Subscription
FLAGSHIP_PREPAY Flagship Edition - Subscription
                     * 
                     */
                    void SetProtectType(const std::string& _protectType);

                    /**
                     * 判断参数 ProtectType 是否已赋值
                     * @return ProtectType 是否已赋值
                     * 
                     */
                    bool ProtectTypeHasBeenSet() const;

                    /**
                     * 获取Automatic purchase/expansion authorization switch, 1 by default, 0 for OFF, 1 for ON.
                     * @return AutoRepurchaseSwitch Automatic purchase/expansion authorization switch, 1 by default, 0 for OFF, 1 for ON.
                     * 
                     */
                    uint64_t GetAutoRepurchaseSwitch() const;

                    /**
                     * 设置Automatic purchase/expansion authorization switch, 1 by default, 0 for OFF, 1 for ON.
                     * @param _autoRepurchaseSwitch Automatic purchase/expansion authorization switch, 1 by default, 0 for OFF, 1 for ON.
                     * 
                     */
                    void SetAutoRepurchaseSwitch(const uint64_t& _autoRepurchaseSwitch);

                    /**
                     * 判断参数 AutoRepurchaseSwitch 是否已赋值
                     * @return AutoRepurchaseSwitch 是否已赋值
                     * 
                     */
                    bool AutoRepurchaseSwitchHasBeenSet() const;

                    /**
                     * 获取Auto-renewal or not for auto-purchased orders, 0 by default, 0 for OFF, 1 for ON
                     * @return AutoRepurchaseRenewSwitch Auto-renewal or not for auto-purchased orders, 0 by default, 0 for OFF, 1 for ON
                     * 
                     */
                    uint64_t GetAutoRepurchaseRenewSwitch() const;

                    /**
                     * 设置Auto-renewal or not for auto-purchased orders, 0 by default, 0 for OFF, 1 for ON
                     * @param _autoRepurchaseRenewSwitch Auto-renewal or not for auto-purchased orders, 0 by default, 0 for OFF, 1 for ON
                     * 
                     */
                    void SetAutoRepurchaseRenewSwitch(const uint64_t& _autoRepurchaseRenewSwitch);

                    /**
                     * 判断参数 AutoRepurchaseRenewSwitch 是否已赋值
                     * @return AutoRepurchaseRenewSwitch 是否已赋值
                     * 
                     */
                    bool AutoRepurchaseRenewSwitchHasBeenSet() const;

                    /**
                     * 获取Whether the manually purchased order is automatically renewed (defaults to 0): 0 - off; 1 - on
                     * @return RepurchaseRenewSwitch Whether the manually purchased order is automatically renewed (defaults to 0): 0 - off; 1 - on
                     * 
                     */
                    uint64_t GetRepurchaseRenewSwitch() const;

                    /**
                     * 设置Whether the manually purchased order is automatically renewed (defaults to 0): 0 - off; 1 - on
                     * @param _repurchaseRenewSwitch Whether the manually purchased order is automatically renewed (defaults to 0): 0 - off; 1 - on
                     * 
                     */
                    void SetRepurchaseRenewSwitch(const uint64_t& _repurchaseRenewSwitch);

                    /**
                     * 判断参数 RepurchaseRenewSwitch 是否已赋值
                     * @return RepurchaseRenewSwitch 是否已赋值
                     * 
                     */
                    bool RepurchaseRenewSwitchHasBeenSet() const;

                    /**
                     * 获取Automatically add machines and bind rasp. 0: Turn off. 1: Turn on.
                     * @return AutoBindRaspSwitch Automatically add machines and bind rasp. 0: Turn off. 1: Turn on.
                     * 
                     */
                    uint64_t GetAutoBindRaspSwitch() const;

                    /**
                     * 设置Automatically add machines and bind rasp. 0: Turn off. 1: Turn on.
                     * @param _autoBindRaspSwitch Automatically add machines and bind rasp. 0: Turn off. 1: Turn on.
                     * 
                     */
                    void SetAutoBindRaspSwitch(const uint64_t& _autoBindRaspSwitch);

                    /**
                     * 判断参数 AutoBindRaspSwitch 是否已赋值
                     * @return AutoBindRaspSwitch 是否已赋值
                     * 
                     */
                    bool AutoBindRaspSwitchHasBeenSet() const;

                    /**
                     * 获取Automatically add machines with rasp protection enabled, off by default. 0: Off, 1: On
                     * @return AutoOpenRaspSwitch Automatically add machines with rasp protection enabled, off by default. 0: Off, 1: On
                     * 
                     */
                    uint64_t GetAutoOpenRaspSwitch() const;

                    /**
                     * 设置Automatically add machines with rasp protection enabled, off by default. 0: Off, 1: On
                     * @param _autoOpenRaspSwitch Automatically add machines with rasp protection enabled, off by default. 0: Off, 1: On
                     * 
                     */
                    void SetAutoOpenRaspSwitch(const uint64_t& _autoOpenRaspSwitch);

                    /**
                     * 判断参数 AutoOpenRaspSwitch 是否已赋值
                     * @return AutoOpenRaspSwitch 是否已赋值
                     * 
                     */
                    bool AutoOpenRaspSwitchHasBeenSet() const;

                    /**
                     * 获取Automatic scaling down switch, 0 for off and 1 for on
                     * @return AutoDowngradeSwitch Automatic scaling down switch, 0 for off and 1 for on
                     * 
                     */
                    uint64_t GetAutoDowngradeSwitch() const;

                    /**
                     * 设置Automatic scaling down switch, 0 for off and 1 for on
                     * @param _autoDowngradeSwitch Automatic scaling down switch, 0 for off and 1 for on
                     * 
                     */
                    void SetAutoDowngradeSwitch(const uint64_t& _autoDowngradeSwitch);

                    /**
                     * 判断参数 AutoDowngradeSwitch 是否已赋值
                     * @return AutoDowngradeSwitch 是否已赋值
                     * 
                     */
                    bool AutoDowngradeSwitchHasBeenSet() const;

                private:

                    /**
                     * Set the auto-activation status.
<li>CLOSE: off</li>
<li>OPEN: on</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Strengthen protection mode
PROVERSION_POSTPAY indicates the Pro Edition pay-as-you-go mode.
PROVERSION_PREPAY Professional Edition - Subscription
FLAGSHIP_PREPAY Flagship Edition - Subscription
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                    /**
                     * Automatic purchase/expansion authorization switch, 1 by default, 0 for OFF, 1 for ON.
                     */
                    uint64_t m_autoRepurchaseSwitch;
                    bool m_autoRepurchaseSwitchHasBeenSet;

                    /**
                     * Auto-renewal or not for auto-purchased orders, 0 by default, 0 for OFF, 1 for ON
                     */
                    uint64_t m_autoRepurchaseRenewSwitch;
                    bool m_autoRepurchaseRenewSwitchHasBeenSet;

                    /**
                     * Whether the manually purchased order is automatically renewed (defaults to 0): 0 - off; 1 - on
                     */
                    uint64_t m_repurchaseRenewSwitch;
                    bool m_repurchaseRenewSwitchHasBeenSet;

                    /**
                     * Automatically add machines and bind rasp. 0: Turn off. 1: Turn on.
                     */
                    uint64_t m_autoBindRaspSwitch;
                    bool m_autoBindRaspSwitchHasBeenSet;

                    /**
                     * Automatically add machines with rasp protection enabled, off by default. 0: Off, 1: On
                     */
                    uint64_t m_autoOpenRaspSwitch;
                    bool m_autoOpenRaspSwitchHasBeenSet;

                    /**
                     * Automatic scaling down switch, 0 for off and 1 for on
                     */
                    uint64_t m_autoDowngradeSwitch;
                    bool m_autoDowngradeSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYAUTOOPENPROVERSIONCONFIGREQUEST_H_
