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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ADDL3CONNREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ADDL3CONNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * AddL3Conn request structure.
                */
                class AddL3ConnRequest : public AbstractModel
                {
                public:
                    AddL3ConnRequest();
                    ~AddL3ConnRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Set the interconnect CIDR1. Supported ranges: 10.0.0.0 - 10.255.255.255, 172.16.0.0 - 172.31.255.255, 192.168.0.0 - 192.168.255.255.
                     * @return Cidr1 Set the interconnect CIDR1. Supported ranges: 10.0.0.0 - 10.255.255.255, 172.16.0.0 - 172.31.255.255, 192.168.0.0 - 192.168.255.255.
                     * 
                     */
                    std::string GetCidr1() const;

                    /**
                     * 设置Set the interconnect CIDR1. Supported ranges: 10.0.0.0 - 10.255.255.255, 172.16.0.0 - 172.31.255.255, 192.168.0.0 - 192.168.255.255.
                     * @param _cidr1 Set the interconnect CIDR1. Supported ranges: 10.0.0.0 - 10.255.255.255, 172.16.0.0 - 172.31.255.255, 192.168.0.0 - 192.168.255.255.
                     * 
                     */
                    void SetCidr1(const std::string& _cidr1);

                    /**
                     * 判断参数 Cidr1 是否已赋值
                     * @return Cidr1 是否已赋值
                     * 
                     */
                    bool Cidr1HasBeenSet() const;

                    /**
                     * 获取Set the interconnection CIDR2. Supported ranges: 10.0.0.0 - 10.255.255.255, 172.16.0.0 - 172.31.255.255, 192.168.0.0 - 192.168.255.255.
                     * @return Cidr2 Set the interconnection CIDR2. Supported ranges: 10.0.0.0 - 10.255.255.255, 172.16.0.0 - 172.31.255.255, 192.168.0.0 - 192.168.255.255.
                     * 
                     */
                    std::string GetCidr2() const;

                    /**
                     * 设置Set the interconnection CIDR2. Supported ranges: 10.0.0.0 - 10.255.255.255, 172.16.0.0 - 172.31.255.255, 192.168.0.0 - 192.168.255.255.
                     * @param _cidr2 Set the interconnection CIDR2. Supported ranges: 10.0.0.0 - 10.255.255.255, 172.16.0.0 - 172.31.255.255, 192.168.0.0 - 192.168.255.255.
                     * 
                     */
                    void SetCidr2(const std::string& _cidr2);

                    /**
                     * 判断参数 Cidr2 是否已赋值
                     * @return Cidr2 是否已赋值
                     * 
                     */
                    bool Cidr2HasBeenSet() const;

                    /**
                     * 获取Device ID corresponding to CIDR1
                     * @return DeviceId1 Device ID corresponding to CIDR1
                     * 
                     */
                    std::string GetDeviceId1() const;

                    /**
                     * 设置Device ID corresponding to CIDR1
                     * @param _deviceId1 Device ID corresponding to CIDR1
                     * 
                     */
                    void SetDeviceId1(const std::string& _deviceId1);

                    /**
                     * 判断参数 DeviceId1 是否已赋值
                     * @return DeviceId1 是否已赋值
                     * 
                     */
                    bool DeviceId1HasBeenSet() const;

                    /**
                     * 获取Device ID corresponding to CIDR2
                     * @return DeviceId2 Device ID corresponding to CIDR2
                     * 
                     */
                    std::string GetDeviceId2() const;

                    /**
                     * 设置Device ID corresponding to CIDR2
                     * @param _deviceId2 Device ID corresponding to CIDR2
                     * 
                     */
                    void SetDeviceId2(const std::string& _deviceId2);

                    /**
                     * 判断参数 DeviceId2 是否已赋值
                     * @return DeviceId2 是否已赋值
                     * 
                     */
                    bool DeviceId2HasBeenSet() const;

                    /**
                     * 获取Rule description
                     * @return Description Rule description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description
                     * @param _description Rule description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Set the interconnect CIDR1. Supported ranges: 10.0.0.0 - 10.255.255.255, 172.16.0.0 - 172.31.255.255, 192.168.0.0 - 192.168.255.255.
                     */
                    std::string m_cidr1;
                    bool m_cidr1HasBeenSet;

                    /**
                     * Set the interconnection CIDR2. Supported ranges: 10.0.0.0 - 10.255.255.255, 172.16.0.0 - 172.31.255.255, 192.168.0.0 - 192.168.255.255.
                     */
                    std::string m_cidr2;
                    bool m_cidr2HasBeenSet;

                    /**
                     * Device ID corresponding to CIDR1
                     */
                    std::string m_deviceId1;
                    bool m_deviceId1HasBeenSet;

                    /**
                     * Device ID corresponding to CIDR2
                     */
                    std::string m_deviceId2;
                    bool m_deviceId2HasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ADDL3CONNREQUEST_H_
