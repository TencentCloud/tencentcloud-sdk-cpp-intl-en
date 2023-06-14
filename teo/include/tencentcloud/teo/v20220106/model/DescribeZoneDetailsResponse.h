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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONEDETAILSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONEDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/Tag.h>
#include <tencentcloud/teo/v20220106/model/Resource.h>
#include <tencentcloud/teo/v20220106/model/VanityNameServers.h>
#include <tencentcloud/teo/v20220106/model/VanityNameServersIps.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeZoneDetails response structure.
                */
                class DescribeZoneDetailsResponse : public AbstractModel
                {
                public:
                    DescribeZoneDetailsResponse();
                    ~DescribeZoneDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID
                     * @return Id Site ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Site name
                     * @return Name Site name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取List of name servers used
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OriginalNameServers List of name servers used
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 判断参数 OriginalNameServers 是否已赋值
                     * @return OriginalNameServers 是否已赋值
                     * 
                     */
                    bool OriginalNameServersHasBeenSet() const;

                    /**
                     * 获取List of name servers assigned to users by Tencent Cloud
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return NameServers List of name servers assigned to users by Tencent Cloud
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     * 
                     */
                    bool NameServersHasBeenSet() const;

                    /**
                     * 获取Site status
- `active`: The name server is switched.
- `pending`: The name server is not switched.
- `moved`: The name server is moved.
- `deactivated`: The name server is blocked.
                     * @return Status Site status
- `active`: The name server is switched.
- `pending`: The name server is not switched.
- `moved`: The name server is moved.
- `deactivated`: The name server is blocked.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Specifies how the site is connected to EdgeOne.
- `full`: The site is connected via name server.
- `partial`: The site is connected via CNAME.
                     * @return Type Specifies how the site is connected to EdgeOne.
- `full`: The site is connected via name server.
- `partial`: The site is connected via CNAME.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Indicates whether the site is disabled
                     * @return Paused Indicates whether the site is disabled
                     * 
                     */
                    bool GetPaused() const;

                    /**
                     * 判断参数 Paused 是否已赋值
                     * @return Paused 是否已赋值
                     * 
                     */
                    bool PausedHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable CNAME acceleration
- `enabled`: Enable
- `disabled`: Disable
                     * @return CnameSpeedUp Specifies whether to enable CNAME acceleration
- `enabled`: Enable
- `disabled`: Disable
                     * 
                     */
                    std::string GetCnameSpeedUp() const;

                    /**
                     * 判断参数 CnameSpeedUp 是否已赋值
                     * @return CnameSpeedUp 是否已赋值
                     * 
                     */
                    bool CnameSpeedUpHasBeenSet() const;

                    /**
                     * 获取Ownership verification status of the site when it accesses via CNAME.
- `finished`: The site is verified.
- `pending`: The site is waiting for verification.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CnameStatus Ownership verification status of the site when it accesses via CNAME.
- `finished`: The site is verified.
- `pending`: The site is waiting for verification.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCnameStatus() const;

                    /**
                     * 判断参数 CnameStatus 是否已赋值
                     * @return CnameStatus 是否已赋值
                     * 
                     */
                    bool CnameStatusHasBeenSet() const;

                    /**
                     * 获取Resource tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Resource tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Area 
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Billable resource
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Resources Billable resource
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Resource> GetResources() const;

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取Site modification date
                     * @return ModifiedOn Site modification date
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取Site creation date
                     * @return CreatedOn Site creation date
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取User-defined name server information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return VanityNameServers User-defined name server information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    VanityNameServers GetVanityNameServers() const;

                    /**
                     * 判断参数 VanityNameServers 是否已赋值
                     * @return VanityNameServers 是否已赋值
                     * 
                     */
                    bool VanityNameServersHasBeenSet() const;

                    /**
                     * 获取User-defined name server IP information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return VanityNameServersIps User-defined name server IP information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<VanityNameServersIps> GetVanityNameServersIps() const;

                    /**
                     * 判断参数 VanityNameServersIps 是否已赋值
                     * @return VanityNameServersIps 是否已赋值
                     * 
                     */
                    bool VanityNameServersIpsHasBeenSet() const;

                private:

                    /**
                     * Site ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Site name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * List of name servers used
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                    /**
                     * List of name servers assigned to users by Tencent Cloud
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_nameServers;
                    bool m_nameServersHasBeenSet;

                    /**
                     * Site status
- `active`: The name server is switched.
- `pending`: The name server is not switched.
- `moved`: The name server is moved.
- `deactivated`: The name server is blocked.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Specifies how the site is connected to EdgeOne.
- `full`: The site is connected via name server.
- `partial`: The site is connected via CNAME.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Indicates whether the site is disabled
                     */
                    bool m_paused;
                    bool m_pausedHasBeenSet;

                    /**
                     * Specifies whether to enable CNAME acceleration
- `enabled`: Enable
- `disabled`: Disable
                     */
                    std::string m_cnameSpeedUp;
                    bool m_cnameSpeedUpHasBeenSet;

                    /**
                     * Ownership verification status of the site when it accesses via CNAME.
- `finished`: The site is verified.
- `pending`: The site is waiting for verification.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_cnameStatus;
                    bool m_cnameStatusHasBeenSet;

                    /**
                     * Resource tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Billable resource
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Resource> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * Site modification date
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * Site creation date
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * User-defined name server information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    VanityNameServers m_vanityNameServers;
                    bool m_vanityNameServersHasBeenSet;

                    /**
                     * User-defined name server IP information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<VanityNameServersIps> m_vanityNameServersIps;
                    bool m_vanityNameServersIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONEDETAILSRESPONSE_H_
