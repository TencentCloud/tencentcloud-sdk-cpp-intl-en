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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginDetail.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Accelerated domain name
                */
                class AccelerationDomain : public AbstractModel
                {
                public:
                    AccelerationDomain();
                    ~AccelerationDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Details of the origin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginDetail Details of the origin.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OriginDetail GetOriginDetail() const;

                    /**
                     * 设置Details of the origin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OriginDetail Details of the origin.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOriginDetail(const OriginDetail& _originDetail);

                    /**
                     * 判断参数 OriginDetail 是否已赋值
                     * @return OriginDetail 是否已赋值
                     */
                    bool OriginDetailHasBeenSet() const;

                    /**
                     * 获取Creation time of the accelerated domain name.
                     * @return CreatedOn Creation time of the accelerated domain name.
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Creation time of the accelerated domain name.
                     * @param CreatedOn Creation time of the accelerated domain name.
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取Accelerated domain name
                     * @return DomainName Accelerated domain name
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Accelerated domain name
                     * @param DomainName Accelerated domain name
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Modification time of the accelerated domain name.
                     * @return ModifiedOn Modification time of the accelerated domain name.
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置Modification time of the accelerated domain name.
                     * @param ModifiedOn Modification time of the accelerated domain name.
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取ID of the site.
                     * @return ZoneId ID of the site.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site.
                     * @param ZoneId ID of the site.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Status of the accelerated domain name. Values:
<li>`online`: Activated</li>
<li>`process`: Being deployed</li>
<li>`offline`: Disabled</li>
<li>`forbidden`: Blocked</li>
<li>`init`: Pending activation</li>
                     * @return DomainStatus Status of the accelerated domain name. Values:
<li>`online`: Activated</li>
<li>`process`: Being deployed</li>
<li>`offline`: Disabled</li>
<li>`forbidden`: Blocked</li>
<li>`init`: Pending activation</li>
                     */
                    std::string GetDomainStatus() const;

                    /**
                     * 设置Status of the accelerated domain name. Values:
<li>`online`: Activated</li>
<li>`process`: Being deployed</li>
<li>`offline`: Disabled</li>
<li>`forbidden`: Blocked</li>
<li>`init`: Pending activation</li>
                     * @param DomainStatus Status of the accelerated domain name. Values:
<li>`online`: Activated</li>
<li>`process`: Being deployed</li>
<li>`offline`: Disabled</li>
<li>`forbidden`: Blocked</li>
<li>`init`: Pending activation</li>
                     */
                    void SetDomainStatus(const std::string& _domainStatus);

                    /**
                     * 判断参数 DomainStatus 是否已赋值
                     * @return DomainStatus 是否已赋值
                     */
                    bool DomainStatusHasBeenSet() const;

                    /**
                     * 获取The CNAME address.
                     * @return Cname The CNAME address.
                     */
                    std::string GetCname() const;

                    /**
                     * 设置The CNAME address.
                     * @param Cname The CNAME address.
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取
                     * @return IdentificationStatus 
                     */
                    std::string GetIdentificationStatus() const;

                    /**
                     * 设置
                     * @param IdentificationStatus 
                     */
                    void SetIdentificationStatus(const std::string& _identificationStatus);

                    /**
                     * 判断参数 IdentificationStatus 是否已赋值
                     * @return IdentificationStatus 是否已赋值
                     */
                    bool IdentificationStatusHasBeenSet() const;

                private:

                    /**
                     * Details of the origin.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OriginDetail m_originDetail;
                    bool m_originDetailHasBeenSet;

                    /**
                     * Creation time of the accelerated domain name.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Accelerated domain name
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Modification time of the accelerated domain name.
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * ID of the site.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Status of the accelerated domain name. Values:
<li>`online`: Activated</li>
<li>`process`: Being deployed</li>
<li>`offline`: Disabled</li>
<li>`forbidden`: Blocked</li>
<li>`init`: Pending activation</li>
                     */
                    std::string m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                    /**
                     * The CNAME address.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_identificationStatus;
                    bool m_identificationStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAIN_H_
