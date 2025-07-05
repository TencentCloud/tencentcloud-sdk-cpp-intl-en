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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_TABLE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_TABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/TableColumn.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Table
                */
                class Table : public AbstractModel
                {
                public:
                    Table();
                    ~Table() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableId Table ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Table ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableId Table ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Associated project ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Associated project ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Associated project ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Associated project ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Table description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Table description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Table description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Table description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Table column
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Columns Table column
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TableColumn> GetColumns() const;

                    /**
                     * 设置Table column
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _columns Table column
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetColumns(const std::vector<TableColumn>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Creator Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _creator Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                private:

                    /**
                     * Table ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Associated project ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Table description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Table column
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TableColumn> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_TABLE_H_
