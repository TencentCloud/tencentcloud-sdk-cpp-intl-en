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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEBASEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEBASEINFO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Data Source Object
                */
                class DatasourceBaseInfo : public AbstractModel
                {
                public:
                    DatasourceBaseInfo();
                    ~DatasourceBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取If the data source list is bound to a database, then it is the database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseNames If the data source list is bound to a database, then it is the database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDatabaseNames() const;

                    /**
                     * 设置If the data source list is bound to a database, then it is the database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseNames If the data source list is bound to a database, then it is the database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatabaseNames(const std::vector<std::string>& _databaseNames);

                    /**
                     * 判断参数 DatabaseNames 是否已赋值
                     * @return DatabaseNames 是否已赋值
                     * 
                     */
                    bool DatabaseNamesHasBeenSet() const;

                    /**
                     * 获取Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Description Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _description Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Data Source ID
                     * @return ID Data Source ID
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置Data Source ID
                     * @param _iD Data Source ID
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Instance Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _instance Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstance(const std::string& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取Data Source Name, cannot be empty under the same SpaceName
                     * @return Name Data Source Name, cannot be empty under the same SpaceName
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Data Source Name, cannot be empty under the same SpaceName
                     * @param _name Data Source Name, cannot be empty under the same SpaceName
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
                     * 获取Region to which the data source engine belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Region Region to which the data source engine belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region to which the data source engine belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _region Region to which the data source engine belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Data Source Type: enumerated valuesNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Type Data Source Type: enumerated valuesNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Data Source Type: enumerated valuesNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _type Data Source Type: enumerated valuesNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Cluster ID to which the data source belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ClusterId Cluster ID to which the data source belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID to which the data source belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _clusterId Cluster ID to which the data source belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Version information of the data source
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Version Version information of the data source
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version information of the data source
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _version Version information of the data source
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Attached parameter information of the data source Params JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ParamsString Attached parameter information of the data source Params JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParamsString() const;

                    /**
                     * 设置Attached parameter information of the data source Params JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _paramsString Attached parameter information of the data source Params JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetParamsString(const std::string& _paramsString);

                    /**
                     * 判断参数 ParamsString 是否已赋值
                     * @return ParamsString 是否已赋值
                     * 
                     */
                    bool ParamsStringHasBeenSet() const;

                    /**
                     * 获取Distinguish whether the data source type is a custom Definition source or a system source
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Category Distinguish whether the data source type is a custom Definition source or a system source
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Distinguish whether the data source type is a custom Definition source or a system source
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _category Distinguish whether the data source type is a custom Definition source or a system source
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * If the data source list is bound to a database, then it is the database nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_databaseNames;
                    bool m_databaseNamesHasBeenSet;

                    /**
                     * Data source description informationNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Data Source ID
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Instance ID of the data source engine, e.g., CDB Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * Data Source Name, cannot be empty under the same SpaceName
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Region to which the data source engine belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Data Source Type: enumerated valuesNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Cluster ID to which the data source belongs
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Version information of the data source
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Attached parameter information of the data source Params JSON string
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_paramsString;
                    bool m_paramsStringHasBeenSet;

                    /**
                     * Distinguish whether the data source type is a custom Definition source or a system source
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEBASEINFO_H_
