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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYLINEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYLINEREQUEST_H_

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
                * ModifyMultiPathGatewayLine request structure.
                */
                class ModifyMultiPathGatewayLineRequest : public AbstractModel
                {
                public:
                    ModifyMultiPathGatewayLineRequest();
                    ~ModifyMultiPathGatewayLineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取Multi-channel security acceleration gateway ID.
                     * @return GatewayId Multi-channel security acceleration gateway ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Multi-channel security acceleration gateway ID.
                     * @param _gatewayId Multi-channel security acceleration gateway ID.
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
                     * 获取Line ID. Valid values:
<li> line-1: EdgeOne Layer 4 proxy line. It supports modifying instances and rules, but deletion is not supported;</li>
<li> line-2 or higher: EdgeOne Layer 4 proxy lines or custom lines. Modification and deletion of instances and rules are supported.</li>
                     * @return LineId Line ID. Valid values:
<li> line-1: EdgeOne Layer 4 proxy line. It supports modifying instances and rules, but deletion is not supported;</li>
<li> line-2 or higher: EdgeOne Layer 4 proxy lines or custom lines. Modification and deletion of instances and rules are supported.</li>
                     * 
                     */
                    std::string GetLineId() const;

                    /**
                     * 设置Line ID. Valid values:
<li> line-1: EdgeOne Layer 4 proxy line. It supports modifying instances and rules, but deletion is not supported;</li>
<li> line-2 or higher: EdgeOne Layer 4 proxy lines or custom lines. Modification and deletion of instances and rules are supported.</li>
                     * @param _lineId Line ID. Valid values:
<li> line-1: EdgeOne Layer 4 proxy line. It supports modifying instances and rules, but deletion is not supported;</li>
<li> line-2 or higher: EdgeOne Layer 4 proxy lines or custom lines. Modification and deletion of instances and rules are supported.</li>
                     * 
                     */
                    void SetLineId(const std::string& _lineId);

                    /**
                     * 判断参数 LineId 是否已赋值
                     * @return LineId 是否已赋值
                     * 
                     */
                    bool LineIdHasBeenSet() const;

                    /**
                     * 获取Line type. Valid values: 
<li>proxy: EdgeOne Layer 4 proxy route. Supports modifying instances and rules. Deletion is not supported;</li> 
<li>custom: custom lines, support editing, deletion of instances, and rules.</li>
                     * @return LineType Line type. Valid values: 
<li>proxy: EdgeOne Layer 4 proxy route. Supports modifying instances and rules. Deletion is not supported;</li> 
<li>custom: custom lines, support editing, deletion of instances, and rules.</li>
                     * 
                     */
                    std::string GetLineType() const;

                    /**
                     * 设置Line type. Valid values: 
<li>proxy: EdgeOne Layer 4 proxy route. Supports modifying instances and rules. Deletion is not supported;</li> 
<li>custom: custom lines, support editing, deletion of instances, and rules.</li>
                     * @param _lineType Line type. Valid values: 
<li>proxy: EdgeOne Layer 4 proxy route. Supports modifying instances and rules. Deletion is not supported;</li> 
<li>custom: custom lines, support editing, deletion of instances, and rules.</li>
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
                     * 获取Line address in the format of host:port. Direct-access lines (LineType value is direct) are not allowed to be modified. Modification is supported for other types.
                     * @return LineAddress Line address in the format of host:port. Direct-access lines (LineType value is direct) are not allowed to be modified. Modification is supported for other types.
                     * 
                     */
                    std::string GetLineAddress() const;

                    /**
                     * 设置Line address in the format of host:port. Direct-access lines (LineType value is direct) are not allowed to be modified. Modification is supported for other types.
                     * @param _lineAddress Line address in the format of host:port. Direct-access lines (LineType value is direct) are not allowed to be modified. Modification is supported for other types.
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
                     * 获取Layer 4 Proxy Instance ID. This can be input when the line type LineType value is proxy (EdgeOne Layer 4 proxy) for modification.
                     * @return ProxyId Layer 4 Proxy Instance ID. This can be input when the line type LineType value is proxy (EdgeOne Layer 4 proxy) for modification.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Layer 4 Proxy Instance ID. This can be input when the line type LineType value is proxy (EdgeOne Layer 4 proxy) for modification.
                     * @param _proxyId Layer 4 Proxy Instance ID. This can be input when the line type LineType value is proxy (EdgeOne Layer 4 proxy) for modification.
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
                     * 获取Forwarding rule ID. It can be passed in when the line type LineType is proxy (EdgeOne Layer 4 proxy) for modification.
                     * @return RuleId Forwarding rule ID. It can be passed in when the line type LineType is proxy (EdgeOne Layer 4 proxy) for modification.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Forwarding rule ID. It can be passed in when the line type LineType is proxy (EdgeOne Layer 4 proxy) for modification.
                     * @param _ruleId Forwarding rule ID. It can be passed in when the line type LineType is proxy (EdgeOne Layer 4 proxy) for modification.
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
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Multi-channel security acceleration gateway ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Line ID. Valid values:
<li> line-1: EdgeOne Layer 4 proxy line. It supports modifying instances and rules, but deletion is not supported;</li>
<li> line-2 or higher: EdgeOne Layer 4 proxy lines or custom lines. Modification and deletion of instances and rules are supported.</li>
                     */
                    std::string m_lineId;
                    bool m_lineIdHasBeenSet;

                    /**
                     * Line type. Valid values: 
<li>proxy: EdgeOne Layer 4 proxy route. Supports modifying instances and rules. Deletion is not supported;</li> 
<li>custom: custom lines, support editing, deletion of instances, and rules.</li>
                     */
                    std::string m_lineType;
                    bool m_lineTypeHasBeenSet;

                    /**
                     * Line address in the format of host:port. Direct-access lines (LineType value is direct) are not allowed to be modified. Modification is supported for other types.
                     */
                    std::string m_lineAddress;
                    bool m_lineAddressHasBeenSet;

                    /**
                     * Layer 4 Proxy Instance ID. This can be input when the line type LineType value is proxy (EdgeOne Layer 4 proxy) for modification.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Forwarding rule ID. It can be passed in when the line type LineType is proxy (EdgeOne Layer 4 proxy) for modification.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYMULTIPATHGATEWAYLINEREQUEST_H_
