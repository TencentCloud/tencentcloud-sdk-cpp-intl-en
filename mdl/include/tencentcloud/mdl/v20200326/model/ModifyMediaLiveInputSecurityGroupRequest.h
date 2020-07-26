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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_MODIFYMEDIALIVEINPUTSECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_MODIFYMEDIALIVEINPUTSECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * ModifyMediaLiveInputSecurityGroup request structure.
                */
                class ModifyMediaLiveInputSecurityGroupRequest : public AbstractModel
                {
                public:
                    ModifyMediaLiveInputSecurityGroupRequest();
                    ~ModifyMediaLiveInputSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Input security group ID.
                     * @return Id Input security group ID.
                     */
                    std::string GetId() const;

                    /**
                     * 设置Input security group ID.
                     * @param Id Input security group ID.
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Input security group name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     * @return Name Input security group name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Input security group name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     * @param Name Input security group name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取List of whitelist entries. Up to 10 entries are allowed.
                     * @return Whitelist List of whitelist entries. Up to 10 entries are allowed.
                     */
                    std::vector<std::string> GetWhitelist() const;

                    /**
                     * 设置List of whitelist entries. Up to 10 entries are allowed.
                     * @param Whitelist List of whitelist entries. Up to 10 entries are allowed.
                     */
                    void SetWhitelist(const std::vector<std::string>& _whitelist);

                    /**
                     * 判断参数 Whitelist 是否已赋值
                     * @return Whitelist 是否已赋值
                     */
                    bool WhitelistHasBeenSet() const;

                private:

                    /**
                     * Input security group ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Input security group name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * List of whitelist entries. Up to 10 entries are allowed.
                     */
                    std::vector<std::string> m_whitelist;
                    bool m_whitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_MODIFYMEDIALIVEINPUTSECURITYGROUPREQUEST_H_
