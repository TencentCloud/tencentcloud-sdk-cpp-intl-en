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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CCFREQUENCYRULE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CCFREQUENCYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Access frequency control rule for CC protection
                */
                class CCFrequencyRule : public AbstractModel
                {
                public:
                    CCFrequencyRule();
                    ~CCFrequencyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the access frequency control rule for CC protection
                     * @return CCFrequencyRuleId ID of the access frequency control rule for CC protection
                     * 
                     */
                    std::string GetCCFrequencyRuleId() const;

                    /**
                     * 设置ID of the access frequency control rule for CC protection
                     * @param _cCFrequencyRuleId ID of the access frequency control rule for CC protection
                     * 
                     */
                    void SetCCFrequencyRuleId(const std::string& _cCFrequencyRuleId);

                    /**
                     * 判断参数 CCFrequencyRuleId 是否已赋值
                     * @return CCFrequencyRuleId 是否已赋值
                     * 
                     */
                    bool CCFrequencyRuleIdHasBeenSet() const;

                    /**
                     * 获取URI string, which must start with `/`, such as `/abc/a.php`. Length limit: 31. If URI is `/`, only prefix match can be selected as the matching mode;
                     * @return Uri URI string, which must start with `/`, such as `/abc/a.php`. Length limit: 31. If URI is `/`, only prefix match can be selected as the matching mode;
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置URI string, which must start with `/`, such as `/abc/a.php`. Length limit: 31. If URI is `/`, only prefix match can be selected as the matching mode;
                     * @param _uri URI string, which must start with `/`, such as `/abc/a.php`. Length limit: 31. If URI is `/`, only prefix match can be selected as the matching mode;
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                    /**
                     * 获取`User-Agent` string. Length limit: 80
                     * @return UserAgent `User-Agent` string. Length limit: 80
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置`User-Agent` string. Length limit: 80
                     * @param _userAgent `User-Agent` string. Length limit: 80
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取Cookie string. Length limit: 40
                     * @return Cookie Cookie string. Length limit: 40
                     * 
                     */
                    std::string GetCookie() const;

                    /**
                     * 设置Cookie string. Length limit: 40
                     * @param _cookie Cookie string. Length limit: 40
                     * 
                     */
                    void SetCookie(const std::string& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     * 
                     */
                    bool CookieHasBeenSet() const;

                    /**
                     * 获取Matching rule. Valid values: ["include" (prefix match), "equal" (exact match)]
                     * @return Mode Matching rule. Valid values: ["include" (prefix match), "equal" (exact match)]
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Matching rule. Valid values: ["include" (prefix match), "equal" (exact match)]
                     * @param _mode Matching rule. Valid values: ["include" (prefix match), "equal" (exact match)]
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Reference period in seconds. Valid values: [10, 30, 60]
                     * @return Period Reference period in seconds. Valid values: [10, 30, 60]
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Reference period in seconds. Valid values: [10, 30, 60]
                     * @param _period Reference period in seconds. Valid values: [10, 30, 60]
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Number of access requests. Value range: [1-10000]
                     * @return ReqNumber Number of access requests. Value range: [1-10000]
                     * 
                     */
                    uint64_t GetReqNumber() const;

                    /**
                     * 设置Number of access requests. Value range: [1-10000]
                     * @param _reqNumber Number of access requests. Value range: [1-10000]
                     * 
                     */
                    void SetReqNumber(const uint64_t& _reqNumber);

                    /**
                     * 判断参数 ReqNumber 是否已赋值
                     * @return ReqNumber 是否已赋值
                     * 
                     */
                    bool ReqNumberHasBeenSet() const;

                    /**
                     * 获取Action take. Valid values: ["alg" (CAPTCHA), "drop" (blocking)]
                     * @return Act Action take. Valid values: ["alg" (CAPTCHA), "drop" (blocking)]
                     * 
                     */
                    std::string GetAct() const;

                    /**
                     * 设置Action take. Valid values: ["alg" (CAPTCHA), "drop" (blocking)]
                     * @param _act Action take. Valid values: ["alg" (CAPTCHA), "drop" (blocking)]
                     * 
                     */
                    void SetAct(const std::string& _act);

                    /**
                     * 判断参数 Act 是否已赋值
                     * @return Act 是否已赋值
                     * 
                     */
                    bool ActHasBeenSet() const;

                    /**
                     * 获取Execution duration in seconds. Valid range: [1-900]
                     * @return ExeDuration Execution duration in seconds. Valid range: [1-900]
                     * 
                     */
                    uint64_t GetExeDuration() const;

                    /**
                     * 设置Execution duration in seconds. Valid range: [1-900]
                     * @param _exeDuration Execution duration in seconds. Valid range: [1-900]
                     * 
                     */
                    void SetExeDuration(const uint64_t& _exeDuration);

                    /**
                     * 判断参数 ExeDuration 是否已赋值
                     * @return ExeDuration 是否已赋值
                     * 
                     */
                    bool ExeDurationHasBeenSet() const;

                private:

                    /**
                     * ID of the access frequency control rule for CC protection
                     */
                    std::string m_cCFrequencyRuleId;
                    bool m_cCFrequencyRuleIdHasBeenSet;

                    /**
                     * URI string, which must start with `/`, such as `/abc/a.php`. Length limit: 31. If URI is `/`, only prefix match can be selected as the matching mode;
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * `User-Agent` string. Length limit: 80
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * Cookie string. Length limit: 40
                     */
                    std::string m_cookie;
                    bool m_cookieHasBeenSet;

                    /**
                     * Matching rule. Valid values: ["include" (prefix match), "equal" (exact match)]
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Reference period in seconds. Valid values: [10, 30, 60]
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Number of access requests. Value range: [1-10000]
                     */
                    uint64_t m_reqNumber;
                    bool m_reqNumberHasBeenSet;

                    /**
                     * Action take. Valid values: ["alg" (CAPTCHA), "drop" (blocking)]
                     */
                    std::string m_act;
                    bool m_actHasBeenSet;

                    /**
                     * Execution duration in seconds. Valid range: [1-900]
                     */
                    uint64_t m_exeDuration;
                    bool m_exeDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CCFREQUENCYRULE_H_
