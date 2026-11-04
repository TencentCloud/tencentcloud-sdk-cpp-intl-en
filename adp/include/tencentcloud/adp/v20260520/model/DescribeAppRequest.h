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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeApp request structure.
                */
                class DescribeAppRequest : public AbstractModel
                {
                public:
                    DescribeAppRequest();
                    ~DescribeAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Application ID.</p>
                     * @return AppId <p>Application ID.</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Application ID.</p>
                     * @param _appId <p>Application ID.</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Application domain: ADP_DOMAIN_DEV(1)=development domain, ADP_DOMAIN_PROD(2)=release domain. Enumeration values: 1: development domain, 2: production domain</p>
                     * @return Domain <p>Application domain: ADP_DOMAIN_DEV(1)=development domain, ADP_DOMAIN_PROD(2)=release domain. Enumeration values: 1: development domain, 2: production domain</p>
                     * 
                     */
                    int64_t GetDomain() const;

                    /**
                     * 设置<p>Application domain: ADP_DOMAIN_DEV(1)=development domain, ADP_DOMAIN_PROD(2)=release domain. Enumeration values: 1: development domain, 2: production domain</p>
                     * @param _domain <p>Application domain: ADP_DOMAIN_DEV(1)=development domain, ADP_DOMAIN_PROD(2)=release domain. Enumeration values: 1: development domain, 2: production domain</p>
                     * 
                     */
                    void SetDomain(const int64_t& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>Field mask, specify the fields to return (return all fields if Paths is empty). Paths enumeration values: AppConfig (application configuration), SecretInfo (application key info), ShareUrlInfo (sharing link information), SpecialStatusInfo (special status information), SearchResourceStatus (search resource status), SharedKbList (list of shared knowledge bases referenced by the application), CorpShareConfig (corporate shared configuration), FileVolumeMountList (cloud disk mount list)</p>
                     * @return FieldMask <p>Field mask, specify the fields to return (return all fields if Paths is empty). Paths enumeration values: AppConfig (application configuration), SecretInfo (application key info), ShareUrlInfo (sharing link information), SpecialStatusInfo (special status information), SearchResourceStatus (search resource status), SharedKbList (list of shared knowledge bases referenced by the application), CorpShareConfig (corporate shared configuration), FileVolumeMountList (cloud disk mount list)</p>
                     * 
                     */
                    FieldMask GetFieldMask() const;

                    /**
                     * 设置<p>Field mask, specify the fields to return (return all fields if Paths is empty). Paths enumeration values: AppConfig (application configuration), SecretInfo (application key info), ShareUrlInfo (sharing link information), SpecialStatusInfo (special status information), SearchResourceStatus (search resource status), SharedKbList (list of shared knowledge bases referenced by the application), CorpShareConfig (corporate shared configuration), FileVolumeMountList (cloud disk mount list)</p>
                     * @param _fieldMask <p>Field mask, specify the fields to return (return all fields if Paths is empty). Paths enumeration values: AppConfig (application configuration), SecretInfo (application key info), ShareUrlInfo (sharing link information), SpecialStatusInfo (special status information), SearchResourceStatus (search resource status), SharedKbList (list of shared knowledge bases referenced by the application), CorpShareConfig (corporate shared configuration), FileVolumeMountList (cloud disk mount list)</p>
                     * 
                     */
                    void SetFieldMask(const FieldMask& _fieldMask);

                    /**
                     * 判断参数 FieldMask 是否已赋值
                     * @return FieldMask 是否已赋值
                     * 
                     */
                    bool FieldMaskHasBeenSet() const;

                    /**
                     * 获取<p>Specific status type (required when FieldMask includes SpecialStatusInfo). Enumeration values: 1: rollback status, 2: first-time import status</p>
                     * @return StatusType <p>Specific status type (required when FieldMask includes SpecialStatusInfo). Enumeration values: 1: rollback status, 2: first-time import status</p>
                     * 
                     */
                    int64_t GetStatusType() const;

                    /**
                     * 设置<p>Specific status type (required when FieldMask includes SpecialStatusInfo). Enumeration values: 1: rollback status, 2: first-time import status</p>
                     * @param _statusType <p>Specific status type (required when FieldMask includes SpecialStatusInfo). Enumeration values: 1: rollback status, 2: first-time import status</p>
                     * 
                     */
                    void SetStatusType(const int64_t& _statusType);

                    /**
                     * 判断参数 StatusType 是否已赋值
                     * @return StatusType 是否已赋值
                     * 
                     */
                    bool StatusTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Application ID.</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Application domain: ADP_DOMAIN_DEV(1)=development domain, ADP_DOMAIN_PROD(2)=release domain. Enumeration values: 1: development domain, 2: production domain</p>
                     */
                    int64_t m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Field mask, specify the fields to return (return all fields if Paths is empty). Paths enumeration values: AppConfig (application configuration), SecretInfo (application key info), ShareUrlInfo (sharing link information), SpecialStatusInfo (special status information), SearchResourceStatus (search resource status), SharedKbList (list of shared knowledge bases referenced by the application), CorpShareConfig (corporate shared configuration), FileVolumeMountList (cloud disk mount list)</p>
                     */
                    FieldMask m_fieldMask;
                    bool m_fieldMaskHasBeenSet;

                    /**
                     * <p>Specific status type (required when FieldMask includes SpecialStatusInfo). Enumeration values: 1: rollback status, 2: first-time import status</p>
                     */
                    int64_t m_statusType;
                    bool m_statusTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPREQUEST_H_
