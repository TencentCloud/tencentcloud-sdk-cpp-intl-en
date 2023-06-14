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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_ZONE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_ZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/Tag.h>
#include <tencentcloud/teo/v20220106/model/Resource.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Site information
                */
                class Zone : public AbstractModel
                {
                public:
                    Zone();
                    ~Zone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Site ID
                     * @return Id Site ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Site ID
                     * @param _id Site ID
                     * 
                     */
                    void SetId(const std::string& _id);

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
                     * 设置Site name
                     * @param _name Site name
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
                     * 获取List of name servers used by the site
                     * @return OriginalNameServers List of name servers used by the site
                     * 
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 设置List of name servers used by the site
                     * @param _originalNameServers List of name servers used by the site
                     * 
                     */
                    void SetOriginalNameServers(const std::vector<std::string>& _originalNameServers);

                    /**
                     * 判断参数 OriginalNameServers 是否已赋值
                     * @return OriginalNameServers 是否已赋值
                     * 
                     */
                    bool OriginalNameServersHasBeenSet() const;

                    /**
                     * 获取List of name servers assigned by Tencent Cloud
                     * @return NameServers List of name servers assigned by Tencent Cloud
                     * 
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 设置List of name servers assigned by Tencent Cloud
                     * @param _nameServers List of name servers assigned by Tencent Cloud
                     * 
                     */
                    void SetNameServers(const std::vector<std::string>& _nameServers);

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
                     * 设置Site status
- `active`: The name server is switched.
- `pending`: The name server is not switched.
- `moved`: The name server is moved.
- `deactivated`: The name server is blocked.
                     * @param _status Site status
- `active`: The name server is switched.
- `pending`: The name server is not switched.
- `moved`: The name server is moved.
- `deactivated`: The name server is blocked.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取How the site is connected to EdgeOne.
- `full`: The site is connected via name server.
- `partial`: The site is connected via CNAME.
                     * @return Type How the site is connected to EdgeOne.
- `full`: The site is connected via name server.
- `partial`: The site is connected via CNAME.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置How the site is connected to EdgeOne.
- `full`: The site is connected via name server.
- `partial`: The site is connected via CNAME.
                     * @param _type How the site is connected to EdgeOne.
- `full`: The site is connected via name server.
- `partial`: The site is connected via CNAME.
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
                     * 获取Indicates whether the site is disabled
                     * @return Paused Indicates whether the site is disabled
                     * 
                     */
                    bool GetPaused() const;

                    /**
                     * 设置Indicates whether the site is disabled
                     * @param _paused Indicates whether the site is disabled
                     * 
                     */
                    void SetPaused(const bool& _paused);

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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CnameSpeedUp Specifies whether to enable CNAME acceleration
- `enabled`: Enable
- `disabled`: Disable
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCnameSpeedUp() const;

                    /**
                     * 设置Specifies whether to enable CNAME acceleration
- `enabled`: Enable
- `disabled`: Disable
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cnameSpeedUp Specifies whether to enable CNAME acceleration
- `enabled`: Enable
- `disabled`: Disable
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCnameSpeedUp(const std::string& _cnameSpeedUp);

                    /**
                     * 判断参数 CnameSpeedUp 是否已赋值
                     * @return CnameSpeedUp 是否已赋值
                     * 
                     */
                    bool CnameSpeedUpHasBeenSet() const;

                    /**
                     * 获取Ownership verification status of the site when it is connected to EdgeOne via CNAME.
- `finished`: The site is verified.
- `pending`: Verifying the ownership of the site.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CnameStatus Ownership verification status of the site when it is connected to EdgeOne via CNAME.
- `finished`: The site is verified.
- `pending`: Verifying the ownership of the site.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCnameStatus() const;

                    /**
                     * 设置Ownership verification status of the site when it is connected to EdgeOne via CNAME.
- `finished`: The site is verified.
- `pending`: Verifying the ownership of the site.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _cnameStatus Ownership verification status of the site when it is connected to EdgeOne via CNAME.
- `finished`: The site is verified.
- `pending`: Verifying the ownership of the site.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCnameStatus(const std::string& _cnameStatus);

                    /**
                     * 判断参数 CnameStatus 是否已赋值
                     * @return CnameStatus 是否已赋值
                     * 
                     */
                    bool CnameStatusHasBeenSet() const;

                    /**
                     * 获取Resource tag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Tags Resource tag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Resource tag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _tags Resource tag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Billable resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Resources Billable resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<Resource> GetResources() const;

                    /**
                     * 设置Billable resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _resources Billable resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetResources(const std::vector<Resource>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取Site creation date
                     * @return CreatedOn Site creation date
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Site creation date
                     * @param _createdOn Site creation date
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取Site modification date
                     * @return ModifiedOn Site modification date
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置Site modification date
                     * @param _modifiedOn Site modification date
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取
                     * @return Area 
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置
                     * @param _area 
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

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
                     * List of name servers used by the site
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                    /**
                     * List of name servers assigned by Tencent Cloud
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
                     * How the site is connected to EdgeOne.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cnameSpeedUp;
                    bool m_cnameSpeedUpHasBeenSet;

                    /**
                     * Ownership verification status of the site when it is connected to EdgeOne via CNAME.
- `finished`: The site is verified.
- `pending`: Verifying the ownership of the site.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_cnameStatus;
                    bool m_cnameStatusHasBeenSet;

                    /**
                     * Resource tag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Billable resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<Resource> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * Site creation date
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Site modification date
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_ZONE_H_
