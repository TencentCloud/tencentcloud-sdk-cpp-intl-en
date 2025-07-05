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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPITEM_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPITEM_H_

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
                * When creating a backup, you need to specify the information of the table to be backed up.
                */
                class BackupItem : public AbstractModel
                {
                public:
                    BackupItem();
                    ~BackupItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the database to be backed up
                     * @return Db Name of the database to be backed up
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置Name of the database to be backed up
                     * @param _db Name of the database to be backed up
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取Name of the table to be backed up. If this parameter is passed in, the specified table in the database will be backed up; otherwise, the database will be backed up.
                     * @return Table Name of the table to be backed up. If this parameter is passed in, the specified table in the database will be backed up; otherwise, the database will be backed up.
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Name of the table to be backed up. If this parameter is passed in, the specified table in the database will be backed up; otherwise, the database will be backed up.
                     * @param _table Name of the table to be backed up. If this parameter is passed in, the specified table in the database will be backed up; otherwise, the database will be backed up.
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                private:

                    /**
                     * Name of the database to be backed up
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * Name of the table to be backed up. If this parameter is passed in, the specified table in the database will be backed up; otherwise, the database will be backed up.
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPITEM_H_
