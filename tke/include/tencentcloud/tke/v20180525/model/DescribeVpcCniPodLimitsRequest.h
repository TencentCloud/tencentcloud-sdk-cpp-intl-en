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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEVPCCNIPODLIMITSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEVPCCNIPODLIMITSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeVpcCniPodLimits request structure.
                */
                class DescribeVpcCniPodLimitsRequest : public AbstractModel
                {
                public:
                    DescribeVpcCniPodLimitsRequest();
                    ~DescribeVpcCniPodLimitsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The availability zone of the model to query, for example, `ap-guangzhou-3`. This field is left empty by default, that is, do not filter by the availability zone.
                     * @return Zone The availability zone of the model to query, for example, `ap-guangzhou-3`. This field is left empty by default, that is, do not filter by the availability zone.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The availability zone of the model to query, for example, `ap-guangzhou-3`. This field is left empty by default, that is, do not filter by the availability zone.
                     * @param _zone The availability zone of the model to query, for example, `ap-guangzhou-3`. This field is left empty by default, that is, do not filter by the availability zone.
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
                     * 获取The instance family to query, for example, `S5`. This field is left empty by default, that is, do not filter by the instance family.
                     * @return InstanceFamily The instance family to query, for example, `S5`. This field is left empty by default, that is, do not filter by the instance family.
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置The instance family to query, for example, `S5`. This field is left empty by default, that is, do not filter by the instance family.
                     * @param _instanceFamily The instance family to query, for example, `S5`. This field is left empty by default, that is, do not filter by the instance family.
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取The instance model to query, for example, `S5.LARGE8`. This field is empty by default, that is, do not filter by instance type.
                     * @return InstanceType The instance model to query, for example, `S5.LARGE8`. This field is empty by default, that is, do not filter by instance type.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置The instance model to query, for example, `S5.LARGE8`. This field is empty by default, that is, do not filter by instance type.
                     * @param _instanceType The instance model to query, for example, `S5.LARGE8`. This field is empty by default, that is, do not filter by instance type.
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
                     * The availability zone of the model to query, for example, `ap-guangzhou-3`. This field is left empty by default, that is, do not filter by the availability zone.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * The instance family to query, for example, `S5`. This field is left empty by default, that is, do not filter by the instance family.
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * The instance model to query, for example, `S5.LARGE8`. This field is empty by default, that is, do not filter by instance type.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEVPCCNIPODLIMITSREQUEST_H_
