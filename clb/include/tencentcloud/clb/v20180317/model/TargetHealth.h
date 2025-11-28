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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETHEALTH_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETHEALTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Describes the health information of a target
                */
                class TargetHealth : public AbstractModel
                {
                public:
                    TargetHealth();
                    ~TargetHealth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private IP of the target
                     * @return IP Private IP of the target
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置Private IP of the target
                     * @param _iP Private IP of the target
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Port bound to the target
                     * @return Port Port bound to the target
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port bound to the target
                     * @param _port Port bound to the target
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Current health status. true: healthy; false: unhealthy.
                     * @return HealthStatus Current health status. true: healthy; false: unhealthy.
                     * 
                     */
                    bool GetHealthStatus() const;

                    /**
                     * 设置Current health status. true: healthy; false: unhealthy.
                     * @param _healthStatus Current health status. true: healthy; false: unhealthy.
                     * 
                     */
                    void SetHealthStatus(const bool& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取Instance ID of the target, such as ins-12345678
                     * @return TargetId Instance ID of the target, such as ins-12345678
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置Instance ID of the target, such as ins-12345678
                     * @param _targetId Instance ID of the target, such as ins-12345678
                     * 
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取Describes the detailed information of the current health status. for example: Alive, Dead, Unknown, Close. Alive status is healthy, Dead state is abnormal, Unknown status includes not started, checking, Unknown status, Close means health check disabled or listener status stop.
                     * @return HealthStatusDetail Describes the detailed information of the current health status. for example: Alive, Dead, Unknown, Close. Alive status is healthy, Dead state is abnormal, Unknown status includes not started, checking, Unknown status, Close means health check disabled or listener status stop.
                     * 
                     */
                    std::string GetHealthStatusDetail() const;

                    /**
                     * 设置Describes the detailed information of the current health status. for example: Alive, Dead, Unknown, Close. Alive status is healthy, Dead state is abnormal, Unknown status includes not started, checking, Unknown status, Close means health check disabled or listener status stop.
                     * @param _healthStatusDetail Describes the detailed information of the current health status. for example: Alive, Dead, Unknown, Close. Alive status is healthy, Dead state is abnormal, Unknown status includes not started, checking, Unknown status, Close means health check disabled or listener status stop.
                     * 
                     */
                    void SetHealthStatusDetail(const std::string& _healthStatusDetail);

                    /**
                     * 判断参数 HealthStatusDetail 是否已赋值
                     * @return HealthStatusDetail 是否已赋值
                     * 
                     */
                    bool HealthStatusDetailHasBeenSet() const;

                    /**
                     * 获取(**This parameter will be disused soon. Please use `HealthStatusDetail` instead.**) Details of the current health status. Values: `Alive` (healthy), `Dead` (abnormal), `Unknown` (Health check not started/checking/unknown status)
                     * @return HealthStatusDetial (**This parameter will be disused soon. Please use `HealthStatusDetail` instead.**) Details of the current health status. Values: `Alive` (healthy), `Dead` (abnormal), `Unknown` (Health check not started/checking/unknown status)
                     * @deprecated
                     */
                    std::string GetHealthStatusDetial() const;

                    /**
                     * 设置(**This parameter will be disused soon. Please use `HealthStatusDetail` instead.**) Details of the current health status. Values: `Alive` (healthy), `Dead` (abnormal), `Unknown` (Health check not started/checking/unknown status)
                     * @param _healthStatusDetial (**This parameter will be disused soon. Please use `HealthStatusDetail` instead.**) Details of the current health status. Values: `Alive` (healthy), `Dead` (abnormal), `Unknown` (Health check not started/checking/unknown status)
                     * @deprecated
                     */
                    void SetHealthStatusDetial(const std::string& _healthStatusDetial);

                    /**
                     * 判断参数 HealthStatusDetial 是否已赋值
                     * @return HealthStatusDetial 是否已赋值
                     * @deprecated
                     */
                    bool HealthStatusDetialHasBeenSet() const;

                    /**
                     * 获取Target group unique ID.
                     * @return TargetGroupId Target group unique ID.
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置Target group unique ID.
                     * @param _targetGroupId Target group unique ID.
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
                     * 获取Specifies the weight of the Target.
                     * @return Weight Specifies the weight of the Target.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Specifies the weight of the Target.
                     * @param _weight Specifies the weight of the Target.
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * Private IP of the target
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Port bound to the target
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Current health status. true: healthy; false: unhealthy.
                     */
                    bool m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * Instance ID of the target, such as ins-12345678
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * Describes the detailed information of the current health status. for example: Alive, Dead, Unknown, Close. Alive status is healthy, Dead state is abnormal, Unknown status includes not started, checking, Unknown status, Close means health check disabled or listener status stop.
                     */
                    std::string m_healthStatusDetail;
                    bool m_healthStatusDetailHasBeenSet;

                    /**
                     * (**This parameter will be disused soon. Please use `HealthStatusDetail` instead.**) Details of the current health status. Values: `Alive` (healthy), `Dead` (abnormal), `Unknown` (Health check not started/checking/unknown status)
                     */
                    std::string m_healthStatusDetial;
                    bool m_healthStatusDetialHasBeenSet;

                    /**
                     * Target group unique ID.
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * Specifies the weight of the Target.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETHEALTH_H_
