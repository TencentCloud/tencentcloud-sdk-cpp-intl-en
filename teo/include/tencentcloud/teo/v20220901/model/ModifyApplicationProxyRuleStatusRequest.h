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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYRULESTATUSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYRULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyApplicationProxyRuleStatus request structure.
                */
                class ModifyApplicationProxyRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyApplicationProxyRuleStatusRequest();
                    ~ModifyApplicationProxyRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param _zoneId The site ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The proxy ID.
                     * @return ProxyId The proxy ID.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置The proxy ID.
                     * @param _proxyId The proxy ID.
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取The rule ID.
                     * @return RuleId The rule ID.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置The rule ID.
                     * @param _ruleId The rule ID.
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取The rule status. Values:
<li>`offline`: Disabled</li>
<li>`online`: Enabled</li>
                     * @return Status The rule status. Values:
<li>`offline`: Disabled</li>
<li>`online`: Enabled</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The rule status. Values:
<li>`offline`: Disabled</li>
<li>`online`: Enabled</li>
                     * @param _status The rule status. Values:
<li>`offline`: Disabled</li>
<li>`online`: Enabled</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The proxy ID.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * The rule ID.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * The rule status. Values:
<li>`offline`: Disabled</li>
<li>`online`: Enabled</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYRULESTATUSREQUEST_H_
