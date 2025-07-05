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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCTHRESHOLDREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCTHRESHOLDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyCCThreshold request structure.
                */
                class ModifyCCThresholdRequest : public AbstractModel
                {
                public:
                    ModifyCCThresholdRequest();
                    ~ModifyCCThresholdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced, `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate, `basic`: Anti-DDoS Basic
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced, `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate, `basic`: Anti-DDoS Basic
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced, `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate, `basic`: Anti-DDoS Basic
                     * @param _business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced, `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate, `basic`: Anti-DDoS Basic
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取CC protection threshold. Valid values: (0 100 150 240 350 480 550 700 850 1000 1500 2000 3000 5000 10000 20000);
If `Business` is Anti-DDoS Advanced or Anti-DDoS Ultimate, its maximum CC protection threshold is subject to the base protection bandwidth in the following way:
  Base bandwidth: maximum CC protection threshold
  10:  20000,
  20:  40000,
  30:  70000,
  40:  100000,
  50:  150000,
  60:  200000,
  80:  250000,
  100: 300000,
                     * @return Threshold CC protection threshold. Valid values: (0 100 150 240 350 480 550 700 850 1000 1500 2000 3000 5000 10000 20000);
If `Business` is Anti-DDoS Advanced or Anti-DDoS Ultimate, its maximum CC protection threshold is subject to the base protection bandwidth in the following way:
  Base bandwidth: maximum CC protection threshold
  10:  20000,
  20:  40000,
  30:  70000,
  40:  100000,
  50:  150000,
  60:  200000,
  80:  250000,
  100: 300000,
                     * 
                     */
                    uint64_t GetThreshold() const;

                    /**
                     * 设置CC protection threshold. Valid values: (0 100 150 240 350 480 550 700 850 1000 1500 2000 3000 5000 10000 20000);
If `Business` is Anti-DDoS Advanced or Anti-DDoS Ultimate, its maximum CC protection threshold is subject to the base protection bandwidth in the following way:
  Base bandwidth: maximum CC protection threshold
  10:  20000,
  20:  40000,
  30:  70000,
  40:  100000,
  50:  150000,
  60:  200000,
  80:  250000,
  100: 300000,
                     * @param _threshold CC protection threshold. Valid values: (0 100 150 240 350 480 550 700 850 1000 1500 2000 3000 5000 10000 20000);
If `Business` is Anti-DDoS Advanced or Anti-DDoS Ultimate, its maximum CC protection threshold is subject to the base protection bandwidth in the following way:
  Base bandwidth: maximum CC protection threshold
  10:  20000,
  20:  40000,
  30:  70000,
  40:  100000,
  50:  150000,
  60:  200000,
  80:  250000,
  100: 300000,
                     * 
                     */
                    void SetThreshold(const uint64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID
                     * @return Id Anti-DDoS instance ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param _id Anti-DDoS instance ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取CC protection type, which is optional. Valid values: [http (HTTP CC protection), https (HTTPS CC protection)]; if this field is left empty, HTTPS CC protection will be used by default; if `https` is entered, the `RuleId` field is required;
                     * @return Protocol CC protection type, which is optional. Valid values: [http (HTTP CC protection), https (HTTPS CC protection)]; if this field is left empty, HTTPS CC protection will be used by default; if `https` is entered, the `RuleId` field is required;
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置CC protection type, which is optional. Valid values: [http (HTTP CC protection), https (HTTPS CC protection)]; if this field is left empty, HTTPS CC protection will be used by default; if `https` is entered, the `RuleId` field is required;
                     * @param _protocol CC protection type, which is optional. Valid values: [http (HTTP CC protection), https (HTTPS CC protection)]; if this field is left empty, HTTPS CC protection will be used by default; if `https` is entered, the `RuleId` field is required;
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取HTTPS layer-7 forwarding rule ID (which is optional and can be obtained from the layer-7 forwarding rule API);
Required if `Protocol` is `https`;
                     * @return RuleId HTTPS layer-7 forwarding rule ID (which is optional and can be obtained from the layer-7 forwarding rule API);
Required if `Protocol` is `https`;
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置HTTPS layer-7 forwarding rule ID (which is optional and can be obtained from the layer-7 forwarding rule API);
Required if `Protocol` is `https`;
                     * @param _ruleId HTTPS layer-7 forwarding rule ID (which is optional and can be obtained from the layer-7 forwarding rule API);
Required if `Protocol` is `https`;
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
                     * 获取Queried IP address (only provided by Anti-DDoS Basic), such as 1.1.1.1
                     * @return BasicIp Queried IP address (only provided by Anti-DDoS Basic), such as 1.1.1.1
                     * 
                     */
                    std::string GetBasicIp() const;

                    /**
                     * 设置Queried IP address (only provided by Anti-DDoS Basic), such as 1.1.1.1
                     * @param _basicIp Queried IP address (only provided by Anti-DDoS Basic), such as 1.1.1.1
                     * 
                     */
                    void SetBasicIp(const std::string& _basicIp);

                    /**
                     * 判断参数 BasicIp 是否已赋值
                     * @return BasicIp 是否已赋值
                     * 
                     */
                    bool BasicIpHasBeenSet() const;

                    /**
                     * 获取IP region (only provided for Anti-DDoS Basic). Valid values: region abbreviations such as gz, bj, sh, and hk
                     * @return BasicRegion IP region (only provided for Anti-DDoS Basic). Valid values: region abbreviations such as gz, bj, sh, and hk
                     * 
                     */
                    std::string GetBasicRegion() const;

                    /**
                     * 设置IP region (only provided for Anti-DDoS Basic). Valid values: region abbreviations such as gz, bj, sh, and hk
                     * @param _basicRegion IP region (only provided for Anti-DDoS Basic). Valid values: region abbreviations such as gz, bj, sh, and hk
                     * 
                     */
                    void SetBasicRegion(const std::string& _basicRegion);

                    /**
                     * 判断参数 BasicRegion 是否已赋值
                     * @return BasicRegion 是否已赋值
                     * 
                     */
                    bool BasicRegionHasBeenSet() const;

                    /**
                     * 获取Zone type (only provided for Anti-DDoS Basic). Valid values: public (public cloud zone), bm (BM zone), nat (NAT server zone), channel (internet channel).
                     * @return BasicBizType Zone type (only provided for Anti-DDoS Basic). Valid values: public (public cloud zone), bm (BM zone), nat (NAT server zone), channel (internet channel).
                     * 
                     */
                    std::string GetBasicBizType() const;

                    /**
                     * 设置Zone type (only provided for Anti-DDoS Basic). Valid values: public (public cloud zone), bm (BM zone), nat (NAT server zone), channel (internet channel).
                     * @param _basicBizType Zone type (only provided for Anti-DDoS Basic). Valid values: public (public cloud zone), bm (BM zone), nat (NAT server zone), channel (internet channel).
                     * 
                     */
                    void SetBasicBizType(const std::string& _basicBizType);

                    /**
                     * 判断参数 BasicBizType 是否已赋值
                     * @return BasicBizType 是否已赋值
                     * 
                     */
                    bool BasicBizTypeHasBeenSet() const;

                    /**
                     * 获取Device type (only provided for Anti-DDoS Basic). Valid values: cvm (CVM), clb (public CLB), lb (BM CLB), nat (NAT server), channel (internet channel).
                     * @return BasicDeviceType Device type (only provided for Anti-DDoS Basic). Valid values: cvm (CVM), clb (public CLB), lb (BM CLB), nat (NAT server), channel (internet channel).
                     * 
                     */
                    std::string GetBasicDeviceType() const;

                    /**
                     * 设置Device type (only provided for Anti-DDoS Basic). Valid values: cvm (CVM), clb (public CLB), lb (BM CLB), nat (NAT server), channel (internet channel).
                     * @param _basicDeviceType Device type (only provided for Anti-DDoS Basic). Valid values: cvm (CVM), clb (public CLB), lb (BM CLB), nat (NAT server), channel (internet channel).
                     * 
                     */
                    void SetBasicDeviceType(const std::string& _basicDeviceType);

                    /**
                     * 判断参数 BasicDeviceType 是否已赋值
                     * @return BasicDeviceType 是否已赋值
                     * 
                     */
                    bool BasicDeviceTypeHasBeenSet() const;

                    /**
                     * 获取IPInstance Nat gateway (only provided for Anti-DDoS Basic), which is optional. (If the device type to be queried is a NAT server, this parameter is required, which can be obtained through the NAT resource query API)
                     * @return BasicIpInstance IPInstance Nat gateway (only provided for Anti-DDoS Basic), which is optional. (If the device type to be queried is a NAT server, this parameter is required, which can be obtained through the NAT resource query API)
                     * 
                     */
                    std::string GetBasicIpInstance() const;

                    /**
                     * 设置IPInstance Nat gateway (only provided for Anti-DDoS Basic), which is optional. (If the device type to be queried is a NAT server, this parameter is required, which can be obtained through the NAT resource query API)
                     * @param _basicIpInstance IPInstance Nat gateway (only provided for Anti-DDoS Basic), which is optional. (If the device type to be queried is a NAT server, this parameter is required, which can be obtained through the NAT resource query API)
                     * 
                     */
                    void SetBasicIpInstance(const std::string& _basicIpInstance);

                    /**
                     * 判断参数 BasicIpInstance 是否已赋值
                     * @return BasicIpInstance 是否已赋值
                     * 
                     */
                    bool BasicIpInstanceHasBeenSet() const;

                    /**
                     * 获取ISP line (only provided for Anti-DDoS Basic), which is optional. (If the device type to be queried is a NAT server, this parameter should be 5)
                     * @return BasicIspCode ISP line (only provided for Anti-DDoS Basic), which is optional. (If the device type to be queried is a NAT server, this parameter should be 5)
                     * 
                     */
                    uint64_t GetBasicIspCode() const;

                    /**
                     * 设置ISP line (only provided for Anti-DDoS Basic), which is optional. (If the device type to be queried is a NAT server, this parameter should be 5)
                     * @param _basicIspCode ISP line (only provided for Anti-DDoS Basic), which is optional. (If the device type to be queried is a NAT server, this parameter should be 5)
                     * 
                     */
                    void SetBasicIspCode(const uint64_t& _basicIspCode);

                    /**
                     * 判断参数 BasicIspCode 是否已赋值
                     * @return BasicIspCode 是否已赋值
                     * 
                     */
                    bool BasicIspCodeHasBeenSet() const;

                    /**
                     * 获取This optional field must be specified when HTTPS protocol is used.
                     * @return Domain This optional field must be specified when HTTPS protocol is used.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置This optional field must be specified when HTTPS protocol is used.
                     * @param _domain This optional field must be specified when HTTPS protocol is used.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced, `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate, `basic`: Anti-DDoS Basic
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * CC protection threshold. Valid values: (0 100 150 240 350 480 550 700 850 1000 1500 2000 3000 5000 10000 20000);
If `Business` is Anti-DDoS Advanced or Anti-DDoS Ultimate, its maximum CC protection threshold is subject to the base protection bandwidth in the following way:
  Base bandwidth: maximum CC protection threshold
  10:  20000,
  20:  40000,
  30:  70000,
  40:  100000,
  50:  150000,
  60:  200000,
  80:  250000,
  100: 300000,
                     */
                    uint64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CC protection type, which is optional. Valid values: [http (HTTP CC protection), https (HTTPS CC protection)]; if this field is left empty, HTTPS CC protection will be used by default; if `https` is entered, the `RuleId` field is required;
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * HTTPS layer-7 forwarding rule ID (which is optional and can be obtained from the layer-7 forwarding rule API);
Required if `Protocol` is `https`;
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Queried IP address (only provided by Anti-DDoS Basic), such as 1.1.1.1
                     */
                    std::string m_basicIp;
                    bool m_basicIpHasBeenSet;

                    /**
                     * IP region (only provided for Anti-DDoS Basic). Valid values: region abbreviations such as gz, bj, sh, and hk
                     */
                    std::string m_basicRegion;
                    bool m_basicRegionHasBeenSet;

                    /**
                     * Zone type (only provided for Anti-DDoS Basic). Valid values: public (public cloud zone), bm (BM zone), nat (NAT server zone), channel (internet channel).
                     */
                    std::string m_basicBizType;
                    bool m_basicBizTypeHasBeenSet;

                    /**
                     * Device type (only provided for Anti-DDoS Basic). Valid values: cvm (CVM), clb (public CLB), lb (BM CLB), nat (NAT server), channel (internet channel).
                     */
                    std::string m_basicDeviceType;
                    bool m_basicDeviceTypeHasBeenSet;

                    /**
                     * IPInstance Nat gateway (only provided for Anti-DDoS Basic), which is optional. (If the device type to be queried is a NAT server, this parameter is required, which can be obtained through the NAT resource query API)
                     */
                    std::string m_basicIpInstance;
                    bool m_basicIpInstanceHasBeenSet;

                    /**
                     * ISP line (only provided for Anti-DDoS Basic), which is optional. (If the device type to be queried is a NAT server, this parameter should be 5)
                     */
                    uint64_t m_basicIspCode;
                    bool m_basicIspCodeHasBeenSet;

                    /**
                     * This optional field must be specified when HTTPS protocol is used.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCTHRESHOLDREQUEST_H_
