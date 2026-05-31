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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKDATABASE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKDATABASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 
                */
                class RollbackDatabase : public AbstractModel
                {
                public:
                    RollbackDatabase();
                    ~RollbackDatabase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return OldDatabase 
                     * 
                     */
                    std::string GetOldDatabase() const;

                    /**
                     * 设置
                     * @param _oldDatabase 
                     * 
                     */
                    void SetOldDatabase(const std::string& _oldDatabase);

                    /**
                     * 判断参数 OldDatabase 是否已赋值
                     * @return OldDatabase 是否已赋值
                     * 
                     */
                    bool OldDatabaseHasBeenSet() const;

                    /**
                     * 获取
                     * @return NewDatabase 
                     * 
                     */
                    std::string GetNewDatabase() const;

                    /**
                     * 设置
                     * @param _newDatabase 
                     * 
                     */
                    void SetNewDatabase(const std::string& _newDatabase);

                    /**
                     * 判断参数 NewDatabase 是否已赋值
                     * @return NewDatabase 是否已赋值
                     * 
                     */
                    bool NewDatabaseHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_oldDatabase;
                    bool m_oldDatabaseHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_newDatabase;
                    bool m_newDatabaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKDATABASE_H_
