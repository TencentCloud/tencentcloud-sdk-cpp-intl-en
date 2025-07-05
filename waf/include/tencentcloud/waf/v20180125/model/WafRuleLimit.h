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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_WAFRULELIMIT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_WAFRULELIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * WAF module specifications
                */
                class WafRuleLimit : public AbstractModel
                {
                public:
                    WafRuleLimit();
                    ~WafRuleLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifications of Custom CC
                     * @return CC Specifications of Custom CC
                     * 
                     */
                    uint64_t GetCC() const;

                    /**
                     * 设置Specifications of Custom CC
                     * @param _cC Specifications of Custom CC
                     * 
                     */
                    void SetCC(const uint64_t& _cC);

                    /**
                     * 判断参数 CC 是否已赋值
                     * @return CC 是否已赋值
                     * 
                     */
                    bool CCHasBeenSet() const;

                    /**
                     * 获取Specifications for Custom Policy
                     * @return CustomRule Specifications for Custom Policy
                     * 
                     */
                    uint64_t GetCustomRule() const;

                    /**
                     * 设置Specifications for Custom Policy
                     * @param _customRule Specifications for Custom Policy
                     * 
                     */
                    void SetCustomRule(const uint64_t& _customRule);

                    /**
                     * 判断参数 CustomRule 是否已赋值
                     * @return CustomRule 是否已赋值
                     * 
                     */
                    bool CustomRuleHasBeenSet() const;

                    /**
                     * 获取Specifications for Blocklist/Allowlist
                     * @return IPControl Specifications for Blocklist/Allowlist
                     * 
                     */
                    uint64_t GetIPControl() const;

                    /**
                     * 设置Specifications for Blocklist/Allowlist
                     * @param _iPControl Specifications for Blocklist/Allowlist
                     * 
                     */
                    void SetIPControl(const uint64_t& _iPControl);

                    /**
                     * 判断参数 IPControl 是否已赋值
                     * @return IPControl 是否已赋值
                     * 
                     */
                    bool IPControlHasBeenSet() const;

                    /**
                     * 获取Specifications for Information Leakage Prevention
                     * @return AntiLeak Specifications for Information Leakage Prevention
                     * 
                     */
                    uint64_t GetAntiLeak() const;

                    /**
                     * 设置Specifications for Information Leakage Prevention
                     * @param _antiLeak Specifications for Information Leakage Prevention
                     * 
                     */
                    void SetAntiLeak(const uint64_t& _antiLeak);

                    /**
                     * 判断参数 AntiLeak 是否已赋值
                     * @return AntiLeak 是否已赋值
                     * 
                     */
                    bool AntiLeakHasBeenSet() const;

                    /**
                     * 获取Tamper-proof Specifications
                     * @return AntiTamper Tamper-proof Specifications
                     * 
                     */
                    uint64_t GetAntiTamper() const;

                    /**
                     * 设置Tamper-proof Specifications
                     * @param _antiTamper Tamper-proof Specifications
                     * 
                     */
                    void SetAntiTamper(const uint64_t& _antiTamper);

                    /**
                     * 判断参数 AntiTamper 是否已赋值
                     * @return AntiTamper 是否已赋值
                     * 
                     */
                    bool AntiTamperHasBeenSet() const;

                    /**
                     * 获取Specifications for Urgent CC
                     * @return AutoCC Specifications for Urgent CC
                     * 
                     */
                    uint64_t GetAutoCC() const;

                    /**
                     * 设置Specifications for Urgent CC
                     * @param _autoCC Specifications for Urgent CC
                     * 
                     */
                    void SetAutoCC(const uint64_t& _autoCC);

                    /**
                     * 判断参数 AutoCC 是否已赋值
                     * @return AutoCC 是否已赋值
                     * 
                     */
                    bool AutoCCHasBeenSet() const;

                    /**
                     * 获取Specifications for Region Banning
                     * @return AreaBan Specifications for Region Banning
                     * 
                     */
                    uint64_t GetAreaBan() const;

                    /**
                     * 设置Specifications for Region Banning
                     * @param _areaBan Specifications for Region Banning
                     * 
                     */
                    void SetAreaBan(const uint64_t& _areaBan);

                    /**
                     * 判断参数 AreaBan 是否已赋值
                     * @return AreaBan 是否已赋值
                     * 
                     */
                    bool AreaBanHasBeenSet() const;

                    /**
                     * 获取Configure Session in Custom CC
                     * @return CCSession Configure Session in Custom CC
                     * 
                     */
                    uint64_t GetCCSession() const;

                    /**
                     * 设置Configure Session in Custom CC
                     * @param _cCSession Configure Session in Custom CC
                     * 
                     */
                    void SetCCSession(const uint64_t& _cCSession);

                    /**
                     * 判断参数 CCSession 是否已赋值
                     * @return CCSession 是否已赋值
                     * 
                     */
                    bool CCSessionHasBeenSet() const;

                    /**
                     * 获取AI Specifications
                     * @return AI AI Specifications
                     * 
                     */
                    uint64_t GetAI() const;

                    /**
                     * 设置AI Specifications
                     * @param _aI AI Specifications
                     * 
                     */
                    void SetAI(const uint64_t& _aI);

                    /**
                     * 判断参数 AI 是否已赋值
                     * @return AI 是否已赋值
                     * 
                     */
                    bool AIHasBeenSet() const;

                    /**
                     * 获取Specifications of Precision Allowlist
                     * @return CustomWhite Specifications of Precision Allowlist
                     * 
                     */
                    uint64_t GetCustomWhite() const;

                    /**
                     * 设置Specifications of Precision Allowlist
                     * @param _customWhite Specifications of Precision Allowlist
                     * 
                     */
                    void SetCustomWhite(const uint64_t& _customWhite);

                    /**
                     * 判断参数 CustomWhite 是否已赋值
                     * @return CustomWhite 是否已赋值
                     * 
                     */
                    bool CustomWhiteHasBeenSet() const;

                    /**
                     * 获取API Security Specification
                     * @return ApiSecurity API Security Specification
                     * 
                     */
                    uint64_t GetApiSecurity() const;

                    /**
                     * 设置API Security Specification
                     * @param _apiSecurity API Security Specification
                     * 
                     */
                    void SetApiSecurity(const uint64_t& _apiSecurity);

                    /**
                     * 判断参数 ApiSecurity 是否已赋值
                     * @return ApiSecurity 是否已赋值
                     * 
                     */
                    bool ApiSecurityHasBeenSet() const;

                    /**
                     * 获取Specifications for client traffic flag
                     * @return ClientMsg Specifications for client traffic flag
                     * 
                     */
                    uint64_t GetClientMsg() const;

                    /**
                     * 设置Specifications for client traffic flag
                     * @param _clientMsg Specifications for client traffic flag
                     * 
                     */
                    void SetClientMsg(const uint64_t& _clientMsg);

                    /**
                     * 判断参数 ClientMsg 是否已赋值
                     * @return ClientMsg 是否已赋值
                     * 
                     */
                    bool ClientMsgHasBeenSet() const;

                    /**
                     * 获取Specifications for Traffic Tagging
                     * @return TrafficMarking Specifications for Traffic Tagging
                     * 
                     */
                    uint64_t GetTrafficMarking() const;

                    /**
                     * 设置Specifications for Traffic Tagging
                     * @param _trafficMarking Specifications for Traffic Tagging
                     * 
                     */
                    void SetTrafficMarking(const uint64_t& _trafficMarking);

                    /**
                     * 判断参数 TrafficMarking 是否已赋值
                     * @return TrafficMarking 是否已赋值
                     * 
                     */
                    bool TrafficMarkingHasBeenSet() const;

                private:

                    /**
                     * Specifications of Custom CC
                     */
                    uint64_t m_cC;
                    bool m_cCHasBeenSet;

                    /**
                     * Specifications for Custom Policy
                     */
                    uint64_t m_customRule;
                    bool m_customRuleHasBeenSet;

                    /**
                     * Specifications for Blocklist/Allowlist
                     */
                    uint64_t m_iPControl;
                    bool m_iPControlHasBeenSet;

                    /**
                     * Specifications for Information Leakage Prevention
                     */
                    uint64_t m_antiLeak;
                    bool m_antiLeakHasBeenSet;

                    /**
                     * Tamper-proof Specifications
                     */
                    uint64_t m_antiTamper;
                    bool m_antiTamperHasBeenSet;

                    /**
                     * Specifications for Urgent CC
                     */
                    uint64_t m_autoCC;
                    bool m_autoCCHasBeenSet;

                    /**
                     * Specifications for Region Banning
                     */
                    uint64_t m_areaBan;
                    bool m_areaBanHasBeenSet;

                    /**
                     * Configure Session in Custom CC
                     */
                    uint64_t m_cCSession;
                    bool m_cCSessionHasBeenSet;

                    /**
                     * AI Specifications
                     */
                    uint64_t m_aI;
                    bool m_aIHasBeenSet;

                    /**
                     * Specifications of Precision Allowlist
                     */
                    uint64_t m_customWhite;
                    bool m_customWhiteHasBeenSet;

                    /**
                     * API Security Specification
                     */
                    uint64_t m_apiSecurity;
                    bool m_apiSecurityHasBeenSet;

                    /**
                     * Specifications for client traffic flag
                     */
                    uint64_t m_clientMsg;
                    bool m_clientMsgHasBeenSet;

                    /**
                     * Specifications for Traffic Tagging
                     */
                    uint64_t m_trafficMarking;
                    bool m_trafficMarkingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_WAFRULELIMIT_H_
