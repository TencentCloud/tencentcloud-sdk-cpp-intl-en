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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetGroupHealthCheck.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyTargetGroupAttribute request structure.
                */
                class ModifyTargetGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifyTargetGroupAttributeRequest();
                    ~ModifyTargetGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Target group ID
                     * @return TargetGroupId Target group ID
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置Target group ID
                     * @param _targetGroupId Target group ID
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
                     * 获取New name of target group
                     * @return TargetGroupName New name of target group
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置New name of target group
                     * @param _targetGroupName New name of target group
                     * 
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     * 
                     */
                    bool TargetGroupNameHasBeenSet() const;

                    /**
                     * 获取The new default port of the target group. this parameter is not supported for full listen target groups.
                     * @return Port The new default port of the target group. this parameter is not supported for full listen target groups.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置The new default port of the target group. this parameter is not supported for full listen target groups.
                     * @param _port The new default port of the target group. this parameter is not supported for full listen target groups.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Scheduling algorithm. this parameter is valid only for target groups of the new version V2 when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li><li>default is WRR.</li></ur>.
                     * @return ScheduleAlgorithm Scheduling algorithm. this parameter is valid only for target groups of the new version V2 when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li><li>default is WRR.</li></ur>.
                     * 
                     */
                    std::string GetScheduleAlgorithm() const;

                    /**
                     * 设置Scheduling algorithm. this parameter is valid only for target groups of the new version V2 when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li><li>default is WRR.</li></ur>.
                     * @param _scheduleAlgorithm Scheduling algorithm. this parameter is valid only for target groups of the new version V2 when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li><li>default is WRR.</li></ur>.
                     * 
                     */
                    void SetScheduleAlgorithm(const std::string& _scheduleAlgorithm);

                    /**
                     * 判断参数 ScheduleAlgorithm 是否已赋值
                     * @return ScheduleAlgorithm 是否已赋值
                     * 
                     */
                    bool ScheduleAlgorithmHasBeenSet() const;

                    /**
                     * 获取Health check details.
                     * @return HealthCheck Health check details.
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check details.
                     * @param _healthCheck Health check details.
                     * 
                     */
                    void SetHealthCheck(const TargetGroupHealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取Default Weight for backend service. among them: <ul><li>value ranges from 0 to 100.</li><li>after setting this value, when adding a backend service to the target group, if the backend service does not set Weight separately, use the default Weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>.
                     * @return Weight Default Weight for backend service. among them: <ul><li>value ranges from 0 to 100.</li><li>after setting this value, when adding a backend service to the target group, if the backend service does not set Weight separately, use the default Weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Default Weight for backend service. among them: <ul><li>value ranges from 0 to 100.</li><li>after setting this value, when adding a backend service to the target group, if the backend service does not set Weight separately, use the default Weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>.
                     * @param _weight Default Weight for backend service. among them: <ul><li>value ranges from 0 to 100.</li><li>after setting this value, when adding a backend service to the target group, if the backend service does not set Weight separately, use the default Weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>.
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable the persistent connection feature. this parameter applies only to HTTP and HTTPS target groups. true: disable; false: enable. this feature is off by default.
                     * @return KeepaliveEnable Specifies whether to enable the persistent connection feature. this parameter applies only to HTTP and HTTPS target groups. true: disable; false: enable. this feature is off by default.
                     * 
                     */
                    bool GetKeepaliveEnable() const;

                    /**
                     * 设置Specifies whether to enable the persistent connection feature. this parameter applies only to HTTP and HTTPS target groups. true: disable; false: enable. this feature is off by default.
                     * @param _keepaliveEnable Specifies whether to enable the persistent connection feature. this parameter applies only to HTTP and HTTPS target groups. true: disable; false: enable. this feature is off by default.
                     * 
                     */
                    void SetKeepaliveEnable(const bool& _keepaliveEnable);

                    /**
                     * 判断参数 KeepaliveEnable 是否已赋值
                     * @return KeepaliveEnable 是否已赋值
                     * 
                     */
                    bool KeepaliveEnableHasBeenSet() const;

                    /**
                     * 获取Specifies the session persistence time in seconds. value range: 30-3600. default: 0 (disabled). this parameter is unsupported for TCP/UDP target groups.
                     * @return SessionExpireTime Specifies the session persistence time in seconds. value range: 30-3600. default: 0 (disabled). this parameter is unsupported for TCP/UDP target groups.
                     * 
                     */
                    uint64_t GetSessionExpireTime() const;

                    /**
                     * 设置Specifies the session persistence time in seconds. value range: 30-3600. default: 0 (disabled). this parameter is unsupported for TCP/UDP target groups.
                     * @param _sessionExpireTime Specifies the session persistence time in seconds. value range: 30-3600. default: 0 (disabled). this parameter is unsupported for TCP/UDP target groups.
                     * 
                     */
                    void SetSessionExpireTime(const uint64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     * 
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Target group ID
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * New name of target group
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * The new default port of the target group. this parameter is not supported for full listen target groups.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Scheduling algorithm. this parameter is valid only for target groups of the new version V2 when the backend forwarding protocol is HTTP, HTTPS, or GRPC. available values:.
<ur><li>WRR: weighted round-robin.</li><li>LEAST_CONN: LEAST connection.</li><li>IP_HASH: based on IP HASH.</li><li>default is WRR.</li></ur>.
                     */
                    std::string m_scheduleAlgorithm;
                    bool m_scheduleAlgorithmHasBeenSet;

                    /**
                     * Health check details.
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Default Weight for backend service. among them: <ul><li>value ranges from 0 to 100.</li><li>after setting this value, when adding a backend service to the target group, if the backend service does not set Weight separately, use the default Weight here.</li><li>Weight parameter settings not supported for v1 target group type.</li></ul>.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Specifies whether to enable the persistent connection feature. this parameter applies only to HTTP and HTTPS target groups. true: disable; false: enable. this feature is off by default.
                     */
                    bool m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * Specifies the session persistence time in seconds. value range: 30-3600. default: 0 (disabled). this parameter is unsupported for TCP/UDP target groups.
                     */
                    uint64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_
