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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNTABLEDATAINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNTABLEDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Information on the table containing layered cold and hot data
                */
                class CoolDownTableDataInfo : public AbstractModel
                {
                public:
                    CoolDownTableDataInfo();
                    ~CoolDownTableDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Column: DatabaseName
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatabaseName Column: DatabaseName
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Column: DatabaseName
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _databaseName Column: DatabaseName
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Column: TableName
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableName Column: TableName
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Column: TableName
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableName Column: TableName
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Column: Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Size Column: Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置Column: Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _size Column: Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Column: RemoteSize
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RemoteSize Column: RemoteSize
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemoteSize() const;

                    /**
                     * 设置Column: RemoteSize
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remoteSize Column: RemoteSize
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemoteSize(const std::string& _remoteSize);

                    /**
                     * 判断参数 RemoteSize 是否已赋值
                     * @return RemoteSize 是否已赋值
                     * 
                     */
                    bool RemoteSizeHasBeenSet() const;

                private:

                    /**
                     * Column: DatabaseName
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Column: TableName
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Column: Size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Column: RemoteSize
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remoteSize;
                    bool m_remoteSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNTABLEDATAINFO_H_
