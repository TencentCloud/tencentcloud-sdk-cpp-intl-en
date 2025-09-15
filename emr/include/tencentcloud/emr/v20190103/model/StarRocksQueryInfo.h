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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_STARROCKSQUERYINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_STARROCKSQUERYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * StarRocks query information.
                */
                class StarRocksQueryInfo : public AbstractModel
                {
                public:
                    StarRocksQueryInfo();
                    ~StarRocksQueryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Submission IP address.
                     * @return ClientIP Submission IP address.
                     * 
                     */
                    std::string GetClientIP() const;

                    /**
                     * 设置Submission IP address.
                     * @param _clientIP Submission IP address.
                     * 
                     */
                    void SetClientIP(const std::string& _clientIP);

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     * 
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取Total CPU time (ns).
                     * @return CPUCost Total CPU time (ns).
                     * 
                     */
                    int64_t GetCPUCost() const;

                    /**
                     * 设置Total CPU time (ns).
                     * @param _cPUCost Total CPU time (ns).
                     * 
                     */
                    void SetCPUCost(const int64_t& _cPUCost);

                    /**
                     * 判断参数 CPUCost 是否已赋值
                     * @return CPUCost 是否已赋值
                     * 
                     */
                    bool CPUCostHasBeenSet() const;

                    /**
                     * 获取Default DB.
                     * @return DefaultDB Default DB.
                     * 
                     */
                    std::string GetDefaultDB() const;

                    /**
                     * 设置Default DB.
                     * @param _defaultDB Default DB.
                     * 
                     */
                    void SetDefaultDB(const std::string& _defaultDB);

                    /**
                     * 判断参数 DefaultDB 是否已赋值
                     * @return DefaultDB 是否已赋值
                     * 
                     */
                    bool DefaultDBHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Execution IP address.
                     * @return ExecutionIP Execution IP address.
                     * 
                     */
                    std::string GetExecutionIP() const;

                    /**
                     * 设置Execution IP address.
                     * @param _executionIP Execution IP address.
                     * 
                     */
                    void SetExecutionIP(const std::string& _executionIP);

                    /**
                     * 判断参数 ExecutionIP 是否已赋值
                     * @return ExecutionIP 是否已赋值
                     * 
                     */
                    bool ExecutionIPHasBeenSet() const;

                    /**
                     * 获取Query ID.
                     * @return QueryID Query ID.
                     * 
                     */
                    std::string GetQueryID() const;

                    /**
                     * 设置Query ID.
                     * @param _queryID Query ID.
                     * 
                     */
                    void SetQueryID(const std::string& _queryID);

                    /**
                     * 判断参数 QueryID 是否已赋值
                     * @return QueryID 是否已赋值
                     * 
                     */
                    bool QueryIDHasBeenSet() const;

                    /**
                     * 获取Query type.
                     * @return QueryType Query type.
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置Query type.
                     * @param _queryType Query type.
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取Total memory consumed (bytes).
                     * @return MemCost Total memory consumed (bytes).
                     * 
                     */
                    int64_t GetMemCost() const;

                    /**
                     * 设置Total memory consumed (bytes).
                     * @param _memCost Total memory consumed (bytes).
                     * 
                     */
                    void SetMemCost(const int64_t& _memCost);

                    /**
                     * 判断参数 MemCost 是否已赋值
                     * @return MemCost 是否已赋值
                     * 
                     */
                    bool MemCostHasBeenSet() const;

                    /**
                     * 获取CPU usage (ns) at the plan stage.
                     * @return PlanCpuCosts CPU usage (ns) at the plan stage.
                     * 
                     */
                    int64_t GetPlanCpuCosts() const;

                    /**
                     * 设置CPU usage (ns) at the plan stage.
                     * @param _planCpuCosts CPU usage (ns) at the plan stage.
                     * 
                     */
                    void SetPlanCpuCosts(const int64_t& _planCpuCosts);

                    /**
                     * 判断参数 PlanCpuCosts 是否已赋值
                     * @return PlanCpuCosts 是否已赋值
                     * 
                     */
                    bool PlanCpuCostsHasBeenSet() const;

                    /**
                     * 获取Memory usage (bytes) at the plan stage.
                     * @return PlanMemCosts Memory usage (bytes) at the plan stage.
                     * 
                     */
                    int64_t GetPlanMemCosts() const;

                    /**
                     * 设置Memory usage (bytes) at the plan stage.
                     * @param _planMemCosts Memory usage (bytes) at the plan stage.
                     * 
                     */
                    void SetPlanMemCosts(const int64_t& _planMemCosts);

                    /**
                     * 判断参数 PlanMemCosts 是否已赋值
                     * @return PlanMemCosts 是否已赋值
                     * 
                     */
                    bool PlanMemCostsHasBeenSet() const;

                    /**
                     * 获取Execution duration.
                     * @return QueryTime Execution duration.
                     * 
                     */
                    int64_t GetQueryTime() const;

                    /**
                     * 设置Execution duration.
                     * @param _queryTime Execution duration.
                     * 
                     */
                    void SetQueryTime(const int64_t& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     * 
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取Resource group.
                     * @return ResourceGroup Resource group.
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置Resource group.
                     * @param _resourceGroup Resource group.
                     * 
                     */
                    void SetResourceGroup(const std::string& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     * 
                     */
                    bool ResourceGroupHasBeenSet() const;

                    /**
                     * 获取Number of rows obtained.
                     * @return ReturnRows Number of rows obtained.
                     * 
                     */
                    int64_t GetReturnRows() const;

                    /**
                     * 设置Number of rows obtained.
                     * @param _returnRows Number of rows obtained.
                     * 
                     */
                    void SetReturnRows(const int64_t& _returnRows);

                    /**
                     * 判断参数 ReturnRows 是否已赋值
                     * @return ReturnRows 是否已赋值
                     * 
                     */
                    bool ReturnRowsHasBeenSet() const;

                    /**
                     * 获取Scanned data volume (bytes).
                     * @return ScanBytes Scanned data volume (bytes).
                     * 
                     */
                    int64_t GetScanBytes() const;

                    /**
                     * 设置Scanned data volume (bytes).
                     * @param _scanBytes Scanned data volume (bytes).
                     * 
                     */
                    void SetScanBytes(const int64_t& _scanBytes);

                    /**
                     * 判断参数 ScanBytes 是否已赋值
                     * @return ScanBytes 是否已赋值
                     * 
                     */
                    bool ScanBytesHasBeenSet() const;

                    /**
                     * 获取Number of scanned rows.
                     * @return ScanRows Number of scanned rows.
                     * 
                     */
                    int64_t GetScanRows() const;

                    /**
                     * 设置Number of scanned rows.
                     * @param _scanRows Number of scanned rows.
                     * 
                     */
                    void SetScanRows(const int64_t& _scanRows);

                    /**
                     * 判断参数 ScanRows 是否已赋值
                     * @return ScanRows 是否已赋值
                     * 
                     */
                    bool ScanRowsHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return BeginTime Start time.
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置Start time.
                     * @param _beginTime Start time.
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取Execution status.
                     * @return ExecutionState Execution status.
                     * 
                     */
                    std::string GetExecutionState() const;

                    /**
                     * 设置Execution status.
                     * @param _executionState Execution status.
                     * 
                     */
                    void SetExecutionState(const std::string& _executionState);

                    /**
                     * 判断参数 ExecutionState 是否已赋值
                     * @return ExecutionState 是否已赋值
                     * 
                     */
                    bool ExecutionStateHasBeenSet() const;

                    /**
                     * 获取Execution statement.
                     * @return ExecutionStatement Execution statement.
                     * 
                     */
                    std::string GetExecutionStatement() const;

                    /**
                     * 设置Execution statement.
                     * @param _executionStatement Execution statement.
                     * 
                     */
                    void SetExecutionStatement(const std::string& _executionStatement);

                    /**
                     * 判断参数 ExecutionStatement 是否已赋值
                     * @return ExecutionStatement 是否已赋值
                     * 
                     */
                    bool ExecutionStatementHasBeenSet() const;

                    /**
                     * 获取User.
                     * @return User User.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置User.
                     * @param _user User.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                private:

                    /**
                     * Submission IP address.
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                    /**
                     * Total CPU time (ns).
                     */
                    int64_t m_cPUCost;
                    bool m_cPUCostHasBeenSet;

                    /**
                     * Default DB.
                     */
                    std::string m_defaultDB;
                    bool m_defaultDBHasBeenSet;

                    /**
                     * End time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Execution IP address.
                     */
                    std::string m_executionIP;
                    bool m_executionIPHasBeenSet;

                    /**
                     * Query ID.
                     */
                    std::string m_queryID;
                    bool m_queryIDHasBeenSet;

                    /**
                     * Query type.
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * Total memory consumed (bytes).
                     */
                    int64_t m_memCost;
                    bool m_memCostHasBeenSet;

                    /**
                     * CPU usage (ns) at the plan stage.
                     */
                    int64_t m_planCpuCosts;
                    bool m_planCpuCostsHasBeenSet;

                    /**
                     * Memory usage (bytes) at the plan stage.
                     */
                    int64_t m_planMemCosts;
                    bool m_planMemCostsHasBeenSet;

                    /**
                     * Execution duration.
                     */
                    int64_t m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * Resource group.
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * Number of rows obtained.
                     */
                    int64_t m_returnRows;
                    bool m_returnRowsHasBeenSet;

                    /**
                     * Scanned data volume (bytes).
                     */
                    int64_t m_scanBytes;
                    bool m_scanBytesHasBeenSet;

                    /**
                     * Number of scanned rows.
                     */
                    int64_t m_scanRows;
                    bool m_scanRowsHasBeenSet;

                    /**
                     * Start time.
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Execution status.
                     */
                    std::string m_executionState;
                    bool m_executionStateHasBeenSet;

                    /**
                     * Execution statement.
                     */
                    std::string m_executionStatement;
                    bool m_executionStatementHasBeenSet;

                    /**
                     * User.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STARROCKSQUERYINFO_H_
