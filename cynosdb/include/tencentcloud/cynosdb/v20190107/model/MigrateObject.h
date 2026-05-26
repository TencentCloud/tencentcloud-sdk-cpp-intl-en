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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MIGRATEOBJECT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MIGRATEOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/MigrateDBItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Synchronize data objects
                */
                class MigrateObject : public AbstractModel
                {
                public:
                    MigrateObject();
                    ~MigrateObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database migration mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MigrateDBMode Database migration mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMigrateDBMode() const;

                    /**
                     * 设置Database migration mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _migrateDBMode Database migration mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMigrateDBMode(const std::string& _migrateDBMode);

                    /**
                     * 判断参数 MigrateDBMode 是否已赋值
                     * @return MigrateDBMode 是否已赋值
                     * 
                     */
                    bool MigrateDBModeHasBeenSet() const;

                    /**
                     * 获取Database information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Databases Database information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MigrateDBItem> GetDatabases() const;

                    /**
                     * 设置Database information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _databases Database information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabases(const std::vector<MigrateDBItem>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                private:

                    /**
                     * Database migration mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_migrateDBMode;
                    bool m_migrateDBModeHasBeenSet;

                    /**
                     * Database information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MigrateDBItem> m_databases;
                    bool m_databasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MIGRATEOBJECT_H_
