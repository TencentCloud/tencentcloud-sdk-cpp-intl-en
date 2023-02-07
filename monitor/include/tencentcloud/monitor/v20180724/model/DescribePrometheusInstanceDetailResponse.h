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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEDETAILRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusInstanceDetail response structure.
                */
                class DescribePrometheusInstanceDetailResponse : public AbstractModel
                {
                public:
                    DescribePrometheusInstanceDetailResponse();
                    ~DescribePrometheusInstanceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID
                     * @return SubnetId Subnet ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Instance status. Valid values:

`1`: Creating
`2`: Running
`3`: Abnormal
`4`: Rebooting
`5`: Terminating
`6`: Service suspended
`8`: Suspending service for overdue payment
`9`: Service suspended for overdue payment
                     * @return InstanceStatus Instance status. Valid values:

`1`: Creating
`2`: Running
`3`: Abnormal
`4`: Rebooting
`5`: Terminating
`6`: Service suspended
`8`: Suspending service for overdue payment
`9`: Service suspended for overdue payment
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Billing status

`1`: Normal
`2`: Expired
`3`: Terminated
`4`: Assigning
`5`: Failed to assign
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChargeStatus Billing status

`1`: Normal
`2`: Expired
`3`: Terminated
`4`: Assigning
`5`: Failed to assign
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetChargeStatus() const;

                    /**
                     * 判断参数 ChargeStatus 是否已赋值
                     * @return ChargeStatus 是否已赋值
                     */
                    bool ChargeStatusHasBeenSet() const;

                    /**
                     * 获取Whether Grafana is enabled
`0`: Disabled
`1`: Enabled
                     * @return EnableGrafana Whether Grafana is enabled
`0`: Disabled
`1`: Enabled
                     */
                    int64_t GetEnableGrafana() const;

                    /**
                     * 判断参数 EnableGrafana 是否已赋值
                     * @return EnableGrafana 是否已赋值
                     */
                    bool EnableGrafanaHasBeenSet() const;

                    /**
                     * 获取Grafana dashboard URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GrafanaURL Grafana dashboard URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGrafanaURL() const;

                    /**
                     * 判断参数 GrafanaURL 是否已赋值
                     * @return GrafanaURL 是否已赋值
                     */
                    bool GrafanaURLHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. Valid values:

`2`: Monthly subscription
`3`: Pay-as-you-go
                     * @return InstanceChargeType Instance billing mode. Valid values:

`2`: Monthly subscription
`3`: Pay-as-you-go
                     */
                    int64_t GetInstanceChargeType() const;

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpecName Specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSpecName() const;

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取Storage period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataRetentionTime Storage period
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetDataRetentionTime() const;

                    /**
                     * 判断参数 DataRetentionTime 是否已赋值
                     * @return DataRetentionTime 是否已赋值
                     */
                    bool DataRetentionTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time of the purchased instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time of the purchased instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag

`0`: Auto-renewal not enabled
`1`: Auto-renewal enabled
`2`: Auto-renewal prohibited
`-1`: Invalid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoRenewFlag Auto-renewal flag

`0`: Auto-renewal not enabled
`1`: Auto-renewal enabled
`2`: Auto-renewal prohibited
`-1`: Invalid
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance status. Valid values:

`1`: Creating
`2`: Running
`3`: Abnormal
`4`: Rebooting
`5`: Terminating
`6`: Service suspended
`8`: Suspending service for overdue payment
`9`: Service suspended for overdue payment
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Billing status

`1`: Normal
`2`: Expired
`3`: Terminated
`4`: Assigning
`5`: Failed to assign
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * Whether Grafana is enabled
`0`: Disabled
`1`: Enabled
                     */
                    int64_t m_enableGrafana;
                    bool m_enableGrafanaHasBeenSet;

                    /**
                     * Grafana dashboard URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_grafanaURL;
                    bool m_grafanaURLHasBeenSet;

                    /**
                     * Instance billing mode. Valid values:

`2`: Monthly subscription
`3`: Pay-as-you-go
                     */
                    int64_t m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Storage period
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dataRetentionTime;
                    bool m_dataRetentionTimeHasBeenSet;

                    /**
                     * Expiration time of the purchased instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Auto-renewal flag

`0`: Auto-renewal not enabled
`1`: Auto-renewal enabled
`2`: Auto-renewal prohibited
`-1`: Invalid
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEDETAILRESPONSE_H_
