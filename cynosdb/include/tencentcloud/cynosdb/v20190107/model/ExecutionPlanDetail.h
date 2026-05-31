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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXECUTIONPLANDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXECUTIONPLANDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ExplainRow.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Execution plan details
                */
                class ExecutionPlanDetail : public AbstractModel
                {
                public:
                    ExecutionPlanDetail();
                    ~ExecutionPlanDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Template ID</p>
                     * @return TemplateID <p>Template ID</p>
                     * 
                     */
                    std::string GetTemplateID() const;

                    /**
                     * 设置<p>Template ID</p>
                     * @param _templateID <p>Template ID</p>
                     * 
                     */
                    void SetTemplateID(const std::string& _templateID);

                    /**
                     * 判断参数 TemplateID 是否已赋值
                     * @return TemplateID 是否已赋值
                     * 
                     */
                    bool TemplateIDHasBeenSet() const;

                    /**
                     * 获取<p>Database name.</p>
                     * @return Db <p>Database name.</p>
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置<p>Database name.</p>
                     * @param _db <p>Database name.</p>
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取<p>Original SQL sample</p>
                     * @return SQLSample <p>Original SQL sample</p>
                     * 
                     */
                    std::string GetSQLSample() const;

                    /**
                     * 设置<p>Original SQL sample</p>
                     * @param _sQLSample <p>Original SQL sample</p>
                     * 
                     */
                    void SetSQLSample(const std::string& _sQLSample);

                    /**
                     * 判断参数 SQLSample 是否已赋值
                     * @return SQLSample 是否已赋值
                     * 
                     */
                    bool SQLSampleHasBeenSet() const;

                    /**
                     * 获取<p>Sample SQL after rewrite</p>
                     * @return SQLSampleRewritten <p>Sample SQL after rewrite</p>
                     * 
                     */
                    std::string GetSQLSampleRewritten() const;

                    /**
                     * 设置<p>Sample SQL after rewrite</p>
                     * @param _sQLSampleRewritten <p>Sample SQL after rewrite</p>
                     * 
                     */
                    void SetSQLSampleRewritten(const std::string& _sQLSampleRewritten);

                    /**
                     * 判断参数 SQLSampleRewritten 是否已赋值
                     * @return SQLSampleRewritten 是否已赋值
                     * 
                     */
                    bool SQLSampleRewrittenHasBeenSet() const;

                    /**
                     * 获取<p>Execution plan before optimization - List</p>
                     * @return TablePlanBefore <p>Execution plan before optimization - List</p>
                     * 
                     */
                    std::vector<ExplainRow> GetTablePlanBefore() const;

                    /**
                     * 设置<p>Execution plan before optimization - List</p>
                     * @param _tablePlanBefore <p>Execution plan before optimization - List</p>
                     * 
                     */
                    void SetTablePlanBefore(const std::vector<ExplainRow>& _tablePlanBefore);

                    /**
                     * 判断参数 TablePlanBefore 是否已赋值
                     * @return TablePlanBefore 是否已赋值
                     * 
                     */
                    bool TablePlanBeforeHasBeenSet() const;

                    /**
                     * 获取<p>Execution plan after optimization - List</p>
                     * @return TablePlanAfter <p>Execution plan after optimization - List</p>
                     * 
                     */
                    std::vector<ExplainRow> GetTablePlanAfter() const;

                    /**
                     * 设置<p>Execution plan after optimization - List</p>
                     * @param _tablePlanAfter <p>Execution plan after optimization - List</p>
                     * 
                     */
                    void SetTablePlanAfter(const std::vector<ExplainRow>& _tablePlanAfter);

                    /**
                     * 判断参数 TablePlanAfter 是否已赋值
                     * @return TablePlanAfter 是否已赋值
                     * 
                     */
                    bool TablePlanAfterHasBeenSet() const;

                    /**
                     * 获取<p>Tree execution plan before optimization</p>
                     * @return TreePlanBefore <p>Tree execution plan before optimization</p>
                     * 
                     */
                    std::string GetTreePlanBefore() const;

                    /**
                     * 设置<p>Tree execution plan before optimization</p>
                     * @param _treePlanBefore <p>Tree execution plan before optimization</p>
                     * 
                     */
                    void SetTreePlanBefore(const std::string& _treePlanBefore);

                    /**
                     * 判断参数 TreePlanBefore 是否已赋值
                     * @return TreePlanBefore 是否已赋值
                     * 
                     */
                    bool TreePlanBeforeHasBeenSet() const;

                    /**
                     * 获取<p>Tree execution plan after optimization</p>
                     * @return TreePlanAfter <p>Tree execution plan after optimization</p>
                     * 
                     */
                    std::string GetTreePlanAfter() const;

                    /**
                     * 设置<p>Tree execution plan after optimization</p>
                     * @param _treePlanAfter <p>Tree execution plan after optimization</p>
                     * 
                     */
                    void SetTreePlanAfter(const std::string& _treePlanAfter);

                    /**
                     * 判断参数 TreePlanAfter 是否已赋值
                     * @return TreePlanAfter 是否已赋值
                     * 
                     */
                    bool TreePlanAfterHasBeenSet() const;

                    /**
                     * 获取<p>Query time before optimization</p>
                     * @return QueryTimeBefore <p>Query time before optimization</p>
                     * 
                     */
                    double GetQueryTimeBefore() const;

                    /**
                     * 设置<p>Query time before optimization</p>
                     * @param _queryTimeBefore <p>Query time before optimization</p>
                     * 
                     */
                    void SetQueryTimeBefore(const double& _queryTimeBefore);

                    /**
                     * 判断参数 QueryTimeBefore 是否已赋值
                     * @return QueryTimeBefore 是否已赋值
                     * 
                     */
                    bool QueryTimeBeforeHasBeenSet() const;

                    /**
                     * 获取<p>Query time after optimization</p>
                     * @return QueryTimeAfter <p>Query time after optimization</p>
                     * 
                     */
                    double GetQueryTimeAfter() const;

                    /**
                     * 设置<p>Query time after optimization</p>
                     * @param _queryTimeAfter <p>Query time after optimization</p>
                     * 
                     */
                    void SetQueryTimeAfter(const double& _queryTimeAfter);

                    /**
                     * 判断参数 QueryTimeAfter 是否已赋值
                     * @return QueryTimeAfter 是否已赋值
                     * 
                     */
                    bool QueryTimeAfterHasBeenSet() const;

                    /**
                     * 获取<p>Number of scanned rows before optimization</p>
                     * @return SQLScanRowsBefore <p>Number of scanned rows before optimization</p>
                     * 
                     */
                    int64_t GetSQLScanRowsBefore() const;

                    /**
                     * 设置<p>Number of scanned rows before optimization</p>
                     * @param _sQLScanRowsBefore <p>Number of scanned rows before optimization</p>
                     * 
                     */
                    void SetSQLScanRowsBefore(const int64_t& _sQLScanRowsBefore);

                    /**
                     * 判断参数 SQLScanRowsBefore 是否已赋值
                     * @return SQLScanRowsBefore 是否已赋值
                     * 
                     */
                    bool SQLScanRowsBeforeHasBeenSet() const;

                    /**
                     * 获取<p>Number of scanned rows after optimization</p>
                     * @return SQLScanRowsAfter <p>Number of scanned rows after optimization</p>
                     * 
                     */
                    int64_t GetSQLScanRowsAfter() const;

                    /**
                     * 设置<p>Number of scanned rows after optimization</p>
                     * @param _sQLScanRowsAfter <p>Number of scanned rows after optimization</p>
                     * 
                     */
                    void SetSQLScanRowsAfter(const int64_t& _sQLScanRowsAfter);

                    /**
                     * 判断参数 SQLScanRowsAfter 是否已赋值
                     * @return SQLScanRowsAfter 是否已赋值
                     * 
                     */
                    bool SQLScanRowsAfterHasBeenSet() const;

                private:

                    /**
                     * <p>Template ID</p>
                     */
                    std::string m_templateID;
                    bool m_templateIDHasBeenSet;

                    /**
                     * <p>Database name.</p>
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * <p>Original SQL sample</p>
                     */
                    std::string m_sQLSample;
                    bool m_sQLSampleHasBeenSet;

                    /**
                     * <p>Sample SQL after rewrite</p>
                     */
                    std::string m_sQLSampleRewritten;
                    bool m_sQLSampleRewrittenHasBeenSet;

                    /**
                     * <p>Execution plan before optimization - List</p>
                     */
                    std::vector<ExplainRow> m_tablePlanBefore;
                    bool m_tablePlanBeforeHasBeenSet;

                    /**
                     * <p>Execution plan after optimization - List</p>
                     */
                    std::vector<ExplainRow> m_tablePlanAfter;
                    bool m_tablePlanAfterHasBeenSet;

                    /**
                     * <p>Tree execution plan before optimization</p>
                     */
                    std::string m_treePlanBefore;
                    bool m_treePlanBeforeHasBeenSet;

                    /**
                     * <p>Tree execution plan after optimization</p>
                     */
                    std::string m_treePlanAfter;
                    bool m_treePlanAfterHasBeenSet;

                    /**
                     * <p>Query time before optimization</p>
                     */
                    double m_queryTimeBefore;
                    bool m_queryTimeBeforeHasBeenSet;

                    /**
                     * <p>Query time after optimization</p>
                     */
                    double m_queryTimeAfter;
                    bool m_queryTimeAfterHasBeenSet;

                    /**
                     * <p>Number of scanned rows before optimization</p>
                     */
                    int64_t m_sQLScanRowsBefore;
                    bool m_sQLScanRowsBeforeHasBeenSet;

                    /**
                     * <p>Number of scanned rows after optimization</p>
                     */
                    int64_t m_sQLScanRowsAfter;
                    bool m_sQLScanRowsAfterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXECUTIONPLANDETAIL_H_
