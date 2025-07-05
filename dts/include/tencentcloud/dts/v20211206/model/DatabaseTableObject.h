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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DATABASETABLEOBJECT_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DATABASETABLEOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DBItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Migration object options, which tell DTS which database/table objects should be migrated.
                */
                class DatabaseTableObject : public AbstractModel
                {
                public:
                    DatabaseTableObject();
                    ~DatabaseTableObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Migration object type. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ObjectMode Migration object type. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetObjectMode() const;

                    /**
                     * 设置Migration object type. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _objectMode Migration object type. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetObjectMode(const std::string& _objectMode);

                    /**
                     * 判断参数 ObjectMode 是否已赋值
                     * @return ObjectMode 是否已赋值
                     * 
                     */
                    bool ObjectModeHasBeenSet() const;

                    /**
                     * 获取Migration object, which is required if `ObjectMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Databases Migration object, which is required if `ObjectMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DBItem> GetDatabases() const;

                    /**
                     * 设置Migration object, which is required if `ObjectMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _databases Migration object, which is required if `ObjectMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabases(const std::vector<DBItem>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                    /**
                     * 获取Advanced object types, such as trigger, function, procedure, event. Note: If you want to migrate and synchronize advanced objects, the corresponding advanced object type should be included in this configuration.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AdvancedObjects Advanced object types, such as trigger, function, procedure, event. Note: If you want to migrate and synchronize advanced objects, the corresponding advanced object type should be included in this configuration.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAdvancedObjects() const;

                    /**
                     * 设置Advanced object types, such as trigger, function, procedure, event. Note: If you want to migrate and synchronize advanced objects, the corresponding advanced object type should be included in this configuration.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _advancedObjects Advanced object types, such as trigger, function, procedure, event. Note: If you want to migrate and synchronize advanced objects, the corresponding advanced object type should be included in this configuration.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAdvancedObjects(const std::vector<std::string>& _advancedObjects);

                    /**
                     * 判断参数 AdvancedObjects 是否已赋值
                     * @return AdvancedObjects 是否已赋值
                     * 
                     */
                    bool AdvancedObjectsHasBeenSet() const;

                private:

                    /**
                     * Migration object type. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_objectMode;
                    bool m_objectModeHasBeenSet;

                    /**
                     * Migration object, which is required if `ObjectMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DBItem> m_databases;
                    bool m_databasesHasBeenSet;

                    /**
                     * Advanced object types, such as trigger, function, procedure, event. Note: If you want to migrate and synchronize advanced objects, the corresponding advanced object type should be included in this configuration.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_advancedObjects;
                    bool m_advancedObjectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DATABASETABLEOBJECT_H_
