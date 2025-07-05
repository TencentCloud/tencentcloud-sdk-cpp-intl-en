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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPBACKEND_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPBACKEND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * Real server bound to a target group
                */
                class TargetGroupBackend : public AbstractModel
                {
                public:
                    TargetGroupBackend();
                    ~TargetGroupBackend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Backend service type. Valid values: CVM, ENI (to be supported soon)
                     * @return Type Backend service type. Valid values: CVM, ENI (to be supported soon)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Backend service type. Valid values: CVM, ENI (to be supported soon)
                     * @param _type Backend service type. Valid values: CVM, ENI (to be supported soon)
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Unique backend service ID
                     * @return InstanceId Unique backend service ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Unique backend service ID
                     * @param _instanceId Unique backend service ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Listening port of backend service
                     * @return Port Listening port of backend service
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Listening port of backend service
                     * @param _port Listening port of backend service
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
                     * 获取Forwarding weight of backend service. Value range: [0, 100]. Default value: 10.
                     * @return Weight Forwarding weight of backend service. Value range: [0, 100]. Default value: 10.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Forwarding weight of backend service. Value range: [0, 100]. Default value: 10.
                     * @param _weight Forwarding weight of backend service. Value range: [0, 100]. Default value: 10.
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
                     * 获取Public network IP of the real server

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PublicIpAddresses Public network IP of the real server

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置Public network IP of the real server

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _publicIpAddresses Public network IP of the real server

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取Private network IP of backend serviceNote: This field may return null, indicating that no valid value can be obtained.
                     * @return PrivateIpAddresses Private network IP of backend serviceNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置Private network IP of backend serviceNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _privateIpAddresses Private network IP of backend serviceNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取Instance name of the real server

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceName Instance name of the real server

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name of the real server

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceName Instance name of the real server

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Real server binding time

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RegisteredTime Real server binding time

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegisteredTime() const;

                    /**
                     * 设置Real server binding time

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _registeredTime Real server binding time

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegisteredTime(const std::string& _registeredTime);

                    /**
                     * 判断参数 RegisteredTime 是否已赋值
                     * @return RegisteredTime 是否已赋值
                     * 
                     */
                    bool RegisteredTimeHasBeenSet() const;

                    /**
                     * 获取Unique ID of the ENI

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EniId Unique ID of the ENI

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEniId() const;

                    /**
                     * 设置Unique ID of the ENI

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _eniId Unique ID of the ENI

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEniId(const std::string& _eniId);

                    /**
                     * 判断参数 EniId 是否已赋值
                     * @return EniId 是否已赋值
                     * 
                     */
                    bool EniIdHasBeenSet() const;

                    /**
                     * 获取Available zone ID of backend serviceNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ZoneId Available zone ID of backend serviceNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置Available zone ID of backend serviceNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _zoneId Available zone ID of backend serviceNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * Target group ID
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * Backend service type. Valid values: CVM, ENI (to be supported soon)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Unique backend service ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Listening port of backend service
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Forwarding weight of backend service. Value range: [0, 100]. Default value: 10.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Public network IP of the real server

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * Private network IP of backend serviceNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * Instance name of the real server

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Real server binding time

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_registeredTime;
                    bool m_registeredTimeHasBeenSet;

                    /**
                     * Unique ID of the ENI

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eniId;
                    bool m_eniIdHasBeenSet;

                    /**
                     * Available zone ID of backend serviceNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPBACKEND_H_
