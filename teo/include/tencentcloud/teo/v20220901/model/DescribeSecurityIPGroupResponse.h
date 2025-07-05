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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityIPGroup response structure.
                */
                class DescribeSecurityIPGroupResponse : public AbstractModel
                {
                public:
                    DescribeSecurityIPGroupResponse();
                    ~DescribeSecurityIPGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Detailed configuration information of security IP groups, including the ID, name, and IP/IP range list information of each security IP group.
                     * @return IPGroups Detailed configuration information of security IP groups, including the ID, name, and IP/IP range list information of each security IP group.
                     * 
                     */
                    std::vector<IPGroup> GetIPGroups() const;

                    /**
                     * 判断参数 IPGroups 是否已赋值
                     * @return IPGroups 是否已赋值
                     * 
                     */
                    bool IPGroupsHasBeenSet() const;

                private:

                    /**
                     * Detailed configuration information of security IP groups, including the ID, name, and IP/IP range list information of each security IP group.
                     */
                    std::vector<IPGroup> m_iPGroups;
                    bool m_iPGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPRESPONSE_H_
