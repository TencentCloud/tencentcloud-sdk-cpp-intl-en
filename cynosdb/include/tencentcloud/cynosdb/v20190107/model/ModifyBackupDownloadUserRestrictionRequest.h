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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBACKUPDOWNLOADUSERRESTRICTIONREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBACKUPDOWNLOADUSERRESTRICTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BackupLimitVpcItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyBackupDownloadUserRestriction request structure.
                */
                class ModifyBackupDownloadUserRestrictionRequest : public AbstractModel
                {
                public:
                    ModifyBackupDownloadUserRestrictionRequest();
                    ~ModifyBackupDownloadUserRestrictionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Download limit type. NoLimit: unlimited. LimitOnlyIntranet: restricted to private network. Customize: custom.
                     * @return LimitType Download limit type. NoLimit: unlimited. LimitOnlyIntranet: restricted to private network. Customize: custom.
                     * 
                     */
                    std::string GetLimitType() const;

                    /**
                     * 设置Download limit type. NoLimit: unlimited. LimitOnlyIntranet: restricted to private network. Customize: custom.
                     * @param _limitType Download limit type. NoLimit: unlimited. LimitOnlyIntranet: restricted to private network. Customize: custom.
                     * 
                     */
                    void SetLimitType(const std::string& _limitType);

                    /**
                     * 判断参数 LimitType 是否已赋值
                     * @return LimitType 是否已赋值
                     * 
                     */
                    bool LimitTypeHasBeenSet() const;

                    /**
                     * 获取This parameter only supports In, which means the vpc specified by LimitVpc can be downloaded. The default is In.
                     * @return VpcComparisonSymbol This parameter only supports In, which means the vpc specified by LimitVpc can be downloaded. The default is In.
                     * 
                     */
                    std::string GetVpcComparisonSymbol() const;

                    /**
                     * 设置This parameter only supports In, which means the vpc specified by LimitVpc can be downloaded. The default is In.
                     * @param _vpcComparisonSymbol This parameter only supports In, which means the vpc specified by LimitVpc can be downloaded. The default is In.
                     * 
                     */
                    void SetVpcComparisonSymbol(const std::string& _vpcComparisonSymbol);

                    /**
                     * 判断参数 VpcComparisonSymbol 是否已赋值
                     * @return VpcComparisonSymbol 是否已赋值
                     * 
                     */
                    bool VpcComparisonSymbolHasBeenSet() const;

                    /**
                     * 获取In: download allowed for the specified ip; NotIn: download not allowed for the specified ip
                     * @return IpComparisonSymbol In: download allowed for the specified ip; NotIn: download not allowed for the specified ip
                     * 
                     */
                    std::string GetIpComparisonSymbol() const;

                    /**
                     * 设置In: download allowed for the specified ip; NotIn: download not allowed for the specified ip
                     * @param _ipComparisonSymbol In: download allowed for the specified ip; NotIn: download not allowed for the specified ip
                     * 
                     */
                    void SetIpComparisonSymbol(const std::string& _ipComparisonSymbol);

                    /**
                     * 判断参数 IpComparisonSymbol 是否已赋值
                     * @return IpComparisonSymbol 是否已赋值
                     * 
                     */
                    bool IpComparisonSymbolHasBeenSet() const;

                    /**
                     * 获取vpc settings for download restriction
                     * @return LimitVpcs vpc settings for download restriction
                     * 
                     */
                    std::vector<BackupLimitVpcItem> GetLimitVpcs() const;

                    /**
                     * 设置vpc settings for download restriction
                     * @param _limitVpcs vpc settings for download restriction
                     * 
                     */
                    void SetLimitVpcs(const std::vector<BackupLimitVpcItem>& _limitVpcs);

                    /**
                     * 判断参数 LimitVpcs 是否已赋值
                     * @return LimitVpcs 是否已赋值
                     * 
                     */
                    bool LimitVpcsHasBeenSet() const;

                    /**
                     * 获取ip settings for download restrictions
                     * @return LimitIps ip settings for download restrictions
                     * 
                     */
                    std::vector<std::string> GetLimitIps() const;

                    /**
                     * 设置ip settings for download restrictions
                     * @param _limitIps ip settings for download restrictions
                     * 
                     */
                    void SetLimitIps(const std::vector<std::string>& _limitIps);

                    /**
                     * 判断参数 LimitIps 是否已赋值
                     * @return LimitIps 是否已赋值
                     * 
                     */
                    bool LimitIpsHasBeenSet() const;

                private:

                    /**
                     * Download limit type. NoLimit: unlimited. LimitOnlyIntranet: restricted to private network. Customize: custom.
                     */
                    std::string m_limitType;
                    bool m_limitTypeHasBeenSet;

                    /**
                     * This parameter only supports In, which means the vpc specified by LimitVpc can be downloaded. The default is In.
                     */
                    std::string m_vpcComparisonSymbol;
                    bool m_vpcComparisonSymbolHasBeenSet;

                    /**
                     * In: download allowed for the specified ip; NotIn: download not allowed for the specified ip
                     */
                    std::string m_ipComparisonSymbol;
                    bool m_ipComparisonSymbolHasBeenSet;

                    /**
                     * vpc settings for download restriction
                     */
                    std::vector<BackupLimitVpcItem> m_limitVpcs;
                    bool m_limitVpcsHasBeenSet;

                    /**
                     * ip settings for download restrictions
                     */
                    std::vector<std::string> m_limitIps;
                    bool m_limitIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBACKUPDOWNLOADUSERRESTRICTIONREQUEST_H_
