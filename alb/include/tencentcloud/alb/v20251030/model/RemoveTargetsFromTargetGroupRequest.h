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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_REMOVETARGETSFROMTARGETGROUPREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_REMOVETARGETSFROMTARGETGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/TargetToRemove.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * RemoveTargetsFromTargetGroup request structure.
                */
                class RemoveTargetsFromTargetGroupRequest : public AbstractModel
                {
                public:
                    RemoveTargetsFromTargetGroupRequest();
                    ~RemoveTargetsFromTargetGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Target group ID. The format is `lbtg-` followed by 8 alphanumeric characters.
                     * @return TargetGroupId Target group ID. The format is `lbtg-` followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置Target group ID. The format is `lbtg-` followed by 8 alphanumeric characters.
                     * @param _targetGroupId Target group ID. The format is `lbtg-` followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取List of backend services to remove from the target group. A single request can remove up to **50** backend services.
                     * @return Targets List of backend services to remove from the target group. A single request can remove up to **50** backend services.
                     * 
                     */
                    std::vector<TargetToRemove> GetTargets() const;

                    /**
                     * 设置List of backend services to remove from the target group. A single request can remove up to **50** backend services.
                     * @param _targets List of backend services to remove from the target group. A single request can remove up to **50** backend services.
                     * 
                     */
                    void SetTargets(const std::vector<TargetToRemove>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取Whether to preview this request. 
- **false** (default): Send a normal request and directly remove the backend service. 
- **true**: Send a preview request to check whether the parameters, format, and service limits for removing the backend service meet the requirements.
                     * @return DryRun Whether to preview this request. 
- **false** (default): Send a normal request and directly remove the backend service. 
- **true**: Send a preview request to check whether the parameters, format, and service limits for removing the backend service meet the requirements.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether to preview this request. 
- **false** (default): Send a normal request and directly remove the backend service. 
- **true**: Send a preview request to check whether the parameters, format, and service limits for removing the backend service meet the requirements.
                     * @param _dryRun Whether to preview this request. 
- **false** (default): Send a normal request and directly remove the backend service. 
- **true**: Send a preview request to check whether the parameters, format, and service limits for removing the backend service meet the requirements.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * Target group ID. The format is `lbtg-` followed by 8 alphanumeric characters.
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * List of backend services to remove from the target group. A single request can remove up to **50** backend services.
                     */
                    std::vector<TargetToRemove> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * Whether to preview this request. 
- **false** (default): Send a normal request and directly remove the backend service. 
- **true**: Send a preview request to check whether the parameters, format, and service limits for removing the backend service meet the requirements.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_REMOVETARGETSFROMTARGETGROUPREQUEST_H_
