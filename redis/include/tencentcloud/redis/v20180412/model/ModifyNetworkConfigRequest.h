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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyNetworkConfig request structure.
                */
                class ModifyNetworkConfigRequest : public AbstractModel
                {
                public:
                    ModifyNetworkConfigRequest();
                    ~ModifyNetworkConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Network change type. Valid values:
- `changeVip`: VPC change, including the private IPv4 address and port.
- `changeVpc`: Subnet change.
- `changeBaseToVpc`: Change from classic network to VPC.
- `changeVPort`: Port change.
                     * @return Operation Network change type. Valid values:
- `changeVip`: VPC change, including the private IPv4 address and port.
- `changeVpc`: Subnet change.
- `changeBaseToVpc`: Change from classic network to VPC.
- `changeVPort`: Port change.
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Network change type. Valid values:
- `changeVip`: VPC change, including the private IPv4 address and port.
- `changeVpc`: Subnet change.
- `changeBaseToVpc`: Change from classic network to VPC.
- `changeVPort`: Port change.
                     * @param _operation Network change type. Valid values:
- `changeVip`: VPC change, including the private IPv4 address and port.
- `changeVpc`: Subnet change.
- `changeBaseToVpc`: Change from classic network to VPC.
- `changeVPort`: Port change.
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Private IPv4 address of the instance, which is required if `Operation` is `changeVip`.
                     * @return Vip Private IPv4 address of the instance, which is required if `Operation` is `changeVip`.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Private IPv4 address of the instance, which is required if `Operation` is `changeVip`.
                     * @param _vip Private IPv4 address of the instance, which is required if `Operation` is `changeVip`.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取VPC ID after the change, which is required if `Operation` is `changeVpc` or `changeBaseToVpc`.
                     * @return VpcId VPC ID after the change, which is required if `Operation` is `changeVpc` or `changeBaseToVpc`.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID after the change, which is required if `Operation` is `changeVpc` or `changeBaseToVpc`.
                     * @param _vpcId VPC ID after the change, which is required if `Operation` is `changeVpc` or `changeBaseToVpc`.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID after the change, which is required if `Operation` is `changeVpc` or `changeBaseToVpc`.
                     * @return SubnetId Subnet ID after the change, which is required if `Operation` is `changeVpc` or `changeBaseToVpc`.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID after the change, which is required if `Operation` is `changeVpc` or `changeBaseToVpc`.
                     * @param _subnetId Subnet ID after the change, which is required if `Operation` is `changeVpc` or `changeBaseToVpc`.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Retention period of the original private IPv4 address
- Unit: Days.
- Valid values: `0`, `1`, `2`, `3`, `7`, `15`.

**Note**: You can set the retention period of the original address only in the latest SDK. In earlier SDKs, the original address is released immediately. To view the SDK version, go to [SDK Center](https://intl.cloud.tencent.com/document/sdk?from_cn_redirect=1).
                     * @return Recycle Retention period of the original private IPv4 address
- Unit: Days.
- Valid values: `0`, `1`, `2`, `3`, `7`, `15`.

**Note**: You can set the retention period of the original address only in the latest SDK. In earlier SDKs, the original address is released immediately. To view the SDK version, go to [SDK Center](https://intl.cloud.tencent.com/document/sdk?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetRecycle() const;

                    /**
                     * 设置Retention period of the original private IPv4 address
- Unit: Days.
- Valid values: `0`, `1`, `2`, `3`, `7`, `15`.

**Note**: You can set the retention period of the original address only in the latest SDK. In earlier SDKs, the original address is released immediately. To view the SDK version, go to [SDK Center](https://intl.cloud.tencent.com/document/sdk?from_cn_redirect=1).
                     * @param _recycle Retention period of the original private IPv4 address
- Unit: Days.
- Valid values: `0`, `1`, `2`, `3`, `7`, `15`.

**Note**: You can set the retention period of the original address only in the latest SDK. In earlier SDKs, the original address is released immediately. To view the SDK version, go to [SDK Center](https://intl.cloud.tencent.com/document/sdk?from_cn_redirect=1).
                     * 
                     */
                    void SetRecycle(const int64_t& _recycle);

                    /**
                     * 判断参数 Recycle 是否已赋值
                     * @return Recycle 是否已赋值
                     * 
                     */
                    bool RecycleHasBeenSet() const;

                    /**
                     * 获取Network port after the change, which is required if `Operation` is `changeVPort` or `changeVip`. Value range: [1024,65535].
                     * @return VPort Network port after the change, which is required if `Operation` is `changeVPort` or `changeVip`. Value range: [1024,65535].
                     * 
                     */
                    int64_t GetVPort() const;

                    /**
                     * 设置Network port after the change, which is required if `Operation` is `changeVPort` or `changeVip`. Value range: [1024,65535].
                     * @param _vPort Network port after the change, which is required if `Operation` is `changeVPort` or `changeVip`. Value range: [1024,65535].
                     * 
                     */
                    void SetVPort(const int64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Network change type. Valid values:
- `changeVip`: VPC change, including the private IPv4 address and port.
- `changeVpc`: Subnet change.
- `changeBaseToVpc`: Change from classic network to VPC.
- `changeVPort`: Port change.
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Private IPv4 address of the instance, which is required if `Operation` is `changeVip`.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * VPC ID after the change, which is required if `Operation` is `changeVpc` or `changeBaseToVpc`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID after the change, which is required if `Operation` is `changeVpc` or `changeBaseToVpc`.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Retention period of the original private IPv4 address
- Unit: Days.
- Valid values: `0`, `1`, `2`, `3`, `7`, `15`.

**Note**: You can set the retention period of the original address only in the latest SDK. In earlier SDKs, the original address is released immediately. To view the SDK version, go to [SDK Center](https://intl.cloud.tencent.com/document/sdk?from_cn_redirect=1).
                     */
                    int64_t m_recycle;
                    bool m_recycleHasBeenSet;

                    /**
                     * Network port after the change, which is required if `Operation` is `changeVPort` or `changeVip`. Value range: [1024,65535].
                     */
                    int64_t m_vPort;
                    bool m_vPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGREQUEST_H_
