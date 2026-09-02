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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMWHITELISTSTRATEGYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMWHITELISTSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateDspmWhitelistStrategy request structure.
                */
                class CreateDspmWhitelistStrategyRequest : public AbstractModel
                {
                public:
                    CreateDspmWhitelistStrategyRequest();
                    ~CreateDspmWhitelistStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Policy type</p>
                     * @return StrategyType <p>Policy type</p>
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置<p>Policy type</p>
                     * @param _strategyType <p>Policy type</p>
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Allowlist</p>
                     * @return Name <p>Allowlist</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Allowlist</p>
                     * @param _name <p>Allowlist</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Policy</p>
                     * @return Rule <p>Policy</p>
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置<p>Policy</p>
                     * @param _rule <p>Policy</p>
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取<p>Asset id</p>
                     * @return AssetId <p>Asset id</p>
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>Asset id</p>
                     * @param _assetId <p>Asset id</p>
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取<p>Account</p>
                     * @return Account <p>Account</p>
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置<p>Account</p>
                     * @param _account <p>Account</p>
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取<p>Host</p>
                     * @return Host <p>Host</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>Host</p>
                     * @param _host <p>Host</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>Risk id</p>
                     * @return RiskId <p>Risk id</p>
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置<p>Risk id</p>
                     * @param _riskId <p>Risk id</p>
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取<p>Remarks.</p>
                     * @return Remark <p>Remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _remark <p>Remarks.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Whitelist type</p><p>Enumeration values:</p><ul><li>static_risk: allowlist rules for static configuration scan</li><li>audit: audit allowlist rules</li><li>ueba: allowlist rules related to UEBA</li></ul>
                     * @return WhitelistType <p>Whitelist type</p><p>Enumeration values:</p><ul><li>static_risk: allowlist rules for static configuration scan</li><li>audit: audit allowlist rules</li><li>ueba: allowlist rules related to UEBA</li></ul>
                     * 
                     */
                    std::string GetWhitelistType() const;

                    /**
                     * 设置<p>Whitelist type</p><p>Enumeration values:</p><ul><li>static_risk: allowlist rules for static configuration scan</li><li>audit: audit allowlist rules</li><li>ueba: allowlist rules related to UEBA</li></ul>
                     * @param _whitelistType <p>Whitelist type</p><p>Enumeration values:</p><ul><li>static_risk: allowlist rules for static configuration scan</li><li>audit: audit allowlist rules</li><li>ueba: allowlist rules related to UEBA</li></ul>
                     * 
                     */
                    void SetWhitelistType(const std::string& _whitelistType);

                    /**
                     * 判断参数 WhitelistType 是否已赋值
                     * @return WhitelistType 是否已赋值
                     * 
                     */
                    bool WhitelistTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Policy type</p>
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Allowlist</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Policy</p>
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>Asset id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>Account</p>
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>Host</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>Risk id</p>
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Whitelist type</p><p>Enumeration values:</p><ul><li>static_risk: allowlist rules for static configuration scan</li><li>audit: audit allowlist rules</li><li>ueba: allowlist rules related to UEBA</li></ul>
                     */
                    std::string m_whitelistType;
                    bool m_whitelistTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMWHITELISTSTRATEGYREQUEST_H_
