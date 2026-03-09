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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DATASOURCE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DATASOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Data source object.
                */
                class DataSource : public AbstractModel
                {
                public:
                    DataSource();
                    ~DataSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Belonging project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Belonging project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Belonging project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Belonging project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Data source type: enumeration value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Data source type: enumeration value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Data source type: enumeration value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Data source type: enumeration value.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Data source name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Data source name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Data source name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Data source name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Data source display name for visual inspection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DisplayName Data source display name for visual inspection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Data source display name for visual inspection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _displayName Data source display name for visual inspection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取Data source description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Data source description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Data source description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Data source description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Affiliated project Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectName Affiliated project Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Affiliated project Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectName Affiliated project Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Data source creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUser Data source creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Data source creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUser Data source creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Updater
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyUser Updater
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyUser() const;

                    /**
                     * 设置Updater
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyUser Updater
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifyUser(const std::string& _modifyUser);

                    /**
                     * 判断参数 ModifyUser 是否已赋值
                     * @return ModifyUser 是否已赋值
                     * 
                     */
                    bool ModifyUserHasBeenSet() const;

                    /**
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Configuration message of data sources is stored in JSON KV. KV storage information varies based on data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProdConProperties Configuration message of data sources is stored in JSON KV. KV storage information varies based on data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProdConProperties() const;

                    /**
                     * 设置Configuration message of data sources is stored in JSON KV. KV storage information varies based on data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _prodConProperties Configuration message of data sources is stored in JSON KV. KV storage information varies based on data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProdConProperties(const std::string& _prodConProperties);

                    /**
                     * 判断参数 ProdConProperties 是否已赋值
                     * @return ProdConProperties 是否已赋值
                     * 
                     */
                    bool ProdConPropertiesHasBeenSet() const;

                    /**
                     * 获取Same as params content for developing data of data sources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DevConProperties Same as params content for developing data of data sources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDevConProperties() const;

                    /**
                     * 设置Same as params content for developing data of data sources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _devConProperties Same as params content for developing data of data sources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDevConProperties(const std::string& _devConProperties);

                    /**
                     * 判断参数 DevConProperties 是否已赋值
                     * @return DevConProperties 是否已赋值
                     * 
                     */
                    bool DevConPropertiesHasBeenSet() const;

                    /**
                     * 获取Data source type.

-DB - custom definition source.
-CLUSTER --- system source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Category Data source type.

-DB - custom definition source.
-CLUSTER --- system source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Data source type.

-DB - custom definition source.
-CLUSTER --- system source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _category Data source type.

-DB - custom definition source.
-CLUSTER --- system source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * Belonging project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Data source type: enumeration value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Data source name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Data source display name for visual inspection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Data source description information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Affiliated project Name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Data source creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Updater
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyUser;
                    bool m_modifyUserHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Configuration message of data sources is stored in JSON KV. KV storage information varies based on data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_prodConProperties;
                    bool m_prodConPropertiesHasBeenSet;

                    /**
                     * Same as params content for developing data of data sources.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_devConProperties;
                    bool m_devConPropertiesHasBeenSet;

                    /**
                     * Data source type.

-DB - custom definition source.
-CLUSTER --- system source.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DATASOURCE_H_
