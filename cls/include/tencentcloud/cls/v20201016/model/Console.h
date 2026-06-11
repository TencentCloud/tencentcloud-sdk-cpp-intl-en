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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ConsoleAccount.h>
#include <tencentcloud/cls/v20201016/model/AnonymousLoginInfo.h>
#include <tencentcloud/cls/v20201016/model/AuthRoleInfo.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/AccessControlRule.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DataSight Console instance
                */
                class Console : public AbstractModel
                {
                public:
                    Console();
                    ~Console() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>DataSight Console Id</p>
                     * @return ConsoleId <p>DataSight Console Id</p>
                     * 
                     */
                    std::string GetConsoleId() const;

                    /**
                     * 设置<p>DataSight Console Id</p>
                     * @param _consoleId <p>DataSight Console Id</p>
                     * 
                     */
                    void SetConsoleId(const std::string& _consoleId);

                    /**
                     * 判断参数 ConsoleId 是否已赋值
                     * @return ConsoleId 是否已赋值
                     * 
                     */
                    bool ConsoleIdHasBeenSet() const;

                    /**
                     * 获取<p>Access method: public - internet, internal - intranet</p>
                     * @return AccessMode <p>Access method: public - internet, internal - intranet</p>
                     * 
                     */
                    std::vector<std::string> GetAccessMode() const;

                    /**
                     * 设置<p>Access method: public - internet, internal - intranet</p>
                     * @param _accessMode <p>Access method: public - internet, internal - intranet</p>
                     * 
                     */
                    void SetAccessMode(const std::vector<std::string>& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取<p>Log-in methods: 0-account password authentication, 1-anonymous login, 2-third-party authentication login</p>
                     * @return LoginMode <p>Log-in methods: 0-account password authentication, 1-anonymous login, 2-third-party authentication login</p>
                     * 
                     */
                    uint64_t GetLoginMode() const;

                    /**
                     * 设置<p>Log-in methods: 0-account password authentication, 1-anonymous login, 2-third-party authentication login</p>
                     * @param _loginMode <p>Log-in methods: 0-account password authentication, 1-anonymous login, 2-third-party authentication login</p>
                     * 
                     */
                    void SetLoginMode(const uint64_t& _loginMode);

                    /**
                     * 判断参数 LoginMode 是否已赋值
                     * @return LoginMode 是否已赋值
                     * 
                     */
                    bool LoginModeHasBeenSet() const;

                    /**
                     * 获取<p>Custom domain name prefix</p>
                     * @return DomainPrefix <p>Custom domain name prefix</p>
                     * 
                     */
                    std::string GetDomainPrefix() const;

                    /**
                     * 设置<p>Custom domain name prefix</p>
                     * @param _domainPrefix <p>Custom domain name prefix</p>
                     * 
                     */
                    void SetDomainPrefix(const std::string& _domainPrefix);

                    /**
                     * 判断参数 DomainPrefix 是否已赋值
                     * @return DomainPrefix 是否已赋值
                     * 
                     */
                    bool DomainPrefixHasBeenSet() const;

                    /**
                     * 获取<p>User account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Accounts <p>User account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ConsoleAccount> GetAccounts() const;

                    /**
                     * 设置<p>User account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accounts <p>User account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccounts(const std::vector<ConsoleAccount>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                    /**
                     * 获取<p>Private network type, defaults to 0</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IntranetType <p>Private network type, defaults to 0</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIntranetType() const;

                    /**
                     * 设置<p>Private network type, defaults to 0</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _intranetType <p>Private network type, defaults to 0</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIntranetType(const uint64_t& _intranetType);

                    /**
                     * 判断参数 IntranetType 是否已赋值
                     * @return IntranetType 是否已赋值
                     * 
                     */
                    bool IntranetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Private network region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IntranetRegion <p>Private network region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIntranetRegion() const;

                    /**
                     * 设置<p>Private network region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _intranetRegion <p>Private network region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIntranetRegion(const std::string& _intranetRegion);

                    /**
                     * 判断参数 IntranetRegion 是否已赋值
                     * @return IntranetRegion 是否已赋值
                     * 
                     */
                    bool IntranetRegionHasBeenSet() const;

                    /**
                     * 获取<p>Private network VpcId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId <p>Private network VpcId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>Private network VpcId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId <p>Private network VpcId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>Private subnet SubnetId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId <p>Private subnet SubnetId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Private subnet SubnetId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetId <p>Private subnet SubnetId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>Anonymous login account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AnonymousLogin <p>Anonymous login account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AnonymousLoginInfo GetAnonymousLogin() const;

                    /**
                     * 设置<p>Anonymous login account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _anonymousLogin <p>Anonymous login account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAnonymousLogin(const AnonymousLoginInfo& _anonymousLogin);

                    /**
                     * 判断参数 AnonymousLogin 是否已赋值
                     * @return AnonymousLogin 是否已赋值
                     * 
                     */
                    bool AnonymousLoginHasBeenSet() const;

                    /**
                     * 获取<p>auth user role information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthRoles <p>auth user role information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AuthRoleInfo> GetAuthRoles() const;

                    /**
                     * 设置<p>auth user role information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authRoles <p>auth user role information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthRoles(const std::vector<AuthRoleInfo>& _authRoles);

                    /**
                     * 判断参数 AuthRoles 是否已赋值
                     * @return AuthRoles 是否已赋值
                     * 
                     */
                    bool AuthRolesHasBeenSet() const;

                    /**
                     * 获取<p>Bound tag information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags <p>Bound tag information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Bound tag information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags <p>Bound tag information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Custom hidden parameter</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HideParams <p>Custom hidden parameter</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetHideParams() const;

                    /**
                     * 设置<p>Custom hidden parameter</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hideParams <p>Custom hidden parameter</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHideParams(const std::vector<std::string>& _hideParams);

                    /**
                     * 判断参数 HideParams 是否已赋值
                     * @return HideParams 是否已赋值
                     * 
                     */
                    bool HideParamsHasBeenSet() const;

                    /**
                     * 获取<p>Access Control Rule</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessControlRules <p>Access Control Rule</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AccessControlRule> GetAccessControlRules() const;

                    /**
                     * 设置<p>Access Control Rule</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessControlRules <p>Access Control Rule</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessControlRules(const std::vector<AccessControlRule>& _accessControlRules);

                    /**
                     * 判断参数 AccessControlRules 是否已赋值
                     * @return AccessControlRules 是否已赋值
                     * 
                     */
                    bool AccessControlRulesHasBeenSet() const;

                    /**
                     * 获取<p>Remark</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remarks <p>Remark</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 设置<p>Remark</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remarks <p>Remark</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemarks(const std::string& _remarks);

                    /**
                     * 判断参数 Remarks 是否已赋值
                     * @return Remarks 是否已赋值
                     * 
                     */
                    bool RemarksHasBeenSet() const;

                    /**
                     * 获取<p>Customize menu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Menus <p>Customize menu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetMenus() const;

                    /**
                     * 设置<p>Customize menu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _menus <p>Customize menu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMenus(const std::vector<std::string>& _menus);

                    /**
                     * 判断参数 Menus 是否已赋值
                     * @return Menus 是否已赋值
                     * 
                     */
                    bool MenusHasBeenSet() const;

                    /**
                     * 获取<p>Public access domain name</p>
                     * @return Domain <p>Public access domain name</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>Public access domain name</p>
                     * @param _domain <p>Public access domain name</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>private network access domain</p>
                     * @return IntranetDomain <p>private network access domain</p>
                     * 
                     */
                    std::string GetIntranetDomain() const;

                    /**
                     * 设置<p>private network access domain</p>
                     * @param _intranetDomain <p>private network access domain</p>
                     * 
                     */
                    void SetIntranetDomain(const std::string& _intranetDomain);

                    /**
                     * 判断参数 IntranetDomain 是否已赋值
                     * @return IntranetDomain 是否已赋值
                     * 
                     */
                    bool IntranetDomainHasBeenSet() const;

                private:

                    /**
                     * <p>DataSight Console Id</p>
                     */
                    std::string m_consoleId;
                    bool m_consoleIdHasBeenSet;

                    /**
                     * <p>Access method: public - internet, internal - intranet</p>
                     */
                    std::vector<std::string> m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>Log-in methods: 0-account password authentication, 1-anonymous login, 2-third-party authentication login</p>
                     */
                    uint64_t m_loginMode;
                    bool m_loginModeHasBeenSet;

                    /**
                     * <p>Custom domain name prefix</p>
                     */
                    std::string m_domainPrefix;
                    bool m_domainPrefixHasBeenSet;

                    /**
                     * <p>User account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ConsoleAccount> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * <p>Private network type, defaults to 0</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_intranetType;
                    bool m_intranetTypeHasBeenSet;

                    /**
                     * <p>Private network region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_intranetRegion;
                    bool m_intranetRegionHasBeenSet;

                    /**
                     * <p>Private network VpcId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Private subnet SubnetId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Anonymous login account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AnonymousLoginInfo m_anonymousLogin;
                    bool m_anonymousLoginHasBeenSet;

                    /**
                     * <p>auth user role information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AuthRoleInfo> m_authRoles;
                    bool m_authRolesHasBeenSet;

                    /**
                     * <p>Bound tag information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Custom hidden parameter</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_hideParams;
                    bool m_hideParamsHasBeenSet;

                    /**
                     * <p>Access Control Rule</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AccessControlRule> m_accessControlRules;
                    bool m_accessControlRulesHasBeenSet;

                    /**
                     * <p>Remark</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                    /**
                     * <p>Customize menu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_menus;
                    bool m_menusHasBeenSet;

                    /**
                     * <p>Public access domain name</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>private network access domain</p>
                     */
                    std::string m_intranetDomain;
                    bool m_intranetDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLE_H_
