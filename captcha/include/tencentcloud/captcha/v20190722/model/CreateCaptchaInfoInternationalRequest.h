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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CREATECAPTCHAINFOINTERNATIONALREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CREATECAPTCHAINFOINTERNATIONALREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCaptchaInfoInternational request structure.
                */
                class CreateCaptchaInfoInternationalRequest : public AbstractModel
                {
                public:
                    CreateCaptchaInfoInternationalRequest();
                    ~CreateCaptchaInfoInternationalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Captcha name</p>
                     * @return AppName <p>Captcha name</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>Captcha name</p>
                     * @param _appName <p>Captcha name</p>
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
                     * 获取<p>Client type</p><p>Enumeration values:</p><ul><li>web: For web scenario</li><li>android: For Android client</li><li>ios: For iOS client</li></ul><p>Default value: web</p>
                     * @return ChannelInfo <p>Client type</p><p>Enumeration values:</p><ul><li>web: For web scenario</li><li>android: For Android client</li><li>ios: For iOS client</li></ul><p>Default value: web</p>
                     * 
                     */
                    std::string GetChannelInfo() const;

                    /**
                     * 设置<p>Client type</p><p>Enumeration values:</p><ul><li>web: For web scenario</li><li>android: For Android client</li><li>ios: For iOS client</li></ul><p>Default value: web</p>
                     * @param _channelInfo <p>Client type</p><p>Enumeration values:</p><ul><li>web: For web scenario</li><li>android: For Android client</li><li>ios: For iOS client</li></ul><p>Default value: web</p>
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
                     * 获取<p>Verification level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul><p>Default value: 1</p>
                     * @return VerifyRank <p>Verification level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul><p>Default value: 1</p>
                     * 
                     */
                    std::string GetVerifyRank() const;

                    /**
                     * 设置<p>Verification level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul><p>Default value: 1</p>
                     * @param _verifyRank <p>Verification level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul><p>Default value: 1</p>
                     * 
                     */
                    void SetVerifyRank(const std::string& _verifyRank);

                    /**
                     * 判断参数 VerifyRank 是否已赋值
                     * @return VerifyRank 是否已赋值
                     * 
                     */
                    bool VerifyRankHasBeenSet() const;

                    /**
                     * 获取<p>Validation type</p><p>Enumeration values:</p><ul><li>1: Invisible verification. UserSetCapType input 1, DisableInvisibleSwitch must be 2</li><li>2: Slide</li><li>8: Graphical</li><li>9: Voice</li></ul>
                     * @return UserSetCapType <p>Validation type</p><p>Enumeration values:</p><ul><li>1: Invisible verification. UserSetCapType input 1, DisableInvisibleSwitch must be 2</li><li>2: Slide</li><li>8: Graphical</li><li>9: Voice</li></ul>
                     * 
                     */
                    std::string GetUserSetCapType() const;

                    /**
                     * 设置<p>Validation type</p><p>Enumeration values:</p><ul><li>1: Invisible verification. UserSetCapType input 1, DisableInvisibleSwitch must be 2</li><li>2: Slide</li><li>8: Graphical</li><li>9: Voice</li></ul>
                     * @param _userSetCapType <p>Validation type</p><p>Enumeration values:</p><ul><li>1: Invisible verification. UserSetCapType input 1, DisableInvisibleSwitch must be 2</li><li>2: Slide</li><li>8: Graphical</li><li>9: Voice</li></ul>
                     * 
                     */
                    void SetUserSetCapType(const std::string& _userSetCapType);

                    /**
                     * 判断参数 UserSetCapType 是否已赋值
                     * @return UserSetCapType 是否已赋值
                     * 
                     */
                    bool UserSetCapTypeHasBeenSet() const;

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
                     * 获取<p>Resource tag, key&amp;value format</p>
                     * @return Tags <p>Resource tag, key&amp;value format</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>Resource tag, key&amp;value format</p>
                     * @param _tags <p>Resource tag, key&amp;value format</p>
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
                     * 获取<p>web domain name</p><p>Only valid when ChannelInfo is web</p>
                     * @return VerifyDomain <p>web domain name</p><p>Only valid when ChannelInfo is web</p>
                     * 
                     */
                    std::string GetVerifyDomain() const;

                    /**
                     * 设置<p>web domain name</p><p>Only valid when ChannelInfo is web</p>
                     * @param _verifyDomain <p>web domain name</p><p>Only valid when ChannelInfo is web</p>
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
                     * 获取<p>app BundleId</p><p>Only valid when ChannelInfo is ios</p>
                     * @return VerifyBundleId <p>app BundleId</p><p>Only valid when ChannelInfo is ios</p>
                     * 
                     */
                    std::string GetVerifyBundleId() const;

                    /**
                     * 设置<p>app BundleId</p><p>Only valid when ChannelInfo is ios</p>
                     * @param _verifyBundleId <p>app BundleId</p><p>Only valid when ChannelInfo is ios</p>
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
                     * 获取<p>Whether to enable captcha encryption. 0: Off. 1: On</p>
                     * @return CheckAppidSwitch <p>Whether to enable captcha encryption. 0: Off. 1: On</p>
                     * 
                     */
                    int64_t GetCheckAppidSwitch() const;

                    /**
                     * 设置<p>Whether to enable captcha encryption. 0: Off. 1: On</p>
                     * @param _checkAppidSwitch <p>Whether to enable captcha encryption. 0: Off. 1: On</p>
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
                     * 获取<p>Whether to enable non-repeating IV</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul><p>Input 1 is allowed only when CheckAppidSwitch is 1</p>
                     * @return CheckIvSwitch <p>Whether to enable non-repeating IV</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul><p>Input 1 is allowed only when CheckAppidSwitch is 1</p>
                     * 
                     */
                    int64_t GetCheckIvSwitch() const;

                    /**
                     * 设置<p>Whether to enable non-repeating IV</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul><p>Input 1 is allowed only when CheckAppidSwitch is 1</p>
                     * @param _checkIvSwitch <p>Whether to enable non-repeating IV</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul><p>Input 1 is allowed only when CheckAppidSwitch is 1</p>
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

                private:

                    /**
                     * <p>Captcha name</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>Client type</p><p>Enumeration values:</p><ul><li>web: For web scenario</li><li>android: For Android client</li><li>ios: For iOS client</li></ul><p>Default value: web</p>
                     */
                    std::string m_channelInfo;
                    bool m_channelInfoHasBeenSet;

                    /**
                     * <p>Verification level</p><p>Enumeration values:</p><ul><li>1: Experience-oriented</li><li>2: Balanced</li><li>3: Security-focused</li></ul><p>Default value: 1</p>
                     */
                    std::string m_verifyRank;
                    bool m_verifyRankHasBeenSet;

                    /**
                     * <p>Validation type</p><p>Enumeration values:</p><ul><li>1: Invisible verification. UserSetCapType input 1, DisableInvisibleSwitch must be 2</li><li>2: Slide</li><li>8: Graphical</li><li>9: Voice</li></ul>
                     */
                    std::string m_userSetCapType;
                    bool m_userSetCapTypeHasBeenSet;

                    /**
                     * <p>Interception mode</p><p>Enumeration values:</p><ul><li>block: interception mode</li><li>notify: perception mode</li></ul><p>Default value: notify</p>
                     */
                    std::string m_defendMode;
                    bool m_defendModeHasBeenSet;

                    /**
                     * <p>Resource tag, key&amp;value format</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Verification mechanism</p><p>Enumeration values:</p><ul><li>0: One-Click Verification</li><li>1: Always verify</li><li>2: Invisible verification. DisableInvisibleSwitch input 2, UserSetCapType must be 1</li></ul>
                     */
                    std::string m_disableInvisibleSwitch;
                    bool m_disableInvisibleSwitchHasBeenSet;

                    /**
                     * <p>web domain name</p><p>Only valid when ChannelInfo is web</p>
                     */
                    std::string m_verifyDomain;
                    bool m_verifyDomainHasBeenSet;

                    /**
                     * <p>app BundleId</p><p>Only valid when ChannelInfo is ios</p>
                     */
                    std::string m_verifyBundleId;
                    bool m_verifyBundleIdHasBeenSet;

                    /**
                     * <p>app package</p><p>Only valid when ChannelInfo is android</p>
                     */
                    std::string m_verifyPackage;
                    bool m_verifyPackageHasBeenSet;

                    /**
                     * <p>Whether to enable captcha encryption. 0: Off. 1: On</p>
                     */
                    int64_t m_checkAppidSwitch;
                    bool m_checkAppidSwitchHasBeenSet;

                    /**
                     * <p>Whether to enable non-repeating IV</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul><p>Input 1 is allowed only when CheckAppidSwitch is 1</p>
                     */
                    int64_t m_checkIvSwitch;
                    bool m_checkIvSwitchHasBeenSet;

                    /**
                     * <p>Checkbox display method</p><p>Enumeration values:</p><ul><li>0: simplified version</li><li>1: basic version</li><li>2: invisible version</li></ul>
                     */
                    std::string m_checkBoxStyle;
                    bool m_checkBoxStyleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CREATECAPTCHAINFOINTERNATIONALREQUEST_H_
