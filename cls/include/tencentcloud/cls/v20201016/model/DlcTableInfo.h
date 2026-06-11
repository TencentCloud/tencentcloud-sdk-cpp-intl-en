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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DLCTABLEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DLCTABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Data Lake Computing Service (Data Lake Compute, DLC) data table configuration info
                */
                class DlcTableInfo : public AbstractModel
                {
                public:
                    DlcTableInfo();
                    ~DlcTableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data catalog
                     * @return DataDirectory Data catalog
                     * 
                     */
                    std::string GetDataDirectory() const;

                    /**
                     * 设置Data catalog
                     * @param _dataDirectory Data catalog
                     * 
                     */
                    void SetDataDirectory(const std::string& _dataDirectory);

                    /**
                     * 判断参数 DataDirectory 是否已赋值
                     * @return DataDirectory 是否已赋值
                     * 
                     */
                    bool DataDirectoryHasBeenSet() const;

                    /**
                     * 获取Database.
                     * @return DatabaseName Database.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database.
                     * @param _databaseName Database.
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
                     * 获取data table
                     * @return TableName data table
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置data table
                     * @param _tableName data table
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * Data catalog
                     */
                    std::string m_dataDirectory;
                    bool m_dataDirectoryHasBeenSet;

                    /**
                     * Database.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * data table
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DLCTABLEINFO_H_
