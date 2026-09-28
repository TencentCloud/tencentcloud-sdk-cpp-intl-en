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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPHEALTHINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPHEALTHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/TargetHealthStatusInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Target group health check status
                */
                class TargetGroupHealthInfo : public AbstractModel
                {
                public:
                    TargetGroupHealthInfo();
                    ~TargetGroupHealthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the health check.
                     * @return HealthCheckEnabled Whether to enable the health check.
                     * 
                     */
                    bool GetHealthCheckEnabled() const;

                    /**
                     * 设置Whether to enable the health check.
                     * @param _healthCheckEnabled Whether to enable the health check.
                     * 
                     */
                    void SetHealthCheckEnabled(const bool& _healthCheckEnabled);

                    /**
                     * 判断参数 HealthCheckEnabled 是否已赋值
                     * @return HealthCheckEnabled 是否已赋值
                     * 
                     */
                    bool HealthCheckEnabledHasBeenSet() const;

                    /**
                     * 获取Target group ID in the format of lbtg- followed by 8 alphanumeric characters.
                     * @return TargetGroupId Target group ID in the format of lbtg- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置Target group ID in the format of lbtg- followed by 8 alphanumeric characters.
                     * @param _targetGroupId Target group ID in the format of lbtg- followed by 8 alphanumeric characters.
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
                     * 获取List of service health check statuses.
                     * @return TargetHealthStatusInfos List of service health check statuses.
                     * 
                     */
                    std::vector<TargetHealthStatusInfo> GetTargetHealthStatusInfos() const;

                    /**
                     * 设置List of service health check statuses.
                     * @param _targetHealthStatusInfos List of service health check statuses.
                     * 
                     */
                    void SetTargetHealthStatusInfos(const std::vector<TargetHealthStatusInfo>& _targetHealthStatusInfos);

                    /**
                     * 判断参数 TargetHealthStatusInfos 是否已赋值
                     * @return TargetHealthStatusInfos 是否已赋值
                     * 
                     */
                    bool TargetHealthStatusInfosHasBeenSet() const;

                    /**
                     * 获取Forward action type. Valid values:
TargetGroup: Forward to a target group.
Redirect: Redirection.
FixedResponse: returns fixed content.
Rewrite: Rewrite.
InsertHeader: Write to an HTTP header.
RemoveHeader: Delete HTTP Header.
Forward action must include one of TargetGroup, Redirect, or FixedResponse, and the execution order is placed last.
                     * @return Type Forward action type. Valid values:
TargetGroup: Forward to a target group.
Redirect: Redirection.
FixedResponse: returns fixed content.
Rewrite: Rewrite.
InsertHeader: Write to an HTTP header.
RemoveHeader: Delete HTTP Header.
Forward action must include one of TargetGroup, Redirect, or FixedResponse, and the execution order is placed last.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Forward action type. Valid values:
TargetGroup: Forward to a target group.
Redirect: Redirection.
FixedResponse: returns fixed content.
Rewrite: Rewrite.
InsertHeader: Write to an HTTP header.
RemoveHeader: Delete HTTP Header.
Forward action must include one of TargetGroup, Redirect, or FixedResponse, and the execution order is placed last.
                     * @param _type Forward action type. Valid values:
TargetGroup: Forward to a target group.
Redirect: Redirection.
FixedResponse: returns fixed content.
Rewrite: Rewrite.
InsertHeader: Write to an HTTP header.
RemoveHeader: Delete HTTP Header.
Forward action must include one of TargetGroup, Redirect, or FixedResponse, and the execution order is placed last.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the health check.
                     */
                    bool m_healthCheckEnabled;
                    bool m_healthCheckEnabledHasBeenSet;

                    /**
                     * Target group ID in the format of lbtg- followed by 8 alphanumeric characters.
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * List of service health check statuses.
                     */
                    std::vector<TargetHealthStatusInfo> m_targetHealthStatusInfos;
                    bool m_targetHealthStatusInfosHasBeenSet;

                    /**
                     * Forward action type. Valid values:
TargetGroup: Forward to a target group.
Redirect: Redirection.
FixedResponse: returns fixed content.
Rewrite: Rewrite.
InsertHeader: Write to an HTTP header.
RemoveHeader: Delete HTTP Header.
Forward action must include one of TargetGroup, Redirect, or FixedResponse, and the execution order is placed last.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPHEALTHINFO_H_
