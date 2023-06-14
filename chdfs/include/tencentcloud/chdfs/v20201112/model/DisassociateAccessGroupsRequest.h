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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_DISASSOCIATEACCESSGROUPSREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_DISASSOCIATEACCESSGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * DisassociateAccessGroups request structure.
                */
                class DisassociateAccessGroupsRequest : public AbstractModel
                {
                public:
                    DisassociateAccessGroupsRequest();
                    ~DisassociateAccessGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Mount point ID
                     * @return MountPointId Mount point ID
                     * 
                     */
                    std::string GetMountPointId() const;

                    /**
                     * 设置Mount point ID
                     * @param _mountPointId Mount point ID
                     * 
                     */
                    void SetMountPointId(const std::string& _mountPointId);

                    /**
                     * 判断参数 MountPointId 是否已赋值
                     * @return MountPointId 是否已赋值
                     * 
                     */
                    bool MountPointIdHasBeenSet() const;

                    /**
                     * 获取List of permission group IDs
                     * @return AccessGroupIds List of permission group IDs
                     * 
                     */
                    std::vector<std::string> GetAccessGroupIds() const;

                    /**
                     * 设置List of permission group IDs
                     * @param _accessGroupIds List of permission group IDs
                     * 
                     */
                    void SetAccessGroupIds(const std::vector<std::string>& _accessGroupIds);

                    /**
                     * 判断参数 AccessGroupIds 是否已赋值
                     * @return AccessGroupIds 是否已赋值
                     * 
                     */
                    bool AccessGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Mount point ID
                     */
                    std::string m_mountPointId;
                    bool m_mountPointIdHasBeenSet;

                    /**
                     * List of permission group IDs
                     */
                    std::vector<std::string> m_accessGroupIds;
                    bool m_accessGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_DISASSOCIATEACCESSGROUPSREQUEST_H_
