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
                     * 获取List of cloud disk IDs scheduled snapshot policy to be unbound from.
                     * @return DiskIds List of cloud disk IDs scheduled snapshot policy to be unbound from.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置List of cloud disk IDs scheduled snapshot policy to be unbound from.
                     * @param _diskIds List of cloud disk IDs scheduled snapshot policy to be unbound from.
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

                private:

                    /**
                     * List of cloud disk IDs scheduled snapshot policy to be unbound from.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * ID of scheduled snapshot policy to be unbound.
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_UNBINDAUTOSNAPSHOTPOLICYREQUEST_H_
