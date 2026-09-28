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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBETARGETGROUPSRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBETARGETGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/TargetGroupOutput.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeTargetGroups response structure.
                */
                class DescribeTargetGroupsResponse : public AbstractModel
                {
                public:
                    DescribeTargetGroupsResponse();
                    ~DescribeTargetGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Token for the next query. If the current page is the last page, this field returns empty.
                     * @return NextToken Token for the next query. If the current page is the last page, this field returns empty.
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取Target group information.
                     * @return TargetGroups Target group information.
                     * 
                     */
                    std::vector<TargetGroupOutput> GetTargetGroups() const;

                    /**
                     * 判断参数 TargetGroups 是否已赋值
                     * @return TargetGroups 是否已赋值
                     * 
                     */
                    bool TargetGroupsHasBeenSet() const;

                    /**
                     * 获取Total number of target groups.
                     * @return TotalCount Total number of target groups.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Token for the next query. If the current page is the last page, this field returns empty.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Target group information.
                     */
                    std::vector<TargetGroupOutput> m_targetGroups;
                    bool m_targetGroupsHasBeenSet;

                    /**
                     * Total number of target groups.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBETARGETGROUPSRESPONSE_H_
