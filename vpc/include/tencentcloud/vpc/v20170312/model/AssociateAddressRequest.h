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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AssociateAddress request structure.
                */
                class AssociateAddressRequest : public AbstractModel
                {
                public:
                    AssociateAddressRequest();
                    ~AssociateAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the EIP, such as `eip-11112222`.
                     * @return AddressId The unique ID of the EIP, such as `eip-11112222`.
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置The unique ID of the EIP, such as `eip-11112222`.
                     * @param AddressId The unique ID of the EIP, such as `eip-11112222`.
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取The ID of the instance to be bound, such as `ins-11112222`, `lb-11112222`. You can query the instance ID by logging into the [Console](https://console.cloud.tencent.com/cvm). You can also obtain the parameter value from the `InstanceId` field in the returned result of [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API.
                     * @return InstanceId The ID of the instance to be bound, such as `ins-11112222`, `lb-11112222`. You can query the instance ID by logging into the [Console](https://console.cloud.tencent.com/cvm). You can also obtain the parameter value from the `InstanceId` field in the returned result of [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ID of the instance to be bound, such as `ins-11112222`, `lb-11112222`. You can query the instance ID by logging into the [Console](https://console.cloud.tencent.com/cvm). You can also obtain the parameter value from the `InstanceId` field in the returned result of [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API.
                     * @param InstanceId The ID of the instance to be bound, such as `ins-11112222`, `lb-11112222`. You can query the instance ID by logging into the [Console](https://console.cloud.tencent.com/cvm). You can also obtain the parameter value from the `InstanceId` field in the returned result of [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The ID of the ENI to be bonud, such as `eni-11112222`. `NetworkInterfaceId` and `InstanceId` cannot be specified at the same time. You can query the ENI ID by logging into the [Console](https://console.cloud.tencent.com/vpc/eni). You can also obtain the parameter value from the `networkInterfaceId` field in the returned result of [DescribeNetworkInterfaces](https://intl.cloud.tencent.com/document/api/215/15817?from_cn_redirect=1) API.
                     * @return NetworkInterfaceId The ID of the ENI to be bonud, such as `eni-11112222`. `NetworkInterfaceId` and `InstanceId` cannot be specified at the same time. You can query the ENI ID by logging into the [Console](https://console.cloud.tencent.com/vpc/eni). You can also obtain the parameter value from the `networkInterfaceId` field in the returned result of [DescribeNetworkInterfaces](https://intl.cloud.tencent.com/document/api/215/15817?from_cn_redirect=1) API.
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置The ID of the ENI to be bonud, such as `eni-11112222`. `NetworkInterfaceId` and `InstanceId` cannot be specified at the same time. You can query the ENI ID by logging into the [Console](https://console.cloud.tencent.com/vpc/eni). You can also obtain the parameter value from the `networkInterfaceId` field in the returned result of [DescribeNetworkInterfaces](https://intl.cloud.tencent.com/document/api/215/15817?from_cn_redirect=1) API.
                     * @param NetworkInterfaceId The ID of the ENI to be bonud, such as `eni-11112222`. `NetworkInterfaceId` and `InstanceId` cannot be specified at the same time. You can query the ENI ID by logging into the [Console](https://console.cloud.tencent.com/vpc/eni). You can also obtain the parameter value from the `networkInterfaceId` field in the returned result of [DescribeNetworkInterfaces](https://intl.cloud.tencent.com/document/api/215/15817?from_cn_redirect=1) API.
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取The private IP to be bound. If you specify `NetworkInterfaceId`, then you must also specify `PrivateIpAddress`, indicating the EIP is bound to the specified private IP of the specified ENI. At the same time, you must ensure the specified `PrivateIpAddress` is a private IP on the `NetworkInterfaceId`. You can query the private IP of the specified ENI by logging into the [Console](https://console.cloud.tencent.com/vpc/eni). You can also obtain the parameter value from the `privateIpAddress` field in the returned result of [DescribeNetworkInterfaces](https://intl.cloud.tencent.com/document/api/215/15817?from_cn_redirect=1) API.
                     * @return PrivateIpAddress The private IP to be bound. If you specify `NetworkInterfaceId`, then you must also specify `PrivateIpAddress`, indicating the EIP is bound to the specified private IP of the specified ENI. At the same time, you must ensure the specified `PrivateIpAddress` is a private IP on the `NetworkInterfaceId`. You can query the private IP of the specified ENI by logging into the [Console](https://console.cloud.tencent.com/vpc/eni). You can also obtain the parameter value from the `privateIpAddress` field in the returned result of [DescribeNetworkInterfaces](https://intl.cloud.tencent.com/document/api/215/15817?from_cn_redirect=1) API.
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置The private IP to be bound. If you specify `NetworkInterfaceId`, then you must also specify `PrivateIpAddress`, indicating the EIP is bound to the specified private IP of the specified ENI. At the same time, you must ensure the specified `PrivateIpAddress` is a private IP on the `NetworkInterfaceId`. You can query the private IP of the specified ENI by logging into the [Console](https://console.cloud.tencent.com/vpc/eni). You can also obtain the parameter value from the `privateIpAddress` field in the returned result of [DescribeNetworkInterfaces](https://intl.cloud.tencent.com/document/api/215/15817?from_cn_redirect=1) API.
                     * @param PrivateIpAddress The private IP to be bound. If you specify `NetworkInterfaceId`, then you must also specify `PrivateIpAddress`, indicating the EIP is bound to the specified private IP of the specified ENI. At the same time, you must ensure the specified `PrivateIpAddress` is a private IP on the `NetworkInterfaceId`. You can query the private IP of the specified ENI by logging into the [Console](https://console.cloud.tencent.com/vpc/eni). You can also obtain the parameter value from the `privateIpAddress` field in the returned result of [DescribeNetworkInterfaces](https://intl.cloud.tencent.com/document/api/215/15817?from_cn_redirect=1) API.
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取Specify whether to configure direct access when binding EIPs. For details, see [EIP Direct Access](https://intl.cloud.tencent.com/document/product/213/12540). Valid values: `True` and `False` (default). This parameter can be set to `True` when binding EIPs to a CVM instance or EKS cluster. It is in a beta test. To try it out, please [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=6&level2_id=163&source=0&data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20CLB&level3_id=1071&queue=96&scene_code=34639&step=2).
                     * @return EipDirectConnection Specify whether to configure direct access when binding EIPs. For details, see [EIP Direct Access](https://intl.cloud.tencent.com/document/product/213/12540). Valid values: `True` and `False` (default). This parameter can be set to `True` when binding EIPs to a CVM instance or EKS cluster. It is in a beta test. To try it out, please [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=6&level2_id=163&source=0&data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20CLB&level3_id=1071&queue=96&scene_code=34639&step=2).
                     */
                    bool GetEipDirectConnection() const;

                    /**
                     * 设置Specify whether to configure direct access when binding EIPs. For details, see [EIP Direct Access](https://intl.cloud.tencent.com/document/product/213/12540). Valid values: `True` and `False` (default). This parameter can be set to `True` when binding EIPs to a CVM instance or EKS cluster. It is in a beta test. To try it out, please [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=6&level2_id=163&source=0&data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20CLB&level3_id=1071&queue=96&scene_code=34639&step=2).
                     * @param EipDirectConnection Specify whether to configure direct access when binding EIPs. For details, see [EIP Direct Access](https://intl.cloud.tencent.com/document/product/213/12540). Valid values: `True` and `False` (default). This parameter can be set to `True` when binding EIPs to a CVM instance or EKS cluster. It is in a beta test. To try it out, please [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=6&level2_id=163&source=0&data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20CLB&level3_id=1071&queue=96&scene_code=34639&step=2).
                     */
                    void SetEipDirectConnection(const bool& _eipDirectConnection);

                    /**
                     * 判断参数 EipDirectConnection 是否已赋值
                     * @return EipDirectConnection 是否已赋值
                     */
                    bool EipDirectConnectionHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the EIP, such as `eip-11112222`.
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * The ID of the instance to be bound, such as `ins-11112222`, `lb-11112222`. You can query the instance ID by logging into the [Console](https://console.cloud.tencent.com/cvm). You can also obtain the parameter value from the `InstanceId` field in the returned result of [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The ID of the ENI to be bonud, such as `eni-11112222`. `NetworkInterfaceId` and `InstanceId` cannot be specified at the same time. You can query the ENI ID by logging into the [Console](https://console.cloud.tencent.com/vpc/eni). You can also obtain the parameter value from the `networkInterfaceId` field in the returned result of [DescribeNetworkInterfaces](https://intl.cloud.tencent.com/document/api/215/15817?from_cn_redirect=1) API.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * The private IP to be bound. If you specify `NetworkInterfaceId`, then you must also specify `PrivateIpAddress`, indicating the EIP is bound to the specified private IP of the specified ENI. At the same time, you must ensure the specified `PrivateIpAddress` is a private IP on the `NetworkInterfaceId`. You can query the private IP of the specified ENI by logging into the [Console](https://console.cloud.tencent.com/vpc/eni). You can also obtain the parameter value from the `privateIpAddress` field in the returned result of [DescribeNetworkInterfaces](https://intl.cloud.tencent.com/document/api/215/15817?from_cn_redirect=1) API.
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * Specify whether to configure direct access when binding EIPs. For details, see [EIP Direct Access](https://intl.cloud.tencent.com/document/product/213/12540). Valid values: `True` and `False` (default). This parameter can be set to `True` when binding EIPs to a CVM instance or EKS cluster. It is in a beta test. To try it out, please [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=6&level2_id=163&source=0&data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20CLB&level3_id=1071&queue=96&scene_code=34639&step=2).
                     */
                    bool m_eipDirectConnection;
                    bool m_eipDirectConnectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEADDRESSREQUEST_H_
