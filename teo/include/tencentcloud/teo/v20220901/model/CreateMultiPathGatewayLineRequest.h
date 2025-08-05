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
                     * 获取Specifies the site ID.
                     * @return ZoneId Specifies the site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Specifies the site ID.
                     * @param _zoneId Specifies the site ID.
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
                     * 获取Multi-Channel security gateway ID.
                     * @return GatewayId Multi-Channel security gateway ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Multi-Channel security gateway ID.
                     * @param _gatewayId Multi-Channel security gateway ID.
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
                     * 获取Line type. valid values:
<li>direct: direct connection line, cannot be modified or deleted.</li>
 <li>proxy: EdgeOne layer-4 proxy line, supports modifying instance ID and rule ID, but cannot be deleted.</li> <li>custom: custom line, supports modifying and deleting instance ID and rule ID.</li>
                     * @return LineType Line type. valid values:
<li>direct: direct connection line, cannot be modified or deleted.</li>
 <li>proxy: EdgeOne layer-4 proxy line, supports modifying instance ID and rule ID, but cannot be deleted.</li> <li>custom: custom line, supports modifying and deleting instance ID and rule ID.</li>
                     * 
                     */
                    std::string GetLineType() const;

                    /**
                     * 设置Line type. valid values:
<li>direct: direct connection line, cannot be modified or deleted.</li>
 <li>proxy: EdgeOne layer-4 proxy line, supports modifying instance ID and rule ID, but cannot be deleted.</li> <li>custom: custom line, supports modifying and deleting instance ID and rule ID.</li>
                     * @param _lineType Line type. valid values:
<li>direct: direct connection line, cannot be modified or deleted.</li>
 <li>proxy: EdgeOne layer-4 proxy line, supports modifying instance ID and rule ID, but cannot be deleted.</li> <li>custom: custom line, supports modifying and deleting instance ID and rule ID.</li>
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
                     * 获取Line address format: ip:port.
                     * @return LineAddress Line address format: ip:port.
                     * 
                     */
                    std::string GetLineAddress() const;

                    /**
                     * 设置Line address format: ip:port.
                     * @param _lineAddress Line address format: ip:port.
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
                     * 获取The layer-4 proxy instance ID is required when the LineType value is proxy (EdgeOne layer-4 proxy) and can be obtained via the api [DescribeL4proxy](https://intl.cloud.tencent.com/document/api/1552/103413?from_cn_redirect=1).
                     * @return ProxyId The layer-4 proxy instance ID is required when the LineType value is proxy (EdgeOne layer-4 proxy) and can be obtained via the api [DescribeL4proxy](https://intl.cloud.tencent.com/document/api/1552/103413?from_cn_redirect=1).
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置The layer-4 proxy instance ID is required when the LineType value is proxy (EdgeOne layer-4 proxy) and can be obtained via the api [DescribeL4proxy](https://intl.cloud.tencent.com/document/api/1552/103413?from_cn_redirect=1).
                     * @param _proxyId The layer-4 proxy instance ID is required when the LineType value is proxy (EdgeOne layer-4 proxy) and can be obtained via the api [DescribeL4proxy](https://intl.cloud.tencent.com/document/api/1552/103413?from_cn_redirect=1).
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
                     * 获取Forwarding rule ID, this field is required when the line type LineType value is proxy (EdgeOne layer-4 proxy). you can obtain it from the api [DescribeL4ProxyRules](https://intl.cloud.tencent.com/document/api/1552/103412?from_cn_redirect=1).
                     * @return RuleId Forwarding rule ID, this field is required when the line type LineType value is proxy (EdgeOne layer-4 proxy). you can obtain it from the api [DescribeL4ProxyRules](https://intl.cloud.tencent.com/document/api/1552/103412?from_cn_redirect=1).
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Forwarding rule ID, this field is required when the line type LineType value is proxy (EdgeOne layer-4 proxy). you can obtain it from the api [DescribeL4ProxyRules](https://intl.cloud.tencent.com/document/api/1552/103412?from_cn_redirect=1).
                     * @param _ruleId Forwarding rule ID, this field is required when the line type LineType value is proxy (EdgeOne layer-4 proxy). you can obtain it from the api [DescribeL4ProxyRules](https://intl.cloud.tencent.com/document/api/1552/103412?from_cn_redirect=1).
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
                     * Specifies the site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Multi-Channel security gateway ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Line type. valid values:
<li>direct: direct connection line, cannot be modified or deleted.</li>
 <li>proxy: EdgeOne layer-4 proxy line, supports modifying instance ID and rule ID, but cannot be deleted.</li> <li>custom: custom line, supports modifying and deleting instance ID and rule ID.</li>
                     */
                    std::string m_lineType;
                    bool m_lineTypeHasBeenSet;

                    /**
                     * Line address format: ip:port.
                     */
                    std::string m_lineAddress;
                    bool m_lineAddressHasBeenSet;

                    /**
                     * The layer-4 proxy instance ID is required when the LineType value is proxy (EdgeOne layer-4 proxy) and can be obtained via the api [DescribeL4proxy](https://intl.cloud.tencent.com/document/api/1552/103413?from_cn_redirect=1).
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Forwarding rule ID, this field is required when the line type LineType value is proxy (EdgeOne layer-4 proxy). you can obtain it from the api [DescribeL4ProxyRules](https://intl.cloud.tencent.com/document/api/1552/103412?from_cn_redirect=1).
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEMULTIPATHGATEWAYLINEREQUEST_H_
