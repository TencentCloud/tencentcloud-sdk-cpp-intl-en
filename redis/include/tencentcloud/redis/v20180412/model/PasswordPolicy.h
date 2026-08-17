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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_PASSWORDPOLICY_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_PASSWORDPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Password complexity of a Redis instance
                */
                class PasswordPolicy : public AbstractModel
                {
                public:
                    PasswordPolicy();
                    ~PasswordPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to enable the instance-level password complexity policy.</p><ul><li>true: Enable. ALL password changes (create/reset) must pass the complexity verification defined below.</li><li>false: Disable. No complexity filtering is performed.</li></ul><p>Default value: false</p>
                     * @return Enabled <p>Whether to enable the instance-level password complexity policy.</p><ul><li>true: Enable. ALL password changes (create/reset) must pass the complexity verification defined below.</li><li>false: Disable. No complexity filtering is performed.</li></ul><p>Default value: false</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>Whether to enable the instance-level password complexity policy.</p><ul><li>true: Enable. ALL password changes (create/reset) must pass the complexity verification defined below.</li><li>false: Disable. No complexity filtering is performed.</li></ul><p>Default value: false</p>
                     * @param _enabled <p>Whether to enable the instance-level password complexity policy.</p><ul><li>true: Enable. ALL password changes (create/reset) must pass the complexity verification defined below.</li><li>false: Disable. No complexity filtering is performed.</li></ul><p>Default value: false</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>Minimum number of uppercase and lowercase letters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     * @return MinLetterCount <p>Minimum number of uppercase and lowercase letters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     * 
                     */
                    int64_t GetMinLetterCount() const;

                    /**
                     * 设置<p>Minimum number of uppercase and lowercase letters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     * @param _minLetterCount <p>Minimum number of uppercase and lowercase letters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     * 
                     */
                    void SetMinLetterCount(const int64_t& _minLetterCount);

                    /**
                     * 判断参数 MinLetterCount 是否已赋值
                     * @return MinLetterCount 是否已赋值
                     * 
                     */
                    bool MinLetterCountHasBeenSet() const;

                    /**
                     * 获取<p>Minimum number of numeric characters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     * @return MinDigitCount <p>Minimum number of numeric characters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     * 
                     */
                    int64_t GetMinDigitCount() const;

                    /**
                     * 设置<p>Minimum number of numeric characters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     * @param _minDigitCount <p>Minimum number of numeric characters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     * 
                     */
                    void SetMinDigitCount(const int64_t& _minDigitCount);

                    /**
                     * 判断参数 MinDigitCount 是否已赋值
                     * @return MinDigitCount 是否已赋值
                     * 
                     */
                    bool MinDigitCountHasBeenSet() const;

                    /**
                     * 获取<p>Minimum number of special characters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     * @return MinSpecialCount <p>Minimum number of special characters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     * 
                     */
                    int64_t GetMinSpecialCount() const;

                    /**
                     * 设置<p>Minimum number of special characters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     * @param _minSpecialCount <p>Minimum number of special characters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     * 
                     */
                    void SetMinSpecialCount(const int64_t& _minSpecialCount);

                    /**
                     * 判断参数 MinSpecialCount 是否已赋值
                     * @return MinSpecialCount 是否已赋值
                     * 
                     */
                    bool MinSpecialCountHasBeenSet() const;

                    /**
                     * 获取<p>Minimum total length of the password (number of characters).</p><ul><li>Value ranges from 8 to 64.</li><li>Default value: 8.</li><li>Constraints and limitations: The minimum total length of the password must be at least the sum of three parameters: MinLetterCount, MinDigitCount, and MinSpecialCount.</li></ul>
                     * @return MinLength <p>Minimum total length of the password (number of characters).</p><ul><li>Value ranges from 8 to 64.</li><li>Default value: 8.</li><li>Constraints and limitations: The minimum total length of the password must be at least the sum of three parameters: MinLetterCount, MinDigitCount, and MinSpecialCount.</li></ul>
                     * 
                     */
                    int64_t GetMinLength() const;

                    /**
                     * 设置<p>Minimum total length of the password (number of characters).</p><ul><li>Value ranges from 8 to 64.</li><li>Default value: 8.</li><li>Constraints and limitations: The minimum total length of the password must be at least the sum of three parameters: MinLetterCount, MinDigitCount, and MinSpecialCount.</li></ul>
                     * @param _minLength <p>Minimum total length of the password (number of characters).</p><ul><li>Value ranges from 8 to 64.</li><li>Default value: 8.</li><li>Constraints and limitations: The minimum total length of the password must be at least the sum of three parameters: MinLetterCount, MinDigitCount, and MinSpecialCount.</li></ul>
                     * 
                     */
                    void SetMinLength(const int64_t& _minLength);

                    /**
                     * 判断参数 MinLength 是否已赋值
                     * @return MinLength 是否已赋值
                     * 
                     */
                    bool MinLengthHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to enable the instance-level password complexity policy.</p><ul><li>true: Enable. ALL password changes (create/reset) must pass the complexity verification defined below.</li><li>false: Disable. No complexity filtering is performed.</li></ul><p>Default value: false</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>Minimum number of uppercase and lowercase letters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     */
                    int64_t m_minLetterCount;
                    bool m_minLetterCountHasBeenSet;

                    /**
                     * <p>Minimum number of numeric characters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     */
                    int64_t m_minDigitCount;
                    bool m_minDigitCountHasBeenSet;

                    /**
                     * <p>Minimum number of special characters.</p><ul><li>Value ranges from 1 to 16.</li><li>Default value: 1.</li></ul>
                     */
                    int64_t m_minSpecialCount;
                    bool m_minSpecialCountHasBeenSet;

                    /**
                     * <p>Minimum total length of the password (number of characters).</p><ul><li>Value ranges from 8 to 64.</li><li>Default value: 8.</li><li>Constraints and limitations: The minimum total length of the password must be at least the sum of three parameters: MinLetterCount, MinDigitCount, and MinSpecialCount.</li></ul>
                     */
                    int64_t m_minLength;
                    bool m_minLengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_PASSWORDPOLICY_H_
