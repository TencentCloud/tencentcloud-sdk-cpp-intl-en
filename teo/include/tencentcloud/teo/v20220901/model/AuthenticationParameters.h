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
                * Token authentication configuration parameters.
                */
                class AuthenticationParameters : public AbstractModel
                {
                public:
                    AuthenticationParameters();
                    ~AuthenticationParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authentication type. Valid values:

<li>TypeA: authentication method type A. For its specific meaning, refer to [Authentication Method A](https://www.tencentcloud.com/document/product/1552/109329?from_cn_redirect=1);</li>
<li>TypeB: authentication method B type. For its specific meaning, refer to [Authentication Method B](https://www.tencentcloud.com/document/product/1552/109330?from_cn_redirect=1);</li>
<li>TypeC: authentication method C type. For its specific meaning, refer to [Authentication Method C](https://www.tencentcloud.com/document/product/1552/109331?from_cn_redirect=1);</li>
<li>TypeD: authentication method D type. For its specific meaning, refer to [Authentication Method D](https://www.tencentcloud.com/document/product/1552/109332?from_cn_redirect=1);</li>
<li>TypeVOD: authentication method V type. For its specific meaning, refer to [Authentication Method V](https://www.tencentcloud.com/document/product/1552/109333?from_cn_redirect=1).</li>
                     * @return AuthType Authentication type. Valid values:

<li>TypeA: authentication method type A. For its specific meaning, refer to [Authentication Method A](https://www.tencentcloud.com/document/product/1552/109329?from_cn_redirect=1);</li>
<li>TypeB: authentication method B type. For its specific meaning, refer to [Authentication Method B](https://www.tencentcloud.com/document/product/1552/109330?from_cn_redirect=1);</li>
<li>TypeC: authentication method C type. For its specific meaning, refer to [Authentication Method C](https://www.tencentcloud.com/document/product/1552/109331?from_cn_redirect=1);</li>
<li>TypeD: authentication method D type. For its specific meaning, refer to [Authentication Method D](https://www.tencentcloud.com/document/product/1552/109332?from_cn_redirect=1);</li>
<li>TypeVOD: authentication method V type. For its specific meaning, refer to [Authentication Method V](https://www.tencentcloud.com/document/product/1552/109333?from_cn_redirect=1).</li>
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置Authentication type. Valid values:

<li>TypeA: authentication method type A. For its specific meaning, refer to [Authentication Method A](https://www.tencentcloud.com/document/product/1552/109329?from_cn_redirect=1);</li>
<li>TypeB: authentication method B type. For its specific meaning, refer to [Authentication Method B](https://www.tencentcloud.com/document/product/1552/109330?from_cn_redirect=1);</li>
<li>TypeC: authentication method C type. For its specific meaning, refer to [Authentication Method C](https://www.tencentcloud.com/document/product/1552/109331?from_cn_redirect=1);</li>
<li>TypeD: authentication method D type. For its specific meaning, refer to [Authentication Method D](https://www.tencentcloud.com/document/product/1552/109332?from_cn_redirect=1);</li>
<li>TypeVOD: authentication method V type. For its specific meaning, refer to [Authentication Method V](https://www.tencentcloud.com/document/product/1552/109333?from_cn_redirect=1).</li>
                     * @param _authType Authentication type. Valid values:

<li>TypeA: authentication method type A. For its specific meaning, refer to [Authentication Method A](https://www.tencentcloud.com/document/product/1552/109329?from_cn_redirect=1);</li>
<li>TypeB: authentication method B type. For its specific meaning, refer to [Authentication Method B](https://www.tencentcloud.com/document/product/1552/109330?from_cn_redirect=1);</li>
<li>TypeC: authentication method C type. For its specific meaning, refer to [Authentication Method C](https://www.tencentcloud.com/document/product/1552/109331?from_cn_redirect=1);</li>
<li>TypeD: authentication method D type. For its specific meaning, refer to [Authentication Method D](https://www.tencentcloud.com/document/product/1552/109332?from_cn_redirect=1);</li>
<li>TypeVOD: authentication method V type. For its specific meaning, refer to [Authentication Method V](https://www.tencentcloud.com/document/product/1552/109333?from_cn_redirect=1).</li>
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
                     * 获取Primary authentication key. It contains 6–40 uppercase/lowercase letters or digits and cannot contain " or $.
                     * @return SecretKey Primary authentication key. It contains 6–40 uppercase/lowercase letters or digits and cannot contain " or $.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Primary authentication key. It contains 6–40 uppercase/lowercase letters or digits and cannot contain " or $.
                     * @param _secretKey Primary authentication key. It contains 6–40 uppercase/lowercase letters or digits and cannot contain " or $.
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
                     * 获取Valid duration of the authentication URL, in seconds. Value range: 1–630720000. It is used to determine whether the client access request is expired:
<li>If the current time exceeds the "timestamp + valid duration" time, the request is expired and 403 is returned directly.</li>
<li>If the current time has not exceeded the "timestamp + valid duration" time, the request is not expired. Proceed to validate the md5 string.</li>Note: This field is required when AuthType is one of TypeA, TypeB, TypeC, or TypeD.
                     * @return Timeout Valid duration of the authentication URL, in seconds. Value range: 1–630720000. It is used to determine whether the client access request is expired:
<li>If the current time exceeds the "timestamp + valid duration" time, the request is expired and 403 is returned directly.</li>
<li>If the current time has not exceeded the "timestamp + valid duration" time, the request is not expired. Proceed to validate the md5 string.</li>Note: This field is required when AuthType is one of TypeA, TypeB, TypeC, or TypeD.
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Valid duration of the authentication URL, in seconds. Value range: 1–630720000. It is used to determine whether the client access request is expired:
<li>If the current time exceeds the "timestamp + valid duration" time, the request is expired and 403 is returned directly.</li>
<li>If the current time has not exceeded the "timestamp + valid duration" time, the request is not expired. Proceed to validate the md5 string.</li>Note: This field is required when AuthType is one of TypeA, TypeB, TypeC, or TypeD.
                     * @param _timeout Valid duration of the authentication URL, in seconds. Value range: 1–630720000. It is used to determine whether the client access request is expired:
<li>If the current time exceeds the "timestamp + valid duration" time, the request is expired and 403 is returned directly.</li>
<li>If the current time has not exceeded the "timestamp + valid duration" time, the request is not expired. Proceed to validate the md5 string.</li>Note: This field is required when AuthType is one of TypeA, TypeB, TypeC, or TypeD.
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
                     * 获取Backup authentication key. It contains 6–40 uppercase/lowercase letters or digits and cannot contain " or $.
                     * @return BackupSecretKey Backup authentication key. It contains 6–40 uppercase/lowercase letters or digits and cannot contain " or $.
                     * 
                     */
                    std::string GetBackupSecretKey() const;

                    /**
                     * 设置Backup authentication key. It contains 6–40 uppercase/lowercase letters or digits and cannot contain " or $.
                     * @param _backupSecretKey Backup authentication key. It contains 6–40 uppercase/lowercase letters or digits and cannot contain " or $.
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
                     * 获取Authentication parameter name. The node will validate the value corresponding to this parameter name. It consists of 1–100 upper- and lower-case letters, digits, or underscores.<br>Note: This field is required when AuthType is one of TypeA and TypeD.
                     * @return AuthParam Authentication parameter name. The node will validate the value corresponding to this parameter name. It consists of 1–100 upper- and lower-case letters, digits, or underscores.<br>Note: This field is required when AuthType is one of TypeA and TypeD.
                     * 
                     */
                    std::string GetAuthParam() const;

                    /**
                     * 设置Authentication parameter name. The node will validate the value corresponding to this parameter name. It consists of 1–100 upper- and lower-case letters, digits, or underscores.<br>Note: This field is required when AuthType is one of TypeA and TypeD.
                     * @param _authParam Authentication parameter name. The node will validate the value corresponding to this parameter name. It consists of 1–100 upper- and lower-case letters, digits, or underscores.<br>Note: This field is required when AuthType is one of TypeA and TypeD.
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
                     * 获取Authentication timestamp. It cannot be the same as the AuthParam field value.<br>Note: This field is required when AuthType is TypeD.
                     * @return TimeParam Authentication timestamp. It cannot be the same as the AuthParam field value.<br>Note: This field is required when AuthType is TypeD.
                     * 
                     */
                    std::string GetTimeParam() const;

                    /**
                     * 设置Authentication timestamp. It cannot be the same as the AuthParam field value.<br>Note: This field is required when AuthType is TypeD.
                     * @param _timeParam Authentication timestamp. It cannot be the same as the AuthParam field value.<br>Note: This field is required when AuthType is TypeD.
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
                     * 获取Authentication time format. Valid values:
<li>dec: decimal;</li>
<li>hex: hexadecimal.</li>Note: This field is required when AuthType is TypeD. Default value: hex.
                     * @return TimeFormat Authentication time format. Valid values:
<li>dec: decimal;</li>
<li>hex: hexadecimal.</li>Note: This field is required when AuthType is TypeD. Default value: hex.
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Authentication time format. Valid values:
<li>dec: decimal;</li>
<li>hex: hexadecimal.</li>Note: This field is required when AuthType is TypeD. Default value: hex.
                     * @param _timeFormat Authentication time format. Valid values:
<li>dec: decimal;</li>
<li>hex: hexadecimal.</li>Note: This field is required when AuthType is TypeD. Default value: hex.
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
                     * Authentication type. Valid values:

<li>TypeA: authentication method type A. For its specific meaning, refer to [Authentication Method A](https://www.tencentcloud.com/document/product/1552/109329?from_cn_redirect=1);</li>
<li>TypeB: authentication method B type. For its specific meaning, refer to [Authentication Method B](https://www.tencentcloud.com/document/product/1552/109330?from_cn_redirect=1);</li>
<li>TypeC: authentication method C type. For its specific meaning, refer to [Authentication Method C](https://www.tencentcloud.com/document/product/1552/109331?from_cn_redirect=1);</li>
<li>TypeD: authentication method D type. For its specific meaning, refer to [Authentication Method D](https://www.tencentcloud.com/document/product/1552/109332?from_cn_redirect=1);</li>
<li>TypeVOD: authentication method V type. For its specific meaning, refer to [Authentication Method V](https://www.tencentcloud.com/document/product/1552/109333?from_cn_redirect=1).</li>
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * Primary authentication key. It contains 6–40 uppercase/lowercase letters or digits and cannot contain " or $.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Valid duration of the authentication URL, in seconds. Value range: 1–630720000. It is used to determine whether the client access request is expired:
<li>If the current time exceeds the "timestamp + valid duration" time, the request is expired and 403 is returned directly.</li>
<li>If the current time has not exceeded the "timestamp + valid duration" time, the request is not expired. Proceed to validate the md5 string.</li>Note: This field is required when AuthType is one of TypeA, TypeB, TypeC, or TypeD.
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Backup authentication key. It contains 6–40 uppercase/lowercase letters or digits and cannot contain " or $.
                     */
                    std::string m_backupSecretKey;
                    bool m_backupSecretKeyHasBeenSet;

                    /**
                     * Authentication parameter name. The node will validate the value corresponding to this parameter name. It consists of 1–100 upper- and lower-case letters, digits, or underscores.<br>Note: This field is required when AuthType is one of TypeA and TypeD.
                     */
                    std::string m_authParam;
                    bool m_authParamHasBeenSet;

                    /**
                     * Authentication timestamp. It cannot be the same as the AuthParam field value.<br>Note: This field is required when AuthType is TypeD.
                     */
                    std::string m_timeParam;
                    bool m_timeParamHasBeenSet;

                    /**
                     * Authentication time format. Valid values:
<li>dec: decimal;</li>
<li>hex: hexadecimal.</li>Note: This field is required when AuthType is TypeD. Default value: hex.
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_AUTHENTICATIONPARAMETERS_H_
