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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_AUTHENTICATIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_AUTHENTICATIONPARAMETERS_H_

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
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Token authentication configuration parameters
                */
                class AuthenticationParameters : public AbstractModel
                {
                public:
                    AuthenticationParameters();
                    ~AuthenticationParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authentication type. valid values:.

<Li>TypeA: authentication method a type, for specific meaning please refer to [authentication method a](https://intl.cloud.tencent.com/document/product/1552/109329?from_cn_redirect=1);</li>.
<Li>TypeB: authentication method b type, for specific meaning please refer to [authentication method b](https://intl.cloud.tencent.com/document/product/1552/109330?from_cn_redirect=1);</li>.
<Li>TypeC: authentication method c type, for specific meaning please refer to [authentication method c](https://intl.cloud.tencent.com/document/product/1552/109331?from_cn_redirect=1);</li>.
<Li>TypeD: authentication method d type, for specific meaning please refer to [authentication method d](https://intl.cloud.tencent.com/document/product/1552/109332?from_cn_redirect=1);</li>.
<Li>TypeVOD: authentication method v type, for specific meaning please refer to [authentication method v](https://intl.cloud.tencent.com/document/product/1552/109333?from_cn_redirect=1).</li>.
                     * @return AuthType Authentication type. valid values:.

<Li>TypeA: authentication method a type, for specific meaning please refer to [authentication method a](https://intl.cloud.tencent.com/document/product/1552/109329?from_cn_redirect=1);</li>.
<Li>TypeB: authentication method b type, for specific meaning please refer to [authentication method b](https://intl.cloud.tencent.com/document/product/1552/109330?from_cn_redirect=1);</li>.
<Li>TypeC: authentication method c type, for specific meaning please refer to [authentication method c](https://intl.cloud.tencent.com/document/product/1552/109331?from_cn_redirect=1);</li>.
<Li>TypeD: authentication method d type, for specific meaning please refer to [authentication method d](https://intl.cloud.tencent.com/document/product/1552/109332?from_cn_redirect=1);</li>.
<Li>TypeVOD: authentication method v type, for specific meaning please refer to [authentication method v](https://intl.cloud.tencent.com/document/product/1552/109333?from_cn_redirect=1).</li>.
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置Authentication type. valid values:.

<Li>TypeA: authentication method a type, for specific meaning please refer to [authentication method a](https://intl.cloud.tencent.com/document/product/1552/109329?from_cn_redirect=1);</li>.
<Li>TypeB: authentication method b type, for specific meaning please refer to [authentication method b](https://intl.cloud.tencent.com/document/product/1552/109330?from_cn_redirect=1);</li>.
<Li>TypeC: authentication method c type, for specific meaning please refer to [authentication method c](https://intl.cloud.tencent.com/document/product/1552/109331?from_cn_redirect=1);</li>.
<Li>TypeD: authentication method d type, for specific meaning please refer to [authentication method d](https://intl.cloud.tencent.com/document/product/1552/109332?from_cn_redirect=1);</li>.
<Li>TypeVOD: authentication method v type, for specific meaning please refer to [authentication method v](https://intl.cloud.tencent.com/document/product/1552/109333?from_cn_redirect=1).</li>.
                     * @param _authType Authentication type. valid values:.

<Li>TypeA: authentication method a type, for specific meaning please refer to [authentication method a](https://intl.cloud.tencent.com/document/product/1552/109329?from_cn_redirect=1);</li>.
<Li>TypeB: authentication method b type, for specific meaning please refer to [authentication method b](https://intl.cloud.tencent.com/document/product/1552/109330?from_cn_redirect=1);</li>.
<Li>TypeC: authentication method c type, for specific meaning please refer to [authentication method c](https://intl.cloud.tencent.com/document/product/1552/109331?from_cn_redirect=1);</li>.
<Li>TypeD: authentication method d type, for specific meaning please refer to [authentication method d](https://intl.cloud.tencent.com/document/product/1552/109332?from_cn_redirect=1);</li>.
<Li>TypeVOD: authentication method v type, for specific meaning please refer to [authentication method v](https://intl.cloud.tencent.com/document/product/1552/109333?from_cn_redirect=1).</li>.
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取The primary authentication key consists of 6–40 uppercase and lowercase english letters or digits, and cannot contain " and $.
                     * @return SecretKey The primary authentication key consists of 6–40 uppercase and lowercase english letters or digits, and cannot contain " and $.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置The primary authentication key consists of 6–40 uppercase and lowercase english letters or digits, and cannot contain " and $.
                     * @param _secretKey The primary authentication key consists of 6–40 uppercase and lowercase english letters or digits, and cannot contain " and $.
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
                     * 获取Validity period of the authentication url, in seconds, value range: 1–630720000. used to determine if the client access request has expired:.
<Li>If the current time exceeds "timestamp + validity period", it is an expired request, and a 403 is returned directly.</li>.
<Li>If the current time does not exceed "timestamp + validity period", the request is not expired, and the md5 string is further validated.</li> note: when authtype is one of typea, typeb, typec, or typed, this field is required.
                     * @return Timeout Validity period of the authentication url, in seconds, value range: 1–630720000. used to determine if the client access request has expired:.
<Li>If the current time exceeds "timestamp + validity period", it is an expired request, and a 403 is returned directly.</li>.
<Li>If the current time does not exceed "timestamp + validity period", the request is not expired, and the md5 string is further validated.</li> note: when authtype is one of typea, typeb, typec, or typed, this field is required.
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Validity period of the authentication url, in seconds, value range: 1–630720000. used to determine if the client access request has expired:.
<Li>If the current time exceeds "timestamp + validity period", it is an expired request, and a 403 is returned directly.</li>.
<Li>If the current time does not exceed "timestamp + validity period", the request is not expired, and the md5 string is further validated.</li> note: when authtype is one of typea, typeb, typec, or typed, this field is required.
                     * @param _timeout Validity period of the authentication url, in seconds, value range: 1–630720000. used to determine if the client access request has expired:.
<Li>If the current time exceeds "timestamp + validity period", it is an expired request, and a 403 is returned directly.</li>.
<Li>If the current time does not exceed "timestamp + validity period", the request is not expired, and the md5 string is further validated.</li> note: when authtype is one of typea, typeb, typec, or typed, this field is required.
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取The backup authentication key consists of 6–40 uppercase and lowercase english letters or digits, and cannot contain " and $.
                     * @return BackupSecretKey The backup authentication key consists of 6–40 uppercase and lowercase english letters or digits, and cannot contain " and $.
                     * 
                     */
                    std::string GetBackupSecretKey() const;

                    /**
                     * 设置The backup authentication key consists of 6–40 uppercase and lowercase english letters or digits, and cannot contain " and $.
                     * @param _backupSecretKey The backup authentication key consists of 6–40 uppercase and lowercase english letters or digits, and cannot contain " and $.
                     * 
                     */
                    void SetBackupSecretKey(const std::string& _backupSecretKey);

                    /**
                     * 判断参数 BackupSecretKey 是否已赋值
                     * @return BackupSecretKey 是否已赋值
                     * 
                     */
                    bool BackupSecretKeyHasBeenSet() const;

                    /**
                     * 获取Authentication parameters name. the node will validate the value corresponding to this parameter name. consists of 1-100 uppercase and lowercase letters, numbers, or underscores.<br>note: this field is required when authtype is either typea or typed.
                     * @return AuthParam Authentication parameters name. the node will validate the value corresponding to this parameter name. consists of 1-100 uppercase and lowercase letters, numbers, or underscores.<br>note: this field is required when authtype is either typea or typed.
                     * 
                     */
                    std::string GetAuthParam() const;

                    /**
                     * 设置Authentication parameters name. the node will validate the value corresponding to this parameter name. consists of 1-100 uppercase and lowercase letters, numbers, or underscores.<br>note: this field is required when authtype is either typea or typed.
                     * @param _authParam Authentication parameters name. the node will validate the value corresponding to this parameter name. consists of 1-100 uppercase and lowercase letters, numbers, or underscores.<br>note: this field is required when authtype is either typea or typed.
                     * 
                     */
                    void SetAuthParam(const std::string& _authParam);

                    /**
                     * 判断参数 AuthParam 是否已赋值
                     * @return AuthParam 是否已赋值
                     * 
                     */
                    bool AuthParamHasBeenSet() const;

                    /**
                     * 获取Authentication timestamp. it cannot be the same as the value of the authparam field.<br>note: this field is required when authtype is typed.
                     * @return TimeParam Authentication timestamp. it cannot be the same as the value of the authparam field.<br>note: this field is required when authtype is typed.
                     * 
                     */
                    std::string GetTimeParam() const;

                    /**
                     * 设置Authentication timestamp. it cannot be the same as the value of the authparam field.<br>note: this field is required when authtype is typed.
                     * @param _timeParam Authentication timestamp. it cannot be the same as the value of the authparam field.<br>note: this field is required when authtype is typed.
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
                     * 获取Authentication time format. values:.
<Li>Dec: decimal;</li>.
<Li>Hex: hexadecimal.</li>note: this field is required when authtype is typed. the default is hex.
                     * @return TimeFormat Authentication time format. values:.
<Li>Dec: decimal;</li>.
<Li>Hex: hexadecimal.</li>note: this field is required when authtype is typed. the default is hex.
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Authentication time format. values:.
<Li>Dec: decimal;</li>.
<Li>Hex: hexadecimal.</li>note: this field is required when authtype is typed. the default is hex.
                     * @param _timeFormat Authentication time format. values:.
<Li>Dec: decimal;</li>.
<Li>Hex: hexadecimal.</li>note: this field is required when authtype is typed. the default is hex.
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
                     * Authentication type. valid values:.

<Li>TypeA: authentication method a type, for specific meaning please refer to [authentication method a](https://intl.cloud.tencent.com/document/product/1552/109329?from_cn_redirect=1);</li>.
<Li>TypeB: authentication method b type, for specific meaning please refer to [authentication method b](https://intl.cloud.tencent.com/document/product/1552/109330?from_cn_redirect=1);</li>.
<Li>TypeC: authentication method c type, for specific meaning please refer to [authentication method c](https://intl.cloud.tencent.com/document/product/1552/109331?from_cn_redirect=1);</li>.
<Li>TypeD: authentication method d type, for specific meaning please refer to [authentication method d](https://intl.cloud.tencent.com/document/product/1552/109332?from_cn_redirect=1);</li>.
<Li>TypeVOD: authentication method v type, for specific meaning please refer to [authentication method v](https://intl.cloud.tencent.com/document/product/1552/109333?from_cn_redirect=1).</li>.
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * The primary authentication key consists of 6–40 uppercase and lowercase english letters or digits, and cannot contain " and $.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Validity period of the authentication url, in seconds, value range: 1–630720000. used to determine if the client access request has expired:.
<Li>If the current time exceeds "timestamp + validity period", it is an expired request, and a 403 is returned directly.</li>.
<Li>If the current time does not exceed "timestamp + validity period", the request is not expired, and the md5 string is further validated.</li> note: when authtype is one of typea, typeb, typec, or typed, this field is required.
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * The backup authentication key consists of 6–40 uppercase and lowercase english letters or digits, and cannot contain " and $.
                     */
                    std::string m_backupSecretKey;
                    bool m_backupSecretKeyHasBeenSet;

                    /**
                     * Authentication parameters name. the node will validate the value corresponding to this parameter name. consists of 1-100 uppercase and lowercase letters, numbers, or underscores.<br>note: this field is required when authtype is either typea or typed.
                     */
                    std::string m_authParam;
                    bool m_authParamHasBeenSet;

                    /**
                     * Authentication timestamp. it cannot be the same as the value of the authparam field.<br>note: this field is required when authtype is typed.
                     */
                    std::string m_timeParam;
                    bool m_timeParamHasBeenSet;

                    /**
                     * Authentication time format. values:.
<Li>Dec: decimal;</li>.
<Li>Hex: hexadecimal.</li>note: this field is required when authtype is typed. the default is hex.
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_AUTHENTICATIONPARAMETERS_H_
