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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEMULTIPATHGATEWAYLINEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEMULTIPATHGATEWAYLINEREQUEST_H_

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
                * CreateMultiPathGatewayLine request structure.
                */
                class CreateMultiPathGatewayLineRequest : public AbstractModel
                {
                public:
                    CreateMultiPathGatewayLineRequest();
                    ~CreateMultiPathGatewayLineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID.
                     * @return ZoneId Site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID.
                     * @param _zoneId Site ID.
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
                     * 获取Multi-channel security gateway ID.
                     * @return GatewayId Multi-channel security gateway ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Multi-channel security gateway ID.
                     * @param _gatewayId Multi-channel security gateway ID.
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Line type. Valid values:
<li>direct: direct connection line, modification and deletion are not supported.</li> <li>proxy: EdgeOne Layer 4 proxy line, supports modifying instance ID and rule ID, deletion is not supported.</li> <li>custom: custom line, supports modifying and deleting instance ID and rule ID.</li>
                     * @return LineType Line type. Valid values:
<li>direct: direct connection line, modification and deletion are not supported.</li> <li>proxy: EdgeOne Layer 4 proxy line, supports modifying instance ID and rule ID, deletion is not supported.</li> <li>custom: custom line, supports modifying and deleting instance ID and rule ID.</li>
                     * 
                     */
                    std::string GetLineType() const;

                    /**
                     * 设置Line type. Valid values:
<li>direct: direct connection line, modification and deletion are not supported.</li> <li>proxy: EdgeOne Layer 4 proxy line, supports modifying instance ID and rule ID, deletion is not supported.</li> <li>custom: custom line, supports modifying and deleting instance ID and rule ID.</li>
                     * @param _lineType Line type. Valid values:
<li>direct: direct connection line, modification and deletion are not supported.</li> <li>proxy: EdgeOne Layer 4 proxy line, supports modifying instance ID and rule ID, deletion is not supported.</li> <li>custom: custom line, supports modifying and deleting instance ID and rule ID.</li>
                     * 
                     */
                    void SetLineType(const std::string& _lineType);

                    /**
                     * 判断参数 LineType 是否已赋值
                     * @return LineType 是否已赋值
                     * 
                     */
                    bool LineTypeHasBeenSet() const;

                    /**
                     * 获取Line address in the format of ip:port.
                     * @return LineAddress Line address in the format of ip:port.
                     * 
                     */
                    std::string GetLineAddress() const;

                    /**
                     * 设置Line address in the format of ip:port.
                     * @param _lineAddress Line address in the format of ip:port.
                     * 
                     */
                    void SetLineAddress(const std::string& _lineAddress);

                    /**
                     * 判断参数 LineAddress 是否已赋值
                     * @return LineAddress 是否已赋值
                     * 
                     */
                    bool LineAddressHasBeenSet() const;

                    /**
                     * 获取Layer 4 proxy instance ID. It is required when the line type `LineType` value is `proxy` (EdgeOne Layer 4 proxy). You can obtain it via the [DescribeL4Proxy](https://www.tencentcloud.com/document/api/1552/103413?from_cn_redirect=1) API.
                     * @return ProxyId Layer 4 proxy instance ID. It is required when the line type `LineType` value is `proxy` (EdgeOne Layer 4 proxy). You can obtain it via the [DescribeL4Proxy](https://www.tencentcloud.com/document/api/1552/103413?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Layer 4 proxy instance ID. It is required when the line type `LineType` value is `proxy` (EdgeOne Layer 4 proxy). You can obtain it via the [DescribeL4Proxy](https://www.tencentcloud.com/document/api/1552/103413?from_cn_redirect=1) API.
                     * @param _proxyId Layer 4 proxy instance ID. It is required when the line type `LineType` value is `proxy` (EdgeOne Layer 4 proxy). You can obtain it via the [DescribeL4Proxy](https://www.tencentcloud.com/document/api/1552/103413?from_cn_redirect=1) API.
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
                     * 获取Forwarding rule ID. Required when the line type `LineType` is `proxy` (EdgeOne Layer 4 proxy). You can obtain it via the [DescribeL4ProxyRules](https://www.tencentcloud.com/document/api/1552/103412?from_cn_redirect=1) API.
                     * @return RuleId Forwarding rule ID. Required when the line type `LineType` is `proxy` (EdgeOne Layer 4 proxy). You can obtain it via the [DescribeL4ProxyRules](https://www.tencentcloud.com/document/api/1552/103412?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Forwarding rule ID. Required when the line type `LineType` is `proxy` (EdgeOne Layer 4 proxy). You can obtain it via the [DescribeL4ProxyRules](https://www.tencentcloud.com/document/api/1552/103412?from_cn_redirect=1) API.
                     * @param _ruleId Forwarding rule ID. Required when the line type `LineType` is `proxy` (EdgeOne Layer 4 proxy). You can obtain it via the [DescribeL4ProxyRules](https://www.tencentcloud.com/document/api/1552/103412?from_cn_redirect=1) API.
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * Site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Multi-channel security gateway ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Line type. Valid values:
<li>direct: direct connection line, modification and deletion are not supported.</li> <li>proxy: EdgeOne Layer 4 proxy line, supports modifying instance ID and rule ID, deletion is not supported.</li> <li>custom: custom line, supports modifying and deleting instance ID and rule ID.</li>
                     */
                    std::string m_lineType;
                    bool m_lineTypeHasBeenSet;

                    /**
                     * Line address in the format of ip:port.
                     */
                    std::string m_lineAddress;
                    bool m_lineAddressHasBeenSet;

                    /**
                     * Layer 4 proxy instance ID. It is required when the line type `LineType` value is `proxy` (EdgeOne Layer 4 proxy). You can obtain it via the [DescribeL4Proxy](https://www.tencentcloud.com/document/api/1552/103413?from_cn_redirect=1) API.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Forwarding rule ID. Required when the line type `LineType` is `proxy` (EdgeOne Layer 4 proxy). You can obtain it via the [DescribeL4ProxyRules](https://www.tencentcloud.com/document/api/1552/103412?from_cn_redirect=1) API.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEMULTIPATHGATEWAYLINEREQUEST_H_
