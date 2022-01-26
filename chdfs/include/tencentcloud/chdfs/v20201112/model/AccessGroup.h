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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_ACCESSGROUP_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_ACCESSGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Permission group
                */
                class AccessGroup : public AbstractModel
                {
                public:
                    AccessGroup();
                    ~AccessGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Permission group ID
                     * @return AccessGroupId Permission group ID
                     */
                    std::string GetAccessGroupId() const;

                    /**
                     * 设置Permission group ID
                     * @param AccessGroupId Permission group ID
                     */
                    void SetAccessGroupId(const std::string& _accessGroupId);

                    /**
                     * 判断参数 AccessGroupId 是否已赋值
                     * @return AccessGroupId 是否已赋值
                     */
                    bool AccessGroupIdHasBeenSet() const;

                    /**
                     * 获取Permission group name
                     * @return AccessGroupName Permission group name
                     */
                    std::string GetAccessGroupName() const;

                    /**
                     * 设置Permission group name
                     * @param AccessGroupName Permission group name
                     */
                    void SetAccessGroupName(const std::string& _accessGroupName);

                    /**
                     * 判断参数 AccessGroupName 是否已赋值
                     * @return AccessGroupName 是否已赋值
                     */
                    bool AccessGroupNameHasBeenSet() const;

                    /**
                     * 获取Permission group description
                     * @return Description Permission group description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Permission group description
                     * @param Description Permission group description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取VPC type (1: CVM; 2: BM 1.0)
                     * @return VpcType VPC type (1: CVM; 2: BM 1.0)
                     */
                    uint64_t GetVpcType() const;

                    /**
                     * 设置VPC type (1: CVM; 2: BM 1.0)
                     * @param VpcType VPC type (1: CVM; 2: BM 1.0)
                     */
                    void SetVpcType(const uint64_t& _vpcType);

                    /**
                     * 判断参数 VpcType 是否已赋值
                     * @return VpcType 是否已赋值
                     */
                    bool VpcTypeHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * Permission group ID
                     */
                    std::string m_accessGroupId;
                    bool m_accessGroupIdHasBeenSet;

                    /**
                     * Permission group name
                     */
                    std::string m_accessGroupName;
                    bool m_accessGroupNameHasBeenSet;

                    /**
                     * Permission group description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * VPC type (1: CVM; 2: BM 1.0)
                     */
                    uint64_t m_vpcType;
                    bool m_vpcTypeHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_ACCESSGROUP_H_
