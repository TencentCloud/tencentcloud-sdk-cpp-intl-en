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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHPOLICYINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHPOLICYINFO_H_

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
                * Associated policy
                */
                class AttachPolicyInfo : public AbstractModel
                {
                public:
                    AttachPolicyInfo();
                    ~AttachPolicyInfo() = default;
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
Note: This field may return null, indicating that no valid value was found.
                     * @return PolicyName Policy name
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name
Note: This field may return null, indicating that no valid value was found.
                     * @param _policyName Policy name
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Time created
Note: This field may return null, indicating that no valid value was found.
                     * @return AddTime Time created
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Time created
Note: This field may return null, indicating that no valid value was found.
                     * @param _addTime Time created
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
                     * 获取How the policy was created: 1: Via console; 2: Via syntax
Note: This field may return null, indicating that no valid value was found.
                     * @return CreateMode How the policy was created: 1: Via console; 2: Via syntax
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetCreateMode() const;

                    /**
                     * 设置How the policy was created: 1: Via console; 2: Via syntax
Note: This field may return null, indicating that no valid value was found.
                     * @param _createMode How the policy was created: 1: Via console; 2: Via syntax
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Valid values: `user` and `QCS`
Note: This field may return null, indicating that no valid value was found.
                     * @return PolicyType Valid values: `user` and `QCS`
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置Valid values: `user` and `QCS`
Note: This field may return null, indicating that no valid value was found.
                     * @param _policyType Valid values: `user` and `QCS`
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取Policy remarks
                     * @return Remark Policy remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Policy remarks
                     * @param _remark Policy remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Root account of the operator associating the policy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OperateOwnerUin Root account of the operator associating the policy
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperateOwnerUin() const;

                    /**
                     * 设置Root account of the operator associating the policy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _operateOwnerUin Root account of the operator associating the policy
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperateOwnerUin(const std::string& _operateOwnerUin);

                    /**
                     * 判断参数 OperateOwnerUin 是否已赋值
                     * @return OperateOwnerUin 是否已赋值
                     * 
                     */
                    bool OperateOwnerUinHasBeenSet() const;

                    /**
                     * 获取The ID of the account associating the policy. If `UinType` is 0, this indicates that this is a sub-account `UIN`. If `UinType` is 1, this indicates this is a role ID
                     * @return OperateUin The ID of the account associating the policy. If `UinType` is 0, this indicates that this is a sub-account `UIN`. If `UinType` is 1, this indicates this is a role ID
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置The ID of the account associating the policy. If `UinType` is 0, this indicates that this is a sub-account `UIN`. If `UinType` is 1, this indicates this is a role ID
                     * @param _operateUin The ID of the account associating the policy. If `UinType` is 0, this indicates that this is a sub-account `UIN`. If `UinType` is 1, this indicates this is a role ID
                     * 
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取If `UinType` is 0, `OperateUin` indicates that this is a sub-account `UIN`. If `UinType` is 1, `OperateUin` indicates that this is a role ID
                     * @return OperateUinType If `UinType` is 0, `OperateUin` indicates that this is a sub-account `UIN`. If `UinType` is 1, `OperateUin` indicates that this is a role ID
                     * 
                     */
                    uint64_t GetOperateUinType() const;

                    /**
                     * 设置If `UinType` is 0, `OperateUin` indicates that this is a sub-account `UIN`. If `UinType` is 1, `OperateUin` indicates that this is a role ID
                     * @param _operateUinType If `UinType` is 0, `OperateUin` indicates that this is a sub-account `UIN`. If `UinType` is 1, `OperateUin` indicates that this is a role ID
                     * 
                     */
                    void SetOperateUinType(const uint64_t& _operateUinType);

                    /**
                     * 判断参数 OperateUinType 是否已赋值
                     * @return OperateUinType 是否已赋值
                     * 
                     */
                    bool OperateUinTypeHasBeenSet() const;

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

                private:

                    /**
                     * Policy ID
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Policy name
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Time created
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * How the policy was created: 1: Via console; 2: Via syntax
Note: This field may return null, indicating that no valid value was found.
                     */
                    uint64_t m_createMode;
                    bool m_createModeHasBeenSet;

                    /**
                     * Valid values: `user` and `QCS`
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * Policy remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Root account of the operator associating the policy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operateOwnerUin;
                    bool m_operateOwnerUinHasBeenSet;

                    /**
                     * The ID of the account associating the policy. If `UinType` is 0, this indicates that this is a sub-account `UIN`. If `UinType` is 1, this indicates this is a role ID
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * If `UinType` is 0, `OperateUin` indicates that this is a sub-account `UIN`. If `UinType` is 1, `OperateUin` indicates that this is a role ID
                     */
                    uint64_t m_operateUinType;
                    bool m_operateUinTypeHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHPOLICYINFO_H_
