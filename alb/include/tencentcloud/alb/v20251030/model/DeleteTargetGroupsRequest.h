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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DELETETARGETGROUPSREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DELETETARGETGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DeleteTargetGroups request structure.
                */
                class DeleteTargetGroupsRequest : public AbstractModel
                {
                public:
                    DeleteTargetGroupsRequest();
                    ~DeleteTargetGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to preview this request.
- **false** (default): Send a normal request to directly delete the target group.
- **true**: Send a preview request to check whether the parameters, format, and service limits for deleting the target group meet the requirements.
                     * @return DryRun Whether to preview this request.
- **false** (default): Send a normal request to directly delete the target group.
- **true**: Send a preview request to check whether the parameters, format, and service limits for deleting the target group meet the requirements.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether to preview this request.
- **false** (default): Send a normal request to directly delete the target group.
- **true**: Send a preview request to check whether the parameters, format, and service limits for deleting the target group meet the requirements.
                     * @param _dryRun Whether to preview this request.
- **false** (default): Send a normal request to directly delete the target group.
- **true**: Send a preview request to check whether the parameters, format, and service limits for deleting the target group meet the requirements.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取Target group ID list. The ID format is lbtg- followed by 8 alphanumeric characters.
                     * @return TargetGroupIds Target group ID list. The ID format is lbtg- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::vector<std::string> GetTargetGroupIds() const;

                    /**
                     * 设置Target group ID list. The ID format is lbtg- followed by 8 alphanumeric characters.
                     * @param _targetGroupIds Target group ID list. The ID format is lbtg- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetTargetGroupIds(const std::vector<std::string>& _targetGroupIds);

                    /**
                     * 判断参数 TargetGroupIds 是否已赋值
                     * @return TargetGroupIds 是否已赋值
                     * 
                     */
                    bool TargetGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Whether to preview this request.
- **false** (default): Send a normal request to directly delete the target group.
- **true**: Send a preview request to check whether the parameters, format, and service limits for deleting the target group meet the requirements.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Target group ID list. The ID format is lbtg- followed by 8 alphanumeric characters.
                     */
                    std::vector<std::string> m_targetGroupIds;
                    bool m_targetGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DELETETARGETGROUPSREQUEST_H_
