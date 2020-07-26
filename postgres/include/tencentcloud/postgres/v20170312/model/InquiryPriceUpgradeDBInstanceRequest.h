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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_

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
                * InquiryPriceUpgradeDBInstance request structure.
                */
                class InquiryPriceUpgradeDBInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceUpgradeDBInstanceRequest();
                    ~InquiryPriceUpgradeDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance disk size in GB
                     * @return Storage Instance disk size in GB
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Instance disk size in GB
                     * @param Storage Instance disk size in GB
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Instance memory size in GB
                     * @return Memory Instance memory size in GB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in GB
                     * @param Memory Instance memory size in GB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance ID in the format of postgres-hez4fh0v
                     * @return DBInstanceId Instance ID in the format of postgres-hez4fh0v
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID in the format of postgres-hez4fh0v
                     * @param DBInstanceId Instance ID in the format of postgres-hez4fh0v
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance billing type. Valid value: `POSTPAID_BY_HOUR` (pay-as-you-go hourly)
                     * @return InstanceChargeType Instance billing type. Valid value: `POSTPAID_BY_HOUR` (pay-as-you-go hourly)
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing type. Valid value: `POSTPAID_BY_HOUR` (pay-as-you-go hourly)
                     * @param InstanceChargeType Instance billing type. Valid value: `POSTPAID_BY_HOUR` (pay-as-you-go hourly)
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                private:

                    /**
                     * Instance disk size in GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Instance memory size in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance ID in the format of postgres-hez4fh0v
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Instance billing type. Valid value: `POSTPAID_BY_HOUR` (pay-as-you-go hourly)
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_
