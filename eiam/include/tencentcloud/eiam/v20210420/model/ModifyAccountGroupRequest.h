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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYACCOUNTGROUPREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYACCOUNTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ModifyAccountGroup request structure.
                */
                class ModifyAccountGroupRequest : public AbstractModel
                {
                public:
                    ModifyAccountGroupRequest();
                    ~ModifyAccountGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Account group ID.
                     * @return AccountGroupId Account group ID.
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置Account group ID.
                     * @param _accountGroupId Account group ID.
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取Account group name. When this parameter is not specified, the name will not be modified.
                     * @return GroupName Account group name. When this parameter is not specified, the name will not be modified.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Account group name. When this parameter is not specified, the name will not be modified.
                     * @param _groupName Account group name. When this parameter is not specified, the name will not be modified.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Description. When this parameter is not specified, the description will not be modified.
                     * @return Description Description. When this parameter is not specified, the description will not be modified.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description. When this parameter is not specified, the description will not be modified.
                     * @param _description Description. When this parameter is not specified, the description will not be modified.
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
                     * Account group ID.
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * Account group name. When this parameter is not specified, the name will not be modified.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Description. When this parameter is not specified, the description will not be modified.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYACCOUNTGROUPREQUEST_H_
