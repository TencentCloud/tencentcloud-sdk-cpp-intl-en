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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYSECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYSECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifySecurityGroups request structure.
                */
                class ModifySecurityGroupsRequest : public AbstractModel
                {
                public:
                    ModifySecurityGroupsRequest();
                    ~ModifySecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return InstanceId Cluster ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID
                     * @param _instanceId Cluster ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Security group information before modification
                     * @return OldSecurityGroupIds Security group information before modification
                     * 
                     */
                    std::vector<std::string> GetOldSecurityGroupIds() const;

                    /**
                     * 设置Security group information before modification
                     * @param _oldSecurityGroupIds Security group information before modification
                     * 
                     */
                    void SetOldSecurityGroupIds(const std::vector<std::string>& _oldSecurityGroupIds);

                    /**
                     * 判断参数 OldSecurityGroupIds 是否已赋值
                     * @return OldSecurityGroupIds 是否已赋值
                     * 
                     */
                    bool OldSecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Modified security group information
                     * @return ModifySecurityGroupIds Modified security group information
                     * 
                     */
                    std::vector<std::string> GetModifySecurityGroupIds() const;

                    /**
                     * 设置Modified security group information
                     * @param _modifySecurityGroupIds Modified security group information
                     * 
                     */
                    void SetModifySecurityGroupIds(const std::vector<std::string>& _modifySecurityGroupIds);

                    /**
                     * 判断参数 ModifySecurityGroupIds 是否已赋值
                     * @return ModifySecurityGroupIds 是否已赋值
                     * 
                     */
                    bool ModifySecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Security group information before modification
                     */
                    std::vector<std::string> m_oldSecurityGroupIds;
                    bool m_oldSecurityGroupIdsHasBeenSet;

                    /**
                     * Modified security group information
                     */
                    std::vector<std::string> m_modifySecurityGroupIds;
                    bool m_modifySecurityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYSECURITYGROUPSREQUEST_H_
