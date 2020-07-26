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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETPOLICYRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * GetPolicy response structure.
                */
                class GetPolicyResponse : public AbstractModel
                {
                public:
                    GetPolicyResponse();
                    ~GetPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Policy name
Note: This field may return null, indicating that no valid value was found.
                     * @return PolicyName Policy name
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Policy description
Note: This field may return null, indicating that no valid value was found.
                     * @return Description Policy description
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取1: Custom policy; 2: Preset policy
Note: This field may return null, indicating that no valid value was found.
                     * @return Type 1: Custom policy; 2: Preset policy
Note: This field may return null, indicating that no valid value was found.
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Time created
Note: This field may return null, indicating that no valid value was found.
                     * @return AddTime Time created
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetAddTime() const;

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Time of latest update
Note: This field may return null, indicating that no valid value was found.
                     * @return UpdateTime Time of latest update
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Policy document
Note: This field may return null, indicating that no valid value was found.
                     * @return PolicyDocument Policy document
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 判断参数 PolicyDocument 是否已赋值
                     * @return PolicyDocument 是否已赋值
                     */
                    bool PolicyDocumentHasBeenSet() const;

                    /**
                     * 获取Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PresetAlias Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPresetAlias() const;

                    /**
                     * 判断参数 PresetAlias 是否已赋值
                     * @return PresetAlias 是否已赋值
                     */
                    bool PresetAliasHasBeenSet() const;

                    /**
                     * 获取Whether it is a service-linked policy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsServiceLinkedRolePolicy Whether it is a service-linked policy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetIsServiceLinkedRolePolicy() const;

                    /**
                     * 判断参数 IsServiceLinkedRolePolicy 是否已赋值
                     * @return IsServiceLinkedRolePolicy 是否已赋值
                     */
                    bool IsServiceLinkedRolePolicyHasBeenSet() const;

                private:

                    /**
                     * Policy name
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Policy description
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 1: Custom policy; 2: Preset policy
Note: This field may return null, indicating that no valid value was found.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Time created
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Time of latest update
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Policy document
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                    /**
                     * Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_presetAlias;
                    bool m_presetAliasHasBeenSet;

                    /**
                     * Whether it is a service-linked policy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isServiceLinkedRolePolicy;
                    bool m_isServiceLinkedRolePolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETPOLICYRESPONSE_H_
