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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateDBInstances request structure.
                */
                class InquiryPriceCreateDBInstancesRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateDBInstancesRequest();
                    ~InquiryPriceCreateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     * @return Zone AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     * @param Zone AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Specification ID, which can be obtained through the `SpecCode` field in the returned value of the `DescribeProductConfig` API.
                     * @return SpecCode Specification ID, which can be obtained through the `SpecCode` field in the returned value of the `DescribeProductConfig` API.
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置Specification ID, which can be obtained through the `SpecCode` field in the returned value of the `DescribeProductConfig` API.
                     * @param SpecCode Specification ID, which can be obtained through the `SpecCode` field in the returned value of the `DescribeProductConfig` API.
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取Storage capacity size in GB.
                     * @return Storage Storage capacity size in GB.
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置Storage capacity size in GB.
                     * @param Storage Storage capacity size in GB.
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Number of instances. Maximum value: 100. If you need to create more instances at a time, please contact customer service.
                     * @return InstanceCount Number of instances. Maximum value: 100. If you need to create more instances at a time, please contact customer service.
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances. Maximum value: 100. If you need to create more instances at a time, please contact customer service.
                     * @param InstanceCount Number of instances. Maximum value: 100. If you need to create more instances at a time, please contact customer service.
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Length of purchase in months. Currently, only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.
                     * @return Period Length of purchase in months. Currently, only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Length of purchase in months. Currently, only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.
                     * @param Period Length of purchase in months. Currently, only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Billing ID, which can be obtained through the `Pid` field in the returned value of the `DescribeProductConfig` API.
                     * @return Pid Billing ID, which can be obtained through the `Pid` field in the returned value of the `DescribeProductConfig` API.
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置Billing ID, which can be obtained through the `Pid` field in the returned value of the `DescribeProductConfig` API.
                     * @param Pid Billing ID, which can be obtained through the `Pid` field in the returned value of the `DescribeProductConfig` API.
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Instance billing type. Valid value: POSTPAID_BY_HOUR (pay-as-you-go)
                     * @return InstanceChargeType Instance billing type. Valid value: POSTPAID_BY_HOUR (pay-as-you-go)
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing type. Valid value: POSTPAID_BY_HOUR (pay-as-you-go)
                     * @param InstanceChargeType Instance billing type. Valid value: POSTPAID_BY_HOUR (pay-as-you-go)
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                private:

                    /**
                     * AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Specification ID, which can be obtained through the `SpecCode` field in the returned value of the `DescribeProductConfig` API.
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * Storage capacity size in GB.
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Number of instances. Maximum value: 100. If you need to create more instances at a time, please contact customer service.
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Length of purchase in months. Currently, only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Billing ID, which can be obtained through the `Pid` field in the returned value of the `DescribeProductConfig` API.
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Instance billing type. Valid value: POSTPAID_BY_HOUR (pay-as-you-go)
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_
