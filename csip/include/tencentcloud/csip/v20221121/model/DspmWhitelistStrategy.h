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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMWHITELISTSTRATEGY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMWHITELISTSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Dspm allowlist policy
                */
                class DspmWhitelistStrategy : public AbstractModel
                {
                public:
                    DspmWhitelistStrategy();
                    ~DspmWhitelistStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Allowlist policy id</p>
                     * @return WhitelistStrategyId <p>Allowlist policy id</p>
                     * 
                     */
                    std::string GetWhitelistStrategyId() const;

                    /**
                     * 设置<p>Allowlist policy id</p>
                     * @param _whitelistStrategyId <p>Allowlist policy id</p>
                     * 
                     */
                    void SetWhitelistStrategyId(const std::string& _whitelistStrategyId);

                    /**
                     * 判断参数 WhitelistStrategyId 是否已赋值
                     * @return WhitelistStrategyId 是否已赋值
                     * 
                     */
                    bool WhitelistStrategyIdHasBeenSet() const;

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
                     * 获取<p>Allowlist policy name</p>
                     * @return Name <p>Allowlist policy name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Allowlist policy name</p>
                     * @param _name <p>Allowlist policy name</p>
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
                     * 获取<p>Policy type</p>
                     * @return StrategyCategory <p>Policy type</p>
                     * 
                     */
                    std::string GetStrategyCategory() const;

                    /**
                     * 设置<p>Policy type</p>
                     * @param _strategyCategory <p>Policy type</p>
                     * 
                     */
                    void SetStrategyCategory(const std::string& _strategyCategory);

                    /**
                     * 判断参数 StrategyCategory 是否已赋值
                     * @return StrategyCategory 是否已赋值
                     * 
                     */
                    bool StrategyCategoryHasBeenSet() const;

                    /**
                     * 获取<p>Policy rule</p>
                     * @return Rule <p>Policy rule</p>
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置<p>Policy rule</p>
                     * @param _rule <p>Policy rule</p>
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
                     * 获取<p>Modification time.</p>
                     * @return ModifyTime <p>Modification time.</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>Modification time.</p>
                     * @param _modifyTime <p>Modification time.</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

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
                     * 获取<p>Policy rule content description</p>
                     * @return Description <p>Policy rule content description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Policy rule content description</p>
                     * @param _description <p>Policy rule content description</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Allowlist type. risk - risk allowlist; alarm - alarm allowlist.</p>
                     * @return RiskType <p>Allowlist type. risk - risk allowlist; alarm - alarm allowlist.</p>
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置<p>Allowlist type. risk - risk allowlist; alarm - alarm allowlist.</p>
                     * @param _riskType <p>Allowlist type. risk - risk allowlist; alarm - alarm allowlist.</p>
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>app id of the asset's associated account</p>
                     * @return AppId <p>app id of the asset's associated account</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>app id of the asset's associated account</p>
                     * @param _appId <p>app id of the asset's associated account</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Account nickname</p>
                     * @return NickName <p>Account nickname</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>Account nickname</p>
                     * @param _nickName <p>Account nickname</p>
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取<p>uin of the associated account of the asset</p>
                     * @return Uin <p>uin of the associated account of the asset</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>uin of the associated account of the asset</p>
                     * @param _uin <p>uin of the associated account of the asset</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>Type of allowlist</p>
                     * @return WhitelistType <p>Type of allowlist</p>
                     * 
                     */
                    std::string GetWhitelistType() const;

                    /**
                     * 设置<p>Type of allowlist</p>
                     * @param _whitelistType <p>Type of allowlist</p>
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
                     * <p>Allowlist policy id</p>
                     */
                    std::string m_whitelistStrategyId;
                    bool m_whitelistStrategyIdHasBeenSet;

                    /**
                     * <p>Policy type</p>
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>Allowlist policy name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Policy type</p>
                     */
                    std::string m_strategyCategory;
                    bool m_strategyCategoryHasBeenSet;

                    /**
                     * <p>Policy rule</p>
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Modification time.</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

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
                     * <p>Policy rule content description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Allowlist type. risk - risk allowlist; alarm - alarm allowlist.</p>
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * <p>app id of the asset's associated account</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Account nickname</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>uin of the associated account of the asset</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Type of allowlist</p>
                     */
                    std::string m_whitelistType;
                    bool m_whitelistTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMWHITELISTSTRATEGY_H_
