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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_PASSWORDRULE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_PASSWORDRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * Sub-account password policy
                */
                class PassWordRule : public AbstractModel
                {
                public:
                    PassWordRule();
                    ~PassWordRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Minimum length required for the password.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinimumLength Minimum length required for the password.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinimumLength() const;

                    /**
                     * 设置Minimum length required for the password.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minimumLength Minimum length required for the password.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinimumLength(const int64_t& _minimumLength);

                    /**
                     * 判断参数 MinimumLength 是否已赋值
                     * @return MinimumLength 是否已赋值
                     * 
                     */
                    bool MinimumLengthHasBeenSet() const;

                    /**
                     * 获取Types of characters the password must contain. 
A: Must contain uppercase letter
a: Must contain lowercase letter
1: Must contain number
!: Must contain special character

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MustContain Types of characters the password must contain. 
A: Must contain uppercase letter
a: Must contain lowercase letter
1: Must contain number
!: Must contain special character

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMustContain() const;

                    /**
                     * 设置Types of characters the password must contain. 
A: Must contain uppercase letter
a: Must contain lowercase letter
1: Must contain number
!: Must contain special character

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mustContain Types of characters the password must contain. 
A: Must contain uppercase letter
a: Must contain lowercase letter
1: Must contain number
!: Must contain special character

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMustContain(const std::string& _mustContain);

                    /**
                     * 判断参数 MustContain 是否已赋值
                     * @return MustContain 是否已赋值
                     * 
                     */
                    bool MustContainHasBeenSet() const;

                    /**
                     * 获取Password validity period in days, after which the password must be reset. 0 (no expiration)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ForcePasswordChange Password validity period in days, after which the password must be reset. 0 (no expiration)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetForcePasswordChange() const;

                    /**
                     * 设置Password validity period in days, after which the password must be reset. 0 (no expiration)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _forcePasswordChange Password validity period in days, after which the password must be reset. 0 (no expiration)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetForcePasswordChange(const int64_t& _forcePasswordChange);

                    /**
                     * 判断参数 ForcePasswordChange 是否已赋值
                     * @return ForcePasswordChange 是否已赋值
                     * 
                     */
                    bool ForcePasswordChangeHasBeenSet() const;

                    /**
                     * 获取Number of previous passwords that cannot be reused. 

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReusePasswordLimit Number of previous passwords that cannot be reused. 

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetReusePasswordLimit() const;

                    /**
                     * 设置Number of previous passwords that cannot be reused. 

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reusePasswordLimit Number of previous passwords that cannot be reused. 

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReusePasswordLimit(const int64_t& _reusePasswordLimit);

                    /**
                     * 判断参数 ReusePasswordLimit 是否已赋值
                     * @return ReusePasswordLimit 是否已赋值
                     * 
                     */
                    bool ReusePasswordLimitHasBeenSet() const;

                    /**
                     * 获取Maximum number of failed login attempts allowed within a one hour window.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RetryPasswordLimit Maximum number of failed login attempts allowed within a one hour window.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRetryPasswordLimit() const;

                    /**
                     * 设置Maximum number of failed login attempts allowed within a one hour window.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retryPasswordLimit Maximum number of failed login attempts allowed within a one hour window.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetryPasswordLimit(const int64_t& _retryPasswordLimit);

                    /**
                     * 判断参数 RetryPasswordLimit 是否已赋值
                     * @return RetryPasswordLimit 是否已赋值
                     * 
                     */
                    bool RetryPasswordLimitHasBeenSet() const;

                    /**
                     * 获取Indicates whether a user can reset their own password after it has expired. 
1: Yes, 2: No (Yes: After password expiration, sub-users are unable to log in and require administrator reset. No: After password expiration, sub-users can log in and are forced to change password based on old password.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PasswordExpirationInvalidation Indicates whether a user can reset their own password after it has expired. 
1: Yes, 2: No (Yes: After password expiration, sub-users are unable to log in and require administrator reset. No: After password expiration, sub-users can log in and are forced to change password based on old password.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPasswordExpirationInvalidation() const;

                    /**
                     * 设置Indicates whether a user can reset their own password after it has expired. 
1: Yes, 2: No (Yes: After password expiration, sub-users are unable to log in and require administrator reset. No: After password expiration, sub-users can log in and are forced to change password based on old password.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _passwordExpirationInvalidation Indicates whether a user can reset their own password after it has expired. 
1: Yes, 2: No (Yes: After password expiration, sub-users are unable to log in and require administrator reset. No: After password expiration, sub-users can log in and are forced to change password based on old password.)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPasswordExpirationInvalidation(const int64_t& _passwordExpirationInvalidation);

                    /**
                     * 判断参数 PasswordExpirationInvalidation 是否已赋值
                     * @return PasswordExpirationInvalidation 是否已赋值
                     * 
                     */
                    bool PasswordExpirationInvalidationHasBeenSet() const;

                private:

                    /**
                     * Minimum length required for the password.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_minimumLength;
                    bool m_minimumLengthHasBeenSet;

                    /**
                     * Types of characters the password must contain. 
A: Must contain uppercase letter
a: Must contain lowercase letter
1: Must contain number
!: Must contain special character

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mustContain;
                    bool m_mustContainHasBeenSet;

                    /**
                     * Password validity period in days, after which the password must be reset. 0 (no expiration)

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_forcePasswordChange;
                    bool m_forcePasswordChangeHasBeenSet;

                    /**
                     * Number of previous passwords that cannot be reused. 

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_reusePasswordLimit;
                    bool m_reusePasswordLimitHasBeenSet;

                    /**
                     * Maximum number of failed login attempts allowed within a one hour window.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_retryPasswordLimit;
                    bool m_retryPasswordLimitHasBeenSet;

                    /**
                     * Indicates whether a user can reset their own password after it has expired. 
1: Yes, 2: No (Yes: After password expiration, sub-users are unable to log in and require administrator reset. No: After password expiration, sub-users can log in and are forced to change password based on old password.)

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_passwordExpirationInvalidation;
                    bool m_passwordExpirationInvalidationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_PASSWORDRULE_H_
