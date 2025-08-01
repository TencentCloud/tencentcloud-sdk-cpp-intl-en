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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROGROUPSRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RoGroup.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeRoGroups response structure.
                */
                class DescribeRoGroupsResponse : public AbstractModel
                {
                public:
                    DescribeRoGroupsResponse();
                    ~DescribeRoGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取RO group information array. An instance can be associated with multiple RO groups.
                     * @return RoGroups RO group information array. An instance can be associated with multiple RO groups.
                     * 
                     */
                    std::vector<RoGroup> GetRoGroups() const;

                    /**
                     * 判断参数 RoGroups 是否已赋值
                     * @return RoGroups 是否已赋值
                     * 
                     */
                    bool RoGroupsHasBeenSet() const;

                private:

                    /**
                     * RO group information array. An instance can be associated with multiple RO groups.
                     */
                    std::vector<RoGroup> m_roGroups;
                    bool m_roGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROGROUPSRESPONSE_H_
