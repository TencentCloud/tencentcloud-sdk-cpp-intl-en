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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSINSTANCERESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PrometheusGrafanaInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribePrometheusInstance response structure.
                */
                class DescribePrometheusInstanceResponse : public AbstractModel
                {
                public:
                    DescribePrometheusInstanceResponse();
                    ~DescribePrometheusInstanceResponse() = default;
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
                     * @return Name Instance name
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

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
                     * 获取COS bucket name
                     * @return COSBucket COS bucket name
                     */
                    std::string GetCOSBucket() const;

                    /**
                     * 判断参数 COSBucket 是否已赋值
                     * @return COSBucket 是否已赋值
                     */
                    bool COSBucketHasBeenSet() const;

                    /**
                     * 获取Data query address
                     * @return QueryAddress Data query address
                     */
                    std::string GetQueryAddress() const;

                    /**
                     * 判断参数 QueryAddress 是否已赋值
                     * @return QueryAddress 是否已赋值
                     */
                    bool QueryAddressHasBeenSet() const;

                    /**
                     * 获取The grafana related information in the instance
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return Grafana The grafana related information in the instance
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    PrometheusGrafanaInfo GetGrafana() const;

                    /**
                     * 判断参数 Grafana 是否已赋值
                     * @return Grafana 是否已赋值
                     */
                    bool GrafanaHasBeenSet() const;

                    /**
                     * 获取Custom alertmanager
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return AlertManagerUrl Custom alertmanager
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetAlertManagerUrl() const;

                    /**
                     * 判断参数 AlertManagerUrl 是否已赋值
                     * @return AlertManagerUrl 是否已赋值
                     */
                    bool AlertManagerUrlHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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
                     * COS bucket name
                     */
                    std::string m_cOSBucket;
                    bool m_cOSBucketHasBeenSet;

                    /**
                     * Data query address
                     */
                    std::string m_queryAddress;
                    bool m_queryAddressHasBeenSet;

                    /**
                     * The grafana related information in the instance
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    PrometheusGrafanaInfo m_grafana;
                    bool m_grafanaHasBeenSet;

                    /**
                     * Custom alertmanager
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_alertManagerUrl;
                    bool m_alertManagerUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSINSTANCERESPONSE_H_
