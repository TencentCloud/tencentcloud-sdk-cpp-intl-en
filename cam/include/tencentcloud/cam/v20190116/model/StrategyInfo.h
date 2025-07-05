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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_STRATEGYINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_STRATEGYINFO_H_

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
                * Policy information
                */
                class StrategyInfo : public AbstractModel
                {
                public:
                    StrategyInfo();
                    ~StrategyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param _policyId Policy ID
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return PolicyName Policy name
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name
                     * @param _policyName Policy name
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
                     * 获取Time policy created
Note: This field may return null, indicating that no valid value was found.
                     * @return AddTime Time policy created
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Time policy created
Note: This field may return null, indicating that no valid value was found.
                     * @param _addTime Time policy created
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Policy type. 1: Custom policy; 2: Preset policy
                     * @return Type Policy type. 1: Custom policy; 2: Preset policy
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Policy type. 1: Custom policy; 2: Preset policy
                     * @param _type Policy type. 1: Custom policy; 2: Preset policy
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Policy description
Note: This field may return null, indicating that no valid value was found.
                     * @return Description Policy description
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Policy description
Note: This field may return null, indicating that no valid value was found.
                     * @param _description Policy description
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取How the policy was created: 1: Via console; 2: Via syntax
                     * @return CreateMode How the policy was created: 1: Via console; 2: Via syntax
                     * 
                     */
                    uint64_t GetCreateMode() const;

                    /**
                     * 设置How the policy was created: 1: Via console; 2: Via syntax
                     * @param _createMode How the policy was created: 1: Via console; 2: Via syntax
                     * 
                     */
                    void SetCreateMode(const uint64_t& _createMode);

                    /**
                     * 判断参数 CreateMode 是否已赋值
                     * @return CreateMode 是否已赋值
                     * 
                     */
                    bool CreateModeHasBeenSet() const;

                    /**
                     * 获取Number of associated users
                     * @return Attachments Number of associated users
                     * 
                     */
                    uint64_t GetAttachments() const;

                    /**
                     * 设置Number of associated users
                     * @param _attachments Number of associated users
                     * 
                     */
                    void SetAttachments(const uint64_t& _attachments);

                    /**
                     * 判断参数 Attachments 是否已赋值
                     * @return Attachments 是否已赋值
                     * 
                     */
                    bool AttachmentsHasBeenSet() const;

                    /**
                     * 获取Product associated with the policy
Note: This field may return null, indicating that no valid value was found.
                     * @return ServiceType Product associated with the policy
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Product associated with the policy
Note: This field may return null, indicating that no valid value was found.
                     * @param _serviceType Product associated with the policy
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取This value should not be null when querying whether a marked entity has been associated with a policy. 0 indicates that no policy has been associated, while 1 indicates that a policy has been associated
                     * @return IsAttached This value should not be null when querying whether a marked entity has been associated with a policy. 0 indicates that no policy has been associated, while 1 indicates that a policy has been associated
                     * 
                     */
                    uint64_t GetIsAttached() const;

                    /**
                     * 设置This value should not be null when querying whether a marked entity has been associated with a policy. 0 indicates that no policy has been associated, while 1 indicates that a policy has been associated
                     * @param _isAttached This value should not be null when querying whether a marked entity has been associated with a policy. 0 indicates that no policy has been associated, while 1 indicates that a policy has been associated
                     * 
                     */
                    void SetIsAttached(const uint64_t& _isAttached);

                    /**
                     * 判断参数 IsAttached 是否已赋值
                     * @return IsAttached 是否已赋值
                     * 
                     */
                    bool IsAttachedHasBeenSet() const;

                    /**
                     * 获取Queries if the policy has been deactivated
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Deactived Queries if the policy has been deactivated
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDeactived() const;

                    /**
                     * 设置Queries if the policy has been deactivated
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _deactived Queries if the policy has been deactivated
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of deprecated products
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeactivedDetail List of deprecated products
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDeactivedDetail() const;

                    /**
                     * 设置List of deprecated products
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _deactivedDetail List of deprecated products
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeactivedDetail(const std::vector<std::string>& _deactivedDetail);

                    /**
                     * 判断参数 DeactivedDetail 是否已赋值
                     * @return DeactivedDetail 是否已赋值
                     * 
                     */
                    bool DeactivedDetailHasBeenSet() const;

                    /**
                     * 获取The deletion task identifier used to check the deletion status of the service-linked role
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsServiceLinkedPolicy The deletion task identifier used to check the deletion status of the service-linked role
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsServiceLinkedPolicy() const;

                    /**
                     * 设置The deletion task identifier used to check the deletion status of the service-linked role
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isServiceLinkedPolicy The deletion task identifier used to check the deletion status of the service-linked role
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsServiceLinkedPolicy(const uint64_t& _isServiceLinkedPolicy);

                    /**
                     * 判断参数 IsServiceLinkedPolicy 是否已赋值
                     * @return IsServiceLinkedPolicy 是否已赋值
                     * 
                     */
                    bool IsServiceLinkedPolicyHasBeenSet() const;

                    /**
                     * 获取The number of entities associated with the policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AttachEntityCount The number of entities associated with the policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAttachEntityCount() const;

                    /**
                     * 设置The number of entities associated with the policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _attachEntityCount The number of entities associated with the policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttachEntityCount(const int64_t& _attachEntityCount);

                    /**
                     * 判断参数 AttachEntityCount 是否已赋值
                     * @return AttachEntityCount 是否已赋值
                     * 
                     */
                    bool AttachEntityCountHasBeenSet() const;

                    /**
                     * 获取The number of entities associated with the permission boundary.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AttachEntityBoundaryCount The number of entities associated with the permission boundary.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAttachEntityBoundaryCount() const;

                    /**
                     * 设置The number of entities associated with the permission boundary.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _attachEntityBoundaryCount The number of entities associated with the permission boundary.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttachEntityBoundaryCount(const int64_t& _attachEntityBoundaryCount);

                    /**
                     * 判断参数 AttachEntityBoundaryCount 是否已赋值
                     * @return AttachEntityBoundaryCount 是否已赋值
                     * 
                     */
                    bool AttachEntityBoundaryCountHasBeenSet() const;

                    /**
                     * 获取The last edited time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UpdateTime The last edited time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The last edited time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _updateTime The last edited time.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * Policy ID
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Time policy created
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Policy type. 1: Custom policy; 2: Preset policy
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Policy description
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * How the policy was created: 1: Via console; 2: Via syntax
                     */
                    uint64_t m_createMode;
                    bool m_createModeHasBeenSet;

                    /**
                     * Number of associated users
                     */
                    uint64_t m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * Product associated with the policy
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * This value should not be null when querying whether a marked entity has been associated with a policy. 0 indicates that no policy has been associated, while 1 indicates that a policy has been associated
                     */
                    uint64_t m_isAttached;
                    bool m_isAttachedHasBeenSet;

                    /**
                     * Queries if the policy has been deactivated
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_deactived;
                    bool m_deactivedHasBeenSet;

                    /**
                     * List of deprecated products
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_deactivedDetail;
                    bool m_deactivedDetailHasBeenSet;

                    /**
                     * The deletion task identifier used to check the deletion status of the service-linked role
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isServiceLinkedPolicy;
                    bool m_isServiceLinkedPolicyHasBeenSet;

                    /**
                     * The number of entities associated with the policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_attachEntityCount;
                    bool m_attachEntityCountHasBeenSet;

                    /**
                     * The number of entities associated with the permission boundary.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_attachEntityBoundaryCount;
                    bool m_attachEntityBoundaryCountHasBeenSet;

                    /**
                     * The last edited time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_STRATEGYINFO_H_
