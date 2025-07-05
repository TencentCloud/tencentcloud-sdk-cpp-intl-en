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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TCRINSTANCETOKEN_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TCRINSTANCETOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Instance login token
                */
                class TcrInstanceToken : public AbstractModel
                {
                public:
                    TcrInstanceToken();
                    ~TcrInstanceToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Token ID
                     * @return Id Token ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Token ID
                     * @param _id Token ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Token description
                     * @return Desc Token description
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Token description
                     * @param _desc Token description
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取ID of the instance of the token
                     * @return RegistryId ID of the instance of the token
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置ID of the instance of the token
                     * @param _registryId ID of the instance of the token
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Token status
                     * @return Enabled Token status
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Token status
                     * @param _enabled Token status
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
                     * 获取Token creation time
                     * @return CreatedAt Token creation time
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Token creation time
                     * @param _createdAt Token creation time
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Token expiration timestamp
                     * @return ExpiredAt Token expiration timestamp
                     * 
                     */
                    int64_t GetExpiredAt() const;

                    /**
                     * 设置Token expiration timestamp
                     * @param _expiredAt Token expiration timestamp
                     * 
                     */
                    void SetExpiredAt(const int64_t& _expiredAt);

                    /**
                     * 判断参数 ExpiredAt 是否已赋值
                     * @return ExpiredAt 是否已赋值
                     * 
                     */
                    bool ExpiredAtHasBeenSet() const;

                private:

                    /**
                     * Token ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Token description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * ID of the instance of the token
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Token status
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Token creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Token expiration timestamp
                     */
                    int64_t m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TCRINSTANCETOKEN_H_
