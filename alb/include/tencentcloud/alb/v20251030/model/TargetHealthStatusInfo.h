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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_TARGETHEALTHSTATUSINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_TARGETHEALTHSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Service health status information
                */
                class TargetHealthStatusInfo : public AbstractModel
                {
                public:
                    TargetHealthStatusInfo();
                    ~TargetHealthStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backend service health status. If DescribeListenerHealthStatus returns only unhealthy backends, this value is UnHealthy.
                     * @return Status Backend service health status. If DescribeListenerHealthStatus returns only unhealthy backends, this value is UnHealthy.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Backend service health status. If DescribeListenerHealthStatus returns only unhealthy backends, this value is UnHealthy.
                     * @param _status Backend service health status. If DescribeListenerHealthStatus returns only unhealthy backends, this value is UnHealthy.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Backend service instance ID. For a CVM instance, the format is "ins-" followed by 8 alphanumeric characters.
                     * @return TargetId Backend service instance ID. For a CVM instance, the format is "ins-" followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置Backend service instance ID. For a CVM instance, the format is "ins-" followed by 8 alphanumeric characters.
                     * @param _targetId Backend service instance ID. For a CVM instance, the format is "ins-" followed by 8 alphanumeric characters.
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
                     * 获取Backend target service IP.
                     * @return TargetIp Backend target service IP.
                     * 
                     */
                    std::string GetTargetIp() const;

                    /**
                     * 设置Backend target service IP.
                     * @param _targetIp Backend target service IP.
                     * 
                     */
                    void SetTargetIp(const std::string& _targetIp);

                    /**
                     * 判断参数 TargetIp 是否已赋值
                     * @return TargetIp 是否已赋值
                     * 
                     */
                    bool TargetIpHasBeenSet() const;

                    /**
                     * 获取Backend server port.
                     * @return TargetPort Backend server port.
                     * 
                     */
                    uint64_t GetTargetPort() const;

                    /**
                     * 设置Backend server port.
                     * @param _targetPort Backend server port.
                     * 
                     */
                    void SetTargetPort(const uint64_t& _targetPort);

                    /**
                     * 判断参数 TargetPort 是否已赋值
                     * @return TargetPort 是否已赋值
                     * 
                     */
                    bool TargetPortHasBeenSet() const;

                private:

                    /**
                     * Backend service health status. If DescribeListenerHealthStatus returns only unhealthy backends, this value is UnHealthy.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Backend service instance ID. For a CVM instance, the format is "ins-" followed by 8 alphanumeric characters.
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * Backend target service IP.
                     */
                    std::string m_targetIp;
                    bool m_targetIpHasBeenSet;

                    /**
                     * Backend server port.
                     */
                    uint64_t m_targetPort;
                    bool m_targetPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_TARGETHEALTHSTATUSINFO_H_
