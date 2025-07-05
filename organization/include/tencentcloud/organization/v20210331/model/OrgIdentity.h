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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGIDENTITY_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGIDENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/IdentityPolicy.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Organization identity
                */
                class OrgIdentity : public AbstractModel
                {
                public:
                    OrgIdentity();
                    ~OrgIdentity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Identity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdentityId Identity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIdentityId() const;

                    /**
                     * 设置Identity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _identityId Identity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIdentityId(const int64_t& _identityId);

                    /**
                     * 判断参数 IdentityId 是否已赋值
                     * @return IdentityId 是否已赋值
                     * 
                     */
                    bool IdentityIdHasBeenSet() const;

                    /**
                     * 获取Identity name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdentityAliasName Identity name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIdentityAliasName() const;

                    /**
                     * 设置Identity name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _identityAliasName Identity name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIdentityAliasName(const std::string& _identityAliasName);

                    /**
                     * 判断参数 IdentityAliasName 是否已赋值
                     * @return IdentityAliasName 是否已赋值
                     * 
                     */
                    bool IdentityAliasNameHasBeenSet() const;

                    /**
                     * 获取Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Identity policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdentityPolicy Identity policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<IdentityPolicy> GetIdentityPolicy() const;

                    /**
                     * 设置Identity policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _identityPolicy Identity policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIdentityPolicy(const std::vector<IdentityPolicy>& _identityPolicy);

                    /**
                     * 判断参数 IdentityPolicy 是否已赋值
                     * @return IdentityPolicy 是否已赋值
                     * 
                     */
                    bool IdentityPolicyHasBeenSet() const;

                    /**
                     * 获取Identity type. Valid values: `1` (preset); `2` (custom).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdentityType Identity type. Valid values: `1` (preset); `2` (custom).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIdentityType() const;

                    /**
                     * 设置Identity type. Valid values: `1` (preset); `2` (custom).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _identityType Identity type. Valid values: `1` (preset); `2` (custom).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIdentityType(const uint64_t& _identityType);

                    /**
                     * 判断参数 IdentityType 是否已赋值
                     * @return IdentityType 是否已赋值
                     * 
                     */
                    bool IdentityTypeHasBeenSet() const;

                    /**
                     * 获取Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Identity ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * Identity name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_identityAliasName;
                    bool m_identityAliasNameHasBeenSet;

                    /**
                     * Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Identity policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<IdentityPolicy> m_identityPolicy;
                    bool m_identityPolicyHasBeenSet;

                    /**
                     * Identity type. Valid values: `1` (preset); `2` (custom).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_identityType;
                    bool m_identityTypeHasBeenSet;

                    /**
                     * Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGIDENTITY_H_
