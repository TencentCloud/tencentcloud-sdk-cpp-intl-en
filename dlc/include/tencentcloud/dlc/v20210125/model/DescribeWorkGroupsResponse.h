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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/WorkGroupInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeWorkGroups response structure.
                */
                class DescribeWorkGroupsResponse : public AbstractModel
                {
                public:
                    DescribeWorkGroupsResponse();
                    ~DescribeWorkGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of working groups
                     * @return TotalCount The total number of working groups
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Collection of working group information
                     * @return WorkGroupSet Collection of working group information
                     * 
                     */
                    std::vector<WorkGroupInfo> GetWorkGroupSet() const;

                    /**
                     * 判断参数 WorkGroupSet 是否已赋值
                     * @return WorkGroupSet 是否已赋值
                     * 
                     */
                    bool WorkGroupSetHasBeenSet() const;

                private:

                    /**
                     * The total number of working groups
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Collection of working group information
                     */
                    std::vector<WorkGroupInfo> m_workGroupSet;
                    bool m_workGroupSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPSRESPONSE_H_
