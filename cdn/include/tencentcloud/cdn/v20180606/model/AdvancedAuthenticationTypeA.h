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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEA_H_

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
                * Timestamp hotlink protection advanced configuration mode A
                */
                class AdvancedAuthenticationTypeA : public AbstractModel
                {
                public:
                    AdvancedAuthenticationTypeA();
                    ~AdvancedAuthenticationTypeA() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
                     * @return SecretKey Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
                     * @param _secretKey Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * @return SignParam Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * 
                     */
                    std::string GetSignParam() const;

                    /**
                     * 设置Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * @param _signParam Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * 
                     */
                    void SetSignParam(const std::string& _signParam);

                    /**
                     * 判断参数 SignParam 是否已赋值
                     * @return SignParam 是否已赋值
                     * 
                     */
                    bool SignParamHasBeenSet() const;

                    /**
                     * 获取Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * @return TimeParam Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * 
                     */
                    std::string GetTimeParam() const;

                    /**
                     * 设置Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * @param _timeParam Time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
                     * 
                     */
                    void SetTimeParam(const std::string& _timeParam);

                    /**
                     * 判断参数 TimeParam 是否已赋值
                     * @return TimeParam 是否已赋值
                     * 
                     */
                    bool TimeParamHasBeenSet() const;

                    /**
                     * 获取Expiration time in seconds
                     * @return ExpireTime Expiration time in seconds
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置Expiration time in seconds
                     * @param _expireTime Expiration time in seconds
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Whether the expiration time parameter is required
                     * @return ExpireTimeRequired Whether the expiration time parameter is required
                     * 
                     */
                    bool GetExpireTimeRequired() const;

                    /**
                     * 设置Whether the expiration time parameter is required
                     * @param _expireTimeRequired Whether the expiration time parameter is required
                     * 
                     */
                    void SetExpireTimeRequired(const bool& _expireTimeRequired);

                    /**
                     * 判断参数 ExpireTimeRequired 是否已赋值
                     * @return ExpireTimeRequired 是否已赋值
                     * 
                     */
                    bool ExpireTimeRequiredHasBeenSet() const;

                    /**
                     * 获取URL composition, e.g., `${private_key}${schema}${host}${full_uri}`.
                     * @return Format URL composition, e.g., `${private_key}${schema}${host}${full_uri}`.
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置URL composition, e.g., `${private_key}${schema}${host}${full_uri}`.
                     * @param _format URL composition, e.g., `${private_key}${schema}${host}${full_uri}`.
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Time format. Valid values: dec (decimal), hex (hexadecimal).
                     * @return TimeFormat Time format. Valid values: dec (decimal), hex (hexadecimal).
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Time format. Valid values: dec (decimal), hex (hexadecimal).
                     * @param _timeFormat Time format. Valid values: dec (decimal), hex (hexadecimal).
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                    /**
                     * 获取Status code returned when the authentication failed
                     * @return FailCode Status code returned when the authentication failed
                     * 
                     */
                    int64_t GetFailCode() const;

                    /**
                     * 设置Status code returned when the authentication failed
                     * @param _failCode Status code returned when the authentication failed
                     * 
                     */
                    void SetFailCode(const int64_t& _failCode);

                    /**
                     * 判断参数 FailCode 是否已赋值
                     * @return FailCode 是否已赋值
                     * 
                     */
                    bool FailCodeHasBeenSet() const;

                    /**
                     * 获取Status code returned when the URL expired
                     * @return ExpireCode Status code returned when the URL expired
                     * 
                     */
                    int64_t GetExpireCode() const;

                    /**
                     * 设置Status code returned when the URL expired
                     * @param _expireCode Status code returned when the URL expired
                     * 
                     */
                    void SetExpireCode(const int64_t& _expireCode);

                    /**
                     * 判断参数 ExpireCode 是否已赋值
                     * @return ExpireCode 是否已赋值
                     * 
                     */
                    bool ExpireCodeHasBeenSet() const;

                    /**
                     * 获取List of URLs to be authenticated
                     * @return RulePaths List of URLs to be authenticated
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置List of URLs to be authenticated
                     * @param _rulePaths List of URLs to be authenticated
                     * 
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     * 
                     */
                    bool RulePathsHasBeenSet() const;

                    /**
                     * 获取Reserved field
                     * @return Transformation Reserved field
                     * 
                     */
                    int64_t GetTransformation() const;

                    /**
                     * 设置Reserved field
                     * @param _transformation Reserved field
                     * 
                     */
                    void SetTransformation(const int64_t& _transformation);

                    /**
                     * 判断参数 Transformation 是否已赋值
                     * @return Transformation 是否已赋值
                     * 
                     */
                    bool TransformationHasBeenSet() const;

                private:

                    /**
                     * Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

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
                     * Whether the expiration time parameter is required
                     */
                    bool m_expireTimeRequired;
                    bool m_expireTimeRequiredHasBeenSet;

                    /**
                     * URL composition, e.g., `${private_key}${schema}${host}${full_uri}`.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

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

                    /**
                     * Reserved field
                     */
                    int64_t m_transformation;
                    bool m_transformationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEA_H_
