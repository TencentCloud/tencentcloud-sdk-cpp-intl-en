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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLASSESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLASSESREQUEST_H_

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
                * DescribeClasses request structure.
                */
                class DescribeClassesRequest : public AbstractModel
                {
                public:
                    DescribeClassesRequest();
                    ~DescribeClassesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Availability zone name, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * @return Zone <p>Availability zone name, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Availability zone name, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * @param _zone <p>Availability zone name, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
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
                     * 获取<p>Database engine. Valid values:<br>1. postgresql (TencentDB for PostgreSQL).<br>2. mssql_compatible (MSSQL compatible - TencentDB for PostgreSQL).</p>
                     * @return DBEngine <p>Database engine. Valid values:<br>1. postgresql (TencentDB for PostgreSQL).<br>2. mssql_compatible (MSSQL compatible - TencentDB for PostgreSQL).</p>
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置<p>Database engine. Valid values:<br>1. postgresql (TencentDB for PostgreSQL).<br>2. mssql_compatible (MSSQL compatible - TencentDB for PostgreSQL).</p>
                     * @param _dBEngine <p>Database engine. Valid values:<br>1. postgresql (TencentDB for PostgreSQL).<br>2. mssql_compatible (MSSQL compatible - TencentDB for PostgreSQL).</p>
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
                     * 获取<p>Database major version number, such as 12 or 13, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/409/89018?from_cn_redirect=1">DescribeDBVersions</a> API.</p>
                     * @return DBMajorVersion <p>Database major version number, such as 12 or 13, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/409/89018?from_cn_redirect=1">DescribeDBVersions</a> API.</p>
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置<p>Database major version number, such as 12 or 13, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/409/89018?from_cn_redirect=1">DescribeDBVersions</a> API.</p>
                     * @param _dBMajorVersion <p>Database major version number, such as 12 or 13, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/409/89018?from_cn_redirect=1">DescribeDBVersions</a> API.</p>
                     * 
                     */
                    void SetDBMajorVersion(const std::string& _dBMajorVersion);

                    /**
                     * 判断参数 DBMajorVersion 是否已赋值
                     * @return DBMajorVersion 是否已赋值
                     * 
                     */
                    bool DBMajorVersionHasBeenSet() const;

                    /**
                     * 获取<p>Instance storage type. The supported specifications are returned based on the storage type.</p><p>Enumeration values:</p><ul><li>PHYSICAL_LOCAL_SSD: local SSD of physical machine.</li><li>CLOUD_PREMIUM: Premium Disk.</li><li>CLOUD_SSD: Cloud SSD.</li><li>CLOUD_HSSD: Enhanced SSD.</li></ul><p>Default value: PHYSICAL_LOCAL_SSD.</p>
                     * @return StorageType <p>Instance storage type. The supported specifications are returned based on the storage type.</p><p>Enumeration values:</p><ul><li>PHYSICAL_LOCAL_SSD: local SSD of physical machine.</li><li>CLOUD_PREMIUM: Premium Disk.</li><li>CLOUD_SSD: Cloud SSD.</li><li>CLOUD_HSSD: Enhanced SSD.</li></ul><p>Default value: PHYSICAL_LOCAL_SSD.</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Instance storage type. The supported specifications are returned based on the storage type.</p><p>Enumeration values:</p><ul><li>PHYSICAL_LOCAL_SSD: local SSD of physical machine.</li><li>CLOUD_PREMIUM: Premium Disk.</li><li>CLOUD_SSD: Cloud SSD.</li><li>CLOUD_HSSD: Enhanced SSD.</li></ul><p>Default value: PHYSICAL_LOCAL_SSD.</p>
                     * @param _storageType <p>Instance storage type. The supported specifications are returned based on the storage type.</p><p>Enumeration values:</p><ul><li>PHYSICAL_LOCAL_SSD: local SSD of physical machine.</li><li>CLOUD_PREMIUM: Premium Disk.</li><li>CLOUD_SSD: Cloud SSD.</li><li>CLOUD_HSSD: Enhanced SSD.</li></ul><p>Default value: PHYSICAL_LOCAL_SSD.</p>
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
                     * <p>Availability zone name, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Database engine. Valid values:<br>1. postgresql (TencentDB for PostgreSQL).<br>2. mssql_compatible (MSSQL compatible - TencentDB for PostgreSQL).</p>
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                    /**
                     * <p>Database major version number, such as 12 or 13, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/409/89018?from_cn_redirect=1">DescribeDBVersions</a> API.</p>
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * <p>Instance storage type. The supported specifications are returned based on the storage type.</p><p>Enumeration values:</p><ul><li>PHYSICAL_LOCAL_SSD: local SSD of physical machine.</li><li>CLOUD_PREMIUM: Premium Disk.</li><li>CLOUD_SSD: Cloud SSD.</li><li>CLOUD_HSSD: Enhanced SSD.</li></ul><p>Default value: PHYSICAL_LOCAL_SSD.</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLASSESREQUEST_H_
