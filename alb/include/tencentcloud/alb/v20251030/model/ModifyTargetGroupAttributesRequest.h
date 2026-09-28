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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYTARGETGROUPATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYTARGETGROUPATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/HealthCheckConfig.h>
#include <tencentcloud/alb/v20251030/model/StickySessionConfig.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * ModifyTargetGroupAttributes request structure.
                */
                class ModifyTargetGroupAttributesRequest : public AbstractModel
                {
                public:
                    ModifyTargetGroupAttributesRequest();
                    ~ModifyTargetGroupAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Whether to preview this request.</p><ul><li><strong>false</strong> (default): Send a normal request to directly modify the target group.</li><li><strong>true</strong>: Send a preview request to check whether the parameters, format, and service limits for modifying the target group meet the requirements.</li></ul>
                     * @return DryRun <p>Whether to preview this request.</p><ul><li><strong>false</strong> (default): Send a normal request to directly modify the target group.</li><li><strong>true</strong>: Send a preview request to check whether the parameters, format, and service limits for modifying the target group meet the requirements.</li></ul>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>Whether to preview this request.</p><ul><li><strong>false</strong> (default): Send a normal request to directly modify the target group.</li><li><strong>true</strong>: Send a preview request to check whether the parameters, format, and service limits for modifying the target group meet the requirements.</li></ul>
                     * @param _dryRun <p>Whether to preview this request.</p><ul><li><strong>false</strong> (default): Send a normal request to directly modify the target group.</li><li><strong>true</strong>: Send a preview request to check whether the parameters, format, and service limits for modifying the target group meet the requirements.</li></ul>
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
                     * 获取<p>Health check configuration.</p>
                     * @return HealthCheckConfig <p>Health check configuration.</p>
                     * 
                     */
                    HealthCheckConfig GetHealthCheckConfig() const;

                    /**
                     * 设置<p>Health check configuration.</p>
                     * @param _healthCheckConfig <p>Health check configuration.</p>
                     * 
                     */
                    void SetHealthCheckConfig(const HealthCheckConfig& _healthCheckConfig);

                    /**
                     * 判断参数 HealthCheckConfig 是否已赋值
                     * @return HealthCheckConfig 是否已赋值
                     * 
                     */
                    bool HealthCheckConfigHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable long connections.</p>
                     * @return KeepaliveEnabled <p>Whether to enable long connections.</p>
                     * 
                     */
                    bool GetKeepaliveEnabled() const;

                    /**
                     * 设置<p>Whether to enable long connections.</p>
                     * @param _keepaliveEnabled <p>Whether to enable long connections.</p>
                     * 
                     */
                    void SetKeepaliveEnabled(const bool& _keepaliveEnabled);

                    /**
                     * 判断参数 KeepaliveEnabled 是否已赋值
                     * @return KeepaliveEnabled 是否已赋值
                     * 
                     */
                    bool KeepaliveEnabledHasBeenSet() const;

                    /**
                     * 获取<p>Scheduling algorithm. Values:</p><ul><li><strong>wrr</strong>: weighted polling. Real servers are selected by weight. The higher the weight, the more chances a server stands to be polled.</li><li><strong>wlc</strong>: number of weighted least connections. When weight values of different real servers are the same, the server with fewer current connections stands more chances to be polled.</li></ul>
                     * @return SchedulerAlgorithm <p>Scheduling algorithm. Values:</p><ul><li><strong>wrr</strong>: weighted polling. Real servers are selected by weight. The higher the weight, the more chances a server stands to be polled.</li><li><strong>wlc</strong>: number of weighted least connections. When weight values of different real servers are the same, the server with fewer current connections stands more chances to be polled.</li></ul>
                     * 
                     */
                    std::string GetSchedulerAlgorithm() const;

                    /**
                     * 设置<p>Scheduling algorithm. Values:</p><ul><li><strong>wrr</strong>: weighted polling. Real servers are selected by weight. The higher the weight, the more chances a server stands to be polled.</li><li><strong>wlc</strong>: number of weighted least connections. When weight values of different real servers are the same, the server with fewer current connections stands more chances to be polled.</li></ul>
                     * @param _schedulerAlgorithm <p>Scheduling algorithm. Values:</p><ul><li><strong>wrr</strong>: weighted polling. Real servers are selected by weight. The higher the weight, the more chances a server stands to be polled.</li><li><strong>wlc</strong>: number of weighted least connections. When weight values of different real servers are the same, the server with fewer current connections stands more chances to be polled.</li></ul>
                     * 
                     */
                    void SetSchedulerAlgorithm(const std::string& _schedulerAlgorithm);

                    /**
                     * 判断参数 SchedulerAlgorithm 是否已赋值
                     * @return SchedulerAlgorithm 是否已赋值
                     * 
                     */
                    bool SchedulerAlgorithmHasBeenSet() const;

                    /**
                     * 获取<p>Session persistence configuration.</p>
                     * @return StickySessionConfig <p>Session persistence configuration.</p>
                     * 
                     */
                    StickySessionConfig GetStickySessionConfig() const;

                    /**
                     * 设置<p>Session persistence configuration.</p>
                     * @param _stickySessionConfig <p>Session persistence configuration.</p>
                     * 
                     */
                    void SetStickySessionConfig(const StickySessionConfig& _stickySessionConfig);

                    /**
                     * 判断参数 StickySessionConfig 是否已赋值
                     * @return StickySessionConfig 是否已赋值
                     * 
                     */
                    bool StickySessionConfigHasBeenSet() const;

                    /**
                     * 获取<p>Target group ID, format: lbtg- followed by 8 alphanumeric characters.</p>
                     * @return TargetGroupId <p>Target group ID, format: lbtg- followed by 8 alphanumeric characters.</p>
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置<p>Target group ID, format: lbtg- followed by 8 alphanumeric characters.</p>
                     * @param _targetGroupId <p>Target group ID, format: lbtg- followed by 8 alphanumeric characters.</p>
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
                     * 获取<p>Target group name. It can contain 1–255 characters, consisting of digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-). If no target group name is specified, the ID is used as the target group name by default.</p>
                     * @return TargetGroupName <p>Target group name. It can contain 1–255 characters, consisting of digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-). If no target group name is specified, the ID is used as the target group name by default.</p>
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置<p>Target group name. It can contain 1–255 characters, consisting of digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-). If no target group name is specified, the ID is used as the target group name by default.</p>
                     * @param _targetGroupName <p>Target group name. It can contain 1–255 characters, consisting of digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-). If no target group name is specified, the ID is used as the target group name by default.</p>
                     * 
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     * 
                     */
                    bool TargetGroupNameHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to preview this request.</p><ul><li><strong>false</strong> (default): Send a normal request to directly modify the target group.</li><li><strong>true</strong>: Send a preview request to check whether the parameters, format, and service limits for modifying the target group meet the requirements.</li></ul>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>Health check configuration.</p>
                     */
                    HealthCheckConfig m_healthCheckConfig;
                    bool m_healthCheckConfigHasBeenSet;

                    /**
                     * <p>Whether to enable long connections.</p>
                     */
                    bool m_keepaliveEnabled;
                    bool m_keepaliveEnabledHasBeenSet;

                    /**
                     * <p>Scheduling algorithm. Values:</p><ul><li><strong>wrr</strong>: weighted polling. Real servers are selected by weight. The higher the weight, the more chances a server stands to be polled.</li><li><strong>wlc</strong>: number of weighted least connections. When weight values of different real servers are the same, the server with fewer current connections stands more chances to be polled.</li></ul>
                     */
                    std::string m_schedulerAlgorithm;
                    bool m_schedulerAlgorithmHasBeenSet;

                    /**
                     * <p>Session persistence configuration.</p>
                     */
                    StickySessionConfig m_stickySessionConfig;
                    bool m_stickySessionConfigHasBeenSet;

                    /**
                     * <p>Target group ID, format: lbtg- followed by 8 alphanumeric characters.</p>
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * <p>Target group name. It can contain 1–255 characters, consisting of digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-). If no target group name is specified, the ID is used as the target group name by default.</p>
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYTARGETGROUPATTRIBUTESREQUEST_H_
