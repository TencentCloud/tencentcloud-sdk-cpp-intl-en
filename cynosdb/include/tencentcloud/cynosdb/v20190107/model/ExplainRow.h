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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPLAINROW_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPLAINROW_H_

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
                * Execution plan list
                */
                class ExplainRow : public AbstractModel
                {
                public:
                    ExplainRow();
                    ~ExplainRow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Serial number of the query</p>
                     * @return Id <p>Serial number of the query</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>Serial number of the query</p>
                     * @param _id <p>Serial number of the query</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Query type. Common values: SIMPLE (simple query, excluding subqueries or UNION), PRIMARY (outermost query), SUBQUERY (first SELECT in a subquery), DERIVED (derivative table/subquery in FROM clause), UNION (second and subsequent SELECTs in UNION), UNION RESULT (result set of UNION).</p>
                     * @return SelectType <p>Query type. Common values: SIMPLE (simple query, excluding subqueries or UNION), PRIMARY (outermost query), SUBQUERY (first SELECT in a subquery), DERIVED (derivative table/subquery in FROM clause), UNION (second and subsequent SELECTs in UNION), UNION RESULT (result set of UNION).</p>
                     * 
                     */
                    std::string GetSelectType() const;

                    /**
                     * 设置<p>Query type. Common values: SIMPLE (simple query, excluding subqueries or UNION), PRIMARY (outermost query), SUBQUERY (first SELECT in a subquery), DERIVED (derivative table/subquery in FROM clause), UNION (second and subsequent SELECTs in UNION), UNION RESULT (result set of UNION).</p>
                     * @param _selectType <p>Query type. Common values: SIMPLE (simple query, excluding subqueries or UNION), PRIMARY (outermost query), SUBQUERY (first SELECT in a subquery), DERIVED (derivative table/subquery in FROM clause), UNION (second and subsequent SELECTs in UNION), UNION RESULT (result set of UNION).</p>
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
                     * 获取<p>Data table name</p>
                     * @return Table <p>Data table name</p>
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置<p>Data table name</p>
                     * @param _table <p>Data table name</p>
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
                     * 获取<p>Query matching partition</p>
                     * @return Partitions <p>Query matching partition</p>
                     * 
                     */
                    std::string GetPartitions() const;

                    /**
                     * 设置<p>Query matching partition</p>
                     * @param _partitions <p>Query matching partition</p>
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
                     * 获取<p>Access type (very important, a key metric for measuring query efficiency), ranked from best to worst: system &gt; const &gt; eq_ref &gt; ref &gt; fulltext &gt; ref_or_null &gt; index_merge &gt; unique_subquery &gt; index_subquery &gt; range &gt; index &gt; ALL. Common value descriptions: • system: The table has only one row (system table). • const: Matches one row through primary key or unique index, commonly seen in WHERE pk = 1. • eq_ref: Uses primary key or unique index when connecting, each index value matches only one row. • ref: Uses non-unique index to search, may match multiple rows. • range: Index range scan, such as BETWEEN, &gt;, &lt;, IN. • index: Full index scan (traversal of the entire index tree). • ALL: Full-table scan (worst, requires optimization).</p>
                     * @return Type <p>Access type (very important, a key metric for measuring query efficiency), ranked from best to worst: system &gt; const &gt; eq_ref &gt; ref &gt; fulltext &gt; ref_or_null &gt; index_merge &gt; unique_subquery &gt; index_subquery &gt; range &gt; index &gt; ALL. Common value descriptions: • system: The table has only one row (system table). • const: Matches one row through primary key or unique index, commonly seen in WHERE pk = 1. • eq_ref: Uses primary key or unique index when connecting, each index value matches only one row. • ref: Uses non-unique index to search, may match multiple rows. • range: Index range scan, such as BETWEEN, &gt;, &lt;, IN. • index: Full index scan (traversal of the entire index tree). • ALL: Full-table scan (worst, requires optimization).</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Access type (very important, a key metric for measuring query efficiency), ranked from best to worst: system &gt; const &gt; eq_ref &gt; ref &gt; fulltext &gt; ref_or_null &gt; index_merge &gt; unique_subquery &gt; index_subquery &gt; range &gt; index &gt; ALL. Common value descriptions: • system: The table has only one row (system table). • const: Matches one row through primary key or unique index, commonly seen in WHERE pk = 1. • eq_ref: Uses primary key or unique index when connecting, each index value matches only one row. • ref: Uses non-unique index to search, may match multiple rows. • range: Index range scan, such as BETWEEN, &gt;, &lt;, IN. • index: Full index scan (traversal of the entire index tree). • ALL: Full-table scan (worst, requires optimization).</p>
                     * @param _type <p>Access type (very important, a key metric for measuring query efficiency), ranked from best to worst: system &gt; const &gt; eq_ref &gt; ref &gt; fulltext &gt; ref_or_null &gt; index_merge &gt; unique_subquery &gt; index_subquery &gt; range &gt; index &gt; ALL. Common value descriptions: • system: The table has only one row (system table). • const: Matches one row through primary key or unique index, commonly seen in WHERE pk = 1. • eq_ref: Uses primary key or unique index when connecting, each index value matches only one row. • ref: Uses non-unique index to search, may match multiple rows. • range: Index range scan, such as BETWEEN, &gt;, &lt;, IN. • index: Full index scan (traversal of the entire index tree). • ALL: Full-table scan (worst, requires optimization).</p>
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
                     * 获取<p>Indexes that may be used in querying. NULL means no available index.</p>
                     * @return PossibleKeys <p>Indexes that may be used in querying. NULL means no available index.</p>
                     * 
                     */
                    std::string GetPossibleKeys() const;

                    /**
                     * 设置<p>Indexes that may be used in querying. NULL means no available index.</p>
                     * @param _possibleKeys <p>Indexes that may be used in querying. NULL means no available index.</p>
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
                     * 获取<p>Indexes actually used. NULL means no index is used.</p>
                     * @return Key <p>Indexes actually used. NULL means no index is used.</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>Indexes actually used. NULL means no index is used.</p>
                     * @param _key <p>Indexes actually used. NULL means no index is used.</p>
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
                     * 获取<p>The length of the actual used index (number of bytes). It can be used to determine which columns are actually used in the composite index. A shorter value indicates fewer index columns are used.</p>
                     * @return KeyLen <p>The length of the actual used index (number of bytes). It can be used to determine which columns are actually used in the composite index. A shorter value indicates fewer index columns are used.</p>
                     * 
                     */
                    std::string GetKeyLen() const;

                    /**
                     * 设置<p>The length of the actual used index (number of bytes). It can be used to determine which columns are actually used in the composite index. A shorter value indicates fewer index columns are used.</p>
                     * @param _keyLen <p>The length of the actual used index (number of bytes). It can be used to determine which columns are actually used in the composite index. A shorter value indicates fewer index columns are used.</p>
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
                     * 获取<p>Display which columns or constants are compared with indexes in the key column. Common values: const (constant), certain column name, func (function result).</p>
                     * @return Ref <p>Display which columns or constants are compared with indexes in the key column. Common values: const (constant), certain column name, func (function result).</p>
                     * 
                     */
                    std::string GetRef() const;

                    /**
                     * 设置<p>Display which columns or constants are compared with indexes in the key column. Common values: const (constant), certain column name, func (function result).</p>
                     * @param _ref <p>Display which columns or constants are compared with indexes in the key column. Common values: const (constant), certain column name, func (function result).</p>
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
                     * 获取<p>Estimate the number of rows to scan</p>
                     * @return Rows <p>Estimate the number of rows to scan</p>
                     * 
                     */
                    int64_t GetRows() const;

                    /**
                     * 设置<p>Estimate the number of rows to scan</p>
                     * @param _rows <p>Estimate the number of rows to scan</p>
                     * 
                     */
                    void SetRows(const int64_t& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取<p>Indicates the estimation of the percentage of rows remaining after table conditional filtering. 100% means no additional filtering. The higher the value, the better.</p>
                     * @return Filtered <p>Indicates the estimation of the percentage of rows remaining after table conditional filtering. 100% means no additional filtering. The higher the value, the better.</p>
                     * 
                     */
                    double GetFiltered() const;

                    /**
                     * 设置<p>Indicates the estimation of the percentage of rows remaining after table conditional filtering. 100% means no additional filtering. The higher the value, the better.</p>
                     * @param _filtered <p>Indicates the estimation of the percentage of rows remaining after table conditional filtering. 100% means no additional filtering. The higher the value, the better.</p>
                     * 
                     */
                    void SetFiltered(const double& _filtered);

                    /**
                     * 判断参数 Filtered 是否已赋值
                     * @return Filtered 是否已赋值
                     * 
                     */
                    bool FilteredHasBeenSet() const;

                    /**
                     * 获取<p>Additional information (very important), common values: • Using index: covering index, no need to return to the table (good) • Using where: filter with WHERE after the storage engine returns rows • Using temporary: used a temporary table (commonly used in GROUP BY/ORDER BY, needs optimization) • Using filesort: used file sort instead of index sorting (needs optimization) • Using index condition: used pushdown of index (ICP)</p>
                     * @return Extra <p>Additional information (very important), common values: • Using index: covering index, no need to return to the table (good) • Using where: filter with WHERE after the storage engine returns rows • Using temporary: used a temporary table (commonly used in GROUP BY/ORDER BY, needs optimization) • Using filesort: used file sort instead of index sorting (needs optimization) • Using index condition: used pushdown of index (ICP)</p>
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置<p>Additional information (very important), common values: • Using index: covering index, no need to return to the table (good) • Using where: filter with WHERE after the storage engine returns rows • Using temporary: used a temporary table (commonly used in GROUP BY/ORDER BY, needs optimization) • Using filesort: used file sort instead of index sorting (needs optimization) • Using index condition: used pushdown of index (ICP)</p>
                     * @param _extra <p>Additional information (very important), common values: • Using index: covering index, no need to return to the table (good) • Using where: filter with WHERE after the storage engine returns rows • Using temporary: used a temporary table (commonly used in GROUP BY/ORDER BY, needs optimization) • Using filesort: used file sort instead of index sorting (needs optimization) • Using index condition: used pushdown of index (ICP)</p>
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
                     * <p>Serial number of the query</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Query type. Common values: SIMPLE (simple query, excluding subqueries or UNION), PRIMARY (outermost query), SUBQUERY (first SELECT in a subquery), DERIVED (derivative table/subquery in FROM clause), UNION (second and subsequent SELECTs in UNION), UNION RESULT (result set of UNION).</p>
                     */
                    std::string m_selectType;
                    bool m_selectTypeHasBeenSet;

                    /**
                     * <p>Data table name</p>
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * <p>Query matching partition</p>
                     */
                    std::string m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * <p>Access type (very important, a key metric for measuring query efficiency), ranked from best to worst: system &gt; const &gt; eq_ref &gt; ref &gt; fulltext &gt; ref_or_null &gt; index_merge &gt; unique_subquery &gt; index_subquery &gt; range &gt; index &gt; ALL. Common value descriptions: • system: The table has only one row (system table). • const: Matches one row through primary key or unique index, commonly seen in WHERE pk = 1. • eq_ref: Uses primary key or unique index when connecting, each index value matches only one row. • ref: Uses non-unique index to search, may match multiple rows. • range: Index range scan, such as BETWEEN, &gt;, &lt;, IN. • index: Full index scan (traversal of the entire index tree). • ALL: Full-table scan (worst, requires optimization).</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Indexes that may be used in querying. NULL means no available index.</p>
                     */
                    std::string m_possibleKeys;
                    bool m_possibleKeysHasBeenSet;

                    /**
                     * <p>Indexes actually used. NULL means no index is used.</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>The length of the actual used index (number of bytes). It can be used to determine which columns are actually used in the composite index. A shorter value indicates fewer index columns are used.</p>
                     */
                    std::string m_keyLen;
                    bool m_keyLenHasBeenSet;

                    /**
                     * <p>Display which columns or constants are compared with indexes in the key column. Common values: const (constant), certain column name, func (function result).</p>
                     */
                    std::string m_ref;
                    bool m_refHasBeenSet;

                    /**
                     * <p>Estimate the number of rows to scan</p>
                     */
                    int64_t m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * <p>Indicates the estimation of the percentage of rows remaining after table conditional filtering. 100% means no additional filtering. The higher the value, the better.</p>
                     */
                    double m_filtered;
                    bool m_filteredHasBeenSet;

                    /**
                     * <p>Additional information (very important), common values: • Using index: covering index, no need to return to the table (good) • Using where: filter with WHERE after the storage engine returns rows • Using temporary: used a temporary table (commonly used in GROUP BY/ORDER BY, needs optimization) • Using filesort: used file sort instead of index sorting (needs optimization) • Using index condition: used pushdown of index (ICP)</p>
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPLAINROW_H_
