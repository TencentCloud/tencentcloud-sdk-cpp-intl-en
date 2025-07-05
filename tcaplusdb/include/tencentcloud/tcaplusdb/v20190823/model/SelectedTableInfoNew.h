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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SELECTEDTABLEINFONEW_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SELECTEDTABLEINFONEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Information of selected table
                */
                class SelectedTableInfoNew : public AbstractModel
                {
                public:
                    SelectedTableInfoNew();
                    ~SelectedTableInfoNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the table group where a table resides
                     * @return TableGroupId ID of the table group where a table resides
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置ID of the table group where a table resides
                     * @param _tableGroupId ID of the table group where a table resides
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
                     * 获取Table name
                     * @return TableName Table name
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
                     * @param _tableName Table name
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
                     * 获取Table instance ID
                     * @return TableInstanceId Table instance ID
                     * 
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置Table instance ID
                     * @param _tableInstanceId Table instance ID
                     * 
                     */
                    void SetTableInstanceId(const std::string& _tableInstanceId);

                    /**
                     * 判断参数 TableInstanceId 是否已赋值
                     * @return TableInstanceId 是否已赋值
                     * 
                     */
                    bool TableInstanceIdHasBeenSet() const;

                    /**
                     * 获取Table description language type. Valid values: PROTO, TDR
                     * @return TableIdlType Table description language type. Valid values: PROTO, TDR
                     * 
                     */
                    std::string GetTableIdlType() const;

                    /**
                     * 设置Table description language type. Valid values: PROTO, TDR
                     * @param _tableIdlType Table description language type. Valid values: PROTO, TDR
                     * 
                     */
                    void SetTableIdlType(const std::string& _tableIdlType);

                    /**
                     * 判断参数 TableIdlType 是否已赋值
                     * @return TableIdlType 是否已赋值
                     * 
                     */
                    bool TableIdlTypeHasBeenSet() const;

                    /**
                     * 获取Table data structure type. Valid values: GENERIC, LIST
                     * @return TableType Table data structure type. Valid values: GENERIC, LIST
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置Table data structure type. Valid values: GENERIC, LIST
                     * @param _tableType Table data structure type. Valid values: GENERIC, LIST
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取Number of LIST-type table elements
                     * @return ListElementNum Number of LIST-type table elements
                     * 
                     */
                    int64_t GetListElementNum() const;

                    /**
                     * 设置Number of LIST-type table elements
                     * @param _listElementNum Number of LIST-type table elements
                     * 
                     */
                    void SetListElementNum(const int64_t& _listElementNum);

                    /**
                     * 判断参数 ListElementNum 是否已赋值
                     * @return ListElementNum 是否已赋值
                     * 
                     */
                    bool ListElementNumHasBeenSet() const;

                    /**
                     * 获取Reserved table capacity in GB
                     * @return ReservedVolume Reserved table capacity in GB
                     * 
                     */
                    int64_t GetReservedVolume() const;

                    /**
                     * 设置Reserved table capacity in GB
                     * @param _reservedVolume Reserved table capacity in GB
                     * 
                     */
                    void SetReservedVolume(const int64_t& _reservedVolume);

                    /**
                     * 判断参数 ReservedVolume 是否已赋值
                     * @return ReservedVolume 是否已赋值
                     * 
                     */
                    bool ReservedVolumeHasBeenSet() const;

                    /**
                     * 获取Reserved table read QPS
                     * @return ReservedReadQps Reserved table read QPS
                     * 
                     */
                    int64_t GetReservedReadQps() const;

                    /**
                     * 设置Reserved table read QPS
                     * @param _reservedReadQps Reserved table read QPS
                     * 
                     */
                    void SetReservedReadQps(const int64_t& _reservedReadQps);

                    /**
                     * 判断参数 ReservedReadQps 是否已赋值
                     * @return ReservedReadQps 是否已赋值
                     * 
                     */
                    bool ReservedReadQpsHasBeenSet() const;

                    /**
                     * 获取Reserved table write QPS
                     * @return ReservedWriteQps Reserved table write QPS
                     * 
                     */
                    int64_t GetReservedWriteQps() const;

                    /**
                     * 设置Reserved table write QPS
                     * @param _reservedWriteQps Reserved table write QPS
                     * 
                     */
                    void SetReservedWriteQps(const int64_t& _reservedWriteQps);

                    /**
                     * 判断参数 ReservedWriteQps 是否已赋值
                     * @return ReservedWriteQps 是否已赋值
                     * 
                     */
                    bool ReservedWriteQpsHasBeenSet() const;

                    /**
                     * 获取Table remarks
                     * @return Memo Table remarks
                     * 
                     */
                    std::string GetMemo() const;

                    /**
                     * 设置Table remarks
                     * @param _memo Table remarks
                     * 
                     */
                    void SetMemo(const std::string& _memo);

                    /**
                     * 判断参数 Memo 是否已赋值
                     * @return Memo 是否已赋值
                     * 
                     */
                    bool MemoHasBeenSet() const;

                    /**
                     * 获取Key rollback filename, which is only used for rollback
                     * @return FileName Key rollback filename, which is only used for rollback
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Key rollback filename, which is only used for rollback
                     * @param _fileName Key rollback filename, which is only used for rollback
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Key rollback file extension, which is only used for rollback
                     * @return FileExtType Key rollback file extension, which is only used for rollback
                     * 
                     */
                    std::string GetFileExtType() const;

                    /**
                     * 设置Key rollback file extension, which is only used for rollback
                     * @param _fileExtType Key rollback file extension, which is only used for rollback
                     * 
                     */
                    void SetFileExtType(const std::string& _fileExtType);

                    /**
                     * 判断参数 FileExtType 是否已赋值
                     * @return FileExtType 是否已赋值
                     * 
                     */
                    bool FileExtTypeHasBeenSet() const;

                    /**
                     * 获取Key rollback file size, which is only used for rollback
                     * @return FileSize Key rollback file size, which is only used for rollback
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置Key rollback file size, which is only used for rollback
                     * @param _fileSize Key rollback file size, which is only used for rollback
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取Key rollback file content, which is only used for rollback
                     * @return FileContent Key rollback file content, which is only used for rollback
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置Key rollback file content, which is only used for rollback
                     * @param _fileContent Key rollback file content, which is only used for rollback
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                private:

                    /**
                     * ID of the table group where a table resides
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * Table name
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Table instance ID
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * Table description language type. Valid values: PROTO, TDR
                     */
                    std::string m_tableIdlType;
                    bool m_tableIdlTypeHasBeenSet;

                    /**
                     * Table data structure type. Valid values: GENERIC, LIST
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * Number of LIST-type table elements
                     */
                    int64_t m_listElementNum;
                    bool m_listElementNumHasBeenSet;

                    /**
                     * Reserved table capacity in GB
                     */
                    int64_t m_reservedVolume;
                    bool m_reservedVolumeHasBeenSet;

                    /**
                     * Reserved table read QPS
                     */
                    int64_t m_reservedReadQps;
                    bool m_reservedReadQpsHasBeenSet;

                    /**
                     * Reserved table write QPS
                     */
                    int64_t m_reservedWriteQps;
                    bool m_reservedWriteQpsHasBeenSet;

                    /**
                     * Table remarks
                     */
                    std::string m_memo;
                    bool m_memoHasBeenSet;

                    /**
                     * Key rollback filename, which is only used for rollback
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Key rollback file extension, which is only used for rollback
                     */
                    std::string m_fileExtType;
                    bool m_fileExtTypeHasBeenSet;

                    /**
                     * Key rollback file size, which is only used for rollback
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Key rollback file content, which is only used for rollback
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SELECTEDTABLEINFONEW_H_
