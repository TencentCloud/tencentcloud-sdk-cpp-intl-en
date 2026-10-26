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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDORGDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDORGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Add the return data of the organizational unit interface
                */
                class AddOrgData : public AbstractModel
                {
                public:
                    AddOrgData();
                    ~AddOrgData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Organization ID
                     * @return OrganizationId Organization ID
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置Organization ID
                     * @param _organizationId Organization ID
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取Organization name
                     * @return Name Organization name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Organization name
                     * @param _name Organization name
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
                     * 获取Organization parent node ID
                     * @return ParentId Organization parent node ID
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置Organization parent node ID
                     * @param _parentId Organization parent node ID
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取Organization hierarchy
                     * @return Level Organization hierarchy
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置Organization hierarchy
                     * @param _level Organization hierarchy
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取User ID.
                     * @return AppId User ID.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User ID.
                     * @param _appId User ID.
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
                     * 获取Organizational structure
                     * @return ParentIds Organizational structure
                     * 
                     */
                    std::string GetParentIds() const;

                    /**
                     * 设置Organizational structure
                     * @param _parentIds Organizational structure
                     * 
                     */
                    void SetParentIds(const std::string& _parentIds);

                    /**
                     * 判断参数 ParentIds 是否已赋值
                     * @return ParentIds 是否已赋值
                     * 
                     */
                    bool ParentIdsHasBeenSet() const;

                    /**
                     * 获取Total number of devices
                     * @return Total Total number of devices
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total number of devices
                     * @param _total Total number of devices
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Number of devices online
                     * @return Online Number of devices online
                     * 
                     */
                    int64_t GetOnline() const;

                    /**
                     * 设置Number of devices online
                     * @param _online Number of devices online
                     * 
                     */
                    void SetOnline(const int64_t& _online);

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     * 
                     */
                    bool OnlineHasBeenSet() const;

                private:

                    /**
                     * Organization ID
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * Organization name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Organization parent node ID
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * Organization hierarchy
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * User ID.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Organizational structure
                     */
                    std::string m_parentIds;
                    bool m_parentIdsHasBeenSet;

                    /**
                     * Total number of devices
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Number of devices online
                     */
                    int64_t m_online;
                    bool m_onlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDORGDATA_H_
