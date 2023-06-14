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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_ANALYSISITEMS_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_ANALYSISITEMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Detailed analysis of a slow query statement with abstract parameter values, which is returned by the `DescribeSlowQueryAnalysis` API
                */
                class AnalysisItems : public AbstractModel
                {
                public:
                    AnalysisItems();
                    ~AnalysisItems() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The name of the database queried by the slow query statement
                     * @return DatabaseName The name of the database queried by the slow query statement
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置The name of the database queried by the slow query statement
                     * @param _databaseName The name of the database queried by the slow query statement
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取The name of the user who executes the slow query statement
                     * @return UserName The name of the user who executes the slow query statement
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置The name of the user who executes the slow query statement
                     * @param _userName The name of the user who executes the slow query statement
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取The slow query statement whose parameter values are abstracted
                     * @return NormalQuery The slow query statement whose parameter values are abstracted
                     * 
                     */
                    std::string GetNormalQuery() const;

                    /**
                     * 设置The slow query statement whose parameter values are abstracted
                     * @param _normalQuery The slow query statement whose parameter values are abstracted
                     * 
                     */
                    void SetNormalQuery(const std::string& _normalQuery);

                    /**
                     * 判断参数 NormalQuery 是否已赋值
                     * @return NormalQuery 是否已赋值
                     * 
                     */
                    bool NormalQueryHasBeenSet() const;

                    /**
                     * 获取The address of the client that executes the slow query statement
                     * @return ClientAddr The address of the client that executes the slow query statement
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置The address of the client that executes the slow query statement
                     * @param _clientAddr The address of the client that executes the slow query statement
                     * 
                     */
                    void SetClientAddr(const std::string& _clientAddr);

                    /**
                     * 判断参数 ClientAddr 是否已赋值
                     * @return ClientAddr 是否已赋值
                     * 
                     */
                    bool ClientAddrHasBeenSet() const;

                    /**
                     * 获取The number of executions of the slow query statement during the specified period of time
                     * @return CallNum The number of executions of the slow query statement during the specified period of time
                     * 
                     */
                    uint64_t GetCallNum() const;

                    /**
                     * 设置The number of executions of the slow query statement during the specified period of time
                     * @param _callNum The number of executions of the slow query statement during the specified period of time
                     * 
                     */
                    void SetCallNum(const uint64_t& _callNum);

                    /**
                     * 判断参数 CallNum 是否已赋值
                     * @return CallNum 是否已赋值
                     * 
                     */
                    bool CallNumHasBeenSet() const;

                    /**
                     * 获取The ratio (in decimal form) of the number of executions of the slow query statement to that of all slow query statements during the specified period of time
                     * @return CallPercent The ratio (in decimal form) of the number of executions of the slow query statement to that of all slow query statements during the specified period of time
                     * 
                     */
                    double GetCallPercent() const;

                    /**
                     * 设置The ratio (in decimal form) of the number of executions of the slow query statement to that of all slow query statements during the specified period of time
                     * @param _callPercent The ratio (in decimal form) of the number of executions of the slow query statement to that of all slow query statements during the specified period of time
                     * 
                     */
                    void SetCallPercent(const double& _callPercent);

                    /**
                     * 判断参数 CallPercent 是否已赋值
                     * @return CallPercent 是否已赋值
                     * 
                     */
                    bool CallPercentHasBeenSet() const;

                    /**
                     * 获取The total execution time of the slow query statement during the specified period of time
                     * @return CostTime The total execution time of the slow query statement during the specified period of time
                     * 
                     */
                    double GetCostTime() const;

                    /**
                     * 设置The total execution time of the slow query statement during the specified period of time
                     * @param _costTime The total execution time of the slow query statement during the specified period of time
                     * 
                     */
                    void SetCostTime(const double& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取The ratio (in decimal form) of the total execution time of the slow query statement to that of all slow query statements during the specified period of time
                     * @return CostPercent The ratio (in decimal form) of the total execution time of the slow query statement to that of all slow query statements during the specified period of time
                     * 
                     */
                    double GetCostPercent() const;

                    /**
                     * 设置The ratio (in decimal form) of the total execution time of the slow query statement to that of all slow query statements during the specified period of time
                     * @param _costPercent The ratio (in decimal form) of the total execution time of the slow query statement to that of all slow query statements during the specified period of time
                     * 
                     */
                    void SetCostPercent(const double& _costPercent);

                    /**
                     * 判断参数 CostPercent 是否已赋值
                     * @return CostPercent 是否已赋值
                     * 
                     */
                    bool CostPercentHasBeenSet() const;

                    /**
                     * 获取The shortest execution time (in ms) of the slow query statement during the specified period of time
                     * @return MinCostTime The shortest execution time (in ms) of the slow query statement during the specified period of time
                     * 
                     */
                    double GetMinCostTime() const;

                    /**
                     * 设置The shortest execution time (in ms) of the slow query statement during the specified period of time
                     * @param _minCostTime The shortest execution time (in ms) of the slow query statement during the specified period of time
                     * 
                     */
                    void SetMinCostTime(const double& _minCostTime);

                    /**
                     * 判断参数 MinCostTime 是否已赋值
                     * @return MinCostTime 是否已赋值
                     * 
                     */
                    bool MinCostTimeHasBeenSet() const;

                    /**
                     * 获取The longest execution time (in ms) of the slow query statement during the specified period of time
                     * @return MaxCostTime The longest execution time (in ms) of the slow query statement during the specified period of time
                     * 
                     */
                    double GetMaxCostTime() const;

                    /**
                     * 设置The longest execution time (in ms) of the slow query statement during the specified period of time
                     * @param _maxCostTime The longest execution time (in ms) of the slow query statement during the specified period of time
                     * 
                     */
                    void SetMaxCostTime(const double& _maxCostTime);

                    /**
                     * 判断参数 MaxCostTime 是否已赋值
                     * @return MaxCostTime 是否已赋值
                     * 
                     */
                    bool MaxCostTimeHasBeenSet() const;

                    /**
                     * 获取The average execution time (in ms) of the slow query statement during the specified period of time
                     * @return AvgCostTime The average execution time (in ms) of the slow query statement during the specified period of time
                     * 
                     */
                    double GetAvgCostTime() const;

                    /**
                     * 设置The average execution time (in ms) of the slow query statement during the specified period of time
                     * @param _avgCostTime The average execution time (in ms) of the slow query statement during the specified period of time
                     * 
                     */
                    void SetAvgCostTime(const double& _avgCostTime);

                    /**
                     * 判断参数 AvgCostTime 是否已赋值
                     * @return AvgCostTime 是否已赋值
                     * 
                     */
                    bool AvgCostTimeHasBeenSet() const;

                    /**
                     * 获取The timestamp when the slow query statement starts to execute for the first time during the specified period of time
                     * @return FirstTime The timestamp when the slow query statement starts to execute for the first time during the specified period of time
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置The timestamp when the slow query statement starts to execute for the first time during the specified period of time
                     * @param _firstTime The timestamp when the slow query statement starts to execute for the first time during the specified period of time
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取The timestamp when the slow query statement starts to execute for the last time during the specified period of time
                     * @return LastTime The timestamp when the slow query statement starts to execute for the last time during the specified period of time
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置The timestamp when the slow query statement starts to execute for the last time during the specified period of time
                     * @param _lastTime The timestamp when the slow query statement starts to execute for the last time during the specified period of time
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                private:

                    /**
                     * The name of the database queried by the slow query statement
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * The name of the user who executes the slow query statement
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * The slow query statement whose parameter values are abstracted
                     */
                    std::string m_normalQuery;
                    bool m_normalQueryHasBeenSet;

                    /**
                     * The address of the client that executes the slow query statement
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * The number of executions of the slow query statement during the specified period of time
                     */
                    uint64_t m_callNum;
                    bool m_callNumHasBeenSet;

                    /**
                     * The ratio (in decimal form) of the number of executions of the slow query statement to that of all slow query statements during the specified period of time
                     */
                    double m_callPercent;
                    bool m_callPercentHasBeenSet;

                    /**
                     * The total execution time of the slow query statement during the specified period of time
                     */
                    double m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * The ratio (in decimal form) of the total execution time of the slow query statement to that of all slow query statements during the specified period of time
                     */
                    double m_costPercent;
                    bool m_costPercentHasBeenSet;

                    /**
                     * The shortest execution time (in ms) of the slow query statement during the specified period of time
                     */
                    double m_minCostTime;
                    bool m_minCostTimeHasBeenSet;

                    /**
                     * The longest execution time (in ms) of the slow query statement during the specified period of time
                     */
                    double m_maxCostTime;
                    bool m_maxCostTimeHasBeenSet;

                    /**
                     * The average execution time (in ms) of the slow query statement during the specified period of time
                     */
                    double m_avgCostTime;
                    bool m_avgCostTimeHasBeenSet;

                    /**
                     * The timestamp when the slow query statement starts to execute for the first time during the specified period of time
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * The timestamp when the slow query statement starts to execute for the last time during the specified period of time
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ANALYSISITEMS_H_
