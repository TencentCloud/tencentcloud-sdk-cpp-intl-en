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
                     * 获取Sync initialization option. Valid values: `data` (full data initialization); `Structure` (structure initialization); `Full` (full data and structure initialization); `None` (incremental data only). Default value: `Full`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InitType Sync initialization option. Valid values: `data` (full data initialization); `Structure` (structure initialization); `Full` (full data and structure initialization); `None` (incremental data only). Default value: `Full`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInitType() const;

                    /**
                     * 设置Sync initialization option. Valid values: `data` (full data initialization); `Structure` (structure initialization); `Full` (full data and structure initialization); `None` (incremental data only). Default value: `Full`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _initType Sync initialization option. Valid values: `data` (full data initialization); `Structure` (structure initialization); `Full` (full data and structure initialization); `None` (incremental data only). Default value: `Full`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Processing method for duplicate tables. Valid values: `ReportErrorAfterCheck`, `InitializeAfterDelete`, `ExecuteAfterIgnore`. Default value: `ReportErrorAfterCheck`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DealOfExistSameTable Processing method for duplicate tables. Valid values: `ReportErrorAfterCheck`, `InitializeAfterDelete`, `ExecuteAfterIgnore`. Default value: `ReportErrorAfterCheck`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDealOfExistSameTable() const;

                    /**
                     * 设置Processing method for duplicate tables. Valid values: `ReportErrorAfterCheck`, `InitializeAfterDelete`, `ExecuteAfterIgnore`. Default value: `ReportErrorAfterCheck`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dealOfExistSameTable Processing method for duplicate tables. Valid values: `ReportErrorAfterCheck`, `InitializeAfterDelete`, `ExecuteAfterIgnore`. Default value: `ReportErrorAfterCheck`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Conflict processing option. Valid values: `ReportError` (report an error); `Ignore` (ignore); `Cover` (overwrite); `ConditionCover` (conditionally overwrite). Default value: `ReportError`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConflictHandleType Conflict processing option. Valid values: `ReportError` (report an error); `Ignore` (ignore); `Cover` (overwrite); `ConditionCover` (conditionally overwrite). Default value: `ReportError`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConflictHandleType() const;

                    /**
                     * 设置Conflict processing option. Valid values: `ReportError` (report an error); `Ignore` (ignore); `Cover` (overwrite); `ConditionCover` (conditionally overwrite). Default value: `ReportError`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _conflictHandleType Conflict processing option. Valid values: `ReportError` (report an error); `Ignore` (ignore); `Cover` (overwrite); `ConditionCover` (conditionally overwrite). Default value: `ReportError`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to add the additional column
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AddAdditionalColumn Whether to add the additional column
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAddAdditionalColumn() const;

                    /**
                     * 设置Whether to add the additional column
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _addAdditionalColumn Whether to add the additional column
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取DML and DDL options to be synced. Valid values: `Insert` (INSERT operations); `Update` (UPDATE operations); `Delete` (DELETE operations); `DDL` (structure sync); `PartialDDL` (custom option, which is used together with `DdlOptions`). You can also leave this parameter empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OpTypes DML and DDL options to be synced. Valid values: `Insert` (INSERT operations); `Update` (UPDATE operations); `Delete` (DELETE operations); `DDL` (structure sync); `PartialDDL` (custom option, which is used together with `DdlOptions`). You can also leave this parameter empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetOpTypes() const;

                    /**
                     * 设置DML and DDL options to be synced. Valid values: `Insert` (INSERT operations); `Update` (UPDATE operations); `Delete` (DELETE operations); `DDL` (structure sync); `PartialDDL` (custom option, which is used together with `DdlOptions`). You can also leave this parameter empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _opTypes DML and DDL options to be synced. Valid values: `Insert` (INSERT operations); `Update` (UPDATE operations); `Delete` (DELETE operations); `DDL` (structure sync); `PartialDDL` (custom option, which is used together with `DdlOptions`). You can also leave this parameter empty.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Detailed option for conflict processing, such as condition rows and operations in conditional overwrite.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConflictHandleOption Detailed option for conflict processing, such as condition rows and operations in conditional overwrite.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ConflictHandleOption GetConflictHandleOption() const;

                    /**
                     * 设置Detailed option for conflict processing, such as condition rows and operations in conditional overwrite.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _conflictHandleOption Detailed option for conflict processing, such as condition rows and operations in conditional overwrite.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取DDL statements to be synced
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DdlOptions DDL statements to be synced
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DdlOption> GetDdlOptions() const;

                    /**
                     * 设置DDL statements to be synced
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ddlOptions DDL statements to be synced
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Kafka sync options
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KafkaOption Kafka sync options
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    KafkaOption GetKafkaOption() const;

                    /**
                     * 设置Kafka sync options
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kafkaOption Kafka sync options
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task speed limit information. This parameter can only be used as an output parameter.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return RateLimitOption Task speed limit information. This parameter can only be used as an output parameter.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    RateLimitOption GetRateLimitOption() const;

                    /**
                     * 设置Task speed limit information. This parameter can only be used as an output parameter.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _rateLimitOption Task speed limit information. This parameter can only be used as an output parameter.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
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
                     * 获取Settings of the automatic retry time range
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return AutoRetryTimeRangeMinutes Settings of the automatic retry time range
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置Settings of the automatic retry time range
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _autoRetryTimeRangeMinutes Settings of the automatic retry time range
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes);

                    /**
                     * 判断参数 AutoRetryTimeRangeMinutes 是否已赋值
                     * @return AutoRetryTimeRangeMinutes 是否已赋值
                     * 
                     */
                    bool AutoRetryTimeRangeMinutesHasBeenSet() const;

                private:

                    /**
                     * Sync initialization option. Valid values: `data` (full data initialization); `Structure` (structure initialization); `Full` (full data and structure initialization); `None` (incremental data only). Default value: `Full`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_initType;
                    bool m_initTypeHasBeenSet;

                    /**
                     * Processing method for duplicate tables. Valid values: `ReportErrorAfterCheck`, `InitializeAfterDelete`, `ExecuteAfterIgnore`. Default value: `ReportErrorAfterCheck`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dealOfExistSameTable;
                    bool m_dealOfExistSameTableHasBeenSet;

                    /**
                     * Conflict processing option. Valid values: `ReportError` (report an error); `Ignore` (ignore); `Cover` (overwrite); `ConditionCover` (conditionally overwrite). Default value: `ReportError`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_conflictHandleType;
                    bool m_conflictHandleTypeHasBeenSet;

                    /**
                     * Whether to add the additional column
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_addAdditionalColumn;
                    bool m_addAdditionalColumnHasBeenSet;

                    /**
                     * DML and DDL options to be synced. Valid values: `Insert` (INSERT operations); `Update` (UPDATE operations); `Delete` (DELETE operations); `DDL` (structure sync); `PartialDDL` (custom option, which is used together with `DdlOptions`). You can also leave this parameter empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_opTypes;
                    bool m_opTypesHasBeenSet;

                    /**
                     * Detailed option for conflict processing, such as condition rows and operations in conditional overwrite.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ConflictHandleOption m_conflictHandleOption;
                    bool m_conflictHandleOptionHasBeenSet;

                    /**
                     * DDL statements to be synced
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DdlOption> m_ddlOptions;
                    bool m_ddlOptionsHasBeenSet;

                    /**
                     * Kafka sync options
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    KafkaOption m_kafkaOption;
                    bool m_kafkaOptionHasBeenSet;

                    /**
                     * Task speed limit information. This parameter can only be used as an output parameter.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    RateLimitOption m_rateLimitOption;
                    bool m_rateLimitOptionHasBeenSet;

                    /**
                     * Settings of the automatic retry time range
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_OPTIONS_H_
