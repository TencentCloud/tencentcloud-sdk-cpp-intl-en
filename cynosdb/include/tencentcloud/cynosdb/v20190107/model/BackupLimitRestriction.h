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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPLIMITRESTRICTION_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPLIMITRESTRICTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Specifies the backup download limit parameter.
                */
                class BackupLimitRestriction : public AbstractModel
                {
                public:
                    BackupLimitRestriction();
                    ~BackupLimitRestriction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Restriction type.
                     * @return LimitType Restriction type.
                     * 
                     */
                    std::string GetLimitType() const;

                    /**
                     * 设置Restriction type.
                     * @param _limitType Restriction type.
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
                     * 获取This parameter only supports In, which indicates that the vpc specified by LimitVpc can be downloaded. the default is In.
                     * @return VpcComparisonSymbol This parameter only supports In, which indicates that the vpc specified by LimitVpc can be downloaded. the default is In.
                     * 
                     */
                    std::string GetVpcComparisonSymbol() const;

                    /**
                     * 设置This parameter only supports In, which indicates that the vpc specified by LimitVpc can be downloaded. the default is In.
                     * @param _vpcComparisonSymbol This parameter only supports In, which indicates that the vpc specified by LimitVpc can be downloaded. the default is In.
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
                     * 获取Specified ips can download; specified ips are not allowed to download.
                     * @return IpComparisonSymbol Specified ips can download; specified ips are not allowed to download.
                     * 
                     */
                    std::string GetIpComparisonSymbol() const;

                    /**
                     * 设置Specified ips can download; specified ips are not allowed to download.
                     * @param _ipComparisonSymbol Specified ips can download; specified ips are not allowed to download.
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
                     * 获取Limit download vpc settings
                     * @return LimitVpcs Limit download vpc settings
                     * 
                     */
                    std::vector<BackupLimitVpcItem> GetLimitVpcs() const;

                    /**
                     * 设置Limit download vpc settings
                     * @param _limitVpcs Limit download vpc settings
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
                     * 获取Limit download ip settings
                     * @return LimitIps Limit download ip settings
                     * 
                     */
                    std::vector<std::string> GetLimitIps() const;

                    /**
                     * 设置Limit download ip settings
                     * @param _limitIps Limit download ip settings
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
                     * Restriction type.
                     */
                    std::string m_limitType;
                    bool m_limitTypeHasBeenSet;

                    /**
                     * This parameter only supports In, which indicates that the vpc specified by LimitVpc can be downloaded. the default is In.
                     */
                    std::string m_vpcComparisonSymbol;
                    bool m_vpcComparisonSymbolHasBeenSet;

                    /**
                     * Specified ips can download; specified ips are not allowed to download.
                     */
                    std::string m_ipComparisonSymbol;
                    bool m_ipComparisonSymbolHasBeenSet;

                    /**
                     * Limit download vpc settings
                     */
                    std::vector<BackupLimitVpcItem> m_limitVpcs;
                    bool m_limitVpcsHasBeenSet;

                    /**
                     * Limit download ip settings
                     */
                    std::vector<std::string> m_limitIps;
                    bool m_limitIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPLIMITRESTRICTION_H_
