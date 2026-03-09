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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DATABASEINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DATABASEINFO_H_

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
                * Database information
                */
                class DatabaseInfo : public AbstractModel
                {
                public:
                    DatabaseInfo();
                    ~DatabaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database GUID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Guid Database GUID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGuid() const;

                    /**
                     * 设置Database GUID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _guid Database GUID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGuid(const std::string& _guid);

                    /**
                     * 判断参数 Guid 是否已赋值
                     * @return Guid 是否已赋值
                     * 
                     */
                    bool GuidHasBeenSet() const;

                    /**
                     * 获取Database name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Database name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Database name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Database name.
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
                     * 获取Database catalog.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CatalogName Database catalog.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置Database catalog.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _catalogName Database catalog.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取Repository description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Repository description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Repository description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Repository description.
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
                     * 获取Database location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Location Database location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Database location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _location Database location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Database storage size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageSize Database storage size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置Database storage size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageSize Database storage size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatasourceId Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _datasourceId Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatasourceId(const int64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatasourceType Data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatasourceType() const;

                    /**
                     * 设置Data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _datasourceType Data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatasourceType(const std::string& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                private:

                    /**
                     * Database GUID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_guid;
                    bool m_guidHasBeenSet;

                    /**
                     * Database name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Database catalog.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * Repository description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Database location.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Database storage size.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * Data source ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Data source type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DATABASEINFO_H_
