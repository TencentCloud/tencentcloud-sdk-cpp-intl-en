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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPAREIDLFILESREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPAREIDLFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfoNew.h>
#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * CompareIdlFiles request structure.
                */
                class CompareIdlFilesRequest : public AbstractModel
                {
                public:
                    CompareIdlFilesRequest();
                    ~CompareIdlFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cluster where the table to be modified resides
                     * @return ClusterId ID of the cluster where the table to be modified resides
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster where the table to be modified resides
                     * @param ClusterId ID of the cluster where the table to be modified resides
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取List of tables to be modified
                     * @return SelectedTables List of tables to be modified
                     */
                    std::vector<SelectedTableInfoNew> GetSelectedTables() const;

                    /**
                     * 设置List of tables to be modified
                     * @param SelectedTables List of tables to be modified
                     */
                    void SetSelectedTables(const std::vector<SelectedTableInfoNew>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     */
                    bool SelectedTablesHasBeenSet() const;

                    /**
                     * 获取Selected list of uploaded IDL files. Either this parameter or `NewIdlFiles` must be selected
                     * @return ExistingIdlFiles Selected list of uploaded IDL files. Either this parameter or `NewIdlFiles` must be selected
                     */
                    std::vector<IdlFileInfo> GetExistingIdlFiles() const;

                    /**
                     * 设置Selected list of uploaded IDL files. Either this parameter or `NewIdlFiles` must be selected
                     * @param ExistingIdlFiles Selected list of uploaded IDL files. Either this parameter or `NewIdlFiles` must be selected
                     */
                    void SetExistingIdlFiles(const std::vector<IdlFileInfo>& _existingIdlFiles);

                    /**
                     * 判断参数 ExistingIdlFiles 是否已赋值
                     * @return ExistingIdlFiles 是否已赋值
                     */
                    bool ExistingIdlFilesHasBeenSet() const;

                    /**
                     * 获取List of IDL files to be uploaded. Either this parameter or `ExistingIdlFiles` must be selected
                     * @return NewIdlFiles List of IDL files to be uploaded. Either this parameter or `ExistingIdlFiles` must be selected
                     */
                    std::vector<IdlFileInfo> GetNewIdlFiles() const;

                    /**
                     * 设置List of IDL files to be uploaded. Either this parameter or `ExistingIdlFiles` must be selected
                     * @param NewIdlFiles List of IDL files to be uploaded. Either this parameter or `ExistingIdlFiles` must be selected
                     */
                    void SetNewIdlFiles(const std::vector<IdlFileInfo>& _newIdlFiles);

                    /**
                     * 判断参数 NewIdlFiles 是否已赋值
                     * @return NewIdlFiles 是否已赋值
                     */
                    bool NewIdlFilesHasBeenSet() const;

                private:

                    /**
                     * ID of the cluster where the table to be modified resides
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * List of tables to be modified
                     */
                    std::vector<SelectedTableInfoNew> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                    /**
                     * Selected list of uploaded IDL files. Either this parameter or `NewIdlFiles` must be selected
                     */
                    std::vector<IdlFileInfo> m_existingIdlFiles;
                    bool m_existingIdlFilesHasBeenSet;

                    /**
                     * List of IDL files to be uploaded. Either this parameter or `ExistingIdlFiles` must be selected
                     */
                    std::vector<IdlFileInfo> m_newIdlFiles;
                    bool m_newIdlFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPAREIDLFILESREQUEST_H_
