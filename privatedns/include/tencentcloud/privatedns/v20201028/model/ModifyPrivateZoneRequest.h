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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYPRIVATEZONEREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYPRIVATEZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * ModifyPrivateZone request structure.
                */
                class ModifyPrivateZoneRequest : public AbstractModel
                {
                public:
                    ModifyPrivateZoneRequest();
                    ~ModifyPrivateZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Private domain ID
                     * @return ZoneId Private domain ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Private domain ID
                     * @param _zoneId Private domain ID
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Whether to enable subdomain recursive DNS. Valid values: ENABLED, DISABLED
                     * @return DnsForwardStatus Whether to enable subdomain recursive DNS. Valid values: ENABLED, DISABLED
                     * 
                     */
                    std::string GetDnsForwardStatus() const;

                    /**
                     * 设置Whether to enable subdomain recursive DNS. Valid values: ENABLED, DISABLED
                     * @param _dnsForwardStatus Whether to enable subdomain recursive DNS. Valid values: ENABLED, DISABLED
                     * 
                     */
                    void SetDnsForwardStatus(const std::string& _dnsForwardStatus);

                    /**
                     * 判断参数 DnsForwardStatus 是否已赋值
                     * @return DnsForwardStatus 是否已赋值
                     * 
                     */
                    bool DnsForwardStatusHasBeenSet() const;

                    /**
                     * 获取Whether to enable CNAME flattening. Valid values: `ENABLED` and `DISABLED`.
                     * @return CnameSpeedupStatus Whether to enable CNAME flattening. Valid values: `ENABLED` and `DISABLED`.
                     * 
                     */
                    std::string GetCnameSpeedupStatus() const;

                    /**
                     * 设置Whether to enable CNAME flattening. Valid values: `ENABLED` and `DISABLED`.
                     * @param _cnameSpeedupStatus Whether to enable CNAME flattening. Valid values: `ENABLED` and `DISABLED`.
                     * 
                     */
                    void SetCnameSpeedupStatus(const std::string& _cnameSpeedupStatus);

                    /**
                     * 判断参数 CnameSpeedupStatus 是否已赋值
                     * @return CnameSpeedupStatus 是否已赋值
                     * 
                     */
                    bool CnameSpeedupStatusHasBeenSet() const;

                private:

                    /**
                     * Private domain ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether to enable subdomain recursive DNS. Valid values: ENABLED, DISABLED
                     */
                    std::string m_dnsForwardStatus;
                    bool m_dnsForwardStatusHasBeenSet;

                    /**
                     * Whether to enable CNAME flattening. Valid values: `ENABLED` and `DISABLED`.
                     */
                    std::string m_cnameSpeedupStatus;
                    bool m_cnameSpeedupStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYPRIVATEZONEREQUEST_H_
