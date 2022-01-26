/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEB_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Timestamp hotlink protection advanced configuration mode B
                */
                class AdvancedAuthenticationTypeB : public AbstractModel
                {
                public:
                    AdvancedAuthenticationTypeB();
                    ~AdvancedAuthenticationTypeB() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alpha key name
                     * @return KeyAlpha Alpha key name
                     */
                    std::string GetKeyAlpha() const;

                    /**
                     * 设置Alpha key name
                     * @param KeyAlpha Alpha key name
                     */
                    void SetKeyAlpha(const std::string& _keyAlpha);

                    /**
                     * 判断参数 KeyAlpha 是否已赋值
                     * @return KeyAlpha 是否已赋值
                     */
                    bool KeyAlphaHasBeenSet() const;

                    /**
                     * 获取Beta key name
                     * @return KeyBeta Beta key name
                     */
                    std::string GetKeyBeta() const;

                    /**
                     * 设置Beta key name
                     * @param KeyBeta Beta key name
                     */
                    void SetKeyBeta(const std::string& _keyBeta);

                    /**
                     * 判断参数 KeyBeta 是否已赋值
                     * @return KeyBeta 是否已赋值
                     */
                    bool KeyBetaHasBeenSet() const;

                    /**
                     * 获取Gamma key name
                     * @return KeyGamma Gamma key name
                     */
                    std::string GetKeyGamma() const;

                    /**
                     * 设置Gamma key name
                     * @param KeyGamma Gamma key name
                     */
                    void SetKeyGamma(const std::string& _keyGamma);

                    /**
                     * 判断参数 KeyGamma 是否已赋值
                     * @return KeyGamma 是否已赋值
                     */
                    bool KeyGammaHasBeenSet() const;

                    /**
                     * 获取Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * @return SignParam Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     */
                    std::string GetSignParam() const;

                    /**
                     * 设置Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * @param SignParam Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     */
                    void SetSignParam(const std::string& _signParam);

                    /**
                     * 判断参数 SignParam 是否已赋值
                     * @return SignParam 是否已赋值
                     */
                    bool SignParamHasBeenSet() const;

                    /**
                     * 获取Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * @return TimeParam Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     */
                    std::string GetTimeParam() const;

                    /**
                     * 设置Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * @param TimeParam Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     */
                    void SetTimeParam(const std::string& _timeParam);

                    /**
                     * 判断参数 TimeParam 是否已赋值
                     * @return TimeParam 是否已赋值
                     */
                    bool TimeParamHasBeenSet() const;

                    /**
                     * 获取Expiration time in seconds
                     * @return ExpireTime Expiration time in seconds
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置Expiration time in seconds
                     * @param ExpireTime Expiration time in seconds
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Time format. Valid values: dec (decimal), hex (hexadecimal).
                     * @return TimeFormat Time format. Valid values: dec (decimal), hex (hexadecimal).
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Time format. Valid values: dec (decimal), hex (hexadecimal).
                     * @param TimeFormat Time format. Valid values: dec (decimal), hex (hexadecimal).
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     */
                    bool TimeFormatHasBeenSet() const;

                    /**
                     * 获取Status code returned when the authentication failed
                     * @return FailCode Status code returned when the authentication failed
                     */
                    int64_t GetFailCode() const;

                    /**
                     * 设置Status code returned when the authentication failed
                     * @param FailCode Status code returned when the authentication failed
                     */
                    void SetFailCode(const int64_t& _failCode);

                    /**
                     * 判断参数 FailCode 是否已赋值
                     * @return FailCode 是否已赋值
                     */
                    bool FailCodeHasBeenSet() const;

                    /**
                     * 获取Status code returned when the URL expired
                     * @return ExpireCode Status code returned when the URL expired
                     */
                    int64_t GetExpireCode() const;

                    /**
                     * 设置Status code returned when the URL expired
                     * @param ExpireCode Status code returned when the URL expired
                     */
                    void SetExpireCode(const int64_t& _expireCode);

                    /**
                     * 判断参数 ExpireCode 是否已赋值
                     * @return ExpireCode 是否已赋值
                     */
                    bool ExpireCodeHasBeenSet() const;

                    /**
                     * 获取List of URLs to be authenticated
                     * @return RulePaths List of URLs to be authenticated
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置List of URLs to be authenticated
                     * @param RulePaths List of URLs to be authenticated
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     */
                    bool RulePathsHasBeenSet() const;

                private:

                    /**
                     * Alpha key name
                     */
                    std::string m_keyAlpha;
                    bool m_keyAlphaHasBeenSet;

                    /**
                     * Beta key name
                     */
                    std::string m_keyBeta;
                    bool m_keyBetaHasBeenSet;

                    /**
                     * Gamma key name
                     */
                    std::string m_keyGamma;
                    bool m_keyGammaHasBeenSet;

                    /**
                     * Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     */
                    std::string m_signParam;
                    bool m_signParamHasBeenSet;

                    /**
                     * Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     */
                    std::string m_timeParam;
                    bool m_timeParamHasBeenSet;

                    /**
                     * Expiration time in seconds
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Time format. Valid values: dec (decimal), hex (hexadecimal).
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * Status code returned when the authentication failed
                     */
                    int64_t m_failCode;
                    bool m_failCodeHasBeenSet;

                    /**
                     * Status code returned when the URL expired
                     */
                    int64_t m_expireCode;
                    bool m_expireCodeHasBeenSet;

                    /**
                     * List of URLs to be authenticated
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEB_H_
