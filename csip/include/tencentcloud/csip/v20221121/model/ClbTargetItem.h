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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLBTARGETITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLBTARGETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CLB backend service
                */
                class ClbTargetItem : public AbstractModel
                {
                public:
                    ClbTargetItem();
                    ~ClbTargetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceID <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceID <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceName <p>Instance name.</p>
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
                     * 获取<p>Private IP address.</p>
                     * @return PrivateIpAddresses <p>Private IP address.</p>
                     * 
                     */
                    std::string GetPrivateIpAddresses() const;

                    /**
                     * 设置<p>Private IP address.</p>
                     * @param _privateIpAddresses <p>Private IP address.</p>
                     * 
                     */
                    void SetPrivateIpAddresses(const std::string& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取<p>ENI ID.</p>
                     * @return EniID <p>ENI ID.</p>
                     * 
                     */
                    std::string GetEniID() const;

                    /**
                     * 设置<p>ENI ID.</p>
                     * @param _eniID <p>ENI ID.</p>
                     * 
                     */
                    void SetEniID(const std::string& _eniID);

                    /**
                     * 判断参数 EniID 是否已赋值
                     * @return EniID 是否已赋值
                     * 
                     */
                    bool EniIDHasBeenSet() const;

                    /**
                     * 获取<p>Port</p>
                     * @return Port <p>Port</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>Port</p>
                     * @param _port <p>Port</p>
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Private IP address.</p>
                     */
                    std::string m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * <p>ENI ID.</p>
                     */
                    std::string m_eniID;
                    bool m_eniIDHasBeenSet;

                    /**
                     * <p>Port</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLBTARGETITEM_H_
