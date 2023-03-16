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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDOWNLOADRESTRICTIONRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDOWNLOADRESTRICTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/BackupLimitVpcItem.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
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
                     * 获取Type of the network restrictions for downloading backup files. Valid values:

- `NoLimit`: Backup files can be downloaded over both public and private networks.
- `LimitOnlyIntranet`: Backup files can be downloaded only at private network addresses auto-assigned by Tencent Cloud.
- `Customize`: Backup files can be downloaded only in the customized VPC.
                     * @return LimitType Type of the network restrictions for downloading backup files. Valid values:

- `NoLimit`: Backup files can be downloaded over both public and private networks.
- `LimitOnlyIntranet`: Backup files can be downloaded only at private network addresses auto-assigned by Tencent Cloud.
- `Customize`: Backup files can be downloaded only in the customized VPC.
                     */
                    std::string GetLimitType() const;

                    /**
                     * 判断参数 LimitType 是否已赋值
                     * @return LimitType 是否已赋值
                     */
                    bool LimitTypeHasBeenSet() const;

                    /**
                     * 获取Only `In` can be passed in for this parameter, indicating that backup files can be downloaded in the custom `LimitVpc`.
                     * @return VpcComparisonSymbol Only `In` can be passed in for this parameter, indicating that backup files can be downloaded in the custom `LimitVpc`.
                     */
                    std::string GetVpcComparisonSymbol() const;

                    /**
                     * 判断参数 VpcComparisonSymbol 是否已赋值
                     * @return VpcComparisonSymbol 是否已赋值
                     */
                    bool VpcComparisonSymbolHasBeenSet() const;

                    /**
                     * 获取Whether backups can be downloaded at the custom `LimitIp` address.

- `In`: Download is allowed for the custom IP.
- `NotIn`: Download is not allowed for the custom IP.
                     * @return IpComparisonSymbol Whether backups can be downloaded at the custom `LimitIp` address.

- `In`: Download is allowed for the custom IP.
- `NotIn`: Download is not allowed for the custom IP.
                     */
                    std::string GetIpComparisonSymbol() const;

                    /**
                     * 判断参数 IpComparisonSymbol 是否已赋值
                     * @return IpComparisonSymbol 是否已赋值
                     */
                    bool IpComparisonSymbolHasBeenSet() const;

                    /**
                     * 获取VPC ID of the custom backup file download address, which will be displayed if `LimitType` is `Customize`.
                     * @return LimitVpc VPC ID of the custom backup file download address, which will be displayed if `LimitType` is `Customize`.
                     */
                    std::vector<BackupLimitVpcItem> GetLimitVpc() const;

                    /**
                     * 判断参数 LimitVpc 是否已赋值
                     * @return LimitVpc 是否已赋值
                     */
                    bool LimitVpcHasBeenSet() const;

                    /**
                     * 获取VPC ID of the custom backup file download address, which will be displayed if `LimitType` is `Customize`.
                     * @return LimitIp VPC ID of the custom backup file download address, which will be displayed if `LimitType` is `Customize`.
                     */
                    std::vector<std::string> GetLimitIp() const;

                    /**
                     * 判断参数 LimitIp 是否已赋值
                     * @return LimitIp 是否已赋值
                     */
                    bool LimitIpHasBeenSet() const;

                private:

                    /**
                     * Type of the network restrictions for downloading backup files. Valid values:

- `NoLimit`: Backup files can be downloaded over both public and private networks.
- `LimitOnlyIntranet`: Backup files can be downloaded only at private network addresses auto-assigned by Tencent Cloud.
- `Customize`: Backup files can be downloaded only in the customized VPC.
                     */
                    std::string m_limitType;
                    bool m_limitTypeHasBeenSet;

                    /**
                     * Only `In` can be passed in for this parameter, indicating that backup files can be downloaded in the custom `LimitVpc`.
                     */
                    std::string m_vpcComparisonSymbol;
                    bool m_vpcComparisonSymbolHasBeenSet;

                    /**
                     * Whether backups can be downloaded at the custom `LimitIp` address.

- `In`: Download is allowed for the custom IP.
- `NotIn`: Download is not allowed for the custom IP.
                     */
                    std::string m_ipComparisonSymbol;
                    bool m_ipComparisonSymbolHasBeenSet;

                    /**
                     * VPC ID of the custom backup file download address, which will be displayed if `LimitType` is `Customize`.
                     */
                    std::vector<BackupLimitVpcItem> m_limitVpc;
                    bool m_limitVpcHasBeenSet;

                    /**
                     * VPC ID of the custom backup file download address, which will be displayed if `LimitType` is `Customize`.
                     */
                    std::vector<std::string> m_limitIp;
                    bool m_limitIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDOWNLOADRESTRICTIONRESPONSE_H_
