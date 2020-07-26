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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BACKEND_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BACKEND_H_

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
                * Details of a real server bound to a listener
                */
                class Backend : public AbstractModel
                {
                public:
                    Backend();
                    ~Backend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Real server type. Value range: CVM, ENI (coming soon)
                     * @return Type Real server type. Value range: CVM, ENI (coming soon)
                     */
                    std::string GetType() const;

                    /**
                     * 设置Real server type. Value range: CVM, ENI (coming soon)
                     * @param Type Real server type. Value range: CVM, ENI (coming soon)
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Unique ID of a real server, which can be obtained from the unInstanceId field in the return of the DescribeInstances API
                     * @return InstanceId Unique ID of a real server, which can be obtained from the unInstanceId field in the return of the DescribeInstances API
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Unique ID of a real server, which can be obtained from the unInstanceId field in the return of the DescribeInstances API
                     * @param InstanceId Unique ID of a real server, which can be obtained from the unInstanceId field in the return of the DescribeInstances API
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Listening port of a real server
                     * @return Port Listening port of a real server
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Listening port of a real server
                     * @param Port Listening port of a real server
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Forwarding weight of a real server. Value range: [0, 100]. Default value: 10.
                     * @return Weight Forwarding weight of a real server. Value range: [0, 100]. Default value: 10.
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Forwarding weight of a real server. Value range: [0, 100]. Default value: 10.
                     * @param Weight Forwarding weight of a real server. Value range: [0, 100]. Default value: 10.
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Public IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicIpAddresses Public IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置Public IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PublicIpAddresses Public IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取Private IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivateIpAddresses Private IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置Private IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PrivateIpAddresses Private IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取Real server instance names
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Real server instance names
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Real server instance names
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceName Real server instance names
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Bound time of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegisteredTime Bound time of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRegisteredTime() const;

                    /**
                     * 设置Bound time of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RegisteredTime Bound time of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRegisteredTime(const std::string& _registeredTime);

                    /**
                     * 判断参数 RegisteredTime 是否已赋值
                     * @return RegisteredTime 是否已赋值
                     */
                    bool RegisteredTimeHasBeenSet() const;

                    /**
                     * 获取Unique ENI ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EniId Unique ENI ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEniId() const;

                    /**
                     * 设置Unique ENI ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EniId Unique ENI ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEniId(const std::string& _eniId);

                    /**
                     * 判断参数 EniId 是否已赋值
                     * @return EniId 是否已赋值
                     */
                    bool EniIdHasBeenSet() const;

                private:

                    /**
                     * Real server type. Value range: CVM, ENI (coming soon)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Unique ID of a real server, which can be obtained from the unInstanceId field in the return of the DescribeInstances API
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Listening port of a real server
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Forwarding weight of a real server. Value range: [0, 100]. Default value: 10.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Public IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * Private IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * Real server instance names
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Bound time of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_registeredTime;
                    bool m_registeredTimeHasBeenSet;

                    /**
                     * Unique ENI ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eniId;
                    bool m_eniIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BACKEND_H_
