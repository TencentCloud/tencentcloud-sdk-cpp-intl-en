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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_UNBINDAUTOSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_UNBINDAUTOSNAPSHOTPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * UnbindAutoSnapshotPolicy request structure.
                */
                class UnbindAutoSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    UnbindAutoSnapshotPolicyRequest();
                    ~UnbindAutoSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of scheduled snapshot policy to be unbound.
                     * @return AutoSnapshotPolicyId ID of scheduled snapshot policy to be unbound.
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置ID of scheduled snapshot policy to be unbound.
                     * @param _autoSnapshotPolicyId ID of scheduled snapshot policy to be unbound.
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
                     * 获取ID list of cloud disks from which the regular snapshot policy is unbound. specifies this parameter or the InstanceIds parameter. a minimum of one is required.
                     * @return DiskIds ID list of cloud disks from which the regular snapshot policy is unbound. specifies this parameter or the InstanceIds parameter. a minimum of one is required.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置ID list of cloud disks from which the regular snapshot policy is unbound. specifies this parameter or the InstanceIds parameter. a minimum of one is required.
                     * @param _diskIds ID list of cloud disks from which the regular snapshot policy is unbound. specifies this parameter or the InstanceIds parameter. a minimum of one is required.
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取Instance ID list to unbind the periodic snapshot policy. this parameter or the DiskIds parameter requires a minimum of one input.
                     * @return InstanceIds Instance ID list to unbind the periodic snapshot policy. this parameter or the DiskIds parameter requires a minimum of one input.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list to unbind the periodic snapshot policy. this parameter or the DiskIds parameter requires a minimum of one input.
                     * @param _instanceIds Instance ID list to unbind the periodic snapshot policy. this parameter or the DiskIds parameter requires a minimum of one input.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * ID of scheduled snapshot policy to be unbound.
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * ID list of cloud disks from which the regular snapshot policy is unbound. specifies this parameter or the InstanceIds parameter. a minimum of one is required.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Instance ID list to unbind the periodic snapshot policy. this parameter or the DiskIds parameter requires a minimum of one input.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_UNBINDAUTOSNAPSHOTPOLICYREQUEST_H_
