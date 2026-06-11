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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSOLEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSOLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateConsole request structure.
                */
                class CreateConsoleRequest : public AbstractModel
                {
                public:
                    CreateConsoleRequest();
                    ~CreateConsoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Access method: public - public network, internal - private network</p>
                     * @return AccessMode <p>Access method: public - public network, internal - private network</p>
                     * 
                     */
                    std::vector<std::string> GetAccessMode() const;

                    /**
                     * 设置<p>Access method: public - public network, internal - private network</p>
                     * @param _accessMode <p>Access method: public - public network, internal - private network</p>
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
                     * 获取<p>Login method</p><p>Enumeration value:</p><ul><li>0: Account password authentication</li><li>1: Anonymous login</li><li>2: Third-party authentication login</li></ul>
                     * @return LoginMode <p>Login method</p><p>Enumeration value:</p><ul><li>0: Account password authentication</li><li>1: Anonymous login</li><li>2: Third-party authentication login</li></ul>
                     * 
                     */
                    uint64_t GetLoginMode() const;

                    /**
                     * 设置<p>Login method</p><p>Enumeration value:</p><ul><li>0: Account password authentication</li><li>1: Anonymous login</li><li>2: Third-party authentication login</li></ul>
                     * @param _loginMode <p>Login method</p><p>Enumeration value:</p><ul><li>0: Account password authentication</li><li>1: Anonymous login</li><li>2: Third-party authentication login</li></ul>
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
                     * 获取<p>User account information</p><p>"Account password authentication" is required for login method</p>
                     * @return Accounts <p>User account information</p><p>"Account password authentication" is required for login method</p>
                     * 
                     */
                    std::vector<ConsoleAccount> GetAccounts() const;

                    /**
                     * 设置<p>User account information</p><p>"Account password authentication" is required for login method</p>
                     * @param _accounts <p>User account information</p><p>"Account password authentication" is required for login method</p>
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
                     * 获取<p>Anonymous login account information</p><p>"Anonymous login" is a required login method.</p>
                     * @return AnonymousLogin <p>Anonymous login account information</p><p>"Anonymous login" is a required login method.</p>
                     * 
                     */
                    AnonymousLoginInfo GetAnonymousLogin() const;

                    /**
                     * 设置<p>Anonymous login account information</p><p>"Anonymous login" is a required login method.</p>
                     * @param _anonymousLogin <p>Anonymous login account information</p><p>"Anonymous login" is a required login method.</p>
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
                     * 获取<p>Private network type, defaults to 0</p>
                     * @return IntranetType <p>Private network type, defaults to 0</p>
                     * 
                     */
                    uint64_t GetIntranetType() const;

                    /**
                     * 设置<p>Private network type, defaults to 0</p>
                     * @param _intranetType <p>Private network type, defaults to 0</p>
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
                     * @return IntranetRegion <p>Private network region</p>
                     * 
                     */
                    std::string GetIntranetRegion() const;

                    /**
                     * 设置<p>Private network region</p>
                     * @param _intranetRegion <p>Private network region</p>
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
                     * @return VpcId <p>Private network VpcId</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>Private network VpcId</p>
                     * @param _vpcId <p>Private network VpcId</p>
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
                     * @return SubnetId <p>Private subnet SubnetId</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Private subnet SubnetId</p>
                     * @param _subnetId <p>Private subnet SubnetId</p>
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
                     * 获取<p>Auth role information</p><p>"Third-party authentication login" is a required login method.</p>
                     * @return AuthRoles <p>Auth role information</p><p>"Third-party authentication login" is a required login method.</p>
                     * 
                     */
                    std::vector<AuthRoleInfo> GetAuthRoles() const;

                    /**
                     * 设置<p>Auth role information</p><p>"Third-party authentication login" is a required login method.</p>
                     * @param _authRoles <p>Auth role information</p><p>"Third-party authentication login" is a required login method.</p>
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
                     * 获取<p>Tag description list. By specifying this parameter, you can simultaneously bind tags to the corresponding log topic. Supports up to 10 tag key-value pairs. The same resource can only be bound to the same tag key.</p>
                     * @return Tags <p>Tag description list. By specifying this parameter, you can simultaneously bind tags to the corresponding log topic. Supports up to 10 tag key-value pairs. The same resource can only be bound to the same tag key.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag description list. By specifying this parameter, you can simultaneously bind tags to the corresponding log topic. Supports up to 10 tag key-value pairs. The same resource can only be bound to the same tag key.</p>
                     * @param _tags <p>Tag description list. By specifying this parameter, you can simultaneously bind tags to the corresponding log topic. Supports up to 10 tag key-value pairs. The same resource can only be bound to the same tag key.</p>
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
                     * @return HideParams <p>Custom hidden parameter</p>
                     * 
                     */
                    std::vector<std::string> GetHideParams() const;

                    /**
                     * 设置<p>Custom hidden parameter</p>
                     * @param _hideParams <p>Custom hidden parameter</p>
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
                     * 获取<p>Access Control Rule</p><p>The "third-party authentication login" login method requires the AccessMode: internal && Action: ACCEPT rule.</p>
                     * @return AccessControlRules <p>Access Control Rule</p><p>The "third-party authentication login" login method requires the AccessMode: internal && Action: ACCEPT rule.</p>
                     * 
                     */
                    std::vector<AccessControlRule> GetAccessControlRules() const;

                    /**
                     * 设置<p>Access Control Rule</p><p>The "third-party authentication login" login method requires the AccessMode: internal && Action: ACCEPT rule.</p>
                     * @param _accessControlRules <p>Access Control Rule</p><p>The "third-party authentication login" login method requires the AccessMode: internal && Action: ACCEPT rule.</p>
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
                     * @return Remarks <p>Remark</p>
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 设置<p>Remark</p>
                     * @param _remarks <p>Remark</p>
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
                     * @return Menus <p>Customize menu</p>
                     * 
                     */
                    std::vector<std::string> GetMenus() const;

                    /**
                     * 设置<p>Customize menu</p>
                     * @param _menus <p>Customize menu</p>
                     * 
                     */
                    void SetMenus(const std::vector<std::string>& _menus);

                    /**
                     * 判断参数 Menus 是否已赋值
                     * @return Menus 是否已赋值
                     * 
                     */
                    bool MenusHasBeenSet() const;

                private:

                    /**
                     * <p>Access method: public - public network, internal - private network</p>
                     */
                    std::vector<std::string> m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>Login method</p><p>Enumeration value:</p><ul><li>0: Account password authentication</li><li>1: Anonymous login</li><li>2: Third-party authentication login</li></ul>
                     */
                    uint64_t m_loginMode;
                    bool m_loginModeHasBeenSet;

                    /**
                     * <p>Custom domain name prefix</p>
                     */
                    std::string m_domainPrefix;
                    bool m_domainPrefixHasBeenSet;

                    /**
                     * <p>User account information</p><p>"Account password authentication" is required for login method</p>
                     */
                    std::vector<ConsoleAccount> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * <p>Anonymous login account information</p><p>"Anonymous login" is a required login method.</p>
                     */
                    AnonymousLoginInfo m_anonymousLogin;
                    bool m_anonymousLoginHasBeenSet;

                    /**
                     * <p>Private network type, defaults to 0</p>
                     */
                    uint64_t m_intranetType;
                    bool m_intranetTypeHasBeenSet;

                    /**
                     * <p>Private network region</p>
                     */
                    std::string m_intranetRegion;
                    bool m_intranetRegionHasBeenSet;

                    /**
                     * <p>Private network VpcId</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Private subnet SubnetId</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Auth role information</p><p>"Third-party authentication login" is a required login method.</p>
                     */
                    std::vector<AuthRoleInfo> m_authRoles;
                    bool m_authRolesHasBeenSet;

                    /**
                     * <p>Tag description list. By specifying this parameter, you can simultaneously bind tags to the corresponding log topic. Supports up to 10 tag key-value pairs. The same resource can only be bound to the same tag key.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Custom hidden parameter</p>
                     */
                    std::vector<std::string> m_hideParams;
                    bool m_hideParamsHasBeenSet;

                    /**
                     * <p>Access Control Rule</p><p>The "third-party authentication login" login method requires the AccessMode: internal && Action: ACCEPT rule.</p>
                     */
                    std::vector<AccessControlRule> m_accessControlRules;
                    bool m_accessControlRulesHasBeenSet;

                    /**
                     * <p>Remark</p>
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                    /**
                     * <p>Customize menu</p>
                     */
                    std::vector<std::string> m_menus;
                    bool m_menusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSOLEREQUEST_H_
