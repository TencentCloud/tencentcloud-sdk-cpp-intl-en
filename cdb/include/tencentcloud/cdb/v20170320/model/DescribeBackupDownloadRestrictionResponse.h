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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPDOWNLOADRESTRICTIONRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPDOWNLOADRESTRICTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/BackupLimitVpcItem.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeBackupDownloadRestriction response structure.
                */
                class DescribeBackupDownloadRestrictionResponse : public AbstractModel
                {
                public:
                    DescribeBackupDownloadRestrictionResponse();
                    ~DescribeBackupDownloadRestrictionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Valid values: `NoLimit` (backups can be downloaded over both private and public networks with any IPs), `LimitOnlyIntranet` (backups can be downloaded over the private network with any private IPs), `Customize` (backups can be downloaded over specified VPCs with specified IPs). The `LimitVpc` and `LimitIp` parameters are valid only when this parameter is set to `Customize`.
                     * @return LimitType Valid values: `NoLimit` (backups can be downloaded over both private and public networks with any IPs), `LimitOnlyIntranet` (backups can be downloaded over the private network with any private IPs), `Customize` (backups can be downloaded over specified VPCs with specified IPs). The `LimitVpc` and `LimitIp` parameters are valid only when this parameter is set to `Customize`.
                     */
                    std::string GetLimitType() const;

                    /**
                     * 判断参数 LimitType 是否已赋值
                     * @return LimitType 是否已赋值
                     */
                    bool LimitTypeHasBeenSet() const;

                    /**
                     * 获取Valid value: `In` (backups can only be downloaded over the VPCs specified in `LimitVpc`).
                     * @return VpcComparisonSymbol Valid value: `In` (backups can only be downloaded over the VPCs specified in `LimitVpc`).
                     */
                    std::string GetVpcComparisonSymbol() const;

                    /**
                     * 判断参数 VpcComparisonSymbol 是否已赋值
                     * @return VpcComparisonSymbol 是否已赋值
                     */
                    bool VpcComparisonSymbolHasBeenSet() const;

                    /**
                     * 获取Valid values: `In` (backups can only be downloaded with the IPs specified in `LimitIp`), `NotIn` (backups cannot be downloaded with the IPs specified in `LimitIp`).
                     * @return IpComparisonSymbol Valid values: `In` (backups can only be downloaded with the IPs specified in `LimitIp`), `NotIn` (backups cannot be downloaded with the IPs specified in `LimitIp`).
                     */
                    std::string GetIpComparisonSymbol() const;

                    /**
                     * 判断参数 IpComparisonSymbol 是否已赋值
                     * @return IpComparisonSymbol 是否已赋值
                     */
                    bool IpComparisonSymbolHasBeenSet() const;

                    /**
                     * 获取VPCs used to restrict backup download.
                     * @return LimitVpc VPCs used to restrict backup download.
                     */
                    std::vector<BackupLimitVpcItem> GetLimitVpc() const;

                    /**
                     * 判断参数 LimitVpc 是否已赋值
                     * @return LimitVpc 是否已赋值
                     */
                    bool LimitVpcHasBeenSet() const;

                    /**
                     * 获取IPs used to restrict backup download.
                     * @return LimitIp IPs used to restrict backup download.
                     */
                    std::vector<std::string> GetLimitIp() const;

                    /**
                     * 判断参数 LimitIp 是否已赋值
                     * @return LimitIp 是否已赋值
                     */
                    bool LimitIpHasBeenSet() const;

                private:

                    /**
                     * Valid values: `NoLimit` (backups can be downloaded over both private and public networks with any IPs), `LimitOnlyIntranet` (backups can be downloaded over the private network with any private IPs), `Customize` (backups can be downloaded over specified VPCs with specified IPs). The `LimitVpc` and `LimitIp` parameters are valid only when this parameter is set to `Customize`.
                     */
                    std::string m_limitType;
                    bool m_limitTypeHasBeenSet;

                    /**
                     * Valid value: `In` (backups can only be downloaded over the VPCs specified in `LimitVpc`).
                     */
                    std::string m_vpcComparisonSymbol;
                    bool m_vpcComparisonSymbolHasBeenSet;

                    /**
                     * Valid values: `In` (backups can only be downloaded with the IPs specified in `LimitIp`), `NotIn` (backups cannot be downloaded with the IPs specified in `LimitIp`).
                     */
                    std::string m_ipComparisonSymbol;
                    bool m_ipComparisonSymbolHasBeenSet;

                    /**
                     * VPCs used to restrict backup download.
                     */
                    std::vector<BackupLimitVpcItem> m_limitVpc;
                    bool m_limitVpcHasBeenSet;

                    /**
                     * IPs used to restrict backup download.
                     */
                    std::vector<std::string> m_limitIp;
                    bool m_limitIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPDOWNLOADRESTRICTIONRESPONSE_H_
