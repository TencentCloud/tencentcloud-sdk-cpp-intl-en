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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHEDUSERPOLICY_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHEDUSERPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/AttachedUserPolicyGroupInfo.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * Details of policies associated with the user
                */
                class AttachedUserPolicy : public AbstractModel
                {
                public:
                    AttachedUserPolicy();
                    ~AttachedUserPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy ID.
                     * @return PolicyId Policy ID.
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Policy ID.
                     * @param _policyId Policy ID.
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Policy name.
                     * @return PolicyName Policy name.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name.
                     * @param _policyName Policy name.
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Policy description.
                     * @return Description Policy description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Policy description.
                     * @param _description Policy description.
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
                     * 获取Creation time.
                     * @return AddTime Creation time.
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Creation time.
                     * @param _addTime Creation time.
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Policy type (`1`: custom policy; `2`: preset policy).
                     * @return StrategyType Policy type (`1`: custom policy; `2`: preset policy).
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置Policy type (`1`: custom policy; `2`: preset policy).
                     * @param _strategyType Policy type (`1`: custom policy; `2`: preset policy).
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取Creation mode (`1`: create by product feature or project permission; other values: create by policy syntax).
                     * @return CreateMode Creation mode (`1`: create by product feature or project permission; other values: create by policy syntax).
                     * 
                     */
                    std::string GetCreateMode() const;

                    /**
                     * 设置Creation mode (`1`: create by product feature or project permission; other values: create by policy syntax).
                     * @param _createMode Creation mode (`1`: create by product feature or project permission; other values: create by policy syntax).
                     * 
                     */
                    void SetCreateMode(const std::string& _createMode);

                    /**
                     * 判断参数 CreateMode 是否已赋值
                     * @return CreateMode 是否已赋值
                     * 
                     */
                    bool CreateModeHasBeenSet() const;

                    /**
                     * 获取Information on policies inherited from the user group.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Groups Information on policies inherited from the user group.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AttachedUserPolicyGroupInfo> GetGroups() const;

                    /**
                     * 设置Information on policies inherited from the user group.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _groups Information on policies inherited from the user group.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroups(const std::vector<AttachedUserPolicyGroupInfo>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取Whether the product has been deprecated (`0`: no; `1`: yes).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Deactived Whether the product has been deprecated (`0`: no; `1`: yes).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDeactived() const;

                    /**
                     * 设置Whether the product has been deprecated (`0`: no; `1`: yes).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _deactived Whether the product has been deprecated (`0`: no; `1`: yes).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeactived(const uint64_t& _deactived);

                    /**
                     * 判断参数 Deactived 是否已赋值
                     * @return Deactived 是否已赋值
                     * 
                     */
                    bool DeactivedHasBeenSet() const;

                    /**
                     * 获取List of deprecated products.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DeactivedDetail List of deprecated products.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDeactivedDetail() const;

                    /**
                     * 设置List of deprecated products.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _deactivedDetail List of deprecated products.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeactivedDetail(const std::vector<std::string>& _deactivedDetail);

                    /**
                     * 判断参数 DeactivedDetail 是否已赋值
                     * @return DeactivedDetail 是否已赋值
                     * 
                     */
                    bool DeactivedDetailHasBeenSet() const;

                private:

                    /**
                     * Policy ID.
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Policy name.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Policy description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Policy type (`1`: custom policy; `2`: preset policy).
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * Creation mode (`1`: create by product feature or project permission; other values: create by policy syntax).
                     */
                    std::string m_createMode;
                    bool m_createModeHasBeenSet;

                    /**
                     * Information on policies inherited from the user group.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<AttachedUserPolicyGroupInfo> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * Whether the product has been deprecated (`0`: no; `1`: yes).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_deactived;
                    bool m_deactivedHasBeenSet;

                    /**
                     * List of deprecated products.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_deactivedDetail;
                    bool m_deactivedDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHEDUSERPOLICY_H_
