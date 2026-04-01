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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DBInstanceNetInfo.h>
#include <tencentcloud/postgres/v20170312/model/Tag.h>
#include <tencentcloud/postgres/v20170312/model/DBNode.h>
#include <tencentcloud/postgres/v20170312/model/NetworkAccess.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Instance details
                */
                class DBInstance : public AbstractModel
                {
                public:
                    DBInstance();
                    ~DBInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Region of the instance, for example: ap-guangzhou, corresponds to the region field in RegionSet.</p>
                     * @return Region <p>Region of the instance, for example: ap-guangzhou, corresponds to the region field in RegionSet.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region of the instance, for example: ap-guangzhou, corresponds to the region field in RegionSet.</p>
                     * @param _region <p>Region of the instance, for example: ap-guangzhou, corresponds to the region field in RegionSet.</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone to which the instance belongs, for example: ap-guangzhou-3, corresponds to the Zone field in ZoneSet.</p>
                     * @return Zone <p>Availability zone to which the instance belongs, for example: ap-guangzhou-3, corresponds to the Zone field in ZoneSet.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Availability zone to which the instance belongs, for example: ap-guangzhou-3, corresponds to the Zone field in ZoneSet.</p>
                     * @param _zone <p>Availability zone to which the instance belongs, for example: ap-guangzhou-3, corresponds to the Zone field in ZoneSet.</p>
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
                     * 获取<p>VPC ID, such as vpc-e6w23k31. A valid VPC ID can be obtained by logging in to the console to query or by calling the API <a href="https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1">DescribeVpcs</a> and acquiring the unVpcId field in API return.</p>
                     * @return VpcId <p>VPC ID, such as vpc-e6w23k31. A valid VPC ID can be obtained by logging in to the console to query or by calling the API <a href="https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1">DescribeVpcs</a> and acquiring the unVpcId field in API return.</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID, such as vpc-e6w23k31. A valid VPC ID can be obtained by logging in to the console to query or by calling the API <a href="https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1">DescribeVpcs</a> and acquiring the unVpcId field in API return.</p>
                     * @param _vpcId <p>VPC ID, such as vpc-e6w23k31. A valid VPC ID can be obtained by logging in to the console to query or by calling the API <a href="https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1">DescribeVpcs</a> and acquiring the unVpcId field in API return.</p>
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
                     * 获取<p>VPC subnet ID, such as subnet-51lcif9y. An effective VPC subnet ID can be obtained by logging in to the console to query. You can also call API <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> and get it from the unSubnetId field in API return.</p>
                     * @return SubnetId <p>VPC subnet ID, such as subnet-51lcif9y. An effective VPC subnet ID can be obtained by logging in to the console to query. You can also call API <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> and get it from the unSubnetId field in API return.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>VPC subnet ID, such as subnet-51lcif9y. An effective VPC subnet ID can be obtained by logging in to the console to query. You can also call API <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> and get it from the unSubnetId field in API return.</p>
                     * @param _subnetId <p>VPC subnet ID, such as subnet-51lcif9y. An effective VPC subnet ID can be obtained by logging in to the console to query. You can also call API <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> and get it from the unSubnetId field in API return.</p>
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
                     * 获取<p>Instance ID.</p>
                     * @return DBInstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _dBInstanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance name.</p>
                     * @return DBInstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetDBInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _dBInstanceName <p>Instance name.</p>
                     * 
                     */
                    void SetDBInstanceName(const std::string& _dBInstanceName);

                    /**
                     * 判断参数 DBInstanceName 是否已赋值
                     * @return DBInstanceName 是否已赋值
                     * 
                     */
                    bool DBInstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>Instance status, including: `applying` (applying), `init` (to be initialized), `initing` (initializing), `running` (running), `limited run` (restricted operation), `isolating` (isolating), `isolated` (isolated), `disisolating` (de-isolating), `recycling` (recycling), `recycled` (recycled), `job running` (task executing), `offline` (offline), `migrating` (migrating), `expanding` (scaling out), `waitSwitch` (waiting to switch), `switching` (switching), `readonly` (readonly), `restarting` (restarting), `network changing` (network modification in progress), `upgrading` (kernel version upgrading), `audit-switching` (audit status changing), `primary-switching` (primary-secondary switching), `offlining` (offline), `deployment changing` (modify AZ), `cloning` (recovering data), `parameter modifying` (parameter modification in progress), `log-switching` (log status change), `restoring` (recovering), and `expanding` (scaling out)</p>
                     * @return DBInstanceStatus <p>Instance status, including: `applying` (applying), `init` (to be initialized), `initing` (initializing), `running` (running), `limited run` (restricted operation), `isolating` (isolating), `isolated` (isolated), `disisolating` (de-isolating), `recycling` (recycling), `recycled` (recycled), `job running` (task executing), `offline` (offline), `migrating` (migrating), `expanding` (scaling out), `waitSwitch` (waiting to switch), `switching` (switching), `readonly` (readonly), `restarting` (restarting), `network changing` (network modification in progress), `upgrading` (kernel version upgrading), `audit-switching` (audit status changing), `primary-switching` (primary-secondary switching), `offlining` (offline), `deployment changing` (modify AZ), `cloning` (recovering data), `parameter modifying` (parameter modification in progress), `log-switching` (log status change), `restoring` (recovering), and `expanding` (scaling out)</p>
                     * 
                     */
                    std::string GetDBInstanceStatus() const;

                    /**
                     * 设置<p>Instance status, including: `applying` (applying), `init` (to be initialized), `initing` (initializing), `running` (running), `limited run` (restricted operation), `isolating` (isolating), `isolated` (isolated), `disisolating` (de-isolating), `recycling` (recycling), `recycled` (recycled), `job running` (task executing), `offline` (offline), `migrating` (migrating), `expanding` (scaling out), `waitSwitch` (waiting to switch), `switching` (switching), `readonly` (readonly), `restarting` (restarting), `network changing` (network modification in progress), `upgrading` (kernel version upgrading), `audit-switching` (audit status changing), `primary-switching` (primary-secondary switching), `offlining` (offline), `deployment changing` (modify AZ), `cloning` (recovering data), `parameter modifying` (parameter modification in progress), `log-switching` (log status change), `restoring` (recovering), and `expanding` (scaling out)</p>
                     * @param _dBInstanceStatus <p>Instance status, including: `applying` (applying), `init` (to be initialized), `initing` (initializing), `running` (running), `limited run` (restricted operation), `isolating` (isolating), `isolated` (isolated), `disisolating` (de-isolating), `recycling` (recycling), `recycled` (recycled), `job running` (task executing), `offline` (offline), `migrating` (migrating), `expanding` (scaling out), `waitSwitch` (waiting to switch), `switching` (switching), `readonly` (readonly), `restarting` (restarting), `network changing` (network modification in progress), `upgrading` (kernel version upgrading), `audit-switching` (audit status changing), `primary-switching` (primary-secondary switching), `offlining` (offline), `deployment changing` (modify AZ), `cloning` (recovering data), `parameter modifying` (parameter modification in progress), `log-switching` (log status change), `restoring` (recovering), and `expanding` (scaling out)</p>
                     * 
                     */
                    void SetDBInstanceStatus(const std::string& _dBInstanceStatus);

                    /**
                     * 判断参数 DBInstanceStatus 是否已赋值
                     * @return DBInstanceStatus 是否已赋值
                     * 
                     */
                    bool DBInstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>Memory size allocated to the instance, measurement unit: GB</p>
                     * @return DBInstanceMemory <p>Memory size allocated to the instance, measurement unit: GB</p>
                     * 
                     */
                    uint64_t GetDBInstanceMemory() const;

                    /**
                     * 设置<p>Memory size allocated to the instance, measurement unit: GB</p>
                     * @param _dBInstanceMemory <p>Memory size allocated to the instance, measurement unit: GB</p>
                     * 
                     */
                    void SetDBInstanceMemory(const uint64_t& _dBInstanceMemory);

                    /**
                     * 判断参数 DBInstanceMemory 是否已赋值
                     * @return DBInstanceMemory 是否已赋值
                     * 
                     */
                    bool DBInstanceMemoryHasBeenSet() const;

                    /**
                     * 获取<p>Storage space size allocated to the instance, measurement unit: GB</p>
                     * @return DBInstanceStorage <p>Storage space size allocated to the instance, measurement unit: GB</p>
                     * 
                     */
                    uint64_t GetDBInstanceStorage() const;

                    /**
                     * 设置<p>Storage space size allocated to the instance, measurement unit: GB</p>
                     * @param _dBInstanceStorage <p>Storage space size allocated to the instance, measurement unit: GB</p>
                     * 
                     */
                    void SetDBInstanceStorage(const uint64_t& _dBInstanceStorage);

                    /**
                     * 判断参数 DBInstanceStorage 是否已赋值
                     * @return DBInstanceStorage 是否已赋值
                     * 
                     */
                    bool DBInstanceStorageHasBeenSet() const;

                    /**
                     * 获取<p>Number of CPUs allocated to the instance, unit: piece</p>
                     * @return DBInstanceCpu <p>Number of CPUs allocated to the instance, unit: piece</p>
                     * 
                     */
                    uint64_t GetDBInstanceCpu() const;

                    /**
                     * 设置<p>Number of CPUs allocated to the instance, unit: piece</p>
                     * @param _dBInstanceCpu <p>Number of CPUs allocated to the instance, unit: piece</p>
                     * 
                     */
                    void SetDBInstanceCpu(const uint64_t& _dBInstanceCpu);

                    /**
                     * 判断参数 DBInstanceCpu 是否已赋值
                     * @return DBInstanceCpu 是否已赋值
                     * 
                     */
                    bool DBInstanceCpuHasBeenSet() const;

                    /**
                     * 获取<p>Purchasable specification ID.</p>
                     * @return DBInstanceClass <p>Purchasable specification ID.</p>
                     * 
                     */
                    std::string GetDBInstanceClass() const;

                    /**
                     * 设置<p>Purchasable specification ID.</p>
                     * @param _dBInstanceClass <p>Purchasable specification ID.</p>
                     * 
                     */
                    void SetDBInstanceClass(const std::string& _dBInstanceClass);

                    /**
                     * 判断参数 DBInstanceClass 是否已赋值
                     * @return DBInstanceClass 是否已赋值
                     * 
                     */
                    bool DBInstanceClassHasBeenSet() const;

                    /**
                     * 获取<p>PostgreSQL major version number. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>. Currently supports major versions 10, 11, 12, 13, 14, and 15.</p>
                     * @return DBMajorVersion <p>PostgreSQL major version number. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>. Currently supports major versions 10, 11, 12, 13, 14, and 15.</p>
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置<p>PostgreSQL major version number. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>. Currently supports major versions 10, 11, 12, 13, 14, and 15.</p>
                     * @param _dBMajorVersion <p>PostgreSQL major version number. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>. Currently supports major versions 10, 11, 12, 13, 14, and 15.</p>
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
                     * 获取<p>PostgreSQL community major version + minor version number, such as 12.4. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>.</p>
                     * @return DBVersion <p>PostgreSQL community major version + minor version number, such as 12.4. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>.</p>
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置<p>PostgreSQL community major version + minor version number, such as 12.4. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>.</p>
                     * @param _dBVersion <p>PostgreSQL community major version + minor version number, such as 12.4. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>.</p>
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取<p>PostgreSQL Kernel Version, for example v12.7_r1.8. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>.</p>
                     * @return DBKernelVersion <p>PostgreSQL Kernel Version, for example v12.7_r1.8. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>.</p>
                     * 
                     */
                    std::string GetDBKernelVersion() const;

                    /**
                     * 设置<p>PostgreSQL Kernel Version, for example v12.7_r1.8. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>.</p>
                     * @param _dBKernelVersion <p>PostgreSQL Kernel Version, for example v12.7_r1.8. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>.</p>
                     * 
                     */
                    void SetDBKernelVersion(const std::string& _dBKernelVersion);

                    /**
                     * 判断参数 DBKernelVersion 是否已赋值
                     * @return DBKernelVersion 是否已赋值
                     * 
                     */
                    bool DBKernelVersionHasBeenSet() const;

                    /**
                     * 获取<p>Instance types:</p><li>primary: Primary instance</li><li>readonly: Read-only instance</li><li>guard: Disaster recovery instance</li><li>temp: Temporary instance</li>
                     * @return DBInstanceType <p>Instance types:</p><li>primary: Primary instance</li><li>readonly: Read-only instance</li><li>guard: Disaster recovery instance</li><li>temp: Temporary instance</li>
                     * 
                     */
                    std::string GetDBInstanceType() const;

                    /**
                     * 设置<p>Instance types:</p><li>primary: Primary instance</li><li>readonly: Read-only instance</li><li>guard: Disaster recovery instance</li><li>temp: Temporary instance</li>
                     * @param _dBInstanceType <p>Instance types:</p><li>primary: Primary instance</li><li>readonly: Read-only instance</li><li>guard: Disaster recovery instance</li><li>temp: Temporary instance</li>
                     * 
                     */
                    void SetDBInstanceType(const std::string& _dBInstanceType);

                    /**
                     * 判断参数 DBInstanceType 是否已赋值
                     * @return DBInstanceType 是否已赋值
                     * 
                     */
                    bool DBInstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance version currently only supports standard (dual-server high-availability edition, one master and one slave).</p>
                     * @return DBInstanceVersion <p>Instance version currently only supports standard (dual-server high-availability edition, one master and one slave).</p>
                     * 
                     */
                    std::string GetDBInstanceVersion() const;

                    /**
                     * 设置<p>Instance version currently only supports standard (dual-server high-availability edition, one master and one slave).</p>
                     * @param _dBInstanceVersion <p>Instance version currently only supports standard (dual-server high-availability edition, one master and one slave).</p>
                     * 
                     */
                    void SetDBInstanceVersion(const std::string& _dBInstanceVersion);

                    /**
                     * 判断参数 DBInstanceVersion 是否已赋值
                     * @return DBInstanceVersion 是否已赋值
                     * 
                     */
                    bool DBInstanceVersionHasBeenSet() const;

                    /**
                     * 获取<p>Instance character set, which currently supports only:</p><li>UTF8</li><li>LATIN1</li>
                     * @return DBCharset <p>Instance character set, which currently supports only:</p><li>UTF8</li><li>LATIN1</li>
                     * 
                     */
                    std::string GetDBCharset() const;

                    /**
                     * 设置<p>Instance character set, which currently supports only:</p><li>UTF8</li><li>LATIN1</li>
                     * @param _dBCharset <p>Instance character set, which currently supports only:</p><li>UTF8</li><li>LATIN1</li>
                     * 
                     */
                    void SetDBCharset(const std::string& _dBCharset);

                    /**
                     * 判断参数 DBCharset 是否已赋值
                     * @return DBCharset 是否已赋值
                     * 
                     */
                    bool DBCharsetHasBeenSet() const;

                    /**
                     * 获取<p>Instance creation time.</p>
                     * @return CreateTime <p>Instance creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Instance creation time.</p>
                     * @param _createTime <p>Instance creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>The time when the instance executed the last update.</p>
                     * @return UpdateTime <p>The time when the instance executed the last update.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>The time when the instance executed the last update.</p>
                     * @param _updateTime <p>The time when the instance executed the last update.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Instance expiration time.</p>
                     * @return ExpireTime <p>Instance expiration time.</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>Instance expiration time.</p>
                     * @param _expireTime <p>Instance expiration time.</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>Instance isolation time.</p>
                     * @return IsolatedTime <p>Instance isolation time.</p>
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置<p>Instance isolation time.</p>
                     * @param _isolatedTime <p>Instance isolation time.</p>
                     * 
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>Billing mode:</p><li>prepaid: Yearly/monthly subscription, prepayment</li><li>postpaid: Pay-as-you-go, postpaid</li>
                     * @return PayType <p>Billing mode:</p><li>prepaid: Yearly/monthly subscription, prepayment</li><li>postpaid: Pay-as-you-go, postpaid</li>
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置<p>Billing mode:</p><li>prepaid: Yearly/monthly subscription, prepayment</li><li>postpaid: Pay-as-you-go, postpaid</li>
                     * @param _payType <p>Billing mode:</p><li>prepaid: Yearly/monthly subscription, prepayment</li><li>postpaid: Pay-as-you-go, postpaid</li>
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取<p>Auto-renewal or not:</p><li>0: Manual renewal</li><li>1: Auto renewal</li>Default value: 0
                     * @return AutoRenew <p>Auto-renewal or not:</p><li>0: Manual renewal</li><li>1: Auto renewal</li>Default value: 0
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置<p>Auto-renewal or not:</p><li>0: Manual renewal</li><li>1: Auto renewal</li>Default value: 0
                     * @param _autoRenew <p>Auto-renewal or not:</p><li>0: Manual renewal</li><li>1: Auto renewal</li>Default value: 0
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>Instance network connection information.</p>
                     * @return DBInstanceNetInfo <p>Instance network connection information.</p>
                     * 
                     */
                    std::vector<DBInstanceNetInfo> GetDBInstanceNetInfo() const;

                    /**
                     * 设置<p>Instance network connection information.</p>
                     * @param _dBInstanceNetInfo <p>Instance network connection information.</p>
                     * 
                     */
                    void SetDBInstanceNetInfo(const std::vector<DBInstanceNetInfo>& _dBInstanceNetInfo);

                    /**
                     * 判断参数 DBInstanceNetInfo 是否已赋值
                     * @return DBInstanceNetInfo 是否已赋值
                     * 
                     */
                    bool DBInstanceNetInfoHasBeenSet() const;

                    /**
                     * 获取<p>Machine type.</p>
                     * @return Type <p>Machine type.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Machine type.</p>
                     * @param _type <p>Machine type.</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>User's app id.</p>
                     * @return AppId <p>User's app id.</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>User's app id.</p>
                     * @param _appId <p>User's app id.</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Uid of the instance.</p>
                     * @return Uid <p>Uid of the instance.</p>
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置<p>Uid of the instance.</p>
                     * @param _uid <p>Uid of the instance.</p>
                     * 
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取<p>Project ID.</p>
                     * @return ProjectId <p>Project ID.</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID.</p>
                     * @param _projectId <p>Project ID.</p>
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Tag information associated with the instance.</p>
                     * @return TagList <p>Tag information associated with the instance.</p>
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置<p>Tag information associated with the instance.</p>
                     * @param _tagList <p>Tag information associated with the instance.</p>
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>Primary instance information. Returned only when the instance is a read-only instance.</p>
                     * @return MasterDBInstanceId <p>Primary instance information. Returned only when the instance is a read-only instance.</p>
                     * 
                     */
                    std::string GetMasterDBInstanceId() const;

                    /**
                     * 设置<p>Primary instance information. Returned only when the instance is a read-only instance.</p>
                     * @param _masterDBInstanceId <p>Primary instance information. Returned only when the instance is a read-only instance.</p>
                     * 
                     */
                    void SetMasterDBInstanceId(const std::string& _masterDBInstanceId);

                    /**
                     * 判断参数 MasterDBInstanceId 是否已赋值
                     * @return MasterDBInstanceId 是否已赋值
                     * 
                     */
                    bool MasterDBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of read-only instances.</p>
                     * @return ReadOnlyInstanceNum <p>Number of read-only instances.</p>
                     * 
                     */
                    int64_t GetReadOnlyInstanceNum() const;

                    /**
                     * 设置<p>Number of read-only instances.</p>
                     * @param _readOnlyInstanceNum <p>Number of read-only instances.</p>
                     * 
                     */
                    void SetReadOnlyInstanceNum(const int64_t& _readOnlyInstanceNum);

                    /**
                     * 判断参数 ReadOnlyInstanceNum 是否已赋值
                     * @return ReadOnlyInstanceNum 是否已赋值
                     * 
                     */
                    bool ReadOnlyInstanceNumHasBeenSet() const;

                    /**
                     * 获取<p>State of the read-only instance in the read-only group.</p>
                     * @return StatusInReadonlyGroup <p>State of the read-only instance in the read-only group.</p>
                     * 
                     */
                    std::string GetStatusInReadonlyGroup() const;

                    /**
                     * 设置<p>State of the read-only instance in the read-only group.</p>
                     * @param _statusInReadonlyGroup <p>State of the read-only instance in the read-only group.</p>
                     * 
                     */
                    void SetStatusInReadonlyGroup(const std::string& _statusInReadonlyGroup);

                    /**
                     * 判断参数 StatusInReadonlyGroup 是否已赋值
                     * @return StatusInReadonlyGroup 是否已赋值
                     * 
                     */
                    bool StatusInReadonlyGroupHasBeenSet() const;

                    /**
                     * 获取<p>Offline time.</p>
                     * @return OfflineTime <p>Offline time.</p>
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置<p>Offline time.</p>
                     * @param _offlineTime <p>Offline time.</p>
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取<p>Instance node information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DBNodeSet <p>Instance node information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DBNode> GetDBNodeSet() const;

                    /**
                     * 设置<p>Instance node information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dBNodeSet <p>Instance node information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBNodeSet(const std::vector<DBNode>& _dBNodeSet);

                    /**
                     * 判断参数 DBNodeSet 是否已赋值
                     * @return DBNodeSet 是否已赋值
                     * 
                     */
                    bool DBNodeSetHasBeenSet() const;

                    /**
                     * 获取<p>Whether the instance supports TDE data encryption:</p><li>0: Not supported</li><li>1: Supported</li>Default value: 0. For TDE data encryption, see [Overview of Data Transparent Encryption](https://www.tencentcloud.com/document/product/409/71748?from_cn_redirect=1).
                     * @return IsSupportTDE <p>Whether the instance supports TDE data encryption:</p><li>0: Not supported</li><li>1: Supported</li>Default value: 0. For TDE data encryption, see [Overview of Data Transparent Encryption](https://www.tencentcloud.com/document/product/409/71748?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetIsSupportTDE() const;

                    /**
                     * 设置<p>Whether the instance supports TDE data encryption:</p><li>0: Not supported</li><li>1: Supported</li>Default value: 0. For TDE data encryption, see [Overview of Data Transparent Encryption](https://www.tencentcloud.com/document/product/409/71748?from_cn_redirect=1).
                     * @param _isSupportTDE <p>Whether the instance supports TDE data encryption:</p><li>0: Not supported</li><li>1: Supported</li>Default value: 0. For TDE data encryption, see [Overview of Data Transparent Encryption](https://www.tencentcloud.com/document/product/409/71748?from_cn_redirect=1).
                     * 
                     */
                    void SetIsSupportTDE(const int64_t& _isSupportTDE);

                    /**
                     * 判断参数 IsSupportTDE 是否已赋值
                     * @return IsSupportTDE 是否已赋值
                     * 
                     */
                    bool IsSupportTDEHasBeenSet() const;

                    /**
                     * 获取<p>Database engine, support:</p><li>`postgresql`: TencentDB for PostgreSQL</li><li>`mssql_compatible`: MSSQL compatible - TencentDB for PostgreSQL</li>Default value: postgresql
                     * @return DBEngine <p>Database engine, support:</p><li>`postgresql`: TencentDB for PostgreSQL</li><li>`mssql_compatible`: MSSQL compatible - TencentDB for PostgreSQL</li>Default value: postgresql
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置<p>Database engine, support:</p><li>`postgresql`: TencentDB for PostgreSQL</li><li>`mssql_compatible`: MSSQL compatible - TencentDB for PostgreSQL</li>Default value: postgresql
                     * @param _dBEngine <p>Database engine, support:</p><li>`postgresql`: TencentDB for PostgreSQL</li><li>`mssql_compatible`: MSSQL compatible - TencentDB for PostgreSQL</li>Default value: postgresql
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
                     * 获取<p>Configuration information for the database engine. The configuration format is as follows:<br>{&quot;$key1&quot;:&quot;$value1&quot;, &quot;$key2&quot;:&quot;$value2&quot;}<br>Supported engines:<br>mssql_compatible engine:</p><li>migrationMode: Database schema, optional parameter. Valid values: single-db (single-database mode), multi-db (multi-database mode). Default is single-db.</li><li>defaultLocale: Sorting area rule, optional parameter, cannot be modified after initialization. Default is en_US. Valid values include: "af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN".</li><li>serverCollationName: Collation name, optional parameter, cannot be modified after initialization. Default is sql_latin1_general_cp1_ci_as. Valid values include: "bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as".</li>
                     * @return DBEngineConfig <p>Configuration information for the database engine. The configuration format is as follows:<br>{&quot;$key1&quot;:&quot;$value1&quot;, &quot;$key2&quot;:&quot;$value2&quot;}<br>Supported engines:<br>mssql_compatible engine:</p><li>migrationMode: Database schema, optional parameter. Valid values: single-db (single-database mode), multi-db (multi-database mode). Default is single-db.</li><li>defaultLocale: Sorting area rule, optional parameter, cannot be modified after initialization. Default is en_US. Valid values include: "af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN".</li><li>serverCollationName: Collation name, optional parameter, cannot be modified after initialization. Default is sql_latin1_general_cp1_ci_as. Valid values include: "bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as".</li>
                     * 
                     */
                    std::string GetDBEngineConfig() const;

                    /**
                     * 设置<p>Configuration information for the database engine. The configuration format is as follows:<br>{&quot;$key1&quot;:&quot;$value1&quot;, &quot;$key2&quot;:&quot;$value2&quot;}<br>Supported engines:<br>mssql_compatible engine:</p><li>migrationMode: Database schema, optional parameter. Valid values: single-db (single-database mode), multi-db (multi-database mode). Default is single-db.</li><li>defaultLocale: Sorting area rule, optional parameter, cannot be modified after initialization. Default is en_US. Valid values include: "af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN".</li><li>serverCollationName: Collation name, optional parameter, cannot be modified after initialization. Default is sql_latin1_general_cp1_ci_as. Valid values include: "bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as".</li>
                     * @param _dBEngineConfig <p>Configuration information for the database engine. The configuration format is as follows:<br>{&quot;$key1&quot;:&quot;$value1&quot;, &quot;$key2&quot;:&quot;$value2&quot;}<br>Supported engines:<br>mssql_compatible engine:</p><li>migrationMode: Database schema, optional parameter. Valid values: single-db (single-database mode), multi-db (multi-database mode). Default is single-db.</li><li>defaultLocale: Sorting area rule, optional parameter, cannot be modified after initialization. Default is en_US. Valid values include: "af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN".</li><li>serverCollationName: Collation name, optional parameter, cannot be modified after initialization. Default is sql_latin1_general_cp1_ci_as. Valid values include: "bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as".</li>
                     * 
                     */
                    void SetDBEngineConfig(const std::string& _dBEngineConfig);

                    /**
                     * 判断参数 DBEngineConfig 是否已赋值
                     * @return DBEngineConfig 是否已赋值
                     * 
                     */
                    bool DBEngineConfigHasBeenSet() const;

                    /**
                     * 获取<p>Instance network information list (deprecated)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetworkAccessList <p>Instance network information list (deprecated)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NetworkAccess> GetNetworkAccessList() const;

                    /**
                     * 设置<p>Instance network information list (deprecated)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _networkAccessList <p>Instance network information list (deprecated)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNetworkAccessList(const std::vector<NetworkAccess>& _networkAccessList);

                    /**
                     * 判断参数 NetworkAccessList 是否已赋值
                     * @return NetworkAccessList 是否已赋值
                     * 
                     */
                    bool NetworkAccessListHasBeenSet() const;

                    /**
                     * 获取<p>Whether the instance supports Ipv6:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     * @return SupportIpv6 <p>Whether the instance supports Ipv6:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     * 
                     */
                    uint64_t GetSupportIpv6() const;

                    /**
                     * 设置<p>Whether the instance supports Ipv6:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     * @param _supportIpv6 <p>Whether the instance supports Ipv6:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     * 
                     */
                    void SetSupportIpv6(const uint64_t& _supportIpv6);

                    /**
                     * 判断参数 SupportIpv6 是否已赋值
                     * @return SupportIpv6 是否已赋值
                     * 
                     */
                    bool SupportIpv6HasBeenSet() const;

                    /**
                     * 获取<p>Number of cpu cores that have been elastically scaled out for the instance</p>
                     * @return ExpandedCpu <p>Number of cpu cores that have been elastically scaled out for the instance</p>
                     * 
                     */
                    uint64_t GetExpandedCpu() const;

                    /**
                     * 设置<p>Number of cpu cores that have been elastically scaled out for the instance</p>
                     * @param _expandedCpu <p>Number of cpu cores that have been elastically scaled out for the instance</p>
                     * 
                     */
                    void SetExpandedCpu(const uint64_t& _expandedCpu);

                    /**
                     * 判断参数 ExpandedCpu 是否已赋值
                     * @return ExpandedCpu 是否已赋值
                     * 
                     */
                    bool ExpandedCpuHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable deletion protection for the instance, values as follows:</p><ul><li>true: enable deletion protection</li><li>false: disable deletion protection</li></ul>
                     * @return DeletionProtection <p>Whether to enable deletion protection for the instance, values as follows:</p><ul><li>true: enable deletion protection</li><li>false: disable deletion protection</li></ul>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>Whether to enable deletion protection for the instance, values as follows:</p><ul><li>true: enable deletion protection</li><li>false: disable deletion protection</li></ul>
                     * @param _deletionProtection <p>Whether to enable deletion protection for the instance, values as follows:</p><ul><li>true: enable deletion protection</li><li>false: disable deletion protection</li></ul>
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取<p>Instance storage type. Available values: PHYSICAL_LOCAL_SSD: LOCAL SSD hard disk of PHYSICAL machine; CLOUD_PREMIUM: high-performance CLOUD block storage; CLOUD_SSD: SSD CLOUD disk; CLOUD_HSSD: enhanced SSD CLOUD disk.</p>
                     * @return DBInstanceStorageType <p>Instance storage type. Available values: PHYSICAL_LOCAL_SSD: LOCAL SSD hard disk of PHYSICAL machine; CLOUD_PREMIUM: high-performance CLOUD block storage; CLOUD_SSD: SSD CLOUD disk; CLOUD_HSSD: enhanced SSD CLOUD disk.</p>
                     * 
                     */
                    std::string GetDBInstanceStorageType() const;

                    /**
                     * 设置<p>Instance storage type. Available values: PHYSICAL_LOCAL_SSD: LOCAL SSD hard disk of PHYSICAL machine; CLOUD_PREMIUM: high-performance CLOUD block storage; CLOUD_SSD: SSD CLOUD disk; CLOUD_HSSD: enhanced SSD CLOUD disk.</p>
                     * @param _dBInstanceStorageType <p>Instance storage type. Available values: PHYSICAL_LOCAL_SSD: LOCAL SSD hard disk of PHYSICAL machine; CLOUD_PREMIUM: high-performance CLOUD block storage; CLOUD_SSD: SSD CLOUD disk; CLOUD_HSSD: enhanced SSD CLOUD disk.</p>
                     * 
                     */
                    void SetDBInstanceStorageType(const std::string& _dBInstanceStorageType);

                    /**
                     * 判断参数 DBInstanceStorageType 是否已赋值
                     * @return DBInstanceStorageType 是否已赋值
                     * 
                     */
                    bool DBInstanceStorageTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Region of the instance, for example: ap-guangzhou, corresponds to the region field in RegionSet.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Availability zone to which the instance belongs, for example: ap-guangzhou-3, corresponds to the Zone field in ZoneSet.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>VPC ID, such as vpc-e6w23k31. A valid VPC ID can be obtained by logging in to the console to query or by calling the API <a href="https://www.tencentcloud.com/document/api/215/15778?from_cn_redirect=1">DescribeVpcs</a> and acquiring the unVpcId field in API return.</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>VPC subnet ID, such as subnet-51lcif9y. An effective VPC subnet ID can be obtained by logging in to the console to query. You can also call API <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> and get it from the unSubnetId field in API return.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_dBInstanceName;
                    bool m_dBInstanceNameHasBeenSet;

                    /**
                     * <p>Instance status, including: `applying` (applying), `init` (to be initialized), `initing` (initializing), `running` (running), `limited run` (restricted operation), `isolating` (isolating), `isolated` (isolated), `disisolating` (de-isolating), `recycling` (recycling), `recycled` (recycled), `job running` (task executing), `offline` (offline), `migrating` (migrating), `expanding` (scaling out), `waitSwitch` (waiting to switch), `switching` (switching), `readonly` (readonly), `restarting` (restarting), `network changing` (network modification in progress), `upgrading` (kernel version upgrading), `audit-switching` (audit status changing), `primary-switching` (primary-secondary switching), `offlining` (offline), `deployment changing` (modify AZ), `cloning` (recovering data), `parameter modifying` (parameter modification in progress), `log-switching` (log status change), `restoring` (recovering), and `expanding` (scaling out)</p>
                     */
                    std::string m_dBInstanceStatus;
                    bool m_dBInstanceStatusHasBeenSet;

                    /**
                     * <p>Memory size allocated to the instance, measurement unit: GB</p>
                     */
                    uint64_t m_dBInstanceMemory;
                    bool m_dBInstanceMemoryHasBeenSet;

                    /**
                     * <p>Storage space size allocated to the instance, measurement unit: GB</p>
                     */
                    uint64_t m_dBInstanceStorage;
                    bool m_dBInstanceStorageHasBeenSet;

                    /**
                     * <p>Number of CPUs allocated to the instance, unit: piece</p>
                     */
                    uint64_t m_dBInstanceCpu;
                    bool m_dBInstanceCpuHasBeenSet;

                    /**
                     * <p>Purchasable specification ID.</p>
                     */
                    std::string m_dBInstanceClass;
                    bool m_dBInstanceClassHasBeenSet;

                    /**
                     * <p>PostgreSQL major version number. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>. Currently supports major versions 10, 11, 12, 13, 14, and 15.</p>
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * <p>PostgreSQL community major version + minor version number, such as 12.4. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>.</p>
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * <p>PostgreSQL Kernel Version, for example v12.7_r1.8. Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>.</p>
                     */
                    std::string m_dBKernelVersion;
                    bool m_dBKernelVersionHasBeenSet;

                    /**
                     * <p>Instance types:</p><li>primary: Primary instance</li><li>readonly: Read-only instance</li><li>guard: Disaster recovery instance</li><li>temp: Temporary instance</li>
                     */
                    std::string m_dBInstanceType;
                    bool m_dBInstanceTypeHasBeenSet;

                    /**
                     * <p>Instance version currently only supports standard (dual-server high-availability edition, one master and one slave).</p>
                     */
                    std::string m_dBInstanceVersion;
                    bool m_dBInstanceVersionHasBeenSet;

                    /**
                     * <p>Instance character set, which currently supports only:</p><li>UTF8</li><li>LATIN1</li>
                     */
                    std::string m_dBCharset;
                    bool m_dBCharsetHasBeenSet;

                    /**
                     * <p>Instance creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>The time when the instance executed the last update.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Instance expiration time.</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>Instance isolation time.</p>
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * <p>Billing mode:</p><li>prepaid: Yearly/monthly subscription, prepayment</li><li>postpaid: Pay-as-you-go, postpaid</li>
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * <p>Auto-renewal or not:</p><li>0: Manual renewal</li><li>1: Auto renewal</li>Default value: 0
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>Instance network connection information.</p>
                     */
                    std::vector<DBInstanceNetInfo> m_dBInstanceNetInfo;
                    bool m_dBInstanceNetInfoHasBeenSet;

                    /**
                     * <p>Machine type.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>User's app id.</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Uid of the instance.</p>
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * <p>Project ID.</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Tag information associated with the instance.</p>
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>Primary instance information. Returned only when the instance is a read-only instance.</p>
                     */
                    std::string m_masterDBInstanceId;
                    bool m_masterDBInstanceIdHasBeenSet;

                    /**
                     * <p>Number of read-only instances.</p>
                     */
                    int64_t m_readOnlyInstanceNum;
                    bool m_readOnlyInstanceNumHasBeenSet;

                    /**
                     * <p>State of the read-only instance in the read-only group.</p>
                     */
                    std::string m_statusInReadonlyGroup;
                    bool m_statusInReadonlyGroupHasBeenSet;

                    /**
                     * <p>Offline time.</p>
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * <p>Instance node information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DBNode> m_dBNodeSet;
                    bool m_dBNodeSetHasBeenSet;

                    /**
                     * <p>Whether the instance supports TDE data encryption:</p><li>0: Not supported</li><li>1: Supported</li>Default value: 0. For TDE data encryption, see [Overview of Data Transparent Encryption](https://www.tencentcloud.com/document/product/409/71748?from_cn_redirect=1).
                     */
                    int64_t m_isSupportTDE;
                    bool m_isSupportTDEHasBeenSet;

                    /**
                     * <p>Database engine, support:</p><li>`postgresql`: TencentDB for PostgreSQL</li><li>`mssql_compatible`: MSSQL compatible - TencentDB for PostgreSQL</li>Default value: postgresql
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                    /**
                     * <p>Configuration information for the database engine. The configuration format is as follows:<br>{&quot;$key1&quot;:&quot;$value1&quot;, &quot;$key2&quot;:&quot;$value2&quot;}<br>Supported engines:<br>mssql_compatible engine:</p><li>migrationMode: Database schema, optional parameter. Valid values: single-db (single-database mode), multi-db (multi-database mode). Default is single-db.</li><li>defaultLocale: Sorting area rule, optional parameter, cannot be modified after initialization. Default is en_US. Valid values include: "af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN".</li><li>serverCollationName: Collation name, optional parameter, cannot be modified after initialization. Default is sql_latin1_general_cp1_ci_as. Valid values include: "bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as".</li>
                     */
                    std::string m_dBEngineConfig;
                    bool m_dBEngineConfigHasBeenSet;

                    /**
                     * <p>Instance network information list (deprecated)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NetworkAccess> m_networkAccessList;
                    bool m_networkAccessListHasBeenSet;

                    /**
                     * <p>Whether the instance supports Ipv6:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     */
                    uint64_t m_supportIpv6;
                    bool m_supportIpv6HasBeenSet;

                    /**
                     * <p>Number of cpu cores that have been elastically scaled out for the instance</p>
                     */
                    uint64_t m_expandedCpu;
                    bool m_expandedCpuHasBeenSet;

                    /**
                     * <p>Whether to enable deletion protection for the instance, values as follows:</p><ul><li>true: enable deletion protection</li><li>false: disable deletion protection</li></ul>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * <p>Instance storage type. Available values: PHYSICAL_LOCAL_SSD: LOCAL SSD hard disk of PHYSICAL machine; CLOUD_PREMIUM: high-performance CLOUD block storage; CLOUD_SSD: SSD CLOUD disk; CLOUD_HSSD: enhanced SSD CLOUD disk.</p>
                     */
                    std::string m_dBInstanceStorageType;
                    bool m_dBInstanceStorageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCE_H_
