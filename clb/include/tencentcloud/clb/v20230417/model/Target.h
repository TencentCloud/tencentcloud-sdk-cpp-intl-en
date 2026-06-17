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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_TARGET_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_TARGET_H_

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
        namespace V20230417
        {
            namespace Model
            {
                /**
                * Forwarding target, namely, a real server bound to the CLB instance
                */
                class Target : public AbstractModel
                {
                public:
                    Target();
                    ~Target() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listening port of the backend service.
Note: This parameter must be specified when binding to CVM (Cloud Virtual Machine) or ENI (Elastic Network Interface).
                     * @return Port Listening port of the backend service.
Note: This parameter must be specified when binding to CVM (Cloud Virtual Machine) or ENI (Elastic Network Interface).
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Listening port of the backend service.
Note: This parameter must be specified when binding to CVM (Cloud Virtual Machine) or ENI (Elastic Network Interface).
                     * @param _port Listening port of the backend service.
Note: This parameter must be specified when binding to CVM (Cloud Virtual Machine) or ENI (Elastic Network Interface).
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
                     * 获取Backend service type, optional: CVM (Cloud Virtual Machine), ENI (Elastic Network Interface). As an input parameter, this parameter does not take effect.
                     * @return Type Backend service type, optional: CVM (Cloud Virtual Machine), ENI (Elastic Network Interface). As an input parameter, this parameter does not take effect.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Backend service type, optional: CVM (Cloud Virtual Machine), ENI (Elastic Network Interface). As an input parameter, this parameter does not take effect.
                     * @param _type Backend service type, optional: CVM (Cloud Virtual Machine), ENI (Elastic Network Interface). As an input parameter, this parameter does not take effect.
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
                     * 获取This parameter must be passed in when binding to CVM. It represents the unique ID of the CVM and can be obtained from the InstanceId field in the response of the DescribeInstances API. It indicates binding to the primary IPv4 address of the primary network interface. The following scenarios do not support specifying InstanceId: binding to non-CVM resources, binding to auxiliary network interface IPs on CVM, binding to CVM through cross-region 2.0, and binding to IPv6 addresses of CVM.
Note: You can only input one of the InstanceId or EniIp parameter.
                     * @return InstanceId This parameter must be passed in when binding to CVM. It represents the unique ID of the CVM and can be obtained from the InstanceId field in the response of the DescribeInstances API. It indicates binding to the primary IPv4 address of the primary network interface. The following scenarios do not support specifying InstanceId: binding to non-CVM resources, binding to auxiliary network interface IPs on CVM, binding to CVM through cross-region 2.0, and binding to IPv6 addresses of CVM.
Note: You can only input one of the InstanceId or EniIp parameter.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置This parameter must be passed in when binding to CVM. It represents the unique ID of the CVM and can be obtained from the InstanceId field in the response of the DescribeInstances API. It indicates binding to the primary IPv4 address of the primary network interface. The following scenarios do not support specifying InstanceId: binding to non-CVM resources, binding to auxiliary network interface IPs on CVM, binding to CVM through cross-region 2.0, and binding to IPv6 addresses of CVM.
Note: You can only input one of the InstanceId or EniIp parameter.
                     * @param _instanceId This parameter must be passed in when binding to CVM. It represents the unique ID of the CVM and can be obtained from the InstanceId field in the response of the DescribeInstances API. It indicates binding to the primary IPv4 address of the primary network interface. The following scenarios do not support specifying InstanceId: binding to non-CVM resources, binding to auxiliary network interface IPs on CVM, binding to CVM through cross-region 2.0, and binding to IPv6 addresses of CVM.
Note: You can only input one of the InstanceId or EniIp parameter.
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
                     * 获取The forwarding weight of the backend service after modification, with a value range of [0, 100], defaults to 10. This parameter has a higher priority than the Weight parameter in [RsWeightRule](https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). The final weight value is based on this Weight parameter. Only when this Weight parameter is empty, the Weight parameter in RsWeightRule will be used.
                     * @return Weight The forwarding weight of the backend service after modification, with a value range of [0, 100], defaults to 10. This parameter has a higher priority than the Weight parameter in [RsWeightRule](https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). The final weight value is based on this Weight parameter. Only when this Weight parameter is empty, the Weight parameter in RsWeightRule will be used.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置The forwarding weight of the backend service after modification, with a value range of [0, 100], defaults to 10. This parameter has a higher priority than the Weight parameter in [RsWeightRule](https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). The final weight value is based on this Weight parameter. Only when this Weight parameter is empty, the Weight parameter in RsWeightRule will be used.
                     * @param _weight The forwarding weight of the backend service after modification, with a value range of [0, 100], defaults to 10. This parameter has a higher priority than the Weight parameter in [RsWeightRule](https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). The final weight value is based on this Weight parameter. Only when this Weight parameter is empty, the Weight parameter in RsWeightRule will be used.
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
                     * 获取This parameter must be passed in for IP binding. It supports ENI IPs and other private IP addresses. If it is an ENI, it must first bind to a CVM before binding to a CLB instance.
Note: You can only input one of the InstanceId or EniIp parameter. If it is binding a dual-stack IPV6 instance, you must pass this parameter. If it is cross-region binding, you must pass the parameter, and the InstanceId parameter is not supported.
                     * @return EniIp This parameter must be passed in for IP binding. It supports ENI IPs and other private IP addresses. If it is an ENI, it must first bind to a CVM before binding to a CLB instance.
Note: You can only input one of the InstanceId or EniIp parameter. If it is binding a dual-stack IPV6 instance, you must pass this parameter. If it is cross-region binding, you must pass the parameter, and the InstanceId parameter is not supported.
                     * 
                     */
                    std::string GetEniIp() const;

                    /**
                     * 设置This parameter must be passed in for IP binding. It supports ENI IPs and other private IP addresses. If it is an ENI, it must first bind to a CVM before binding to a CLB instance.
Note: You can only input one of the InstanceId or EniIp parameter. If it is binding a dual-stack IPV6 instance, you must pass this parameter. If it is cross-region binding, you must pass the parameter, and the InstanceId parameter is not supported.
                     * @param _eniIp This parameter must be passed in for IP binding. It supports ENI IPs and other private IP addresses. If it is an ENI, it must first bind to a CVM before binding to a CLB instance.
Note: You can only input one of the InstanceId or EniIp parameter. If it is binding a dual-stack IPV6 instance, you must pass this parameter. If it is cross-region binding, you must pass the parameter, and the InstanceId parameter is not supported.
                     * 
                     */
                    void SetEniIp(const std::string& _eniIp);

                    /**
                     * 判断参数 EniIp 是否已赋值
                     * @return EniIp 是否已赋值
                     * 
                     */
                    bool EniIpHasBeenSet() const;

                private:

                    /**
                     * Listening port of the backend service.
Note: This parameter must be specified when binding to CVM (Cloud Virtual Machine) or ENI (Elastic Network Interface).
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Backend service type, optional: CVM (Cloud Virtual Machine), ENI (Elastic Network Interface). As an input parameter, this parameter does not take effect.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * This parameter must be passed in when binding to CVM. It represents the unique ID of the CVM and can be obtained from the InstanceId field in the response of the DescribeInstances API. It indicates binding to the primary IPv4 address of the primary network interface. The following scenarios do not support specifying InstanceId: binding to non-CVM resources, binding to auxiliary network interface IPs on CVM, binding to CVM through cross-region 2.0, and binding to IPv6 addresses of CVM.
Note: You can only input one of the InstanceId or EniIp parameter.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The forwarding weight of the backend service after modification, with a value range of [0, 100], defaults to 10. This parameter has a higher priority than the Weight parameter in [RsWeightRule](https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). The final weight value is based on this Weight parameter. Only when this Weight parameter is empty, the Weight parameter in RsWeightRule will be used.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * This parameter must be passed in for IP binding. It supports ENI IPs and other private IP addresses. If it is an ENI, it must first bind to a CVM before binding to a CLB instance.
Note: You can only input one of the InstanceId or EniIp parameter. If it is binding a dual-stack IPV6 instance, you must pass this parameter. If it is cross-region binding, you must pass the parameter, and the InstanceId parameter is not supported.
                     */
                    std::string m_eniIp;
                    bool m_eniIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_TARGET_H_
