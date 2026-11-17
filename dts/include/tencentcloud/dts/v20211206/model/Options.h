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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_OPTIONS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_OPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/ConflictHandleOption.h>
#include <tencentcloud/dts/v20211206/model/DdlOption.h>
#include <tencentcloud/dts/v20211206/model/KafkaOption.h>
#include <tencentcloud/dts/v20211206/model/RateLimitOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Data sync options
                */
                class Options : public AbstractModel
                {
                public:
                    Options();
                    ~Options() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Synchronization initialization options: Data (Full Data initialization), Structure (Structure initialization), Full (Full Data and Structure initialization, default), None (incremental only). The mongodb link supports only Full Data initialization or incremental only.</p>
                     * @return InitType <p>Synchronization initialization options: Data (Full Data initialization), Structure (Structure initialization), Full (Full Data and Structure initialization, default), None (incremental only). The mongodb link supports only Full Data initialization or incremental only.</p>
                     * 
                     */
                    std::string GetInitType() const;

                    /**
                     * 设置<p>Synchronization initialization options: Data (Full Data initialization), Structure (Structure initialization), Full (Full Data and Structure initialization, default), None (incremental only). The mongodb link supports only Full Data initialization or incremental only.</p>
                     * @param _initType <p>Synchronization initialization options: Data (Full Data initialization), Structure (Structure initialization), Full (Full Data and Structure initialization, default), None (incremental only). The mongodb link supports only Full Data initialization or incremental only.</p>
                     * 
                     */
                    void SetInitType(const std::string& _initType);

                    /**
                     * 判断参数 InitType 是否已赋值
                     * @return InitType 是否已赋值
                     * 
                     */
                    bool InitTypeHasBeenSet() const;

                    /**
                     * 获取<p>Handling of tables with the same name, ReportErrorAfterCheck (pre-validation and error reporting, default), ExecuteAfterIgnore (ignore and continue execution).</p>
                     * @return DealOfExistSameTable <p>Handling of tables with the same name, ReportErrorAfterCheck (pre-validation and error reporting, default), ExecuteAfterIgnore (ignore and continue execution).</p>
                     * 
                     */
                    std::string GetDealOfExistSameTable() const;

                    /**
                     * 设置<p>Handling of tables with the same name, ReportErrorAfterCheck (pre-validation and error reporting, default), ExecuteAfterIgnore (ignore and continue execution).</p>
                     * @param _dealOfExistSameTable <p>Handling of tables with the same name, ReportErrorAfterCheck (pre-validation and error reporting, default), ExecuteAfterIgnore (ignore and continue execution).</p>
                     * 
                     */
                    void SetDealOfExistSameTable(const std::string& _dealOfExistSameTable);

                    /**
                     * 判断参数 DealOfExistSameTable 是否已赋值
                     * @return DealOfExistSameTable 是否已赋值
                     * 
                     */
                    bool DealOfExistSameTableHasBeenSet() const;

                    /**
                     * 获取<p>Conflict resolution options: ReportError (report error, default), Ignore, Cover, ConditionCover</p>
                     * @return ConflictHandleType <p>Conflict resolution options: ReportError (report error, default), Ignore, Cover, ConditionCover</p>
                     * 
                     */
                    std::string GetConflictHandleType() const;

                    /**
                     * 设置<p>Conflict resolution options: ReportError (report error, default), Ignore, Cover, ConditionCover</p>
                     * @param _conflictHandleType <p>Conflict resolution options: ReportError (report error, default), Ignore, Cover, ConditionCover</p>
                     * 
                     */
                    void SetConflictHandleType(const std::string& _conflictHandleType);

                    /**
                     * 判断参数 ConflictHandleType 是否已赋值
                     * @return ConflictHandleType 是否已赋值
                     * 
                     */
                    bool ConflictHandleTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to add an additional column</p>
                     * @return AddAdditionalColumn <p>Whether to add an additional column</p>
                     * 
                     */
                    bool GetAddAdditionalColumn() const;

                    /**
                     * 设置<p>Whether to add an additional column</p>
                     * @param _addAdditionalColumn <p>Whether to add an additional column</p>
                     * 
                     */
                    void SetAddAdditionalColumn(const bool& _addAdditionalColumn);

                    /**
                     * 判断参数 AddAdditionalColumn 是否已赋值
                     * @return AddAdditionalColumn 是否已赋值
                     * 
                     */
                    bool AddAdditionalColumnHasBeenSet() const;

                    /**
                     * 获取<p>Options for DML and DDL to be synchronized: Insert, Update, Delete, DDL (structure synchronization), PartialDDL (custom, can be used together with DdlOptions). Note that it must contain at least one DML option.</p>
                     * @return OpTypes <p>Options for DML and DDL to be synchronized: Insert, Update, Delete, DDL (structure synchronization), PartialDDL (custom, can be used together with DdlOptions). Note that it must contain at least one DML option.</p>
                     * 
                     */
                    std::vector<std::string> GetOpTypes() const;

                    /**
                     * 设置<p>Options for DML and DDL to be synchronized: Insert, Update, Delete, DDL (structure synchronization), PartialDDL (custom, can be used together with DdlOptions). Note that it must contain at least one DML option.</p>
                     * @param _opTypes <p>Options for DML and DDL to be synchronized: Insert, Update, Delete, DDL (structure synchronization), PartialDDL (custom, can be used together with DdlOptions). Note that it must contain at least one DML option.</p>
                     * 
                     */
                    void SetOpTypes(const std::vector<std::string>& _opTypes);

                    /**
                     * 判断参数 OpTypes 是否已赋值
                     * @return OpTypes 是否已赋值
                     * 
                     */
                    bool OpTypesHasBeenSet() const;

                    /**
                     * 获取<p>Detailed options for conflict resolution, such as condition row and conditional operation in condition coverage</p>
                     * @return ConflictHandleOption <p>Detailed options for conflict resolution, such as condition row and conditional operation in condition coverage</p>
                     * 
                     */
                    ConflictHandleOption GetConflictHandleOption() const;

                    /**
                     * 设置<p>Detailed options for conflict resolution, such as condition row and conditional operation in condition coverage</p>
                     * @param _conflictHandleOption <p>Detailed options for conflict resolution, such as condition row and conditional operation in condition coverage</p>
                     * 
                     */
                    void SetConflictHandleOption(const ConflictHandleOption& _conflictHandleOption);

                    /**
                     * 判断参数 ConflictHandleOption 是否已赋值
                     * @return ConflictHandleOption 是否已赋值
                     * 
                     */
                    bool ConflictHandleOptionHasBeenSet() const;

                    /**
                     * 获取<p>DDL synchronization option. Description of which DDLs to synchronize.</p>
                     * @return DdlOptions <p>DDL synchronization option. Description of which DDLs to synchronize.</p>
                     * 
                     */
                    std::vector<DdlOption> GetDdlOptions() const;

                    /**
                     * 设置<p>DDL synchronization option. Description of which DDLs to synchronize.</p>
                     * @param _ddlOptions <p>DDL synchronization option. Description of which DDLs to synchronize.</p>
                     * 
                     */
                    void SetDdlOptions(const std::vector<DdlOption>& _ddlOptions);

                    /**
                     * 判断参数 DdlOptions 是否已赋值
                     * @return DdlOptions 是否已赋值
                     * 
                     */
                    bool DdlOptionsHasBeenSet() const;

                    /**
                     * 获取<p>kafka sync options</p>
                     * @return KafkaOption <p>kafka sync options</p>
                     * 
                     */
                    KafkaOption GetKafkaOption() const;

                    /**
                     * 设置<p>kafka sync options</p>
                     * @param _kafkaOption <p>kafka sync options</p>
                     * 
                     */
                    void SetKafkaOption(const KafkaOption& _kafkaOption);

                    /**
                     * 判断参数 KafkaOption 是否已赋值
                     * @return KafkaOption 是否已赋值
                     * 
                     */
                    bool KafkaOptionHasBeenSet() const;

                    /**
                     * 获取<p>Task speed limit information</p>
                     * @return RateLimitOption <p>Task speed limit information</p>
                     * 
                     */
                    RateLimitOption GetRateLimitOption() const;

                    /**
                     * 设置<p>Task speed limit information</p>
                     * @param _rateLimitOption <p>Task speed limit information</p>
                     * 
                     */
                    void SetRateLimitOption(const RateLimitOption& _rateLimitOption);

                    /**
                     * 判断参数 RateLimitOption 是否已赋值
                     * @return RateLimitOption 是否已赋值
                     * 
                     */
                    bool RateLimitOptionHasBeenSet() const;

                    /**
                     * 获取<p>Time window for automatic retry settings</p>
                     * @return AutoRetryTimeRangeMinutes <p>Time window for automatic retry settings</p>
                     * 
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置<p>Time window for automatic retry settings</p>
                     * @param _autoRetryTimeRangeMinutes <p>Time window for automatic retry settings</p>
                     * 
                     */
                    void SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes);

                    /**
                     * 判断参数 AutoRetryTimeRangeMinutes 是否已赋值
                     * @return AutoRetryTimeRangeMinutes 是否已赋值
                     * 
                     */
                    bool AutoRetryTimeRangeMinutesHasBeenSet() const;

                    /**
                     * 获取<p>Synchronize to the specified checkpoint of the kafka link. Currently only support time format: 2023-12-20T19:24:23+08:00. If not specified, it is empty.</p>
                     * @return StartPosition <p>Synchronize to the specified checkpoint of the kafka link. Currently only support time format: 2023-12-20T19:24:23+08:00. If not specified, it is empty.</p>
                     * 
                     */
                    std::string GetStartPosition() const;

                    /**
                     * 设置<p>Synchronize to the specified checkpoint of the kafka link. Currently only support time format: 2023-12-20T19:24:23+08:00. If not specified, it is empty.</p>
                     * @param _startPosition <p>Synchronize to the specified checkpoint of the kafka link. Currently only support time format: 2023-12-20T19:24:23+08:00. If not specified, it is empty.</p>
                     * 
                     */
                    void SetStartPosition(const std::string& _startPosition);

                    /**
                     * 判断参数 StartPosition 是否已赋值
                     * @return StartPosition 是否已赋值
                     * 
                     */
                    bool StartPositionHasBeenSet() const;

                    /**
                     * 获取<p>Whether to filter out begin and commit messages when synchronizing to kafka. Currently, only the mysql-to-kafka link supports this.</p>
                     * @return FilterBeginCommit <p>Whether to filter out begin and commit messages when synchronizing to kafka. Currently, only the mysql-to-kafka link supports this.</p>
                     * 
                     */
                    bool GetFilterBeginCommit() const;

                    /**
                     * 设置<p>Whether to filter out begin and commit messages when synchronizing to kafka. Currently, only the mysql-to-kafka link supports this.</p>
                     * @param _filterBeginCommit <p>Whether to filter out begin and commit messages when synchronizing to kafka. Currently, only the mysql-to-kafka link supports this.</p>
                     * 
                     */
                    void SetFilterBeginCommit(const bool& _filterBeginCommit);

                    /**
                     * 判断参数 FilterBeginCommit 是否已赋值
                     * @return FilterBeginCommit 是否已赋值
                     * 
                     */
                    bool FilterBeginCommitHasBeenSet() const;

                    /**
                     * 获取<p>Whether to filter out checkpoint messages when synchronizing to kafka. Currently, only the mysql-to-kafka link supports this.</p>
                     * @return FilterCheckpoint <p>Whether to filter out checkpoint messages when synchronizing to kafka. Currently, only the mysql-to-kafka link supports this.</p>
                     * 
                     */
                    bool GetFilterCheckpoint() const;

                    /**
                     * 设置<p>Whether to filter out checkpoint messages when synchronizing to kafka. Currently, only the mysql-to-kafka link supports this.</p>
                     * @param _filterCheckpoint <p>Whether to filter out checkpoint messages when synchronizing to kafka. Currently, only the mysql-to-kafka link supports this.</p>
                     * 
                     */
                    void SetFilterCheckpoint(const bool& _filterCheckpoint);

                    /**
                     * 判断参数 FilterCheckpoint 是否已赋值
                     * @return FilterCheckpoint 是否已赋值
                     * 
                     */
                    bool FilterCheckpointHasBeenSet() const;

                private:

                    /**
                     * <p>Synchronization initialization options: Data (Full Data initialization), Structure (Structure initialization), Full (Full Data and Structure initialization, default), None (incremental only). The mongodb link supports only Full Data initialization or incremental only.</p>
                     */
                    std::string m_initType;
                    bool m_initTypeHasBeenSet;

                    /**
                     * <p>Handling of tables with the same name, ReportErrorAfterCheck (pre-validation and error reporting, default), ExecuteAfterIgnore (ignore and continue execution).</p>
                     */
                    std::string m_dealOfExistSameTable;
                    bool m_dealOfExistSameTableHasBeenSet;

                    /**
                     * <p>Conflict resolution options: ReportError (report error, default), Ignore, Cover, ConditionCover</p>
                     */
                    std::string m_conflictHandleType;
                    bool m_conflictHandleTypeHasBeenSet;

                    /**
                     * <p>Whether to add an additional column</p>
                     */
                    bool m_addAdditionalColumn;
                    bool m_addAdditionalColumnHasBeenSet;

                    /**
                     * <p>Options for DML and DDL to be synchronized: Insert, Update, Delete, DDL (structure synchronization), PartialDDL (custom, can be used together with DdlOptions). Note that it must contain at least one DML option.</p>
                     */
                    std::vector<std::string> m_opTypes;
                    bool m_opTypesHasBeenSet;

                    /**
                     * <p>Detailed options for conflict resolution, such as condition row and conditional operation in condition coverage</p>
                     */
                    ConflictHandleOption m_conflictHandleOption;
                    bool m_conflictHandleOptionHasBeenSet;

                    /**
                     * <p>DDL synchronization option. Description of which DDLs to synchronize.</p>
                     */
                    std::vector<DdlOption> m_ddlOptions;
                    bool m_ddlOptionsHasBeenSet;

                    /**
                     * <p>kafka sync options</p>
                     */
                    KafkaOption m_kafkaOption;
                    bool m_kafkaOptionHasBeenSet;

                    /**
                     * <p>Task speed limit information</p>
                     */
                    RateLimitOption m_rateLimitOption;
                    bool m_rateLimitOptionHasBeenSet;

                    /**
                     * <p>Time window for automatic retry settings</p>
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                    /**
                     * <p>Synchronize to the specified checkpoint of the kafka link. Currently only support time format: 2023-12-20T19:24:23+08:00. If not specified, it is empty.</p>
                     */
                    std::string m_startPosition;
                    bool m_startPositionHasBeenSet;

                    /**
                     * <p>Whether to filter out begin and commit messages when synchronizing to kafka. Currently, only the mysql-to-kafka link supports this.</p>
                     */
                    bool m_filterBeginCommit;
                    bool m_filterBeginCommitHasBeenSet;

                    /**
                     * <p>Whether to filter out checkpoint messages when synchronizing to kafka. Currently, only the mysql-to-kafka link supports this.</p>
                     */
                    bool m_filterCheckpoint;
                    bool m_filterCheckpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_OPTIONS_H_
