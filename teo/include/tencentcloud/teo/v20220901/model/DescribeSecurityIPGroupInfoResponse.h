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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPINFORESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPINFORESPONSE_H_

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
                * DescribeSecurityIPGroupInfo response structure.
                */
                class DescribeSecurityIPGroupInfoResponse : public AbstractModel
                {
                public:
                    DescribeSecurityIPGroupInfoResponse();
                    ~DescribeSecurityIPGroupInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of IP groups that meet the conditions.
                     * @return TotalCount The number of IP groups that meet the conditions.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Detailed configuration information of the IP group, including the ID, name, and IP/network segment list of each IP group.
                     * @return IPGroups Detailed configuration information of the IP group, including the ID, name, and IP/network segment list of each IP group.
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
                     * The number of IP groups that meet the conditions.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Detailed configuration information of the IP group, including the ID, name, and IP/network segment list of each IP group.
                     */
                    std::vector<IPGroup> m_iPGroups;
                    bool m_iPGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPINFORESPONSE_H_
