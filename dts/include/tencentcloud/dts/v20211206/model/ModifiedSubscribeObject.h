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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFIEDSUBSCRIBEOBJECT_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFIEDSUBSCRIBEOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * The object of the data subscription is used in the ModifySubscribeObjects interface. Similar to the SubscribeObject structure, only the type and parameter names differ.
                */
                class ModifiedSubscribeObject : public AbstractModel
                {
                public:
                    ModifiedSubscribeObject();
                    ~ModifiedSubscribeObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subscription object type. Valid values: 0 (database); 1 (table, for mongo tasks, this corresponds to a collection).Note: mongo only supports full instance, single database or single collection subscription, so this field should not conflict with SubscribeObjectType. For example, when SubscribeObjectType=4, it means mongo single database subscription, then 0 should be passed in this field.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ObjectsType Subscription object type. Valid values: 0 (database); 1 (table, for mongo tasks, this corresponds to a collection).Note: mongo only supports full instance, single database or single collection subscription, so this field should not conflict with SubscribeObjectType. For example, when SubscribeObjectType=4, it means mongo single database subscription, then 0 should be passed in this field.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetObjectsType() const;

                    /**
                     * 设置Subscription object type. Valid values: 0 (database); 1 (table, for mongo tasks, this corresponds to a collection).Note: mongo only supports full instance, single database or single collection subscription, so this field should not conflict with SubscribeObjectType. For example, when SubscribeObjectType=4, it means mongo single database subscription, then 0 should be passed in this field.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _objectsType Subscription object type. Valid values: 0 (database); 1 (table, for mongo tasks, this corresponds to a collection).Note: mongo only supports full instance, single database or single collection subscription, so this field should not conflict with SubscribeObjectType. For example, when SubscribeObjectType=4, it means mongo single database subscription, then 0 should be passed in this field.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetObjectsType(const int64_t& _objectsType);

                    /**
                     * 判断参数 ObjectsType 是否已赋值
                     * @return ObjectsType 是否已赋值
                     * 
                     */
                    bool ObjectsTypeHasBeenSet() const;

                    /**
                     * 获取Subscription database nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @return DatabaseName Subscription database nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Subscription database nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _databaseName Subscription database nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取Name of the table (or collection) in the subscription database. If ObjectsType is 1, this field is required and not empty; 
                     * @return TableNames Name of the table (or collection) in the subscription database. If ObjectsType is 1, this field is required and not empty; 
                     * 
                     */
                    std::vector<std::string> GetTableNames() const;

                    /**
                     * 设置Name of the table (or collection) in the subscription database. If ObjectsType is 1, this field is required and not empty; 
                     * @param _tableNames Name of the table (or collection) in the subscription database. If ObjectsType is 1, this field is required and not empty; 
                     * 
                     */
                    void SetTableNames(const std::vector<std::string>& _tableNames);

                    /**
                     * 判断参数 TableNames 是否已赋值
                     * @return TableNames 是否已赋值
                     * 
                     */
                    bool TableNamesHasBeenSet() const;

                private:

                    /**
                     * Subscription object type. Valid values: 0 (database); 1 (table, for mongo tasks, this corresponds to a collection).Note: mongo only supports full instance, single database or single collection subscription, so this field should not conflict with SubscribeObjectType. For example, when SubscribeObjectType=4, it means mongo single database subscription, then 0 should be passed in this field.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_objectsType;
                    bool m_objectsTypeHasBeenSet;

                    /**
                     * Subscription database nameNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Name of the table (or collection) in the subscription database. If ObjectsType is 1, this field is required and not empty; 
                     */
                    std::vector<std::string> m_tableNames;
                    bool m_tableNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFIEDSUBSCRIBEOBJECT_H_
