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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYACCESSGROUPREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYACCESSGROUPREQUEST_H_

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
                * ModifyAccessGroup request structure.
                */
                class ModifyAccessGroupRequest : public AbstractModel
                {
                public:
                    ModifyAccessGroupRequest();
                    ~ModifyAccessGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Permission group ID
                     * @return AccessGroupId Permission group ID
                     * 
                     */
                    std::string GetAccessGroupId() const;

                    /**
                     * 设置Permission group ID
                     * @param _accessGroupId Permission group ID
                     * 
                     */
                    void SetAccessGroupId(const std::string& _accessGroupId);

                    /**
                     * 判断参数 AccessGroupId 是否已赋值
                     * @return AccessGroupId 是否已赋值
                     * 
                     */
                    bool AccessGroupIdHasBeenSet() const;

                    /**
                     * 获取Permission group name
                     * @return AccessGroupName Permission group name
                     * 
                     */
                    std::string GetAccessGroupName() const;

                    /**
                     * 设置Permission group name
                     * @param _accessGroupName Permission group name
                     * 
                     */
                    void SetAccessGroupName(const std::string& _accessGroupName);

                    /**
                     * 判断参数 AccessGroupName 是否已赋值
                     * @return AccessGroupName 是否已赋值
                     * 
                     */
                    bool AccessGroupNameHasBeenSet() const;

                    /**
                     * 获取Permission group description
                     * @return Description Permission group description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Permission group description
                     * @param _description Permission group description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYACCESSGROUPREQUEST_H_
