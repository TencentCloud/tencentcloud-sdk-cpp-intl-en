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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IMPORTSNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IMPORTSNAPSHOTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SnapshotInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/KeyFile.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ImportSnapshots request structure.
                */
                class ImportSnapshotsRequest : public AbstractModel
                {
                public:
                    ImportSnapshotsRequest();
                    ~ImportSnapshotsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the cluster where the original table (from which the snapshot was created) resides
                     * @return ClusterId The ID of the cluster where the original table (from which the snapshot was created) resides
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The ID of the cluster where the original table (from which the snapshot was created) resides
                     * @param _clusterId The ID of the cluster where the original table (from which the snapshot was created) resides
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
                     * 获取The information of the snapshot to import
                     * @return Snapshots The information of the snapshot to import
                     * 
                     */
                    SnapshotInfo GetSnapshots() const;

                    /**
                     * 设置The information of the snapshot to import
                     * @param _snapshots The information of the snapshot to import
                     * 
                     */
                    void SetSnapshots(const SnapshotInfo& _snapshots);

                    /**
                     * 判断参数 Snapshots 是否已赋值
                     * @return Snapshots 是否已赋值
                     * 
                     */
                    bool SnapshotsHasBeenSet() const;

                    /**
                     * 获取Whether to import partial data of the snapshot. Valid values: `TRUE` (import partial data), `FALSE` (import all data).
                     * @return ImportSpecialKey Whether to import partial data of the snapshot. Valid values: `TRUE` (import partial data), `FALSE` (import all data).
                     * 
                     */
                    std::string GetImportSpecialKey() const;

                    /**
                     * 设置Whether to import partial data of the snapshot. Valid values: `TRUE` (import partial data), `FALSE` (import all data).
                     * @param _importSpecialKey Whether to import partial data of the snapshot. Valid values: `TRUE` (import partial data), `FALSE` (import all data).
                     * 
                     */
                    void SetImportSpecialKey(const std::string& _importSpecialKey);

                    /**
                     * 判断参数 ImportSpecialKey 是否已赋值
                     * @return ImportSpecialKey 是否已赋值
                     * 
                     */
                    bool ImportSpecialKeyHasBeenSet() const;

                    /**
                     * 获取Whether to import to the original table. Valid values: `TRUE` (import to the original table), `FALSE` (import to a new table).
                     * @return ImportOriginTable Whether to import to the original table. Valid values: `TRUE` (import to the original table), `FALSE` (import to a new table).
                     * 
                     */
                    std::string GetImportOriginTable() const;

                    /**
                     * 设置Whether to import to the original table. Valid values: `TRUE` (import to the original table), `FALSE` (import to a new table).
                     * @param _importOriginTable Whether to import to the original table. Valid values: `TRUE` (import to the original table), `FALSE` (import to a new table).
                     * 
                     */
                    void SetImportOriginTable(const std::string& _importOriginTable);

                    /**
                     * 判断参数 ImportOriginTable 是否已赋值
                     * @return ImportOriginTable 是否已赋值
                     * 
                     */
                    bool ImportOriginTableHasBeenSet() const;

                    /**
                     * 获取The file of the keys of the partial data
                     * @return KeyFile The file of the keys of the partial data
                     * 
                     */
                    KeyFile GetKeyFile() const;

                    /**
                     * 设置The file of the keys of the partial data
                     * @param _keyFile The file of the keys of the partial data
                     * 
                     */
                    void SetKeyFile(const KeyFile& _keyFile);

                    /**
                     * 判断参数 KeyFile 是否已赋值
                     * @return KeyFile 是否已赋值
                     * 
                     */
                    bool KeyFileHasBeenSet() const;

                    /**
                     * 获取The ID of the table group where the new table resides, which is valid only when `ImportOriginTable` is set to `FALSE`
                     * @return NewTableGroupId The ID of the table group where the new table resides, which is valid only when `ImportOriginTable` is set to `FALSE`
                     * 
                     */
                    std::string GetNewTableGroupId() const;

                    /**
                     * 设置The ID of the table group where the new table resides, which is valid only when `ImportOriginTable` is set to `FALSE`
                     * @param _newTableGroupId The ID of the table group where the new table resides, which is valid only when `ImportOriginTable` is set to `FALSE`
                     * 
                     */
                    void SetNewTableGroupId(const std::string& _newTableGroupId);

                    /**
                     * 判断参数 NewTableGroupId 是否已赋值
                     * @return NewTableGroupId 是否已赋值
                     * 
                     */
                    bool NewTableGroupIdHasBeenSet() const;

                    /**
                     * 获取The name of the new table, which is valid only when `ImportOriginTable` is set to `FALSE`. TcaplusDB will automatically create a table named `NewTableName` of the same structure as that of the original table.
                     * @return NewTableName The name of the new table, which is valid only when `ImportOriginTable` is set to `FALSE`. TcaplusDB will automatically create a table named `NewTableName` of the same structure as that of the original table.
                     * 
                     */
                    std::string GetNewTableName() const;

                    /**
                     * 设置The name of the new table, which is valid only when `ImportOriginTable` is set to `FALSE`. TcaplusDB will automatically create a table named `NewTableName` of the same structure as that of the original table.
                     * @param _newTableName The name of the new table, which is valid only when `ImportOriginTable` is set to `FALSE`. TcaplusDB will automatically create a table named `NewTableName` of the same structure as that of the original table.
                     * 
                     */
                    void SetNewTableName(const std::string& _newTableName);

                    /**
                     * 判断参数 NewTableName 是否已赋值
                     * @return NewTableName 是否已赋值
                     * 
                     */
                    bool NewTableNameHasBeenSet() const;

                private:

                    /**
                     * The ID of the cluster where the original table (from which the snapshot was created) resides
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The information of the snapshot to import
                     */
                    SnapshotInfo m_snapshots;
                    bool m_snapshotsHasBeenSet;

                    /**
                     * Whether to import partial data of the snapshot. Valid values: `TRUE` (import partial data), `FALSE` (import all data).
                     */
                    std::string m_importSpecialKey;
                    bool m_importSpecialKeyHasBeenSet;

                    /**
                     * Whether to import to the original table. Valid values: `TRUE` (import to the original table), `FALSE` (import to a new table).
                     */
                    std::string m_importOriginTable;
                    bool m_importOriginTableHasBeenSet;

                    /**
                     * The file of the keys of the partial data
                     */
                    KeyFile m_keyFile;
                    bool m_keyFileHasBeenSet;

                    /**
                     * The ID of the table group where the new table resides, which is valid only when `ImportOriginTable` is set to `FALSE`
                     */
                    std::string m_newTableGroupId;
                    bool m_newTableGroupIdHasBeenSet;

                    /**
                     * The name of the new table, which is valid only when `ImportOriginTable` is set to `FALSE`. TcaplusDB will automatically create a table named `NewTableName` of the same structure as that of the original table.
                     */
                    std::string m_newTableName;
                    bool m_newTableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IMPORTSNAPSHOTSREQUEST_H_
