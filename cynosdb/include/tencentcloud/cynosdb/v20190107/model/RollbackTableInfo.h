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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTABLEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTABLEINFO_H_

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
                class RollbackTableInfo : public AbstractModel
                {
                public:
                    RollbackTableInfo();
                    ~RollbackTableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Old table name.
                     * @return OldTable Old table name.
                     * 
                     */
                    std::string GetOldTable() const;

                    /**
                     * 设置Old table name.
                     * @param _oldTable Old table name.
                     * 
                     */
                    void SetOldTable(const std::string& _oldTable);

                    /**
                     * 判断参数 OldTable 是否已赋值
                     * @return OldTable 是否已赋值
                     * 
                     */
                    bool OldTableHasBeenSet() const;

                    /**
                     * 获取New table name.
                     * @return NewTable New table name.
                     * 
                     */
                    std::string GetNewTable() const;

                    /**
                     * 设置New table name.
                     * @param _newTable New table name.
                     * 
                     */
                    void SetNewTable(const std::string& _newTable);

                    /**
                     * 判断参数 NewTable 是否已赋值
                     * @return NewTable 是否已赋值
                     * 
                     */
                    bool NewTableHasBeenSet() const;

                private:

                    /**
                     * Old table name.
                     */
                    std::string m_oldTable;
                    bool m_oldTableHasBeenSet;

                    /**
                     * New table name.
                     */
                    std::string m_newTable;
                    bool m_newTableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTABLEINFO_H_
