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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLEPOLICIE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLEPOLICIE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CIC permission policy.
                */
                class RolePolicie : public AbstractModel
                {
                public:
                    RolePolicie();
                    ~RolePolicie() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RolePolicyId Policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRolePolicyId() const;

                    /**
                     * 设置Policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rolePolicyId Policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRolePolicyId(const int64_t& _rolePolicyId);

                    /**
                     * 判断参数 RolePolicyId 是否已赋值
                     * @return RolePolicyId 是否已赋值
                     * 
                     */
                    bool RolePolicyIdHasBeenSet() const;

                    /**
                     * 获取Permission policy name.
                     * @return RolePolicyName Permission policy name.
                     * 
                     */
                    std::string GetRolePolicyName() const;

                    /**
                     * 设置Permission policy name.
                     * @param _rolePolicyName Permission policy name.
                     * 
                     */
                    void SetRolePolicyName(const std::string& _rolePolicyName);

                    /**
                     * 判断参数 RolePolicyName 是否已赋值
                     * @return RolePolicyName 是否已赋值
                     * 
                     */
                    bool RolePolicyNameHasBeenSet() const;

                    /**
                     * 获取Permission policy type.
                     * @return RolePolicyType Permission policy type.
                     * 
                     */
                    std::string GetRolePolicyType() const;

                    /**
                     * 设置Permission policy type.
                     * @param _rolePolicyType Permission policy type.
                     * 
                     */
                    void SetRolePolicyType(const std::string& _rolePolicyType);

                    /**
                     * 判断参数 RolePolicyType 是否已赋值
                     * @return RolePolicyType 是否已赋值
                     * 
                     */
                    bool RolePolicyTypeHasBeenSet() const;

                    /**
                     * 获取Custom policy content. This parameter is only returned for custom policies.
                     * @return RolePolicyDocument Custom policy content. This parameter is only returned for custom policies.
                     * 
                     */
                    std::string GetRolePolicyDocument() const;

                    /**
                     * 设置Custom policy content. This parameter is only returned for custom policies.
                     * @param _rolePolicyDocument Custom policy content. This parameter is only returned for custom policies.
                     * 
                     */
                    void SetRolePolicyDocument(const std::string& _rolePolicyDocument);

                    /**
                     * 判断参数 RolePolicyDocument 是否已赋值
                     * @return RolePolicyDocument 是否已赋值
                     * 
                     */
                    bool RolePolicyDocumentHasBeenSet() const;

                    /**
                     * 获取The time when the permission policy is added to the permission configuration.
                     * @return AddTime The time when the permission policy is added to the permission configuration.
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置The time when the permission policy is added to the permission configuration.
                     * @param _addTime The time when the permission policy is added to the permission configuration.
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                private:

                    /**
                     * Policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rolePolicyId;
                    bool m_rolePolicyIdHasBeenSet;

                    /**
                     * Permission policy name.
                     */
                    std::string m_rolePolicyName;
                    bool m_rolePolicyNameHasBeenSet;

                    /**
                     * Permission policy type.
                     */
                    std::string m_rolePolicyType;
                    bool m_rolePolicyTypeHasBeenSet;

                    /**
                     * Custom policy content. This parameter is only returned for custom policies.
                     */
                    std::string m_rolePolicyDocument;
                    bool m_rolePolicyDocumentHasBeenSet;

                    /**
                     * The time when the permission policy is added to the permission configuration.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLEPOLICIE_H_
