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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OBJECTS_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OBJECTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/MigrateObject.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * sync object list
                */
                class Objects : public AbstractModel
                {
                public:
                    Objects();
                    ~Objects() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database table information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatabaseTables Database table information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MigrateObject GetDatabaseTables() const;

                    /**
                     * 设置Database table information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _databaseTables Database table information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabaseTables(const MigrateObject& _databaseTables);

                    /**
                     * 判断参数 DatabaseTables 是否已赋值
                     * @return DatabaseTables 是否已赋值
                     * 
                     */
                    bool DatabaseTablesHasBeenSet() const;

                private:

                    /**
                     * Database table information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MigrateObject m_databaseTables;
                    bool m_databaseTablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OBJECTS_H_
