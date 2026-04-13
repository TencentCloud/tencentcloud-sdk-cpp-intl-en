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
                     * 获取<p>Availability zone name. The value of this parameter can be obtained from the returned Zone field of the <a href="https://www.tencentcloud.com/document/product/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * @return Zone <p>Availability zone name. The value of this parameter can be obtained from the returned Zone field of the <a href="https://www.tencentcloud.com/document/product/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Availability zone name. The value of this parameter can be obtained from the returned Zone field of the <a href="https://www.tencentcloud.com/document/product/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * @param _zone <p>Availability zone name. The value of this parameter can be obtained from the returned Zone field of the <a href="https://www.tencentcloud.com/document/product/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
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
                     * 获取<p>Specification ID. The value of this parameter can be obtained from the returned SpecCode field of the <a href="https://www.tencentcloud.com/document/product/409/89019?from_cn_redirect=1">DescribeClasses</a> API.</p>
                     * @return SpecCode <p>Specification ID. The value of this parameter can be obtained from the returned SpecCode field of the <a href="https://www.tencentcloud.com/document/product/409/89019?from_cn_redirect=1">DescribeClasses</a> API.</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>Specification ID. The value of this parameter can be obtained from the returned SpecCode field of the <a href="https://www.tencentcloud.com/document/product/409/89019?from_cn_redirect=1">DescribeClasses</a> API.</p>
                     * @param _specCode <p>Specification ID. The value of this parameter can be obtained from the returned SpecCode field of the <a href="https://www.tencentcloud.com/document/product/409/89019?from_cn_redirect=1">DescribeClasses</a> API.</p>
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>Storage capacity, in GB. The value for this parameter must be set in increments of 10.</p>
                     * @return Storage <p>Storage capacity, in GB. The value for this parameter must be set in increments of 10.</p>
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置<p>Storage capacity, in GB. The value for this parameter must be set in increments of 10.</p>
                     * @param _storage <p>Storage capacity, in GB. The value for this parameter must be set in increments of 10.</p>
                     * 
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取<p>Instance quantity. The maximum allowed quantity is no more than 100. If you need to create more instances at a time, please contact customer service.</p>
                     * @return InstanceCount <p>Instance quantity. The maximum allowed quantity is no more than 100. If you need to create more instances at a time, please contact customer service.</p>
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置<p>Instance quantity. The maximum allowed quantity is no more than 100. If you need to create more instances at a time, please contact customer service.</p>
                     * @param _instanceCount <p>Instance quantity. The maximum allowed quantity is no more than 100. If you need to create more instances at a time, please contact customer service.</p>
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>Purchased duration, in months. Only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.</p>
                     * @return Period <p>Purchased duration, in months. Only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>Purchased duration, in months. Only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.</p>
                     * @param _period <p>Purchased duration, in months. Only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.</p>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>[Deprecated and no longer effective] Billing ID. The value of this parameter can be obtained from the returned Pid field of the DescribeProductConfig API.</p>
                     * @return Pid <p>[Deprecated and no longer effective] Billing ID. The value of this parameter can be obtained from the returned Pid field of the DescribeProductConfig API.</p>
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置<p>[Deprecated and no longer effective] Billing ID. The value of this parameter can be obtained from the returned Pid field of the DescribeProductConfig API.</p>
                     * @param _pid <p>[Deprecated and no longer effective] Billing ID. The value of this parameter can be obtained from the returned Pid field of the DescribeProductConfig API.</p>
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取<p>Instance billing type. Valid values: PREPAID (prepaid, also known as yearly/monthly subscription) and POSTPAID (pay-as-you-go).<br>Default value: PREPAID.</p>
                     * @return InstanceChargeType <p>Instance billing type. Valid values: PREPAID (prepaid, also known as yearly/monthly subscription) and POSTPAID (pay-as-you-go).<br>Default value: PREPAID.</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Instance billing type. Valid values: PREPAID (prepaid, also known as yearly/monthly subscription) and POSTPAID (pay-as-you-go).<br>Default value: PREPAID.</p>
                     * @param _instanceChargeType <p>Instance billing type. Valid values: PREPAID (prepaid, also known as yearly/monthly subscription) and POSTPAID (pay-as-you-go).<br>Default value: PREPAID.</p>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance type. The default value is primary. Valid values:<br>primary (dual-server high availability (one primary and one standby)).<br>readonly (read-only instance).</p>
                     * @return InstanceType <p>Instance type. The default value is primary. Valid values:<br>primary (dual-server high availability (one primary and one standby)).<br>readonly (read-only instance).</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Instance type. The default value is primary. Valid values:<br>primary (dual-server high availability (one primary and one standby)).<br>readonly (read-only instance).</p>
                     * @param _instanceType <p>Instance type. The default value is primary. Valid values:<br>primary (dual-server high availability (one primary and one standby)).<br>readonly (read-only instance).</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Database engine. The default value is postgresql. Valid values:<br>postgresql (TencentDB for PostgreSQL).<br>mssql_compatible (MSSQL compatible - TencentDB for PostgreSQL).</p>
                     * @return DBEngine <p>Database engine. The default value is postgresql. Valid values:<br>postgresql (TencentDB for PostgreSQL).<br>mssql_compatible (MSSQL compatible - TencentDB for PostgreSQL).</p>
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置<p>Database engine. The default value is postgresql. Valid values:<br>postgresql (TencentDB for PostgreSQL).<br>mssql_compatible (MSSQL compatible - TencentDB for PostgreSQL).</p>
                     * @param _dBEngine <p>Database engine. The default value is postgresql. Valid values:<br>postgresql (TencentDB for PostgreSQL).<br>mssql_compatible (MSSQL compatible - TencentDB for PostgreSQL).</p>
                     * 
                     */
                    void SetDBEngine(const std::string& _dBEngine);

                    /**
                     * 判断参数 DBEngine 是否已赋值
                     * @return DBEngine 是否已赋值
                     * 
                     */
                    bool DBEngineHasBeenSet() const;

                    /**
                     * 获取<p>Instance storage type. Valid values: PHYSICAL_LOCAL_SSD: local SSD of physical machine. CLOUD_PREMIUM: Premium Disk. CLOUD_SSD: Cloud SSD. CLOUD_HSSD: Enhanced SSD.</p>
                     * @return StorageType <p>Instance storage type. Valid values: PHYSICAL_LOCAL_SSD: local SSD of physical machine. CLOUD_PREMIUM: Premium Disk. CLOUD_SSD: Cloud SSD. CLOUD_HSSD: Enhanced SSD.</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Instance storage type. Valid values: PHYSICAL_LOCAL_SSD: local SSD of physical machine. CLOUD_PREMIUM: Premium Disk. CLOUD_SSD: Cloud SSD. CLOUD_HSSD: Enhanced SSD.</p>
                     * @param _storageType <p>Instance storage type. Valid values: PHYSICAL_LOCAL_SSD: local SSD of physical machine. CLOUD_PREMIUM: Premium Disk. CLOUD_SSD: Cloud SSD. CLOUD_HSSD: Enhanced SSD.</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Availability zone name. The value of this parameter can be obtained from the returned Zone field of the <a href="https://www.tencentcloud.com/document/product/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Specification ID. The value of this parameter can be obtained from the returned SpecCode field of the <a href="https://www.tencentcloud.com/document/product/409/89019?from_cn_redirect=1">DescribeClasses</a> API.</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>Storage capacity, in GB. The value for this parameter must be set in increments of 10.</p>
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>Instance quantity. The maximum allowed quantity is no more than 100. If you need to create more instances at a time, please contact customer service.</p>
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>Purchased duration, in months. Only 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36 are supported.</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>[Deprecated and no longer effective] Billing ID. The value of this parameter can be obtained from the returned Pid field of the DescribeProductConfig API.</p>
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * <p>Instance billing type. Valid values: PREPAID (prepaid, also known as yearly/monthly subscription) and POSTPAID (pay-as-you-go).<br>Default value: PREPAID.</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>Instance type. The default value is primary. Valid values:<br>primary (dual-server high availability (one primary and one standby)).<br>readonly (read-only instance).</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Database engine. The default value is postgresql. Valid values:<br>postgresql (TencentDB for PostgreSQL).<br>mssql_compatible (MSSQL compatible - TencentDB for PostgreSQL).</p>
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                    /**
                     * <p>Instance storage type. Valid values: PHYSICAL_LOCAL_SSD: local SSD of physical machine. CLOUD_PREMIUM: Premium Disk. CLOUD_SSD: Cloud SSD. CLOUD_HSSD: Enhanced SSD.</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_
