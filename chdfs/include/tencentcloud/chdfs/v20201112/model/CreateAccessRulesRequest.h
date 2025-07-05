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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEACCESSRULESREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEACCESSRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20201112/model/AccessRule.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * CreateAccessRules request structure.
                */
                class CreateAccessRulesRequest : public AbstractModel
                {
                public:
                    CreateAccessRulesRequest();
                    ~CreateAccessRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Multiple permission rules (up to 10)
                     * @return AccessRules Multiple permission rules (up to 10)
                     * 
                     */
                    std::vector<AccessRule> GetAccessRules() const;

                    /**
                     * 设置Multiple permission rules (up to 10)
                     * @param _accessRules Multiple permission rules (up to 10)
                     * 
                     */
                    void SetAccessRules(const std::vector<AccessRule>& _accessRules);

                    /**
                     * 判断参数 AccessRules 是否已赋值
                     * @return AccessRules 是否已赋值
                     * 
                     */
                    bool AccessRulesHasBeenSet() const;

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

                private:

                    /**
                     * Multiple permission rules (up to 10)
                     */
                    std::vector<AccessRule> m_accessRules;
                    bool m_accessRulesHasBeenSet;

                    /**
                     * Permission group ID
                     */
                    std::string m_accessGroupId;
                    bool m_accessGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEACCESSRULESREQUEST_H_
