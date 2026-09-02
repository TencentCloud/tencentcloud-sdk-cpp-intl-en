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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_REVERTDSPMASSETACCOUNTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_REVERTDSPMASSETACCOUNTREQUEST_H_

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
                * RevertDspmAssetAccount request structure.
                */
                class RevertDspmAssetAccountRequest : public AbstractModel
                {
                public:
                    RevertDspmAssetAccountRequest();
                    ~RevertDspmAssetAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return AssetId Instance ID.
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Instance ID.
                     * @param _assetId Instance ID.
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
                     * 获取Account name.
                     * @return Account Account name.
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置Account name.
                     * @param _account Account name.
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
                     * 获取Host address
                     * @return Host Host address
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host address
                     * @param _host Host address
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
                     * 获取Whether to roll back permissions
                     * @return PrivilegeFlag Whether to roll back permissions
                     * 
                     */
                    int64_t GetPrivilegeFlag() const;

                    /**
                     * 设置Whether to roll back permissions
                     * @param _privilegeFlag Whether to roll back permissions
                     * 
                     */
                    void SetPrivilegeFlag(const int64_t& _privilegeFlag);

                    /**
                     * 判断参数 PrivilegeFlag 是否已赋值
                     * @return PrivilegeFlag 是否已赋值
                     * 
                     */
                    bool PrivilegeFlagHasBeenSet() const;

                    /**
                     * 获取Whether to roll back the password
                     * @return PasswordFlag Whether to roll back the password
                     * 
                     */
                    int64_t GetPasswordFlag() const;

                    /**
                     * 设置Whether to roll back the password
                     * @param _passwordFlag Whether to roll back the password
                     * 
                     */
                    void SetPasswordFlag(const int64_t& _passwordFlag);

                    /**
                     * 判断参数 PasswordFlag 是否已赋值
                     * @return PasswordFlag 是否已赋值
                     * 
                     */
                    bool PasswordFlagHasBeenSet() const;

                    /**
                     * 获取Risk id
                     * @return RiskId Risk id
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置Risk id
                     * @param _riskId Risk id
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Account name.
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * Host address
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Whether to roll back permissions
                     */
                    int64_t m_privilegeFlag;
                    bool m_privilegeFlagHasBeenSet;

                    /**
                     * Whether to roll back the password
                     */
                    int64_t m_passwordFlag;
                    bool m_passwordFlagHasBeenSet;

                    /**
                     * Risk id
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_REVERTDSPMASSETACCOUNTREQUEST_H_
