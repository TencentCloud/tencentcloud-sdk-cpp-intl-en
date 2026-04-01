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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DBNode.h>
#include <tencentcloud/postgres/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateInstances request structure.
                */
                class CreateInstancesRequest : public AbstractModel
                {
                public:
                    CreateInstancesRequest();
                    ~CreateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>The primary availability zone of the instance, for example: ap-guangzhou-3. If needed to support multiple AZs, add primary and secondary AZ information in the DBNodeSet.N field.<br>AZ information can be obtained by calling the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> api and checking the Zone field in the returned value.</p>
                     * @return Zone <p>The primary availability zone of the instance, for example: ap-guangzhou-3. If needed to support multiple AZs, add primary and secondary AZ information in the DBNodeSet.N field.<br>AZ information can be obtained by calling the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> api and checking the Zone field in the returned value.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>The primary availability zone of the instance, for example: ap-guangzhou-3. If needed to support multiple AZs, add primary and secondary AZ information in the DBNodeSet.N field.<br>AZ information can be obtained by calling the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> api and checking the Zone field in the returned value.</p>
                     * @param _zone <p>The primary availability zone of the instance, for example: ap-guangzhou-3. If needed to support multiple AZs, add primary and secondary AZ information in the DBNodeSet.N field.<br>AZ information can be obtained by calling the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> api and checking the Zone field in the returned value.</p>
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
                     * 获取<p>Purchasable specification code. Obtain this parameter by calling the `SpecCode` field in the return value of <a href="https://www.tencentcloud.com/document/api/409/89019?from_cn_redirect=1">DescribeClasses</a>.</p>
                     * @return SpecCode <p>Purchasable specification code. Obtain this parameter by calling the `SpecCode` field in the return value of <a href="https://www.tencentcloud.com/document/api/409/89019?from_cn_redirect=1">DescribeClasses</a>.</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>Purchasable specification code. Obtain this parameter by calling the `SpecCode` field in the return value of <a href="https://www.tencentcloud.com/document/api/409/89019?from_cn_redirect=1">DescribeClasses</a>.</p>
                     * @param _specCode <p>Purchasable specification code. Obtain this parameter by calling the `SpecCode` field in the return value of <a href="https://www.tencentcloud.com/document/api/409/89019?from_cn_redirect=1">DescribeClasses</a>.</p>
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
                     * 获取<p>Instance disk capacity size, unit: GB. The step length for parameter settings is 10.</p>
                     * @return Storage <p>Instance disk capacity size, unit: GB. The step length for parameter settings is 10.</p>
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置<p>Instance disk capacity size, unit: GB. The step length for parameter settings is 10.</p>
                     * @param _storage <p>Instance disk capacity size, unit: GB. The step length for parameter settings is 10.</p>
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
                     * 获取<p>Number of instances to purchase, value ranges from 1 to 10. Single transaction supports a maximum quantity of 10. If exceeding this quantity, multiple calls can be performed to purchase.</p>
                     * @return InstanceCount <p>Number of instances to purchase, value ranges from 1 to 10. Single transaction supports a maximum quantity of 10. If exceeding this quantity, multiple calls can be performed to purchase.</p>
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置<p>Number of instances to purchase, value ranges from 1 to 10. Single transaction supports a maximum quantity of 10. If exceeding this quantity, multiple calls can be performed to purchase.</p>
                     * @param _instanceCount <p>Number of instances to purchase, value ranges from 1 to 10. Single transaction supports a maximum quantity of 10. If exceeding this quantity, multiple calls can be performed to purchase.</p>
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
                     * 获取<p>Purchase duration, unit: month.</p><li>Prepaid: Supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li><li>Postpaid: Supports only `1`.</li>
                     * @return Period <p>Purchase duration, unit: month.</p><li>Prepaid: Supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li><li>Postpaid: Supports only `1`.</li>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>Purchase duration, unit: month.</p><li>Prepaid: Supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li><li>Postpaid: Supports only `1`.</li>
                     * @param _period <p>Purchase duration, unit: month.</p><li>Prepaid: Supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li><li>Postpaid: Supports only `1`.</li>
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
                     * 获取<p>Instance character set, which currently supports only:</p><li>UTF8</li><li>LATIN1</li>
                     * @return Charset <p>Instance character set, which currently supports only:</p><li>UTF8</li><li>LATIN1</li>
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置<p>Instance character set, which currently supports only:</p><li>UTF8</li><li>LATIN1</li>
                     * @param _charset <p>Instance character set, which currently supports only:</p><li>UTF8</li><li>LATIN1</li>
                     * 
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     * 
                     */
                    bool CharsetHasBeenSet() const;

                    /**
                     * 获取<p>Username of the instance root account. Specific specifications are as follows:</p><li>The username must consist of 1-16 characters, which can only be letters, digits, or underscores.</li><li>Cannot be postgres.</li><li>Cannot begin with digits or pg_.</li><li>All rules are case-insensitive.</li>
                     * @return AdminName <p>Username of the instance root account. Specific specifications are as follows:</p><li>The username must consist of 1-16 characters, which can only be letters, digits, or underscores.</li><li>Cannot be postgres.</li><li>Cannot begin with digits or pg_.</li><li>All rules are case-insensitive.</li>
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置<p>Username of the instance root account. Specific specifications are as follows:</p><li>The username must consist of 1-16 characters, which can only be letters, digits, or underscores.</li><li>Cannot be postgres.</li><li>Cannot begin with digits or pg_.</li><li>All rules are case-insensitive.</li>
                     * @param _adminName <p>Username of the instance root account. Specific specifications are as follows:</p><li>The username must consist of 1-16 characters, which can only be letters, digits, or underscores.</li><li>Cannot be postgres.</li><li>Cannot begin with digits or pg_.</li><li>All rules are case-insensitive.</li>
                     * 
                     */
                    void SetAdminName(const std::string& _adminName);

                    /**
                     * 判断参数 AdminName 是否已赋值
                     * @return AdminName 是否已赋值
                     * 
                     */
                    bool AdminNameHasBeenSet() const;

                    /**
                     * 获取<p>Password for the instance root account username, with a length of 8-32 characters. It is recommended to use a password of more than 12 characters and it cannot start with "/".<br>Must contain the following four character types:</p><li>Lowercase letter: [a-z]</li><li>Uppercase letter: [a-z]</li><li>Number: 0-9</li><li>Special character: ()`~!@#$%^&*-+=_|{}[]:;'<>,.?/</li>
                     * @return AdminPassword <p>Password for the instance root account username, with a length of 8-32 characters. It is recommended to use a password of more than 12 characters and it cannot start with "/".<br>Must contain the following four character types:</p><li>Lowercase letter: [a-z]</li><li>Uppercase letter: [a-z]</li><li>Number: 0-9</li><li>Special character: ()`~!@#$%^&*-+=_|{}[]:;'<>,.?/</li>
                     * 
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置<p>Password for the instance root account username, with a length of 8-32 characters. It is recommended to use a password of more than 12 characters and it cannot start with "/".<br>Must contain the following four character types:</p><li>Lowercase letter: [a-z]</li><li>Uppercase letter: [a-z]</li><li>Number: 0-9</li><li>Special character: ()`~!@#$%^&*-+=_|{}[]:;'<>,.?/</li>
                     * @param _adminPassword <p>Password for the instance root account username, with a length of 8-32 characters. It is recommended to use a password of more than 12 characters and it cannot start with "/".<br>Must contain the following four character types:</p><li>Lowercase letter: [a-z]</li><li>Uppercase letter: [a-z]</li><li>Number: 0-9</li><li>Special character: ()`~!@#$%^&*-+=_|{}[]:;'<>,.?/</li>
                     * 
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     * 
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取<p>PostgreSQL major version number (this parameter is currently required). Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>. Currently supports major versions 10, 11, 12, 13, 14, and 15. For details, see <a href="https://www.tencentcloud.com/document/product/409/67018?from_cn_redirect=1">kernel version overview</a>.<br>When this parameter is entered, an instance running the latest kernel version of the latest minor version will be created based on this major version number.</p>
                     * @return DBMajorVersion <p>PostgreSQL major version number (this parameter is currently required). Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>. Currently supports major versions 10, 11, 12, 13, 14, and 15. For details, see <a href="https://www.tencentcloud.com/document/product/409/67018?from_cn_redirect=1">kernel version overview</a>.<br>When this parameter is entered, an instance running the latest kernel version of the latest minor version will be created based on this major version number.</p>
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置<p>PostgreSQL major version number (this parameter is currently required). Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>. Currently supports major versions 10, 11, 12, 13, 14, and 15. For details, see <a href="https://www.tencentcloud.com/document/product/409/67018?from_cn_redirect=1">kernel version overview</a>.<br>When this parameter is entered, an instance running the latest kernel version of the latest minor version will be created based on this major version number.</p>
                     * @param _dBMajorVersion <p>PostgreSQL major version number (this parameter is currently required). Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>. Currently supports major versions 10, 11, 12, 13, 14, and 15. For details, see <a href="https://www.tencentcloud.com/document/product/409/67018?from_cn_redirect=1">kernel version overview</a>.<br>When this parameter is entered, an instance running the latest kernel version of the latest minor version will be created based on this major version number.</p>
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
                     * 获取<p>PostgreSQL community major version + minor version number.<br>It's generally not recommended to pass in this parameter. If needed, only the latest minor version number under the current major version can be passed.</p>
                     * @return DBVersion <p>PostgreSQL community major version + minor version number.<br>It's generally not recommended to pass in this parameter. If needed, only the latest minor version number under the current major version can be passed.</p>
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置<p>PostgreSQL community major version + minor version number.<br>It's generally not recommended to pass in this parameter. If needed, only the latest minor version number under the current major version can be passed.</p>
                     * @param _dBVersion <p>PostgreSQL community major version + minor version number.<br>It's generally not recommended to pass in this parameter. If needed, only the latest minor version number under the current major version can be passed.</p>
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
                     * 获取<p>PostgreSQL kernel version number.<br>It's generally not recommended to pass in this parameter. If needed, only the latest kernel version number under the current major version can be passed.</p>
                     * @return DBKernelVersion <p>PostgreSQL kernel version number.<br>It's generally not recommended to pass in this parameter. If needed, only the latest kernel version number under the current major version can be passed.</p>
                     * 
                     */
                    std::string GetDBKernelVersion() const;

                    /**
                     * 设置<p>PostgreSQL kernel version number.<br>It's generally not recommended to pass in this parameter. If needed, only the latest kernel version number under the current major version can be passed.</p>
                     * @param _dBKernelVersion <p>PostgreSQL kernel version number.<br>It's generally not recommended to pass in this parameter. If needed, only the latest kernel version number under the current major version can be passed.</p>
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
                     * 获取<p>Instance billing type. Currently supports:</p><li>PREPAID: Prepayment, i.e., yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: Postpaid, i.e., pay-as-you-go</li>Default value: PREPAID
                     * @return InstanceChargeType <p>Instance billing type. Currently supports:</p><li>PREPAID: Prepayment, i.e., yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: Postpaid, i.e., pay-as-you-go</li>Default value: PREPAID
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Instance billing type. Currently supports:</p><li>PREPAID: Prepayment, i.e., yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: Postpaid, i.e., pay-as-you-go</li>Default value: PREPAID
                     * @param _instanceChargeType <p>Instance billing type. Currently supports:</p><li>PREPAID: Prepayment, i.e., yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: Postpaid, i.e., pay-as-you-go</li>Default value: PREPAID
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
                     * 获取<p>VPC ID, such as vpc-xxxxxxxx (this parameter is currently required). A valid VPC ID can be obtained by logging in to the console to query or by calling the API <a href="https://www.tencentcloud.com/document/api/215/1372?from_cn_redirect=1">DescribeVpcEx</a> and acquiring the unVpcId field in the API return.</p>
                     * @return VpcId <p>VPC ID, such as vpc-xxxxxxxx (this parameter is currently required). A valid VPC ID can be obtained by logging in to the console to query or by calling the API <a href="https://www.tencentcloud.com/document/api/215/1372?from_cn_redirect=1">DescribeVpcEx</a> and acquiring the unVpcId field in the API return.</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID, such as vpc-xxxxxxxx (this parameter is currently required). A valid VPC ID can be obtained by logging in to the console to query or by calling the API <a href="https://www.tencentcloud.com/document/api/215/1372?from_cn_redirect=1">DescribeVpcEx</a> and acquiring the unVpcId field in the API return.</p>
                     * @param _vpcId <p>VPC ID, such as vpc-xxxxxxxx (this parameter is currently required). A valid VPC ID can be obtained by logging in to the console to query or by calling the API <a href="https://www.tencentcloud.com/document/api/215/1372?from_cn_redirect=1">DescribeVpcEx</a> and acquiring the unVpcId field in the API return.</p>
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
                     * 获取<p>VPC subnet ID, such as subnet-xxxxxxxx (this parameter is currently required). Effective VPC subnet IDs can be queried by logging in to the console or by calling the API <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> and acquiring the unSubnetId field in the API return.</p>
                     * @return SubnetId <p>VPC subnet ID, such as subnet-xxxxxxxx (this parameter is currently required). Effective VPC subnet IDs can be queried by logging in to the console or by calling the API <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> and acquiring the unSubnetId field in the API return.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>VPC subnet ID, such as subnet-xxxxxxxx (this parameter is currently required). Effective VPC subnet IDs can be queried by logging in to the console or by calling the API <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> and acquiring the unSubnetId field in the API return.</p>
                     * @param _subnetId <p>VPC subnet ID, such as subnet-xxxxxxxx (this parameter is currently required). Effective VPC subnet IDs can be queried by logging in to the console or by calling the API <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> and acquiring the unSubnetId field in the API return.</p>
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
                     * 获取<p>Instance node deployment information. When multi-availability zone deployment is supported, it requires specifying the AZ information for each node.<br>AZ information can be obtained from the Zone field in the returned value by calling the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * @return DBNodeSet <p>Instance node deployment information. When multi-availability zone deployment is supported, it requires specifying the AZ information for each node.<br>AZ information can be obtained from the Zone field in the returned value by calling the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * 
                     */
                    std::vector<DBNode> GetDBNodeSet() const;

                    /**
                     * 设置<p>Instance node deployment information. When multi-availability zone deployment is supported, it requires specifying the AZ information for each node.<br>AZ information can be obtained from the Zone field in the returned value by calling the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     * @param _dBNodeSet <p>Instance node deployment information. When multi-availability zone deployment is supported, it requires specifying the AZ information for each node.<br>AZ information can be obtained from the Zone field in the returned value by calling the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
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
                     * 获取<p>Auto-renewal flag:</p><li>0: Manual renewal</li><li>1: Auto renewal</li>Default value: 0
                     * @return AutoRenewFlag <p>Auto-renewal flag:</p><li>0: Manual renewal</li><li>1: Auto renewal</li>Default value: 0
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>Auto-renewal flag:</p><li>0: Manual renewal</li><li>1: Auto renewal</li>Default value: 0
                     * @param _autoRenewFlag <p>Auto-renewal flag:</p><li>0: Manual renewal</li><li>1: Auto renewal</li>Default value: 0
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>Whether to automatically use a voucher:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     * @return AutoVoucher <p>Whether to automatically use a voucher:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     * 
                     */
                    uint64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>Whether to automatically use a voucher:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     * @param _autoVoucher <p>Whether to automatically use a voucher:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     * 
                     */
                    void SetAutoVoucher(const uint64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>Voucher ID list. Currently only support specifying one voucher.</p>
                     * @return VoucherIds <p>Voucher ID list. Currently only support specifying one voucher.</p>
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置<p>Voucher ID list. Currently only support specifying one voucher.</p>
                     * @param _voucherIds <p>Voucher ID list. Currently only support specifying one voucher.</p>
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取<p>Project ID. The default value is 0, which means it belongs to the default project.</p>
                     * @return ProjectId <p>Project ID. The default value is 0, which means it belongs to the default project.</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID. The default value is 0, which means it belongs to the default project.</p>
                     * @param _projectId <p>Project ID. The default value is 0, which means it belongs to the default project.</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Activity ID.</p>
                     * @return ActivityId <p>Activity ID.</p>
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置<p>Activity ID.</p>
                     * @param _activityId <p>Activity ID.</p>
                     * 
                     */
                    void SetActivityId(const int64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance name only supports Chinese/English/number/"_"/"-" with length less than 60. If no instance name is specified, "unnamed" is displayed by default.</p>
                     * @return Name <p>Instance name only supports Chinese/English/number/"_"/"-" with length less than 60. If no instance name is specified, "unnamed" is displayed by default.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Instance name only supports Chinese/English/number/"_"/"-" with length less than 60. If no instance name is specified, "unnamed" is displayed by default.</p>
                     * @param _name <p>Instance name only supports Chinese/English/number/"_"/"-" with length less than 60. If no instance name is specified, "unnamed" is displayed by default.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Tag information that should be bound to the instance is empty by default. You can get it by calling <a href="https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1">DescribeTags</a> and checking the Tags field in the return value.</p>
                     * @return TagList <p>Tag information that should be bound to the instance is empty by default. You can get it by calling <a href="https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1">DescribeTags</a> and checking the Tags field in the return value.</p>
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置<p>Tag information that should be bound to the instance is empty by default. You can get it by calling <a href="https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1">DescribeTags</a> and checking the Tags field in the return value.</p>
                     * @param _tagList <p>Tag information that should be bound to the instance is empty by default. You can get it by calling <a href="https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1">DescribeTags</a> and checking the Tags field in the return value.</p>
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
                     * 获取<p>Security group to which an instance belongs. Obtain this parameter by calling the sgId field in the returned value of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>. If not specified, the default security group is bound.</p>
                     * @return SecurityGroupIds <p>Security group to which an instance belongs. Obtain this parameter by calling the sgId field in the returned value of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>. If not specified, the default security group is bound.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>Security group to which an instance belongs. Obtain this parameter by calling the sgId field in the returned value of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>. If not specified, the default security group is bound.</p>
                     * @param _securityGroupIds <p>Security group to which an instance belongs. Obtain this parameter by calling the sgId field in the returned value of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>. If not specified, the default security group is bound.</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>Whether data transparent encryption is required:</p><li>0: No</li><li>1: Yes</li>Default value: 0. See [Overview of Data Transparent Encryption](https://www.tencentcloud.com/document/product/409/71748?from_cn_redirect=1).
                     * @return NeedSupportTDE <p>Whether data transparent encryption is required:</p><li>0: No</li><li>1: Yes</li>Default value: 0. See [Overview of Data Transparent Encryption](https://www.tencentcloud.com/document/product/409/71748?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetNeedSupportTDE() const;

                    /**
                     * 设置<p>Whether data transparent encryption is required:</p><li>0: No</li><li>1: Yes</li>Default value: 0. See [Overview of Data Transparent Encryption](https://www.tencentcloud.com/document/product/409/71748?from_cn_redirect=1).
                     * @param _needSupportTDE <p>Whether data transparent encryption is required:</p><li>0: No</li><li>1: Yes</li>Default value: 0. See [Overview of Data Transparent Encryption](https://www.tencentcloud.com/document/product/409/71748?from_cn_redirect=1).
                     * 
                     */
                    void SetNeedSupportTDE(const uint64_t& _needSupportTDE);

                    /**
                     * 判断参数 NeedSupportTDE 是否已赋值
                     * @return NeedSupportTDE 是否已赋值
                     * 
                     */
                    bool NeedSupportTDEHasBeenSet() const;

                    /**
                     * 获取<p>The KeyId of the custom key. If you select custom key encryption, you need to input the KeyId of the custom key. KeyId is the unique identifier of CMK.<br>For related reference on KeyId creation and retrieval, see <a href="https://www.tencentcloud.com/document/product/409/71749?from_cn_redirect=1">Enable Transparent Data Encryption</a></p>
                     * @return KMSKeyId <p>The KeyId of the custom key. If you select custom key encryption, you need to input the KeyId of the custom key. KeyId is the unique identifier of CMK.<br>For related reference on KeyId creation and retrieval, see <a href="https://www.tencentcloud.com/document/product/409/71749?from_cn_redirect=1">Enable Transparent Data Encryption</a></p>
                     * 
                     */
                    std::string GetKMSKeyId() const;

                    /**
                     * 设置<p>The KeyId of the custom key. If you select custom key encryption, you need to input the KeyId of the custom key. KeyId is the unique identifier of CMK.<br>For related reference on KeyId creation and retrieval, see <a href="https://www.tencentcloud.com/document/product/409/71749?from_cn_redirect=1">Enable Transparent Data Encryption</a></p>
                     * @param _kMSKeyId <p>The KeyId of the custom key. If you select custom key encryption, you need to input the KeyId of the custom key. KeyId is the unique identifier of CMK.<br>For related reference on KeyId creation and retrieval, see <a href="https://www.tencentcloud.com/document/product/409/71749?from_cn_redirect=1">Enable Transparent Data Encryption</a></p>
                     * 
                     */
                    void SetKMSKeyId(const std::string& _kMSKeyId);

                    /**
                     * 判断参数 KMSKeyId 是否已赋值
                     * @return KMSKeyId 是否已赋值
                     * 
                     */
                    bool KMSKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>For regions using the KMS service, KMSRegion is empty by default and the local region KMS is used. If the local region is not supported, select another KMS supported region.<br>For details about KMSRegion, see <a href="https://www.tencentcloud.com/document/product/409/71749?from_cn_redirect=1">enable transparent data encryption</a></p>
                     * @return KMSRegion <p>For regions using the KMS service, KMSRegion is empty by default and the local region KMS is used. If the local region is not supported, select another KMS supported region.<br>For details about KMSRegion, see <a href="https://www.tencentcloud.com/document/product/409/71749?from_cn_redirect=1">enable transparent data encryption</a></p>
                     * 
                     */
                    std::string GetKMSRegion() const;

                    /**
                     * 设置<p>For regions using the KMS service, KMSRegion is empty by default and the local region KMS is used. If the local region is not supported, select another KMS supported region.<br>For details about KMSRegion, see <a href="https://www.tencentcloud.com/document/product/409/71749?from_cn_redirect=1">enable transparent data encryption</a></p>
                     * @param _kMSRegion <p>For regions using the KMS service, KMSRegion is empty by default and the local region KMS is used. If the local region is not supported, select another KMS supported region.<br>For details about KMSRegion, see <a href="https://www.tencentcloud.com/document/product/409/71749?from_cn_redirect=1">enable transparent data encryption</a></p>
                     * 
                     */
                    void SetKMSRegion(const std::string& _kMSRegion);

                    /**
                     * 判断参数 KMSRegion 是否已赋值
                     * @return KMSRegion 是否已赋值
                     * 
                     */
                    bool KMSRegionHasBeenSet() const;

                    /**
                     * 获取<p>Designate the service cluster for KMS. If KMSClusterId is empty, use the KMS of the Default Cluster. To select the specified KMS cluster, require the input of KMSClusterId. For details about KMSClusterId, see enable transparent data encryption.</p>
                     * @return KMSClusterId <p>Designate the service cluster for KMS. If KMSClusterId is empty, use the KMS of the Default Cluster. To select the specified KMS cluster, require the input of KMSClusterId. For details about KMSClusterId, see enable transparent data encryption.</p>
                     * 
                     */
                    std::string GetKMSClusterId() const;

                    /**
                     * 设置<p>Designate the service cluster for KMS. If KMSClusterId is empty, use the KMS of the Default Cluster. To select the specified KMS cluster, require the input of KMSClusterId. For details about KMSClusterId, see enable transparent data encryption.</p>
                     * @param _kMSClusterId <p>Designate the service cluster for KMS. If KMSClusterId is empty, use the KMS of the Default Cluster. To select the specified KMS cluster, require the input of KMSClusterId. For details about KMSClusterId, see enable transparent data encryption.</p>
                     * 
                     */
                    void SetKMSClusterId(const std::string& _kMSClusterId);

                    /**
                     * 判断参数 KMSClusterId 是否已赋值
                     * @return KMSClusterId 是否已赋值
                     * 
                     */
                    bool KMSClusterIdHasBeenSet() const;

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
                     * 获取<p>Primary-standby sync mode, supports: </p><li>Semi-sync: semi-synchronous</li><li>Async: asynchronous</li>Default value for the primary instance: Semi-syncDefault value for the read-only instance: Async
                     * @return SyncMode <p>Primary-standby sync mode, supports: </p><li>Semi-sync: semi-synchronous</li><li>Async: asynchronous</li>Default value for the primary instance: Semi-syncDefault value for the read-only instance: Async
                     * 
                     */
                    std::string GetSyncMode() const;

                    /**
                     * 设置<p>Primary-standby sync mode, supports: </p><li>Semi-sync: semi-synchronous</li><li>Async: asynchronous</li>Default value for the primary instance: Semi-syncDefault value for the read-only instance: Async
                     * @param _syncMode <p>Primary-standby sync mode, supports: </p><li>Semi-sync: semi-synchronous</li><li>Async: asynchronous</li>Default value for the primary instance: Semi-syncDefault value for the read-only instance: Async
                     * 
                     */
                    void SetSyncMode(const std::string& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                    /**
                     * 获取<p>Whether required to support Ipv6:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     * @return NeedSupportIpv6 <p>Whether required to support Ipv6:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     * 
                     */
                    uint64_t GetNeedSupportIpv6() const;

                    /**
                     * 设置<p>Whether required to support Ipv6:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     * @param _needSupportIpv6 <p>Whether required to support Ipv6:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     * 
                     */
                    void SetNeedSupportIpv6(const uint64_t& _needSupportIpv6);

                    /**
                     * 判断参数 NeedSupportIpv6 是否已赋值
                     * @return NeedSupportIpv6 是否已赋值
                     * 
                     */
                    bool NeedSupportIpv6HasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable deletion protection for the instance: true-enable deletion protection; false-disable deletion protection.</p>
                     * @return DeletionProtection <p>Whether to enable deletion protection for the instance: true-enable deletion protection; false-disable deletion protection.</p>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>Whether to enable deletion protection for the instance: true-enable deletion protection; false-disable deletion protection.</p>
                     * @param _deletionProtection <p>Whether to enable deletion protection for the instance: true-enable deletion protection; false-disable deletion protection.</p>
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
                     * @return StorageType <p>Instance storage type. Available values: PHYSICAL_LOCAL_SSD: LOCAL SSD hard disk of PHYSICAL machine; CLOUD_PREMIUM: high-performance CLOUD block storage; CLOUD_SSD: SSD CLOUD disk; CLOUD_HSSD: enhanced SSD CLOUD disk.</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Instance storage type. Available values: PHYSICAL_LOCAL_SSD: LOCAL SSD hard disk of PHYSICAL machine; CLOUD_PREMIUM: high-performance CLOUD block storage; CLOUD_SSD: SSD CLOUD disk; CLOUD_HSSD: enhanced SSD CLOUD disk.</p>
                     * @param _storageType <p>Instance storage type. Available values: PHYSICAL_LOCAL_SSD: LOCAL SSD hard disk of PHYSICAL machine; CLOUD_PREMIUM: high-performance CLOUD block storage; CLOUD_SSD: SSD CLOUD disk; CLOUD_HSSD: enhanced SSD CLOUD disk.</p>
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
                     * <p>The primary availability zone of the instance, for example: ap-guangzhou-3. If needed to support multiple AZs, add primary and secondary AZ information in the DBNodeSet.N field.<br>AZ information can be obtained by calling the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> api and checking the Zone field in the returned value.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Purchasable specification code. Obtain this parameter by calling the `SpecCode` field in the return value of <a href="https://www.tencentcloud.com/document/api/409/89019?from_cn_redirect=1">DescribeClasses</a>.</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>Instance disk capacity size, unit: GB. The step length for parameter settings is 10.</p>
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>Number of instances to purchase, value ranges from 1 to 10. Single transaction supports a maximum quantity of 10. If exceeding this quantity, multiple calls can be performed to purchase.</p>
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>Purchase duration, unit: month.</p><li>Prepaid: Supports `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, and `36`.</li><li>Postpaid: Supports only `1`.</li>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Instance character set, which currently supports only:</p><li>UTF8</li><li>LATIN1</li>
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * <p>Username of the instance root account. Specific specifications are as follows:</p><li>The username must consist of 1-16 characters, which can only be letters, digits, or underscores.</li><li>Cannot be postgres.</li><li>Cannot begin with digits or pg_.</li><li>All rules are case-insensitive.</li>
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * <p>Password for the instance root account username, with a length of 8-32 characters. It is recommended to use a password of more than 12 characters and it cannot start with "/".<br>Must contain the following four character types:</p><li>Lowercase letter: [a-z]</li><li>Uppercase letter: [a-z]</li><li>Number: 0-9</li><li>Special character: ()`~!@#$%^&*-+=_|{}[]:;'<>,.?/</li>
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * <p>PostgreSQL major version number (this parameter is currently required). Version information can be obtained from <a href="https://www.tencentcloud.com/document/api/409/89018?from_cn_redirect=1">DescribeDBVersions</a>. Currently supports major versions 10, 11, 12, 13, 14, and 15. For details, see <a href="https://www.tencentcloud.com/document/product/409/67018?from_cn_redirect=1">kernel version overview</a>.<br>When this parameter is entered, an instance running the latest kernel version of the latest minor version will be created based on this major version number.</p>
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * <p>PostgreSQL community major version + minor version number.<br>It's generally not recommended to pass in this parameter. If needed, only the latest minor version number under the current major version can be passed.</p>
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * <p>PostgreSQL kernel version number.<br>It's generally not recommended to pass in this parameter. If needed, only the latest kernel version number under the current major version can be passed.</p>
                     */
                    std::string m_dBKernelVersion;
                    bool m_dBKernelVersionHasBeenSet;

                    /**
                     * <p>Instance billing type. Currently supports:</p><li>PREPAID: Prepayment, i.e., yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: Postpaid, i.e., pay-as-you-go</li>Default value: PREPAID
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>VPC ID, such as vpc-xxxxxxxx (this parameter is currently required). A valid VPC ID can be obtained by logging in to the console to query or by calling the API <a href="https://www.tencentcloud.com/document/api/215/1372?from_cn_redirect=1">DescribeVpcEx</a> and acquiring the unVpcId field in the API return.</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>VPC subnet ID, such as subnet-xxxxxxxx (this parameter is currently required). Effective VPC subnet IDs can be queried by logging in to the console or by calling the API <a href="https://www.tencentcloud.com/document/api/215/15784?from_cn_redirect=1">DescribeSubnets</a> and acquiring the unSubnetId field in the API return.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Instance node deployment information. When multi-availability zone deployment is supported, it requires specifying the AZ information for each node.<br>AZ information can be obtained from the Zone field in the returned value by calling the <a href="https://www.tencentcloud.com/document/api/409/16769?from_cn_redirect=1">DescribeZones</a> API.</p>
                     */
                    std::vector<DBNode> m_dBNodeSet;
                    bool m_dBNodeSetHasBeenSet;

                    /**
                     * <p>Auto-renewal flag:</p><li>0: Manual renewal</li><li>1: Auto renewal</li>Default value: 0
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>Whether to automatically use a voucher:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     */
                    uint64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>Voucher ID list. Currently only support specifying one voucher.</p>
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * <p>Project ID. The default value is 0, which means it belongs to the default project.</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Activity ID.</p>
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * <p>Instance name only supports Chinese/English/number/"_"/"-" with length less than 60. If no instance name is specified, "unnamed" is displayed by default.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Tag information that should be bound to the instance is empty by default. You can get it by calling <a href="https://www.tencentcloud.com/document/api/651/35316?from_cn_redirect=1">DescribeTags</a> and checking the Tags field in the return value.</p>
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>Security group to which an instance belongs. Obtain this parameter by calling the sgId field in the returned value of <a href="https://www.tencentcloud.com/document/api/215/15808?from_cn_redirect=1">DescribeSecurityGroups</a>. If not specified, the default security group is bound.</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>Whether data transparent encryption is required:</p><li>0: No</li><li>1: Yes</li>Default value: 0. See [Overview of Data Transparent Encryption](https://www.tencentcloud.com/document/product/409/71748?from_cn_redirect=1).
                     */
                    uint64_t m_needSupportTDE;
                    bool m_needSupportTDEHasBeenSet;

                    /**
                     * <p>The KeyId of the custom key. If you select custom key encryption, you need to input the KeyId of the custom key. KeyId is the unique identifier of CMK.<br>For related reference on KeyId creation and retrieval, see <a href="https://www.tencentcloud.com/document/product/409/71749?from_cn_redirect=1">Enable Transparent Data Encryption</a></p>
                     */
                    std::string m_kMSKeyId;
                    bool m_kMSKeyIdHasBeenSet;

                    /**
                     * <p>For regions using the KMS service, KMSRegion is empty by default and the local region KMS is used. If the local region is not supported, select another KMS supported region.<br>For details about KMSRegion, see <a href="https://www.tencentcloud.com/document/product/409/71749?from_cn_redirect=1">enable transparent data encryption</a></p>
                     */
                    std::string m_kMSRegion;
                    bool m_kMSRegionHasBeenSet;

                    /**
                     * <p>Designate the service cluster for KMS. If KMSClusterId is empty, use the KMS of the Default Cluster. To select the specified KMS cluster, require the input of KMSClusterId. For details about KMSClusterId, see enable transparent data encryption.</p>
                     */
                    std::string m_kMSClusterId;
                    bool m_kMSClusterIdHasBeenSet;

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
                     * <p>Primary-standby sync mode, supports: </p><li>Semi-sync: semi-synchronous</li><li>Async: asynchronous</li>Default value for the primary instance: Semi-syncDefault value for the read-only instance: Async
                     */
                    std::string m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * <p>Whether required to support Ipv6:</p><li>0: No</li><li>1: Yes</li>Default value: 0
                     */
                    uint64_t m_needSupportIpv6;
                    bool m_needSupportIpv6HasBeenSet;

                    /**
                     * <p>Whether to enable deletion protection for the instance: true-enable deletion protection; false-disable deletion protection.</p>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * <p>Instance storage type. Available values: PHYSICAL_LOCAL_SSD: LOCAL SSD hard disk of PHYSICAL machine; CLOUD_PREMIUM: high-performance CLOUD block storage; CLOUD_SSD: SSD CLOUD disk; CLOUD_HSSD: enhanced SSD CLOUD disk.</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEINSTANCESREQUEST_H_
