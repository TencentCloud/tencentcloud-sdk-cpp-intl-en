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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityIPGroup request structure.
                */
                class DescribeSecurityIPGroupRequest : public AbstractModel
                {
                public:
                    DescribeSecurityIPGroupRequest();
                    ~DescribeSecurityIPGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID, used to specify the scope of the queried site.
                     * @return ZoneId Site ID, used to specify the scope of the queried site.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID, used to specify the scope of the queried site.
                     * @param _zoneId Site ID, used to specify the scope of the queried site.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Specifies the ID of a security IP group.
<li>When this parameter is provided, only the configuration of the security IP group with the specified ID is queried.</li>
<li>When this parameter is not provided, information of all security IP groups under the site is returned.</li>
                     * @return GroupIds Specifies the ID of a security IP group.
<li>When this parameter is provided, only the configuration of the security IP group with the specified ID is queried.</li>
<li>When this parameter is not provided, information of all security IP groups under the site is returned.</li>
                     * 
                     */
                    std::vector<int64_t> GetGroupIds() const;

                    /**
                     * 设置Specifies the ID of a security IP group.
<li>When this parameter is provided, only the configuration of the security IP group with the specified ID is queried.</li>
<li>When this parameter is not provided, information of all security IP groups under the site is returned.</li>
                     * @param _groupIds Specifies the ID of a security IP group.
<li>When this parameter is provided, only the configuration of the security IP group with the specified ID is queried.</li>
<li>When this parameter is not provided, information of all security IP groups under the site is returned.</li>
                     * 
                     */
                    void SetGroupIds(const std::vector<int64_t>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                private:

                    /**
                     * Site ID, used to specify the scope of the queried site.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Specifies the ID of a security IP group.
<li>When this parameter is provided, only the configuration of the security IP group with the specified ID is queried.</li>
<li>When this parameter is not provided, information of all security IP groups under the site is returned.</li>
                     */
                    std::vector<int64_t> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPREQUEST_H_
