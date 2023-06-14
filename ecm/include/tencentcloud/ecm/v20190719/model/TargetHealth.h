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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_TARGETHEALTH_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_TARGETHEALTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Health check status of the backend
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IP Private IP of the target
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置Private IP of the target
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _iP Private IP of the target
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Port Port bound to the target
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port bound to the target
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _port Port bound to the target
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Current health status. Valid values: true: healthy; false: unhealthy (e.g., check not started, checking, or exceptional status). CLB instance will route traffic to only healthy real servers whose weights are greater than 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HealthStatus Current health status. Valid values: true: healthy; false: unhealthy (e.g., check not started, checking, or exceptional status). CLB instance will route traffic to only healthy real servers whose weights are greater than 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetHealthStatus() const;

                    /**
                     * 设置Current health status. Valid values: true: healthy; false: unhealthy (e.g., check not started, checking, or exceptional status). CLB instance will route traffic to only healthy real servers whose weights are greater than 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _healthStatus Current health status. Valid values: true: healthy; false: unhealthy (e.g., check not started, checking, or exceptional status). CLB instance will route traffic to only healthy real servers whose weights are greater than 0.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance ID of the target
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TargetId Instance ID of the target
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置Instance ID of the target
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _targetId Instance ID of the target
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Detailed information of the current health status. Valid values: Alive: healthy; Dead: exceptional; Unknown: check not started/checking/unknown status; Close: health check not configured.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HealthStatusDetail Detailed information of the current health status. Valid values: Alive: healthy; Dead: exceptional; Unknown: check not started/checking/unknown status; Close: health check not configured.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHealthStatusDetail() const;

                    /**
                     * 设置Detailed information of the current health status. Valid values: Alive: healthy; Dead: exceptional; Unknown: check not started/checking/unknown status; Close: health check not configured.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _healthStatusDetail Detailed information of the current health status. Valid values: Alive: healthy; Dead: exceptional; Unknown: check not started/checking/unknown status; Close: health check not configured.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHealthStatusDetail(const std::string& _healthStatusDetail);

                    /**
                     * 判断参数 HealthStatusDetail 是否已赋值
                     * @return HealthStatusDetail 是否已赋值
                     * 
                     */
                    bool HealthStatusDetailHasBeenSet() const;

                private:

                    /**
                     * Private IP of the target
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Port bound to the target
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Current health status. Valid values: true: healthy; false: unhealthy (e.g., check not started, checking, or exceptional status). CLB instance will route traffic to only healthy real servers whose weights are greater than 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * Instance ID of the target
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * Detailed information of the current health status. Valid values: Alive: healthy; Dead: exceptional; Unknown: check not started/checking/unknown status; Close: health check not configured.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_healthStatusDetail;
                    bool m_healthStatusDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_TARGETHEALTH_H_
