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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_BOTMANAGEDRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_BOTMANAGEDRULE_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Bot managed rules
                */
                class BotManagedRule : public AbstractModel
                {
                public:
                    BotManagedRule();
                    ~BotManagedRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the rule to be enabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ManagedIds ID of the rule to be enabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetManagedIds() const;

                    /**
                     * 设置ID of the rule to be enabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _managedIds ID of the rule to be enabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetManagedIds(const std::vector<int64_t>& _managedIds);

                    /**
                     * 判断参数 ManagedIds 是否已赋值
                     * @return ManagedIds 是否已赋值
                     * 
                     */
                    bool ManagedIdsHasBeenSet() const;

                    /**
                     * 获取ID of the rule being applied
                     * @return RuleID ID of the rule being applied
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置ID of the rule being applied
                     * @param _ruleID ID of the rule being applied
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取Action of the rule. Values: `drop`; `trans`; `monitor`; `alg`.
                     * @return Action Action of the rule. Values: `drop`; `trans`; `monitor`; `alg`.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action of the rule. Values: `drop`; `trans`; `monitor`; `alg`.
                     * @param _action Action of the rule. Values: `drop`; `trans`; `monitor`; `alg`.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取The amount of time the IP is blocked
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PunishTime The amount of time the IP is blocked
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置The amount of time the IP is blocked
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _punishTime The amount of time the IP is blocked
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPunishTime(const int64_t& _punishTime);

                    /**
                     * 判断参数 PunishTime 是否已赋值
                     * @return PunishTime 是否已赋值
                     * 
                     */
                    bool PunishTimeHasBeenSet() const;

                    /**
                     * 获取Unit of IP blocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PunishTimeUnit Unit of IP blocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPunishTimeUnit() const;

                    /**
                     * 设置Unit of IP blocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _punishTimeUnit Unit of IP blocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPunishTimeUnit(const std::string& _punishTimeUnit);

                    /**
                     * 判断参数 PunishTimeUnit 是否已赋值
                     * @return PunishTimeUnit 是否已赋值
                     * 
                     */
                    bool PunishTimeUnitHasBeenSet() const;

                    /**
                     * 获取Name of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Name Name of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _name Name of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取ID of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PageId ID of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPageId() const;

                    /**
                     * 设置ID of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _pageId ID of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPageId(const int64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取Redirection URL, which must be a subdomain name of your site encoded by URLEncode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RedirectUrl Redirection URL, which must be a subdomain name of your site encoded by URLEncode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置Redirection URL, which must be a subdomain name of your site encoded by URLEncode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _redirectUrl Redirection URL, which must be a subdomain name of your site encoded by URLEncode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     * 
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取Response code returned after redirection
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ResponseCode Response code returned after redirection
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetResponseCode() const;

                    /**
                     * 设置Response code returned after redirection
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _responseCode Response code returned after redirection
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetResponseCode(const int64_t& _responseCode);

                    /**
                     * 判断参数 ResponseCode 是否已赋值
                     * @return ResponseCode 是否已赋值
                     * 
                     */
                    bool ResponseCodeHasBeenSet() const;

                    /**
                     * 获取ID of the rule that is set to allow requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TransManagedIds ID of the rule that is set to allow requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetTransManagedIds() const;

                    /**
                     * 设置ID of the rule that is set to allow requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _transManagedIds ID of the rule that is set to allow requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTransManagedIds(const std::vector<int64_t>& _transManagedIds);

                    /**
                     * 判断参数 TransManagedIds 是否已赋值
                     * @return TransManagedIds 是否已赋值
                     * 
                     */
                    bool TransManagedIdsHasBeenSet() const;

                    /**
                     * 获取ID of the rule that is set to verify requests by JavaScript challenge
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AlgManagedIds ID of the rule that is set to verify requests by JavaScript challenge
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetAlgManagedIds() const;

                    /**
                     * 设置ID of the rule that is set to verify requests by JavaScript challenge
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _algManagedIds ID of the rule that is set to verify requests by JavaScript challenge
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlgManagedIds(const std::vector<int64_t>& _algManagedIds);

                    /**
                     * 判断参数 AlgManagedIds 是否已赋值
                     * @return AlgManagedIds 是否已赋值
                     * 
                     */
                    bool AlgManagedIdsHasBeenSet() const;

                    /**
                     * 获取ID of the rule that is set to verify requests by CAPTCHA
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CapManagedIds ID of the rule that is set to verify requests by CAPTCHA
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetCapManagedIds() const;

                    /**
                     * 设置ID of the rule that is set to verify requests by CAPTCHA
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _capManagedIds ID of the rule that is set to verify requests by CAPTCHA
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCapManagedIds(const std::vector<int64_t>& _capManagedIds);

                    /**
                     * 判断参数 CapManagedIds 是否已赋值
                     * @return CapManagedIds 是否已赋值
                     * 
                     */
                    bool CapManagedIdsHasBeenSet() const;

                    /**
                     * 获取ID of the rule that is set to observe requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return MonManagedIds ID of the rule that is set to observe requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetMonManagedIds() const;

                    /**
                     * 设置ID of the rule that is set to observe requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _monManagedIds ID of the rule that is set to observe requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMonManagedIds(const std::vector<int64_t>& _monManagedIds);

                    /**
                     * 判断参数 MonManagedIds 是否已赋值
                     * @return MonManagedIds 是否已赋值
                     * 
                     */
                    bool MonManagedIdsHasBeenSet() const;

                    /**
                     * 获取ID of the rule that is set to block requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DropManagedIds ID of the rule that is set to block requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetDropManagedIds() const;

                    /**
                     * 设置ID of the rule that is set to block requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _dropManagedIds ID of the rule that is set to block requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDropManagedIds(const std::vector<int64_t>& _dropManagedIds);

                    /**
                     * 判断参数 DropManagedIds 是否已赋值
                     * @return DropManagedIds 是否已赋值
                     * 
                     */
                    bool DropManagedIdsHasBeenSet() const;

                private:

                    /**
                     * ID of the rule to be enabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_managedIds;
                    bool m_managedIdsHasBeenSet;

                    /**
                     * ID of the rule being applied
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Action of the rule. Values: `drop`; `trans`; `monitor`; `alg`.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The amount of time the IP is blocked
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * Unit of IP blocking time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_punishTimeUnit;
                    bool m_punishTimeUnitHasBeenSet;

                    /**
                     * Name of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * ID of the custom block page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * Redirection URL, which must be a subdomain name of your site encoded by URLEncode
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * Response code returned after redirection
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_responseCode;
                    bool m_responseCodeHasBeenSet;

                    /**
                     * ID of the rule that is set to allow requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_transManagedIds;
                    bool m_transManagedIdsHasBeenSet;

                    /**
                     * ID of the rule that is set to verify requests by JavaScript challenge
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_algManagedIds;
                    bool m_algManagedIdsHasBeenSet;

                    /**
                     * ID of the rule that is set to verify requests by CAPTCHA
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_capManagedIds;
                    bool m_capManagedIdsHasBeenSet;

                    /**
                     * ID of the rule that is set to observe requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_monManagedIds;
                    bool m_monManagedIdsHasBeenSet;

                    /**
                     * ID of the rule that is set to block requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_dropManagedIds;
                    bool m_dropManagedIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_BOTMANAGEDRULE_H_
