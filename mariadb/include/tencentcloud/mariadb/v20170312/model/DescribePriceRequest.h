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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEPRICEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEPRICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribePrice request structure.
                */
                class DescribePriceRequest : public AbstractModel
                {
                public:
                    DescribePriceRequest();
                    ~DescribePriceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AZ ID of the purchased instance.
                     * @return Zone AZ ID of the purchased instance.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ ID of the purchased instance.
                     * @param _zone AZ ID of the purchased instance.
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
                     * 获取Number of instance nodes, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * @return NodeCount Number of instance nodes, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置Number of instance nodes, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * @param _nodeCount Number of instance nodes, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * @return Memory Memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * @param _memory Memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Storage capacity in GB. The maximum and minimum storage space can be obtained 
 by querying instance specification through the `DescribeDBInstanceSpecs` API.
                     * @return Storage Storage capacity in GB. The maximum and minimum storage space can be obtained 
 by querying instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Storage capacity in GB. The maximum and minimum storage space can be obtained 
 by querying instance specification through the `DescribeDBInstanceSpecs` API.
                     * @param _storage Storage capacity in GB. The maximum and minimum storage space can be obtained 
 by querying instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Purchase period in months
                     * @return Period Purchase period in months
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Purchase period in months
                     * @param _period Purchase period in months
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取The number of instances to be purchased. Only one instance is queried for price by default.
                     * @return Count The number of instances to be purchased. Only one instance is queried for price by default.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置The number of instances to be purchased. Only one instance is queried for price by default.
                     * @param _count The number of instances to be purchased. Only one instance is queried for price by default.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Billing type. Valid values: `postpaid` (pay-as-you-go), `prepaid` (monthly subscription).
                     * @return Paymode Billing type. Valid values: `postpaid` (pay-as-you-go), `prepaid` (monthly subscription).
                     * 
                     */
                    std::string GetPaymode() const;

                    /**
                     * 设置Billing type. Valid values: `postpaid` (pay-as-you-go), `prepaid` (monthly subscription).
                     * @param _paymode Billing type. Valid values: `postpaid` (pay-as-you-go), `prepaid` (monthly subscription).
                     * 
                     */
                    void SetPaymode(const std::string& _paymode);

                    /**
                     * 判断参数 Paymode 是否已赋值
                     * @return Paymode 是否已赋值
                     * 
                     */
                    bool PaymodeHasBeenSet() const;

                    /**
                     * 获取Price unit. Valid values:   
`* pent` (cent), 
`* microPent` (microcent).
                     * @return AmountUnit Price unit. Valid values:   
`* pent` (cent), 
`* microPent` (microcent).
                     * 
                     */
                    std::string GetAmountUnit() const;

                    /**
                     * 设置Price unit. Valid values:   
`* pent` (cent), 
`* microPent` (microcent).
                     * @param _amountUnit Price unit. Valid values:   
`* pent` (cent), 
`* microPent` (microcent).
                     * 
                     */
                    void SetAmountUnit(const std::string& _amountUnit);

                    /**
                     * 判断参数 AmountUnit 是否已赋值
                     * @return AmountUnit 是否已赋值
                     * 
                     */
                    bool AmountUnitHasBeenSet() const;

                private:

                    /**
                     * AZ ID of the purchased instance.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Number of instance nodes, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Storage capacity in GB. The maximum and minimum storage space can be obtained 
 by querying instance specification through the `DescribeDBInstanceSpecs` API.
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Purchase period in months
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * The number of instances to be purchased. Only one instance is queried for price by default.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Billing type. Valid values: `postpaid` (pay-as-you-go), `prepaid` (monthly subscription).
                     */
                    std::string m_paymode;
                    bool m_paymodeHasBeenSet;

                    /**
                     * Price unit. Valid values:   
`* pent` (cent), 
`* microPent` (microcent).
                     */
                    std::string m_amountUnit;
                    bool m_amountUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEPRICEREQUEST_H_
