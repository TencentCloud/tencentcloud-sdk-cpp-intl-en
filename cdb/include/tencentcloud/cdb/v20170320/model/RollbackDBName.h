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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKDBNAME_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKDBNAME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Name of the database for rollback
                */
                class RollbackDBName : public AbstractModel
                {
                public:
                    RollbackDBName();
                    ~RollbackDBName() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Original database name before rollback
                     * @return DatabaseName Original database name before rollback
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Original database name before rollback
                     * @param _databaseName Original database name before rollback
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
                     * 获取Name of the rolled back database
                     * @return NewDatabaseName Name of the rolled back database
                     * 
                     */
                    std::string GetNewDatabaseName() const;

                    /**
                     * 设置Name of the rolled back database
                     * @param _newDatabaseName Name of the rolled back database
                     * 
                     */
                    void SetNewDatabaseName(const std::string& _newDatabaseName);

                    /**
                     * 判断参数 NewDatabaseName 是否已赋值
                     * @return NewDatabaseName 是否已赋值
                     * 
                     */
                    bool NewDatabaseNameHasBeenSet() const;

                private:

                    /**
                     * Original database name before rollback
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Name of the rolled back database
                     */
                    std::string m_newDatabaseName;
                    bool m_newDatabaseNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKDBNAME_H_
