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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_EXPLAIN_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_EXPLAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Execution plan
                */
                class Explain : public AbstractModel
                {
                public:
                    Explain();
                    ~Explain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Identifier</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ID <p>Identifier</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>Identifier</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iD <p>Identifier</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Query type</p><p>Enumeration value:</p><ul><li>SIMPLE: A regular query with no subquery and UNION. Single table or ordinary JOIN is SIMPLE.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SelectType <p>Query type</p><p>Enumeration value:</p><ul><li>SIMPLE: A regular query with no subquery and UNION. Single table or ordinary JOIN is SIMPLE.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSelectType() const;

                    /**
                     * 设置<p>Query type</p><p>Enumeration value:</p><ul><li>SIMPLE: A regular query with no subquery and UNION. Single table or ordinary JOIN is SIMPLE.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _selectType <p>Query type</p><p>Enumeration value:</p><ul><li>SIMPLE: A regular query with no subquery and UNION. Single table or ordinary JOIN is SIMPLE.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSelectType(const std::string& _selectType);

                    /**
                     * 判断参数 SelectType 是否已赋值
                     * @return SelectType 是否已赋值
                     * 
                     */
                    bool SelectTypeHasBeenSet() const;

                    /**
                     * 获取<p>Table name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Table <p>Table name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置<p>Table name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _table <p>Table name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取<p>Partition</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Partitions <p>Partition</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPartitions() const;

                    /**
                     * 设置<p>Partition</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _partitions <p>Partition</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartitions(const std::string& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取<p>Access type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type <p>Access type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Access type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type <p>Access type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Possibly used indexes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PossibleKeys <p>Possibly used indexes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPossibleKeys() const;

                    /**
                     * 设置<p>Possibly used indexes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _possibleKeys <p>Possibly used indexes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPossibleKeys(const std::string& _possibleKeys);

                    /**
                     * 判断参数 PossibleKeys 是否已赋值
                     * @return PossibleKeys 是否已赋值
                     * 
                     */
                    bool PossibleKeysHasBeenSet() const;

                    /**
                     * 获取<p>Used Indexes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Key <p>Used Indexes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>Used Indexes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _key <p>Used Indexes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>Used Indexes length</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KeyLen <p>Used Indexes length</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeyLen() const;

                    /**
                     * 设置<p>Used Indexes length</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keyLen <p>Used Indexes length</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeyLen(const std::string& _keyLen);

                    /**
                     * 判断参数 KeyLen 是否已赋值
                     * @return KeyLen 是否已赋值
                     * 
                     */
                    bool KeyLenHasBeenSet() const;

                    /**
                     * 获取<p>Column or constant to compare with the index</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ref <p>Column or constant to compare with the index</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRef() const;

                    /**
                     * 设置<p>Column or constant to compare with the index</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ref <p>Column or constant to compare with the index</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRef(const std::string& _ref);

                    /**
                     * 判断参数 Ref 是否已赋值
                     * @return Ref 是否已赋值
                     * 
                     */
                    bool RefHasBeenSet() const;

                    /**
                     * 获取<p>Estimate the number of scanned rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rows <p>Estimate the number of scanned rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRows() const;

                    /**
                     * 设置<p>Estimate the number of scanned rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rows <p>Estimate the number of scanned rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRows(const std::string& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取<p>Estimated percentage of remaining rows after conditional filtering</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Filtered <p>Estimated percentage of remaining rows after conditional filtering</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFiltered() const;

                    /**
                     * 设置<p>Estimated percentage of remaining rows after conditional filtering</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _filtered <p>Estimated percentage of remaining rows after conditional filtering</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFiltered(const std::string& _filtered);

                    /**
                     * 判断参数 Filtered 是否已赋值
                     * @return Filtered 是否已赋值
                     * 
                     */
                    bool FilteredHasBeenSet() const;

                    /**
                     * 获取<p>Additional information, such as Using index, Using filesort</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Extra <p>Additional information, such as Using index, Using filesort</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置<p>Additional information, such as Using index, Using filesort</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extra <p>Additional information, such as Using index, Using filesort</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * <p>Identifier</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Query type</p><p>Enumeration value:</p><ul><li>SIMPLE: A regular query with no subquery and UNION. Single table or ordinary JOIN is SIMPLE.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_selectType;
                    bool m_selectTypeHasBeenSet;

                    /**
                     * <p>Table name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * <p>Partition</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * <p>Access type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Possibly used indexes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_possibleKeys;
                    bool m_possibleKeysHasBeenSet;

                    /**
                     * <p>Used Indexes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>Used Indexes length</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyLen;
                    bool m_keyLenHasBeenSet;

                    /**
                     * <p>Column or constant to compare with the index</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ref;
                    bool m_refHasBeenSet;

                    /**
                     * <p>Estimate the number of scanned rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * <p>Estimated percentage of remaining rows after conditional filtering</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_filtered;
                    bool m_filteredHasBeenSet;

                    /**
                     * <p>Additional information, such as Using index, Using filesort</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_EXPLAIN_H_
