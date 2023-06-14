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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINBRIEFINFO_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/Origin.h>
#include <tencentcloud/ecdn/v20191012/model/Tag.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * Basic information of a CDN domain name.
                */
                class DomainBriefInfo : public AbstractModel
                {
                public:
                    DomainBriefInfo();
                    ~DomainBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name ID.
                     * @return ResourceId Domain name ID.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Domain name ID.
                     * @param _resourceId Domain name ID.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud account ID.
                     * @return AppId Tencent Cloud account ID.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Tencent Cloud account ID.
                     * @param _appId Tencent Cloud account ID.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取CDN acceleration domain name.
                     * @return Domain CDN acceleration domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置CDN acceleration domain name.
                     * @param _domain CDN acceleration domain name.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Domain name CNAME.
                     * @return Cname Domain name CNAME.
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置Domain name CNAME.
                     * @param _cname Domain name CNAME.
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取Domain name status. Valid values: pending (reviewing), rejected (rejected), processing (deploying after approval), online (enabled), offline (disabled), deleted (deleted).
                     * @return Status Domain name status. Valid values: pending (reviewing), rejected (rejected), processing (deploying after approval), online (enabled), offline (disabled), deleted (deleted).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Domain name status. Valid values: pending (reviewing), rejected (rejected), processing (deploying after approval), online (enabled), offline (disabled), deleted (deleted).
                     * @param _status Domain name status. Valid values: pending (reviewing), rejected (rejected), processing (deploying after approval), online (enabled), offline (disabled), deleted (deleted).
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
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Domain name creation time.
                     * @return CreateTime Domain name creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Domain name creation time.
                     * @param _createTime Domain name creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Domain name update time.
                     * @return UpdateTime Domain name update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Domain name update time.
                     * @param _updateTime Domain name update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Origin server configuration details.
                     * @return Origin Origin server configuration details.
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置Origin server configuration details.
                     * @param _origin Origin server configuration details.
                     * 
                     */
                    void SetOrigin(const Origin& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取Domain name blockage status. Valid values: normal (normal), overdue (service is suspended due to arrears), quota (trial traffic package is used up), malicious (malicious user), ddos (DDoS attack), idle (no traffic), unlicensed (no ICP filing), capping (bandwidth cap reached), readonly (read-only)
                     * @return Disable Domain name blockage status. Valid values: normal (normal), overdue (service is suspended due to arrears), quota (trial traffic package is used up), malicious (malicious user), ddos (DDoS attack), idle (no traffic), unlicensed (no ICP filing), capping (bandwidth cap reached), readonly (read-only)
                     * 
                     */
                    std::string GetDisable() const;

                    /**
                     * 设置Domain name blockage status. Valid values: normal (normal), overdue (service is suspended due to arrears), quota (trial traffic package is used up), malicious (malicious user), ddos (DDoS attack), idle (no traffic), unlicensed (no ICP filing), capping (bandwidth cap reached), readonly (read-only)
                     * @param _disable Domain name blockage status. Valid values: normal (normal), overdue (service is suspended due to arrears), quota (trial traffic package is used up), malicious (malicious user), ddos (DDoS attack), idle (no traffic), unlicensed (no ICP filing), capping (bandwidth cap reached), readonly (read-only)
                     * 
                     */
                    void SetDisable(const std::string& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     * 
                     */
                    bool DisableHasBeenSet() const;

                    /**
                     * 获取Acceleration region. Valid values: mainland, oversea, global.
                     * @return Area Acceleration region. Valid values: mainland, oversea, global.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region. Valid values: mainland, oversea, global.
                     * @param _area Acceleration region. Valid values: mainland, oversea, global.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Domain name lock status. normal: not locked; global: globally locked
                     * @return Readonly Domain name lock status. normal: not locked; global: globally locked
                     * 
                     */
                    std::string GetReadonly() const;

                    /**
                     * 设置Domain name lock status. normal: not locked; global: globally locked
                     * @param _readonly Domain name lock status. normal: not locked; global: globally locked
                     * 
                     */
                    void SetReadonly(const std::string& _readonly);

                    /**
                     * 判断参数 Readonly 是否已赋值
                     * @return Readonly 是否已赋值
                     * 
                     */
                    bool ReadonlyHasBeenSet() const;

                    /**
                     * 获取Domain name tag
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return Tag Domain name tag
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Domain name tag
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param _tag Domain name tag
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * Domain name ID.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Tencent Cloud account ID.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * CDN acceleration domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Domain name CNAME.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * Domain name status. Valid values: pending (reviewing), rejected (rejected), processing (deploying after approval), online (enabled), offline (disabled), deleted (deleted).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Domain name creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Domain name update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Origin server configuration details.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Domain name blockage status. Valid values: normal (normal), overdue (service is suspended due to arrears), quota (trial traffic package is used up), malicious (malicious user), ddos (DDoS attack), idle (no traffic), unlicensed (no ICP filing), capping (bandwidth cap reached), readonly (read-only)
                     */
                    std::string m_disable;
                    bool m_disableHasBeenSet;

                    /**
                     * Acceleration region. Valid values: mainland, oversea, global.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Domain name lock status. normal: not locked; global: globally locked
                     */
                    std::string m_readonly;
                    bool m_readonlyHasBeenSet;

                    /**
                     * Domain name tag
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINBRIEFINFO_H_
