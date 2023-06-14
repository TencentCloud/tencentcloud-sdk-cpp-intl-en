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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PARSEDTABLEINFONEW_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PARSEDTABLEINFONEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Table information parsed from IDL table description file
                */
                class ParsedTableInfoNew : public AbstractModel
                {
                public:
                    ParsedTableInfoNew();
                    ~ParsedTableInfoNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table description language type. Valid values: PROTO, TDR
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableIdlType Table description language type. Valid values: PROTO, TDR
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableIdlType() const;

                    /**
                     * 设置Table description language type. Valid values: PROTO, TDR
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tableIdlType Table description language type. Valid values: PROTO, TDR
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Table instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableInstanceId Table instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置Table instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tableInstanceId Table instance ID
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Table name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableName Table name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tableName Table name
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Table data structure type. Valid values: GENERIC, LIST
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableType Table data structure type. Valid values: GENERIC, LIST
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置Table data structure type. Valid values: GENERIC, LIST
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tableType Table data structure type. Valid values: GENERIC, LIST
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Primary key field information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KeyFields Primary key field information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeyFields() const;

                    /**
                     * 设置Primary key field information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _keyFields Primary key field information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeyFields(const std::string& _keyFields);

                    /**
                     * 判断参数 KeyFields 是否已赋值
                     * @return KeyFields 是否已赋值
                     * 
                     */
                    bool KeyFieldsHasBeenSet() const;

                    /**
                     * 获取Old primary key field information, which is valid during verification of table modification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OldKeyFields Old primary key field information, which is valid during verification of table modification
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOldKeyFields() const;

                    /**
                     * 设置Old primary key field information, which is valid during verification of table modification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _oldKeyFields Old primary key field information, which is valid during verification of table modification
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOldKeyFields(const std::string& _oldKeyFields);

                    /**
                     * 判断参数 OldKeyFields 是否已赋值
                     * @return OldKeyFields 是否已赋值
                     * 
                     */
                    bool OldKeyFieldsHasBeenSet() const;

                    /**
                     * 获取Non-primary key field information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ValueFields Non-primary key field information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetValueFields() const;

                    /**
                     * 设置Non-primary key field information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _valueFields Non-primary key field information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValueFields(const std::string& _valueFields);

                    /**
                     * 判断参数 ValueFields 是否已赋值
                     * @return ValueFields 是否已赋值
                     * 
                     */
                    bool ValueFieldsHasBeenSet() const;

                    /**
                     * 获取Old non-primary key field information, which is valid during verification of table modification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OldValueFields Old non-primary key field information, which is valid during verification of table modification
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOldValueFields() const;

                    /**
                     * 设置Old non-primary key field information, which is valid during verification of table modification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _oldValueFields Old non-primary key field information, which is valid during verification of table modification
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOldValueFields(const std::string& _oldValueFields);

                    /**
                     * 判断参数 OldValueFields 是否已赋值
                     * @return OldValueFields 是否已赋值
                     * 
                     */
                    bool OldValueFieldsHasBeenSet() const;

                    /**
                     * 获取Table group ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableGroupId Table group ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置Table group ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tableGroupId Table group ID
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total size of primary key field
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SumKeyFieldSize Total size of primary key field
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSumKeyFieldSize() const;

                    /**
                     * 设置Total size of primary key field
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sumKeyFieldSize Total size of primary key field
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSumKeyFieldSize(const int64_t& _sumKeyFieldSize);

                    /**
                     * 判断参数 SumKeyFieldSize 是否已赋值
                     * @return SumKeyFieldSize 是否已赋值
                     * 
                     */
                    bool SumKeyFieldSizeHasBeenSet() const;

                    /**
                     * 获取Total size of non-primary key fields
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SumValueFieldSize Total size of non-primary key fields
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSumValueFieldSize() const;

                    /**
                     * 设置Total size of non-primary key fields
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sumValueFieldSize Total size of non-primary key fields
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSumValueFieldSize(const int64_t& _sumValueFieldSize);

                    /**
                     * 判断参数 SumValueFieldSize 是否已赋值
                     * @return SumValueFieldSize 是否已赋值
                     * 
                     */
                    bool SumValueFieldSizeHasBeenSet() const;

                    /**
                     * 获取Index key set
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IndexKeySet Index key set
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIndexKeySet() const;

                    /**
                     * 设置Index key set
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _indexKeySet Index key set
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIndexKeySet(const std::string& _indexKeySet);

                    /**
                     * 判断参数 IndexKeySet 是否已赋值
                     * @return IndexKeySet 是否已赋值
                     * 
                     */
                    bool IndexKeySetHasBeenSet() const;

                    /**
                     * 获取Shardkey set
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ShardingKeySet Shardkey set
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetShardingKeySet() const;

                    /**
                     * 设置Shardkey set
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _shardingKeySet Shardkey set
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShardingKeySet(const std::string& _shardingKeySet);

                    /**
                     * 判断参数 ShardingKeySet 是否已赋值
                     * @return ShardingKeySet 是否已赋值
                     * 
                     */
                    bool ShardingKeySetHasBeenSet() const;

                    /**
                     * 获取TDR version number
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TdrVersion TDR version number
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTdrVersion() const;

                    /**
                     * 设置TDR version number
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tdrVersion TDR version number
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTdrVersion(const int64_t& _tdrVersion);

                    /**
                     * 判断参数 TdrVersion 是否已赋值
                     * @return TdrVersion 是否已赋值
                     * 
                     */
                    bool TdrVersionHasBeenSet() const;

                    /**
                     * 获取Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Error Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _error Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取Number of LIST-type table elements
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ListElementNum Number of LIST-type table elements
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetListElementNum() const;

                    /**
                     * 设置Number of LIST-type table elements
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _listElementNum Number of LIST-type table elements
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of SORTLIST-type table sort fields
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SortFieldNum Number of SORTLIST-type table sort fields
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSortFieldNum() const;

                    /**
                     * 设置Number of SORTLIST-type table sort fields
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sortFieldNum Number of SORTLIST-type table sort fields
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSortFieldNum(const int64_t& _sortFieldNum);

                    /**
                     * 判断参数 SortFieldNum 是否已赋值
                     * @return SortFieldNum 是否已赋值
                     * 
                     */
                    bool SortFieldNumHasBeenSet() const;

                    /**
                     * 获取Sort order of SORTLIST-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SortRule Sort order of SORTLIST-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSortRule() const;

                    /**
                     * 设置Sort order of SORTLIST-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sortRule Sort order of SORTLIST-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSortRule(const int64_t& _sortRule);

                    /**
                     * 判断参数 SortRule 是否已赋值
                     * @return SortRule 是否已赋值
                     * 
                     */
                    bool SortRuleHasBeenSet() const;

                private:

                    /**
                     * Table description language type. Valid values: PROTO, TDR
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableIdlType;
                    bool m_tableIdlTypeHasBeenSet;

                    /**
                     * Table instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * Table name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Table data structure type. Valid values: GENERIC, LIST
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * Primary key field information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyFields;
                    bool m_keyFieldsHasBeenSet;

                    /**
                     * Old primary key field information, which is valid during verification of table modification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_oldKeyFields;
                    bool m_oldKeyFieldsHasBeenSet;

                    /**
                     * Non-primary key field information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_valueFields;
                    bool m_valueFieldsHasBeenSet;

                    /**
                     * Old non-primary key field information, which is valid during verification of table modification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_oldValueFields;
                    bool m_oldValueFieldsHasBeenSet;

                    /**
                     * Table group ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * Total size of primary key field
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sumKeyFieldSize;
                    bool m_sumKeyFieldSizeHasBeenSet;

                    /**
                     * Total size of non-primary key fields
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sumValueFieldSize;
                    bool m_sumValueFieldSizeHasBeenSet;

                    /**
                     * Index key set
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_indexKeySet;
                    bool m_indexKeySetHasBeenSet;

                    /**
                     * Shardkey set
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_shardingKeySet;
                    bool m_shardingKeySetHasBeenSet;

                    /**
                     * TDR version number
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tdrVersion;
                    bool m_tdrVersionHasBeenSet;

                    /**
                     * Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * Number of LIST-type table elements
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_listElementNum;
                    bool m_listElementNumHasBeenSet;

                    /**
                     * Number of SORTLIST-type table sort fields
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sortFieldNum;
                    bool m_sortFieldNumHasBeenSet;

                    /**
                     * Sort order of SORTLIST-type tables
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sortRule;
                    bool m_sortRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PARSEDTABLEINFONEW_H_
