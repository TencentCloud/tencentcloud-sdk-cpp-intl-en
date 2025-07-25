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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEACCESSRULESREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEACCESSRULESREQUEST_H_

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
                * DescribeAccessRules request structure.
                */
                class DescribeAccessRulesRequest : public AbstractModel
                {
                public:
                    DescribeAccessRulesRequest();
                    ~DescribeAccessRulesRequest() = default;
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

                private:

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

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEACCESSRULESREQUEST_H_
