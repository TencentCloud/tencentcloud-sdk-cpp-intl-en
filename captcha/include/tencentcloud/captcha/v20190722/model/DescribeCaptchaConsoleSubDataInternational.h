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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHACONSOLESUBDATAINTERNATIONAL_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHACONSOLESUBDATAINTERNATIONAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Verification code console query API v2 international
                */
                class DescribeCaptchaConsoleSubDataInternational : public AbstractModel
                {
                public:
                    DescribeCaptchaConsoleSubDataInternational();
                    ~DescribeCaptchaConsoleSubDataInternational() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Verification code id</p>
                     * @return CaptchaAppId <p>Verification code id</p>
                     * 
                     */
                    int64_t GetCaptchaAppId() const;

                    /**
                     * 设置<p>Verification code id</p>
                     * @param _captchaAppId <p>Verification code id</p>
                     * 
                     */
                    void SetCaptchaAppId(const int64_t& _captchaAppId);

                    /**
                     * 判断参数 CaptchaAppId 是否已赋值
                     * @return CaptchaAppId 是否已赋值
                     * 
                     */
                    bool CaptchaAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Verification name</p>
                     * @return AppName <p>Verification name</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>Verification name</p>
                     * @param _appName <p>Verification name</p>
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取<p>Separate domain names with commas</p>
                     * @return Domain <p>Separate domain names with commas</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>Separate domain names with commas</p>
                     * @param _domain <p>Separate domain names with commas</p>
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
                     * 获取<p>Random key</p>
                     * @return EncryptKey <p>Random key</p>
                     * 
                     */
                    std::string GetEncryptKey() const;

                    /**
                     * 设置<p>Random key</p>
                     * @param _encryptKey <p>Random key</p>
                     * 
                     */
                    void SetEncryptKey(const std::string& _encryptKey);

                    /**
                     * 判断参数 EncryptKey 是否已赋值
                     * @return EncryptKey 是否已赋值
                     * 
                     */
                    bool EncryptKeyHasBeenSet() const;

                    /**
                     * 获取<p>Verification scenario</p><p>Enumeration values:</p><ul><li>1: Account</li><li>2: SMS</li><li>3: Promotion</li><li>4: Comment</li><li>5: Data protection</li><li>6: Other</li></ul>
                     * @return SceneType <p>Verification scenario</p><p>Enumeration values:</p><ul><li>1: Account</li><li>2: SMS</li><li>3: Promotion</li><li>4: Comment</li><li>5: Data protection</li><li>6: Other</li></ul>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>Verification scenario</p><p>Enumeration values:</p><ul><li>1: Account</li><li>2: SMS</li><li>3: Promotion</li><li>4: Comment</li><li>5: Data protection</li><li>6: Other</li></ul>
                     * @param _sceneType <p>Verification scenario</p><p>Enumeration values:</p><ul><li>1: Account</li><li>2: SMS</li><li>3: Promotion</li><li>4: Comment</li><li>5: Data protection</li><li>6: Other</li></ul>
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取<p>Validation type</p><p>Enumeration values:</p><ul><li>1: Invisible verification. UserSetCapType input 1, DisableInvisibleSwitch must be 2</li><li>2: Sliding puzzle</li><li>8: Graphical point selection</li><li>9: Voice verification</li></ul>
                     * @return UserSetCapType <p>Validation type</p><p>Enumeration values:</p><ul><li>1: Invisible verification. UserSetCapType input 1, DisableInvisibleSwitch must be 2</li><li>2: Sliding puzzle</li><li>8: Graphical point selection</li><li>9: Voice verification</li></ul>
                     * 
                     */
                    int64_t GetUserSetCapType() const;

                    /**
                     * 设置<p>Validation type</p><p>Enumeration values:</p><ul><li>1: Invisible verification. UserSetCapType input 1, DisableInvisibleSwitch must be 2</li><li>2: Sliding puzzle</li><li>8: Graphical point selection</li><li>9: Voice verification</li></ul>
                     * @param _userSetCapType <p>Validation type</p><p>Enumeration values:</p><ul><li>1: Invisible verification. UserSetCapType input 1, DisableInvisibleSwitch must be 2</li><li>2: Sliding puzzle</li><li>8: Graphical point selection</li><li>9: Voice verification</li></ul>
                     * 
                     */
                    void SetUserSetCapType(const int64_t& _userSetCapType);

                    /**
                     * 判断参数 UserSetCapType 是否已赋值
                     * @return UserSetCapType 是否已赋值
                     * 
                     */
                    bool UserSetCapTypeHasBeenSet() const;

                    /**
                     * 获取<p>Intelligent verification-free</p><p>Enumeration values:</p><ul><li>0: disable</li><li>1: enable</li></ul>
                     * @return NoVerifyRule <p>Intelligent verification-free</p><p>Enumeration values:</p><ul><li>0: disable</li><li>1: enable</li></ul>
                     * 
                     */
                    int64_t GetNoVerifyRule() const;

                    /**
                     * 设置<p>Intelligent verification-free</p><p>Enumeration values:</p><ul><li>0: disable</li><li>1: enable</li></ul>
                     * @param _noVerifyRule <p>Intelligent verification-free</p><p>Enumeration values:</p><ul><li>0: disable</li><li>1: enable</li></ul>
                     * 
                     */
                    void SetNoVerifyRule(const int64_t& _noVerifyRule);

                    /**
                     * 判断参数 NoVerifyRule 是否已赋值
                     * @return NoVerifyRule 是否已赋值
                     * 
                     */
                    bool NoVerifyRuleHasBeenSet() const;

                    /**
                     * 获取<p>Language</p><p>Enumeration values:</p><ul><li>1: Self adaptive</li><li>2052: Simplified</li><li>1028: Traditional</li><li>1033: English</li></ul>
                     * @return CaptchaLanguage <p>Language</p><p>Enumeration values:</p><ul><li>1: Self adaptive</li><li>2052: Simplified</li><li>1028: Traditional</li><li>1033: English</li></ul>
                     * 
                     */
                    std::string GetCaptchaLanguage() const;

                    /**
                     * 设置<p>Language</p><p>Enumeration values:</p><ul><li>1: Self adaptive</li><li>2052: Simplified</li><li>1028: Traditional</li><li>1033: English</li></ul>
                     * @param _captchaLanguage <p>Language</p><p>Enumeration values:</p><ul><li>1: Self adaptive</li><li>2052: Simplified</li><li>1028: Traditional</li><li>1033: English</li></ul>
                     * 
                     */
                    void SetCaptchaLanguage(const std::string& _captchaLanguage);

                    /**
                     * 判断参数 CaptchaLanguage 是否已赋值
                     * @return CaptchaLanguage 是否已赋值
                     * 
                     */
                    bool CaptchaLanguageHasBeenSet() const;

                    /**
                     * 获取<p>Verification level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul><p>Default value: 1</p>
                     * @return VerifyRank <p>Verification level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul><p>Default value: 1</p>
                     * 
                     */
                    int64_t GetVerifyRank() const;

                    /**
                     * 设置<p>Verification level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul><p>Default value: 1</p>
                     * @param _verifyRank <p>Verification level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul><p>Default value: 1</p>
                     * 
                     */
                    void SetVerifyRank(const int64_t& _verifyRank);

                    /**
                     * 判断参数 VerifyRank 是否已赋值
                     * @return VerifyRank 是否已赋值
                     * 
                     */
                    bool VerifyRankHasBeenSet() const;

                    /**
                     * 获取<p>Client type</p><p>Enumeration values:</p><ul><li>web: For web scenario usage</li><li>android: For Android client usage</li><li>ios: For iOS client usage</li></ul>
                     * @return ChannelInfo <p>Client type</p><p>Enumeration values:</p><ul><li>web: For web scenario usage</li><li>android: For Android client usage</li><li>ios: For iOS client usage</li></ul>
                     * 
                     */
                    std::string GetChannelInfo() const;

                    /**
                     * 设置<p>Client type</p><p>Enumeration values:</p><ul><li>web: For web scenario usage</li><li>android: For Android client usage</li><li>ios: For iOS client usage</li></ul>
                     * @param _channelInfo <p>Client type</p><p>Enumeration values:</p><ul><li>web: For web scenario usage</li><li>android: For Android client usage</li><li>ios: For iOS client usage</li></ul>
                     * 
                     */
                    void SetChannelInfo(const std::string& _channelInfo);

                    /**
                     * 判断参数 ChannelInfo 是否已赋值
                     * @return ChannelInfo 是否已赋值
                     * 
                     */
                    bool ChannelInfoHasBeenSet() const;

                    /**
                     * 获取<p>Interception mode</p><p>Enumeration values:</p><ul><li>block: interception mode</li><li>notify: perception mode</li></ul><p>Default value: notify</p>
                     * @return DefendMode <p>Interception mode</p><p>Enumeration values:</p><ul><li>block: interception mode</li><li>notify: perception mode</li></ul><p>Default value: notify</p>
                     * 
                     */
                    std::string GetDefendMode() const;

                    /**
                     * 设置<p>Interception mode</p><p>Enumeration values:</p><ul><li>block: interception mode</li><li>notify: perception mode</li></ul><p>Default value: notify</p>
                     * @param _defendMode <p>Interception mode</p><p>Enumeration values:</p><ul><li>block: interception mode</li><li>notify: perception mode</li></ul><p>Default value: notify</p>
                     * 
                     */
                    void SetDefendMode(const std::string& _defendMode);

                    /**
                     * 判断参数 DefendMode 是否已赋值
                     * @return DefendMode 是否已赋值
                     * 
                     */
                    bool DefendModeHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable captchaAppid encryption</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul>
                     * @return CheckAppidSwitch <p>Whether to enable captchaAppid encryption</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul>
                     * 
                     */
                    int64_t GetCheckAppidSwitch() const;

                    /**
                     * 设置<p>Whether to enable captchaAppid encryption</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul>
                     * @param _checkAppidSwitch <p>Whether to enable captchaAppid encryption</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul>
                     * 
                     */
                    void SetCheckAppidSwitch(const int64_t& _checkAppidSwitch);

                    /**
                     * 判断参数 CheckAppidSwitch 是否已赋值
                     * @return CheckAppidSwitch 是否已赋值
                     * 
                     */
                    bool CheckAppidSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Resource tag.</p>
                     * @return Tags <p>Resource tag.</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>Resource tag.</p>
                     * @param _tags <p>Resource tag.</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable non-repeating IV</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * @return CheckIvSwitch <p>Whether to enable non-repeating IV</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * 
                     */
                    int64_t GetCheckIvSwitch() const;

                    /**
                     * 设置<p>Whether to enable non-repeating IV</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * @param _checkIvSwitch <p>Whether to enable non-repeating IV</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * 
                     */
                    void SetCheckIvSwitch(const int64_t& _checkIvSwitch);

                    /**
                     * 判断参数 CheckIvSwitch 是否已赋值
                     * @return CheckIvSwitch 是否已赋值
                     * 
                     */
                    bool CheckIvSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Verification mechanism</p><p>Enumeration values:</p><ul><li>0: One-Click Verification</li><li>1: Always verify</li><li>2: Invisible verification. DisableInvisibleSwitch input 2, UserSetCapType must be 1</li></ul>
                     * @return DisableInvisibleSwitch <p>Verification mechanism</p><p>Enumeration values:</p><ul><li>0: One-Click Verification</li><li>1: Always verify</li><li>2: Invisible verification. DisableInvisibleSwitch input 2, UserSetCapType must be 1</li></ul>
                     * 
                     */
                    std::string GetDisableInvisibleSwitch() const;

                    /**
                     * 设置<p>Verification mechanism</p><p>Enumeration values:</p><ul><li>0: One-Click Verification</li><li>1: Always verify</li><li>2: Invisible verification. DisableInvisibleSwitch input 2, UserSetCapType must be 1</li></ul>
                     * @param _disableInvisibleSwitch <p>Verification mechanism</p><p>Enumeration values:</p><ul><li>0: One-Click Verification</li><li>1: Always verify</li><li>2: Invisible verification. DisableInvisibleSwitch input 2, UserSetCapType must be 1</li></ul>
                     * 
                     */
                    void SetDisableInvisibleSwitch(const std::string& _disableInvisibleSwitch);

                    /**
                     * 判断参数 DisableInvisibleSwitch 是否已赋值
                     * @return DisableInvisibleSwitch 是否已赋值
                     * 
                     */
                    bool DisableInvisibleSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Web domain name</p><p>Valid only when ChannelInfo is web</p>
                     * @return VerifyDomain <p>Web domain name</p><p>Valid only when ChannelInfo is web</p>
                     * 
                     */
                    std::string GetVerifyDomain() const;

                    /**
                     * 设置<p>Web domain name</p><p>Valid only when ChannelInfo is web</p>
                     * @param _verifyDomain <p>Web domain name</p><p>Valid only when ChannelInfo is web</p>
                     * 
                     */
                    void SetVerifyDomain(const std::string& _verifyDomain);

                    /**
                     * 判断参数 VerifyDomain 是否已赋值
                     * @return VerifyDomain 是否已赋值
                     * 
                     */
                    bool VerifyDomainHasBeenSet() const;

                    /**
                     * 获取<p>app BundleId</p><p>Valid only when ChannelInfo is ios</p>
                     * @return VerifyBundleId <p>app BundleId</p><p>Valid only when ChannelInfo is ios</p>
                     * 
                     */
                    std::string GetVerifyBundleId() const;

                    /**
                     * 设置<p>app BundleId</p><p>Valid only when ChannelInfo is ios</p>
                     * @param _verifyBundleId <p>app BundleId</p><p>Valid only when ChannelInfo is ios</p>
                     * 
                     */
                    void SetVerifyBundleId(const std::string& _verifyBundleId);

                    /**
                     * 判断参数 VerifyBundleId 是否已赋值
                     * @return VerifyBundleId 是否已赋值
                     * 
                     */
                    bool VerifyBundleIdHasBeenSet() const;

                    /**
                     * 获取<p>app package</p><p>Only valid when ChannelInfo is android</p>
                     * @return VerifyPackage <p>app package</p><p>Only valid when ChannelInfo is android</p>
                     * 
                     */
                    std::string GetVerifyPackage() const;

                    /**
                     * 设置<p>app package</p><p>Only valid when ChannelInfo is android</p>
                     * @param _verifyPackage <p>app package</p><p>Only valid when ChannelInfo is android</p>
                     * 
                     */
                    void SetVerifyPackage(const std::string& _verifyPackage);

                    /**
                     * 判断参数 VerifyPackage 是否已赋值
                     * @return VerifyPackage 是否已赋值
                     * 
                     */
                    bool VerifyPackageHasBeenSet() const;

                    /**
                     * 获取<p>Checkbox display method</p><p>Enumeration values:</p><ul><li>0: simplified version</li><li>1: basic version</li><li>2: invisible version</li></ul>
                     * @return CheckBoxStyle <p>Checkbox display method</p><p>Enumeration values:</p><ul><li>0: simplified version</li><li>1: basic version</li><li>2: invisible version</li></ul>
                     * 
                     */
                    std::string GetCheckBoxStyle() const;

                    /**
                     * 设置<p>Checkbox display method</p><p>Enumeration values:</p><ul><li>0: simplified version</li><li>1: basic version</li><li>2: invisible version</li></ul>
                     * @param _checkBoxStyle <p>Checkbox display method</p><p>Enumeration values:</p><ul><li>0: simplified version</li><li>1: basic version</li><li>2: invisible version</li></ul>
                     * 
                     */
                    void SetCheckBoxStyle(const std::string& _checkBoxStyle);

                    /**
                     * 判断参数 CheckBoxStyle 是否已赋值
                     * @return CheckBoxStyle 是否已赋值
                     * 
                     */
                    bool CheckBoxStyleHasBeenSet() const;

                    /**
                     * 获取<p>Customer type</p><p>Enumeration values:</p><ul><li>0: General user</li><li>1: waf</li><li>2: EO</li></ul>
                     * @return CustomerType <p>Customer type</p><p>Enumeration values:</p><ul><li>0: General user</li><li>1: waf</li><li>2: EO</li></ul>
                     * 
                     */
                    std::string GetCustomerType() const;

                    /**
                     * 设置<p>Customer type</p><p>Enumeration values:</p><ul><li>0: General user</li><li>1: waf</li><li>2: EO</li></ul>
                     * @param _customerType <p>Customer type</p><p>Enumeration values:</p><ul><li>0: General user</li><li>1: waf</li><li>2: EO</li></ul>
                     * 
                     */
                    void SetCustomerType(const std::string& _customerType);

                    /**
                     * 判断参数 CustomerType 是否已赋值
                     * @return CustomerType 是否已赋值
                     * 
                     */
                    bool CustomerTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Verification code id</p>
                     */
                    int64_t m_captchaAppId;
                    bool m_captchaAppIdHasBeenSet;

                    /**
                     * <p>Verification name</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>Separate domain names with commas</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Random key</p>
                     */
                    std::string m_encryptKey;
                    bool m_encryptKeyHasBeenSet;

                    /**
                     * <p>Verification scenario</p><p>Enumeration values:</p><ul><li>1: Account</li><li>2: SMS</li><li>3: Promotion</li><li>4: Comment</li><li>5: Data protection</li><li>6: Other</li></ul>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>Validation type</p><p>Enumeration values:</p><ul><li>1: Invisible verification. UserSetCapType input 1, DisableInvisibleSwitch must be 2</li><li>2: Sliding puzzle</li><li>8: Graphical point selection</li><li>9: Voice verification</li></ul>
                     */
                    int64_t m_userSetCapType;
                    bool m_userSetCapTypeHasBeenSet;

                    /**
                     * <p>Intelligent verification-free</p><p>Enumeration values:</p><ul><li>0: disable</li><li>1: enable</li></ul>
                     */
                    int64_t m_noVerifyRule;
                    bool m_noVerifyRuleHasBeenSet;

                    /**
                     * <p>Language</p><p>Enumeration values:</p><ul><li>1: Self adaptive</li><li>2052: Simplified</li><li>1028: Traditional</li><li>1033: English</li></ul>
                     */
                    std::string m_captchaLanguage;
                    bool m_captchaLanguageHasBeenSet;

                    /**
                     * <p>Verification level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul><p>Default value: 1</p>
                     */
                    int64_t m_verifyRank;
                    bool m_verifyRankHasBeenSet;

                    /**
                     * <p>Client type</p><p>Enumeration values:</p><ul><li>web: For web scenario usage</li><li>android: For Android client usage</li><li>ios: For iOS client usage</li></ul>
                     */
                    std::string m_channelInfo;
                    bool m_channelInfoHasBeenSet;

                    /**
                     * <p>Interception mode</p><p>Enumeration values:</p><ul><li>block: interception mode</li><li>notify: perception mode</li></ul><p>Default value: notify</p>
                     */
                    std::string m_defendMode;
                    bool m_defendModeHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Whether to enable captchaAppid encryption</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul>
                     */
                    int64_t m_checkAppidSwitch;
                    bool m_checkAppidSwitchHasBeenSet;

                    /**
                     * <p>Resource tag.</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Whether to enable non-repeating IV</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     */
                    int64_t m_checkIvSwitch;
                    bool m_checkIvSwitchHasBeenSet;

                    /**
                     * <p>Verification mechanism</p><p>Enumeration values:</p><ul><li>0: One-Click Verification</li><li>1: Always verify</li><li>2: Invisible verification. DisableInvisibleSwitch input 2, UserSetCapType must be 1</li></ul>
                     */
                    std::string m_disableInvisibleSwitch;
                    bool m_disableInvisibleSwitchHasBeenSet;

                    /**
                     * <p>Web domain name</p><p>Valid only when ChannelInfo is web</p>
                     */
                    std::string m_verifyDomain;
                    bool m_verifyDomainHasBeenSet;

                    /**
                     * <p>app BundleId</p><p>Valid only when ChannelInfo is ios</p>
                     */
                    std::string m_verifyBundleId;
                    bool m_verifyBundleIdHasBeenSet;

                    /**
                     * <p>app package</p><p>Only valid when ChannelInfo is android</p>
                     */
                    std::string m_verifyPackage;
                    bool m_verifyPackageHasBeenSet;

                    /**
                     * <p>Checkbox display method</p><p>Enumeration values:</p><ul><li>0: simplified version</li><li>1: basic version</li><li>2: invisible version</li></ul>
                     */
                    std::string m_checkBoxStyle;
                    bool m_checkBoxStyleHasBeenSet;

                    /**
                     * <p>Customer type</p><p>Enumeration values:</p><ul><li>0: General user</li><li>1: waf</li><li>2: EO</li></ul>
                     */
                    std::string m_customerType;
                    bool m_customerTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHACONSOLESUBDATAINTERNATIONAL_H_
