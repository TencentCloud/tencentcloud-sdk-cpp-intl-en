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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYLINE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYLINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Multi-Channel security gateway line information.
                */
                class MultiPathGatewayLine : public AbstractModel
                {
                public:
                    MultiPathGatewayLine();
                    ~MultiPathGatewayLine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取line ID. where line-0 and line-1 are system-reserved IDs. valid values:
<Li>line-0: direct connection line. Adding, editing, and deletion are not supported.</li>
<Li>line-1: EdgeOne layer-4 proxy line. Supports modifying instances and rules, but deletion is not supported.</li>
<li>line-2 and above: EdgeOne layer-4 proxy lines or custom lines, supports modifying, deleting instances and rules.</li>
                     * @return LineId line ID. where line-0 and line-1 are system-reserved IDs. valid values:
<Li>line-0: direct connection line. Adding, editing, and deletion are not supported.</li>
<Li>line-1: EdgeOne layer-4 proxy line. Supports modifying instances and rules, but deletion is not supported.</li>
<li>line-2 and above: EdgeOne layer-4 proxy lines or custom lines, supports modifying, deleting instances and rules.</li>
                     * 
                     */
                    std::string GetLineId() const;

                    /**
                     * 设置line ID. where line-0 and line-1 are system-reserved IDs. valid values:
<Li>line-0: direct connection line. Adding, editing, and deletion are not supported.</li>
<Li>line-1: EdgeOne layer-4 proxy line. Supports modifying instances and rules, but deletion is not supported.</li>
<li>line-2 and above: EdgeOne layer-4 proxy lines or custom lines, supports modifying, deleting instances and rules.</li>
                     * @param _lineId line ID. where line-0 and line-1 are system-reserved IDs. valid values:
<Li>line-0: direct connection line. Adding, editing, and deletion are not supported.</li>
<Li>line-1: EdgeOne layer-4 proxy line. Supports modifying instances and rules, but deletion is not supported.</li>
<li>line-2 and above: EdgeOne layer-4 proxy lines or custom lines, supports modifying, deleting instances and rules.</li>
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
                     * 获取Line type. valid values:
<Li>direct: Direct connection line. Editing and deletion are not supported. .</li>
<li>proxy: EdgeOne layer-4 proxy line, supports editing and modifying instances and rules, but deletion is not supported;</li>
<Li>custom: Custom line, supports editing and deletion.</li>
                     * @return LineType Line type. valid values:
<Li>direct: Direct connection line. Editing and deletion are not supported. .</li>
<li>proxy: EdgeOne layer-4 proxy line, supports editing and modifying instances and rules, but deletion is not supported;</li>
<Li>custom: Custom line, supports editing and deletion.</li>
                     * 
                     */
                    std::string GetLineType() const;

                    /**
                     * 设置Line type. valid values:
<Li>direct: Direct connection line. Editing and deletion are not supported. .</li>
<li>proxy: EdgeOne layer-4 proxy line, supports editing and modifying instances and rules, but deletion is not supported;</li>
<Li>custom: Custom line, supports editing and deletion.</li>
                     * @param _lineType Line type. valid values:
<Li>direct: Direct connection line. Editing and deletion are not supported. .</li>
<li>proxy: EdgeOne layer-4 proxy line, supports editing and modifying instances and rules, but deletion is not supported;</li>
<Li>custom: Custom line, supports editing and deletion.</li>
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
                     * 获取Line address in the format host:port.
                     * @return LineAddress Line address in the format host:port.
                     * 
                     */
                    std::string GetLineAddress() const;

                    /**
                     * 设置Line address in the format host:port.
                     * @param _lineAddress Line address in the format host:port.
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
                     * 获取Layer-4 proxy instance ID,returned only when the LineType value is proxy (EdgeOne layer-4 proxy).
                     * @return ProxyId Layer-4 proxy instance ID,returned only when the LineType value is proxy (EdgeOne layer-4 proxy).
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Layer-4 proxy instance ID,returned only when the LineType value is proxy (EdgeOne layer-4 proxy).
                     * @param _proxyId Layer-4 proxy instance ID,returned only when the LineType value is proxy (EdgeOne layer-4 proxy).
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
                     * 获取Forwarding rule ID. returned only when the LineType value is proxy (EdgeOne layer-4 proxy).
                     * @return RuleId Forwarding rule ID. returned only when the LineType value is proxy (EdgeOne layer-4 proxy).
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Forwarding rule ID. returned only when the LineType value is proxy (EdgeOne layer-4 proxy).
                     * @param _ruleId Forwarding rule ID. returned only when the LineType value is proxy (EdgeOne layer-4 proxy).
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
                     * line ID. where line-0 and line-1 are system-reserved IDs. valid values:
<Li>line-0: direct connection line. Adding, editing, and deletion are not supported.</li>
<Li>line-1: EdgeOne layer-4 proxy line. Supports modifying instances and rules, but deletion is not supported.</li>
<li>line-2 and above: EdgeOne layer-4 proxy lines or custom lines, supports modifying, deleting instances and rules.</li>
                     */
                    std::string m_lineId;
                    bool m_lineIdHasBeenSet;

                    /**
                     * Line type. valid values:
<Li>direct: Direct connection line. Editing and deletion are not supported. .</li>
<li>proxy: EdgeOne layer-4 proxy line, supports editing and modifying instances and rules, but deletion is not supported;</li>
<Li>custom: Custom line, supports editing and deletion.</li>
                     */
                    std::string m_lineType;
                    bool m_lineTypeHasBeenSet;

                    /**
                     * Line address in the format host:port.
                     */
                    std::string m_lineAddress;
                    bool m_lineAddressHasBeenSet;

                    /**
                     * Layer-4 proxy instance ID,returned only when the LineType value is proxy (EdgeOne layer-4 proxy).
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Forwarding rule ID. returned only when the LineType value is proxy (EdgeOne layer-4 proxy).
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYLINE_H_
