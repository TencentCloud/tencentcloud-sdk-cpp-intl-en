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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_VERIFYIDLFILESREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_VERIFYIDLFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * VerifyIdlFiles request structure.
                */
                class VerifyIdlFilesRequest : public AbstractModel
                {
                public:
                    VerifyIdlFilesRequest();
                    ~VerifyIdlFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cluster where to create a table
                     * @return ClusterId ID of the cluster where to create a table
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster where to create a table
                     * @param _clusterId ID of the cluster where to create a table
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取ID of the table group where to create a table
                     * @return TableGroupId ID of the table group where to create a table
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置ID of the table group where to create a table
                     * @param _tableGroupId ID of the table group where to create a table
                     * 
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     * 
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取List of information of uploaded IDL files. Either this parameter or `NewIdlFiles` must be present
                     * @return ExistingIdlFiles List of information of uploaded IDL files. Either this parameter or `NewIdlFiles` must be present
                     * 
                     */
                    std::vector<IdlFileInfo> GetExistingIdlFiles() const;

                    /**
                     * 设置List of information of uploaded IDL files. Either this parameter or `NewIdlFiles` must be present
                     * @param _existingIdlFiles List of information of uploaded IDL files. Either this parameter or `NewIdlFiles` must be present
                     * 
                     */
                    void SetExistingIdlFiles(const std::vector<IdlFileInfo>& _existingIdlFiles);

                    /**
                     * 判断参数 ExistingIdlFiles 是否已赋值
                     * @return ExistingIdlFiles 是否已赋值
                     * 
                     */
                    bool ExistingIdlFilesHasBeenSet() const;

                    /**
                     * 获取List of information of IDL files to be uploaded. Either this parameter or `ExistingIdlFiles` must be present
                     * @return NewIdlFiles List of information of IDL files to be uploaded. Either this parameter or `ExistingIdlFiles` must be present
                     * 
                     */
                    std::vector<IdlFileInfo> GetNewIdlFiles() const;

                    /**
                     * 设置List of information of IDL files to be uploaded. Either this parameter or `ExistingIdlFiles` must be present
                     * @param _newIdlFiles List of information of IDL files to be uploaded. Either this parameter or `ExistingIdlFiles` must be present
                     * 
                     */
                    void SetNewIdlFiles(const std::vector<IdlFileInfo>& _newIdlFiles);

                    /**
                     * 判断参数 NewIdlFiles 是否已赋值
                     * @return NewIdlFiles 是否已赋值
                     * 
                     */
                    bool NewIdlFilesHasBeenSet() const;

                private:

                    /**
                     * ID of the cluster where to create a table
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * ID of the table group where to create a table
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * List of information of uploaded IDL files. Either this parameter or `NewIdlFiles` must be present
                     */
                    std::vector<IdlFileInfo> m_existingIdlFiles;
                    bool m_existingIdlFilesHasBeenSet;

                    /**
                     * List of information of IDL files to be uploaded. Either this parameter or `ExistingIdlFiles` must be present
                     */
                    std::vector<IdlFileInfo> m_newIdlFiles;
                    bool m_newIdlFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_VERIFYIDLFILESREQUEST_H_
