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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_SECRETIDLASTUSED_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_SECRETIDLASTUSED_H_

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
                * The last time the key was used.
                */
                class SecretIdLastUsed : public AbstractModel
                {
                public:
                    SecretIdLastUsed();
                    ~SecretIdLastUsed() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key ID.
                     * @return SecretId Key ID.
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置Key ID.
                     * @param _secretId Key ID.
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取The date when the key ID was last used (the value is obtained one day later).
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return LastUsedDate The date when the key ID was last used (the value is obtained one day later).
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLastUsedDate() const;

                    /**
                     * 设置The date when the key ID was last used (the value is obtained one day later).
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _lastUsedDate The date when the key ID was last used (the value is obtained one day later).
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastUsedDate(const std::string& _lastUsedDate);

                    /**
                     * 判断参数 LastUsedDate 是否已赋值
                     * @return LastUsedDate 是否已赋值
                     * 
                     */
                    bool LastUsedDateHasBeenSet() const;

                    /**
                     * 获取The most recent date the key was accessed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastSecretUsedDate The most recent date the key was accessed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLastSecretUsedDate() const;

                    /**
                     * 设置The most recent date the key was accessed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastSecretUsedDate The most recent date the key was accessed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastSecretUsedDate(const uint64_t& _lastSecretUsedDate);

                    /**
                     * 判断参数 LastSecretUsedDate 是否已赋值
                     * @return LastSecretUsedDate 是否已赋值
                     * 
                     */
                    bool LastSecretUsedDateHasBeenSet() const;

                private:

                    /**
                     * Key ID.
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * The date when the key ID was last used (the value is obtained one day later).
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_lastUsedDate;
                    bool m_lastUsedDateHasBeenSet;

                    /**
                     * The most recent date the key was accessed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_lastSecretUsedDate;
                    bool m_lastSecretUsedDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_SECRETIDLASTUSED_H_
