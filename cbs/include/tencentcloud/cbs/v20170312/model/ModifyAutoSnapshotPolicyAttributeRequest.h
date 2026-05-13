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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYAUTOSNAPSHOTPOLICYATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYAUTOSNAPSHOTPOLICYATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Policy.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyAutoSnapshotPolicyAttribute request structure.
                */
                class ModifyAutoSnapshotPolicyAttributeRequest : public AbstractModel
                {
                public:
                    ModifyAutoSnapshotPolicyAttributeRequest();
                    ~ModifyAutoSnapshotPolicyAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the scheduled snapshot policy ID. query via the describeautosnapshotpolicies API (https://www.tencentcloud.com/document/product/362/33556?from_cn_redirect=1).
                     * @return AutoSnapshotPolicyId Specifies the scheduled snapshot policy ID. query via the describeautosnapshotpolicies API (https://www.tencentcloud.com/document/product/362/33556?from_cn_redirect=1).
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置Specifies the scheduled snapshot policy ID. query via the describeautosnapshotpolicies API (https://www.tencentcloud.com/document/product/362/33556?from_cn_redirect=1).
                     * @param _autoSnapshotPolicyId Specifies the scheduled snapshot policy ID. query via the describeautosnapshotpolicies API (https://www.tencentcloud.com/document/product/362/33556?from_cn_redirect=1).
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取Whether the periodic snapshot policy is activated. `false` means inactive, `true` means active. defaults to `true`.
                     * @return IsActivated Whether the periodic snapshot policy is activated. `false` means inactive, `true` means active. defaults to `true`.
                     * 
                     */
                    bool GetIsActivated() const;

                    /**
                     * 设置Whether the periodic snapshot policy is activated. `false` means inactive, `true` means active. defaults to `true`.
                     * @param _isActivated Whether the periodic snapshot policy is activated. `false` means inactive, `true` means active. defaults to `true`.
                     * 
                     */
                    void SetIsActivated(const bool& _isActivated);

                    /**
                     * 判断参数 IsActivated 是否已赋值
                     * @return IsActivated 是否已赋值
                     * 
                     */
                    bool IsActivatedHasBeenSet() const;

                    /**
                     * 获取Indicates whether snapshots created by the regular snapshot policy are retained permanently. `false` means the snapshots are not retained permanently, `true` means permanent retention. defaults to `false`.
                     * @return IsPermanent Indicates whether snapshots created by the regular snapshot policy are retained permanently. `false` means the snapshots are not retained permanently, `true` means permanent retention. defaults to `false`.
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置Indicates whether snapshots created by the regular snapshot policy are retained permanently. `false` means the snapshots are not retained permanently, `true` means permanent retention. defaults to `false`.
                     * @param _isPermanent Indicates whether snapshots created by the regular snapshot policy are retained permanently. `false` means the snapshots are not retained permanently, `true` means permanent retention. defaults to `false`.
                     * 
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     * 
                     */
                    bool IsPermanentHasBeenSet() const;

                    /**
                     * 获取The name of the scheduled snapshot policy to be created. If it is left empty, the default is 'Not named'. The maximum length cannot exceed 60 bytes.
                     * @return AutoSnapshotPolicyName The name of the scheduled snapshot policy to be created. If it is left empty, the default is 'Not named'. The maximum length cannot exceed 60 bytes.
                     * 
                     */
                    std::string GetAutoSnapshotPolicyName() const;

                    /**
                     * 设置The name of the scheduled snapshot policy to be created. If it is left empty, the default is 'Not named'. The maximum length cannot exceed 60 bytes.
                     * @param _autoSnapshotPolicyName The name of the scheduled snapshot policy to be created. If it is left empty, the default is 'Not named'. The maximum length cannot exceed 60 bytes.
                     * 
                     */
                    void SetAutoSnapshotPolicyName(const std::string& _autoSnapshotPolicyName);

                    /**
                     * 判断参数 AutoSnapshotPolicyName 是否已赋值
                     * @return AutoSnapshotPolicyName 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyNameHasBeenSet() const;

                    /**
                     * 获取The policy for executing the scheduled snapshot.
                     * @return Policy The policy for executing the scheduled snapshot.
                     * 
                     */
                    std::vector<Policy> GetPolicy() const;

                    /**
                     * 设置The policy for executing the scheduled snapshot.
                     * @param _policy The policy for executing the scheduled snapshot.
                     * 
                     */
                    void SetPolicy(const std::vector<Policy>& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取Number of days to retain the snapshots created according to this scheduled snapshot policy. If this parameter is specified, `IsPermanent` cannot be specified as `TRUE`; otherwise, they will conflict with each other.
                     * @return RetentionDays Number of days to retain the snapshots created according to this scheduled snapshot policy. If this parameter is specified, `IsPermanent` cannot be specified as `TRUE`; otherwise, they will conflict with each other.
                     * 
                     */
                    uint64_t GetRetentionDays() const;

                    /**
                     * 设置Number of days to retain the snapshots created according to this scheduled snapshot policy. If this parameter is specified, `IsPermanent` cannot be specified as `TRUE`; otherwise, they will conflict with each other.
                     * @param _retentionDays Number of days to retain the snapshots created according to this scheduled snapshot policy. If this parameter is specified, `IsPermanent` cannot be specified as `TRUE`; otherwise, they will conflict with each other.
                     * 
                     */
                    void SetRetentionDays(const uint64_t& _retentionDays);

                    /**
                     * 判断参数 RetentionDays 是否已赋值
                     * @return RetentionDays 是否已赋值
                     * 
                     */
                    bool RetentionDaysHasBeenSet() const;

                private:

                    /**
                     * Specifies the scheduled snapshot policy ID. query via the describeautosnapshotpolicies API (https://www.tencentcloud.com/document/product/362/33556?from_cn_redirect=1).
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * Whether the periodic snapshot policy is activated. `false` means inactive, `true` means active. defaults to `true`.
                     */
                    bool m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * Indicates whether snapshots created by the regular snapshot policy are retained permanently. `false` means the snapshots are not retained permanently, `true` means permanent retention. defaults to `false`.
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * The name of the scheduled snapshot policy to be created. If it is left empty, the default is 'Not named'. The maximum length cannot exceed 60 bytes.
                     */
                    std::string m_autoSnapshotPolicyName;
                    bool m_autoSnapshotPolicyNameHasBeenSet;

                    /**
                     * The policy for executing the scheduled snapshot.
                     */
                    std::vector<Policy> m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Number of days to retain the snapshots created according to this scheduled snapshot policy. If this parameter is specified, `IsPermanent` cannot be specified as `TRUE`; otherwise, they will conflict with each other.
                     */
                    uint64_t m_retentionDays;
                    bool m_retentionDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYAUTOSNAPSHOTPOLICYATTRIBUTEREQUEST_H_
