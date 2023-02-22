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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEZONESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEZONESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeZones request structure.
                */
                class DescribeZonesRequest : public AbstractModel
                {
                public:
                    DescribeZonesRequest();
                    ~DescribeZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the virtual zone is included.–
                     * @return IncludeVirtualZones Whether the virtual zone is included.–
                     */
                    bool GetIncludeVirtualZones() const;

                    /**
                     * 设置Whether the virtual zone is included.–
                     * @param IncludeVirtualZones Whether the virtual zone is included.–
                     */
                    void SetIncludeVirtualZones(const bool& _includeVirtualZones);

                    /**
                     * 判断参数 IncludeVirtualZones 是否已赋值
                     * @return IncludeVirtualZones 是否已赋值
                     */
                    bool IncludeVirtualZonesHasBeenSet() const;

                    /**
                     * 获取Whether to display all AZs in a region and the user’s permissions in each AZ.
                     * @return ShowPermission Whether to display all AZs in a region and the user’s permissions in each AZ.
                     */
                    bool GetShowPermission() const;

                    /**
                     * 设置Whether to display all AZs in a region and the user’s permissions in each AZ.
                     * @param ShowPermission Whether to display all AZs in a region and the user’s permissions in each AZ.
                     */
                    void SetShowPermission(const bool& _showPermission);

                    /**
                     * 判断参数 ShowPermission 是否已赋值
                     * @return ShowPermission 是否已赋值
                     */
                    bool ShowPermissionHasBeenSet() const;

                private:

                    /**
                     * Whether the virtual zone is included.–
                     */
                    bool m_includeVirtualZones;
                    bool m_includeVirtualZonesHasBeenSet;

                    /**
                     * Whether to display all AZs in a region and the user’s permissions in each AZ.
                     */
                    bool m_showPermission;
                    bool m_showPermissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEZONESREQUEST_H_
