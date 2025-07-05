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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_OBJECTS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_OBJECTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Database.h>
#include <tencentcloud/dts/v20211206/model/OnlineDDL.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Description of synced database objects
                */
                class Objects : public AbstractModel
                {
                public:
                    Objects();
                    ~Objects() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sync object type. Valid value: `Partial` (Partial objects). Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Mode Sync object type. Valid value: `Partial` (Partial objects). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Sync object type. Valid value: `Partial` (Partial objects). Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mode Sync object type. Valid value: `Partial` (Partial objects). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Sync object, which is required if `Mode` is `Partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Databases Sync object, which is required if `Mode` is `Partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Database> GetDatabases() const;

                    /**
                     * 设置Sync object, which is required if `Mode` is `Partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _databases Sync object, which is required if `Mode` is `Partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabases(const std::vector<Database>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                    /**
                     * 获取Advanced object types, such as function and procedure. Note: If you want to migrate and synchronize advanced objects, the corresponding advanced object type should be included in this configuration. When advanced objects need to be synchronized, the initialization type must include the structure initialization type, that is, the Options.InitType value of the task is Structure or Full.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AdvancedObjects Advanced object types, such as function and procedure. Note: If you want to migrate and synchronize advanced objects, the corresponding advanced object type should be included in this configuration. When advanced objects need to be synchronized, the initialization type must include the structure initialization type, that is, the Options.InitType value of the task is Structure or Full.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAdvancedObjects() const;

                    /**
                     * 设置Advanced object types, such as function and procedure. Note: If you want to migrate and synchronize advanced objects, the corresponding advanced object type should be included in this configuration. When advanced objects need to be synchronized, the initialization type must include the structure initialization type, that is, the Options.InitType value of the task is Structure or Full.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _advancedObjects Advanced object types, such as function and procedure. Note: If you want to migrate and synchronize advanced objects, the corresponding advanced object type should be included in this configuration. When advanced objects need to be synchronized, the initialization type must include the structure initialization type, that is, the Options.InitType value of the task is Structure or Full.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAdvancedObjects(const std::vector<std::string>& _advancedObjects);

                    /**
                     * 判断参数 AdvancedObjects 是否已赋值
                     * @return AdvancedObjects 是否已赋值
                     * 
                     */
                    bool AdvancedObjectsHasBeenSet() const;

                    /**
                     * 获取A redundant field that specifies the online DDL type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OnlineDDL A redundant field that specifies the online DDL type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    OnlineDDL GetOnlineDDL() const;

                    /**
                     * 设置A redundant field that specifies the online DDL type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _onlineDDL A redundant field that specifies the online DDL type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOnlineDDL(const OnlineDDL& _onlineDDL);

                    /**
                     * 判断参数 OnlineDDL 是否已赋值
                     * @return OnlineDDL 是否已赋值
                     * 
                     */
                    bool OnlineDDLHasBeenSet() const;

                private:

                    /**
                     * Sync object type. Valid value: `Partial` (Partial objects). Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Sync object, which is required if `Mode` is `Partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Database> m_databases;
                    bool m_databasesHasBeenSet;

                    /**
                     * Advanced object types, such as function and procedure. Note: If you want to migrate and synchronize advanced objects, the corresponding advanced object type should be included in this configuration. When advanced objects need to be synchronized, the initialization type must include the structure initialization type, that is, the Options.InitType value of the task is Structure or Full.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_advancedObjects;
                    bool m_advancedObjectsHasBeenSet;

                    /**
                     * A redundant field that specifies the online DDL type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OnlineDDL m_onlineDDL;
                    bool m_onlineDDLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_OBJECTS_H_
