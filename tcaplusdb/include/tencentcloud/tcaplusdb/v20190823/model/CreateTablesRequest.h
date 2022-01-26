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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLESREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfoNew.h>
#include <tencentcloud/tcaplusdb/v20190823/model/TagInfoUnit.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * CreateTables request structure.
                */
                class CreateTablesRequest : public AbstractModel
                {
                public:
                    CreateTablesRequest();
                    ~CreateTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cluster where to create a table
                     * @return ClusterId ID of the cluster where to create a table
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster where to create a table
                     * @param ClusterId ID of the cluster where to create a table
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Table creation IDL file list selected by user
                     * @return IdlFiles Table creation IDL file list selected by user
                     */
                    std::vector<IdlFileInfo> GetIdlFiles() const;

                    /**
                     * 设置Table creation IDL file list selected by user
                     * @param IdlFiles Table creation IDL file list selected by user
                     */
                    void SetIdlFiles(const std::vector<IdlFileInfo>& _idlFiles);

                    /**
                     * 判断参数 IdlFiles 是否已赋值
                     * @return IdlFiles 是否已赋值
                     */
                    bool IdlFilesHasBeenSet() const;

                    /**
                     * 获取Information list of tables to be created
                     * @return SelectedTables Information list of tables to be created
                     */
                    std::vector<SelectedTableInfoNew> GetSelectedTables() const;

                    /**
                     * 设置Information list of tables to be created
                     * @param SelectedTables Information list of tables to be created
                     */
                    void SetSelectedTables(const std::vector<SelectedTableInfoNew>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     */
                    bool SelectedTablesHasBeenSet() const;

                    /**
                     * 获取Table tag list
                     * @return ResourceTags Table tag list
                     */
                    std::vector<TagInfoUnit> GetResourceTags() const;

                    /**
                     * 设置Table tag list
                     * @param ResourceTags Table tag list
                     */
                    void SetResourceTags(const std::vector<TagInfoUnit>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * ID of the cluster where to create a table
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Table creation IDL file list selected by user
                     */
                    std::vector<IdlFileInfo> m_idlFiles;
                    bool m_idlFilesHasBeenSet;

                    /**
                     * Information list of tables to be created
                     */
                    std::vector<SelectedTableInfoNew> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                    /**
                     * Table tag list
                     */
                    std::vector<TagInfoUnit> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLESREQUEST_H_
