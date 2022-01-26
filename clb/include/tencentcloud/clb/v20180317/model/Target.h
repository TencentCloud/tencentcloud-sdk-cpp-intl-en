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
                     * 获取Listening port of a real server
Note: this parameter is required when binding a CVM or ENI.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Port Listening port of a real server
Note: this parameter is required when binding a CVM or ENI.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Listening port of a real server
Note: this parameter is required when binding a CVM or ENI.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Port Listening port of a real server
Note: this parameter is required when binding a CVM or ENI.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Real server type. Value range: CVM (Cloud Virtual Machine), ENI (Elastic Network Interface). This parameter does not take effect currently as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Real server type. Value range: CVM (Cloud Virtual Machine), ENI (Elastic Network Interface). This parameter does not take effect currently as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Real server type. Value range: CVM (Cloud Virtual Machine), ENI (Elastic Network Interface). This parameter does not take effect currently as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Type Real server type. Value range: CVM (Cloud Virtual Machine), ENI (Elastic Network Interface). This parameter does not take effect currently as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Unique ID of a CVM instance, which is required when binding a CVM instance. It can be obtained from the `InstanceId` field in the response of the `DescribeInstances` API. It indicates binding the primary IP of the primary ENI.
Note: either `InstanceId` or `EniIp` must be passed in.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return InstanceId Unique ID of a CVM instance, which is required when binding a CVM instance. It can be obtained from the `InstanceId` field in the response of the `DescribeInstances` API. It indicates binding the primary IP of the primary ENI.
Note: either `InstanceId` or `EniIp` must be passed in.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Unique ID of a CVM instance, which is required when binding a CVM instance. It can be obtained from the `InstanceId` field in the response of the `DescribeInstances` API. It indicates binding the primary IP of the primary ENI.
Note: either `InstanceId` or `EniIp` must be passed in.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param InstanceId Unique ID of a CVM instance, which is required when binding a CVM instance. It can be obtained from the `InstanceId` field in the response of the `DescribeInstances` API. It indicates binding the primary IP of the primary ENI.
Note: either `InstanceId` or `EniIp` must be passed in.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The new forwarding weight of the real server. Value range: [0, 100]. Default: 10. This parameter takes priority over `Weight` in [`RsWeightRule`](https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). If it’s left empty, the value of `Weight` in `RsWeightRule` will be used.
                     * @return Weight The new forwarding weight of the real server. Value range: [0, 100]. Default: 10. This parameter takes priority over `Weight` in [`RsWeightRule`](https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). If it’s left empty, the value of `Weight` in `RsWeightRule` will be used.
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置The new forwarding weight of the real server. Value range: [0, 100]. Default: 10. This parameter takes priority over `Weight` in [`RsWeightRule`](https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). If it’s left empty, the value of `Weight` in `RsWeightRule` will be used.
                     * @param Weight The new forwarding weight of the real server. Value range: [0, 100]. Default: 10. This parameter takes priority over `Weight` in [`RsWeightRule`](https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). If it’s left empty, the value of `Weight` in `RsWeightRule` will be used.
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取It is required when binding an IP. ENI IPs and other private IPs are supported. To bind an ENI IP, the ENI should be bound to a CVM instance before being bound to a CLB instance.
Note: either `InstanceId` or `EniIp` must be passed in. It is required when binding a dual-stack IPv6 CVM instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EniIp It is required when binding an IP. ENI IPs and other private IPs are supported. To bind an ENI IP, the ENI should be bound to a CVM instance before being bound to a CLB instance.
Note: either `InstanceId` or `EniIp` must be passed in. It is required when binding a dual-stack IPv6 CVM instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetEniIp() const;

                    /**
                     * 设置It is required when binding an IP. ENI IPs and other private IPs are supported. To bind an ENI IP, the ENI should be bound to a CVM instance before being bound to a CLB instance.
Note: either `InstanceId` or `EniIp` must be passed in. It is required when binding a dual-stack IPv6 CVM instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param EniIp It is required when binding an IP. ENI IPs and other private IPs are supported. To bind an ENI IP, the ENI should be bound to a CVM instance before being bound to a CLB instance.
Note: either `InstanceId` or `EniIp` must be passed in. It is required when binding a dual-stack IPv6 CVM instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEniIp(const std::string& _eniIp);

                    /**
                     * 判断参数 EniIp 是否已赋值
                     * @return EniIp 是否已赋值
                     */
                    bool EniIpHasBeenSet() const;

                private:

                    /**
                     * Listening port of a real server
Note: this parameter is required when binding a CVM or ENI.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Real server type. Value range: CVM (Cloud Virtual Machine), ENI (Elastic Network Interface). This parameter does not take effect currently as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Unique ID of a CVM instance, which is required when binding a CVM instance. It can be obtained from the `InstanceId` field in the response of the `DescribeInstances` API. It indicates binding the primary IP of the primary ENI.
Note: either `InstanceId` or `EniIp` must be passed in.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The new forwarding weight of the real server. Value range: [0, 100]. Default: 10. This parameter takes priority over `Weight` in [`RsWeightRule`](https://intl.cloud.tencent.com/document/api/214/30694?from_cn_redirect=1#RsWeightRule). If it’s left empty, the value of `Weight` in `RsWeightRule` will be used.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * It is required when binding an IP. ENI IPs and other private IPs are supported. To bind an ENI IP, the ENI should be bound to a CVM instance before being bound to a CLB instance.
Note: either `InstanceId` or `EniIp` must be passed in. It is required when binding a dual-stack IPv6 CVM instance.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_eniIp;
                    bool m_eniIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGET_H_
