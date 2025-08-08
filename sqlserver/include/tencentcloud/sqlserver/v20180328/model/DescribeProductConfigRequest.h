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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPRODUCTCONFIGREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPRODUCTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeProductConfig request structure.
                */
                class DescribeProductConfigRequest : public AbstractModel
                {
                public:
                    DescribeProductConfigRequest();
                    ~DescribeProductConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AZ ID in the format of ap-guangzhou-1.
                     * @return Zone AZ ID in the format of ap-guangzhou-1.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ ID in the format of ap-guangzhou-1.
                     * @param _zone AZ ID in the format of ap-guangzhou-1.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Type of purchased instance. Valid values: HA - local disk high availability (including dual-machine high availability, AlwaysOn Cluster), RO - local disk read-only replica, SI - cloud disk edition single node, BI - business intelligence service, cvmHA - cloud disk edition high availability, cvmRO - cloud disk edition read-only replica.
                     * @return InstanceType Type of purchased instance. Valid values: HA - local disk high availability (including dual-machine high availability, AlwaysOn Cluster), RO - local disk read-only replica, SI - cloud disk edition single node, BI - business intelligence service, cvmHA - cloud disk edition high availability, cvmRO - cloud disk edition read-only replica.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Type of purchased instance. Valid values: HA - local disk high availability (including dual-machine high availability, AlwaysOn Cluster), RO - local disk read-only replica, SI - cloud disk edition single node, BI - business intelligence service, cvmHA - cloud disk edition high availability, cvmRO - cloud disk edition read-only replica.
                     * @param _instanceType Type of purchased instance. Valid values: HA - local disk high availability (including dual-machine high availability, AlwaysOn Cluster), RO - local disk read-only replica, SI - cloud disk edition single node, BI - business intelligence service, cvmHA - cloud disk edition high availability, cvmRO - cloud disk edition read-only replica.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * AZ ID in the format of ap-guangzhou-1.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Type of purchased instance. Valid values: HA - local disk high availability (including dual-machine high availability, AlwaysOn Cluster), RO - local disk read-only replica, SI - cloud disk edition single node, BI - business intelligence service, cvmHA - cloud disk edition high availability, cvmRO - cloud disk edition read-only replica.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPRODUCTCONFIGREQUEST_H_
