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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEE_H_

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
                * Timestamp hotlink protection advanced configuration mode E
                */
                class AdvancedAuthenticationTypeE : public AbstractModel
                {
                public:
                    AdvancedAuthenticationTypeE();
                    ~AdvancedAuthenticationTypeE() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SecretKey Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _secretKey Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SignParam Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSignParam() const;

                    /**
                     * 设置Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _signParam Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取ACL signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AclSignParam ACL signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAclSignParam() const;

                    /**
                     * 设置ACL signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _aclSignParam ACL signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAclSignParam(const std::string& _aclSignParam);

                    /**
                     * 判断参数 AclSignParam 是否已赋值
                     * @return AclSignParam 是否已赋值
                     * 
                     */
                    bool AclSignParamHasBeenSet() const;

                    /**
                     * 获取Start time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return StartTimeParam Start time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTimeParam() const;

                    /**
                     * 设置Start time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _startTimeParam Start time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTimeParam(const std::string& _startTimeParam);

                    /**
                     * 判断参数 StartTimeParam 是否已赋值
                     * @return StartTimeParam 是否已赋值
                     * 
                     */
                    bool StartTimeParamHasBeenSet() const;

                    /**
                     * 获取Expiration time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ExpireTimeParam Expiration time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTimeParam() const;

                    /**
                     * 设置Expiration time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _expireTimeParam Expiration time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTimeParam(const std::string& _expireTimeParam);

                    /**
                     * 判断参数 ExpireTimeParam 是否已赋值
                     * @return ExpireTimeParam 是否已赋值
                     * 
                     */
                    bool ExpireTimeParamHasBeenSet() const;

                    /**
                     * 获取Time format (dec)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TimeFormat Time format (dec)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Time format (dec)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _timeFormat Time format (dec)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                private:

                    /**
                     * Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_signParam;
                    bool m_signParamHasBeenSet;

                    /**
                     * ACL signature field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_aclSignParam;
                    bool m_aclSignParamHasBeenSet;

                    /**
                     * Start time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_startTimeParam;
                    bool m_startTimeParamHasBeenSet;

                    /**
                     * Expiration time field name in the URI string, starting with a letter, and consisting of letters, digits, and underscores.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTimeParam;
                    bool m_expireTimeParamHasBeenSet;

                    /**
                     * Time format (dec)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEE_H_
