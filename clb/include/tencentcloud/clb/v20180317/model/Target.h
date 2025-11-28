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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGET_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGET_H_

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
                * Redirect target, i.e., the real server bound to a CLB
                */
                class Target : public AbstractModel
                {
                public:
                    Target();
                    ~Target() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the listening port of the backend service.
Note: this parameter must be specified when binding to CVM (cloud virtual machine) or ENI (elastic network interface).
                     * @return Port Specifies the listening port of the backend service.
Note: this parameter must be specified when binding to CVM (cloud virtual machine) or ENI (elastic network interface).
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Specifies the listening port of the backend service.
Note: this parameter must be specified when binding to CVM (cloud virtual machine) or ENI (elastic network interface).
                     * @param _port Specifies the listening port of the backend service.
Note: this parameter must be specified when binding to CVM (cloud virtual machine) or ENI (elastic network interface).
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
                     * 获取Specifies the backend service type. valid values: CVM (cloud virtual machine), ENI (elastic network interface). as an input parameter, this parameter does not take effect currently.
                     * @return Type Specifies the backend service type. valid values: CVM (cloud virtual machine), ENI (elastic network interface). as an input parameter, this parameter does not take effect currently.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Specifies the backend service type. valid values: CVM (cloud virtual machine), ENI (elastic network interface). as an input parameter, this parameter does not take effect currently.
                     * @param _type Specifies the backend service type. valid values: CVM (cloud virtual machine), ENI (elastic network interface). as an input parameter, this parameter does not take effect currently.
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
                     * 获取This parameter must be passed in when binding to CVM. it represents the unique ID of the CVM and can be obtained from the InstanceId field in the response of the DescribeInstances api. indicates binding the primary IPv4 address of the primary network interface. the InstanceId cannot be specified in the following scenarios: binding to non-CVM resources, binding to auxiliary network interface ips on CVM, binding to CVM through cross-domain 2.0, and binding to IPv6 addresses of CVM.
Note: you can only input one of the InstanceId parameter or the EniIp parameter.
                     * @return InstanceId This parameter must be passed in when binding to CVM. it represents the unique ID of the CVM and can be obtained from the InstanceId field in the response of the DescribeInstances api. indicates binding the primary IPv4 address of the primary network interface. the InstanceId cannot be specified in the following scenarios: binding to non-CVM resources, binding to auxiliary network interface ips on CVM, binding to CVM through cross-domain 2.0, and binding to IPv6 addresses of CVM.
Note: you can only input one of the InstanceId parameter or the EniIp parameter.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置This parameter must be passed in when binding to CVM. it represents the unique ID of the CVM and can be obtained from the InstanceId field in the response of the DescribeInstances api. indicates binding the primary IPv4 address of the primary network interface. the InstanceId cannot be specified in the following scenarios: binding to non-CVM resources, binding to auxiliary network interface ips on CVM, binding to CVM through cross-domain 2.0, and binding to IPv6 addresses of CVM.
Note: you can only input one of the InstanceId parameter or the EniIp parameter.
                     * @param _instanceId This parameter must be passed in when binding to CVM. it represents the unique ID of the CVM and can be obtained from the InstanceId field in the response of the DescribeInstances api. indicates binding the primary IPv4 address of the primary network interface. the InstanceId cannot be specified in the following scenarios: binding to non-CVM resources, binding to auxiliary network interface ips on CVM, binding to CVM through cross-domain 2.0, and binding to IPv6 addresses of CVM.
Note: you can only input one of the InstanceId parameter or the EniIp parameter.
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
                     * 获取The new forwarding weight of the real server. Value range: [0, 100]. Default: 10. This parameter takes priority over `Weight` in [`RsWeightRule`](https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). If it’s left empty, the value of `Weight` in `RsWeightRule` will be used.
                     * @return Weight The new forwarding weight of the real server. Value range: [0, 100]. Default: 10. This parameter takes priority over `Weight` in [`RsWeightRule`](https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). If it’s left empty, the value of `Weight` in `RsWeightRule` will be used.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置The new forwarding weight of the real server. Value range: [0, 100]. Default: 10. This parameter takes priority over `Weight` in [`RsWeightRule`](https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). If it’s left empty, the value of `Weight` in `RsWeightRule` will be used.
                     * @param _weight The new forwarding weight of the real server. Value range: [0, 100]. Default: 10. This parameter takes priority over `Weight` in [`RsWeightRule`](https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). If it’s left empty, the value of `Weight` in `RsWeightRule` will be used.
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取This parameter must be passed in for IP binding. it supports eni ips and other private IP addresses. if it is an eni, it must first be bound to a CVM before binding to a cloud load balancer instance.
Note: only one of the InstanceId parameter and EniIp parameter can be passed. if binding a dual-stack IPV6 instance, this parameter must be passed. if it is a cross-region binding, the parameter must be passed and the InstanceId parameter is not supported.
                     * @return EniIp This parameter must be passed in for IP binding. it supports eni ips and other private IP addresses. if it is an eni, it must first be bound to a CVM before binding to a cloud load balancer instance.
Note: only one of the InstanceId parameter and EniIp parameter can be passed. if binding a dual-stack IPV6 instance, this parameter must be passed. if it is a cross-region binding, the parameter must be passed and the InstanceId parameter is not supported.
                     * 
                     */
                    std::string GetEniIp() const;

                    /**
                     * 设置This parameter must be passed in for IP binding. it supports eni ips and other private IP addresses. if it is an eni, it must first be bound to a CVM before binding to a cloud load balancer instance.
Note: only one of the InstanceId parameter and EniIp parameter can be passed. if binding a dual-stack IPV6 instance, this parameter must be passed. if it is a cross-region binding, the parameter must be passed and the InstanceId parameter is not supported.
                     * @param _eniIp This parameter must be passed in for IP binding. it supports eni ips and other private IP addresses. if it is an eni, it must first be bound to a CVM before binding to a cloud load balancer instance.
Note: only one of the InstanceId parameter and EniIp parameter can be passed. if binding a dual-stack IPV6 instance, this parameter must be passed. if it is a cross-region binding, the parameter must be passed and the InstanceId parameter is not supported.
                     * 
                     */
                    void SetEniIp(const std::string& _eniIp);

                    /**
                     * 判断参数 EniIp 是否已赋值
                     * @return EniIp 是否已赋值
                     * 
                     */
                    bool EniIpHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Tag Tag.
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Tag.
                     * @param _tag Tag.
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * Specifies the listening port of the backend service.
Note: this parameter must be specified when binding to CVM (cloud virtual machine) or ENI (elastic network interface).
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Specifies the backend service type. valid values: CVM (cloud virtual machine), ENI (elastic network interface). as an input parameter, this parameter does not take effect currently.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * This parameter must be passed in when binding to CVM. it represents the unique ID of the CVM and can be obtained from the InstanceId field in the response of the DescribeInstances api. indicates binding the primary IPv4 address of the primary network interface. the InstanceId cannot be specified in the following scenarios: binding to non-CVM resources, binding to auxiliary network interface ips on CVM, binding to CVM through cross-domain 2.0, and binding to IPv6 addresses of CVM.
Note: you can only input one of the InstanceId parameter or the EniIp parameter.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The new forwarding weight of the real server. Value range: [0, 100]. Default: 10. This parameter takes priority over `Weight` in [`RsWeightRule`](https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). If it’s left empty, the value of `Weight` in `RsWeightRule` will be used.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * This parameter must be passed in for IP binding. it supports eni ips and other private IP addresses. if it is an eni, it must first be bound to a CVM before binding to a cloud load balancer instance.
Note: only one of the InstanceId parameter and EniIp parameter can be passed. if binding a dual-stack IPV6 instance, this parameter must be passed. if it is a cross-region binding, the parameter must be passed and the InstanceId parameter is not supported.
                     */
                    std::string m_eniIp;
                    bool m_eniIpHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGET_H_
