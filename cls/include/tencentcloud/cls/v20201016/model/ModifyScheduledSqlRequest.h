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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSCHEDULEDSQLREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSCHEDULEDSQLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ScheduledSqlResouceInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyScheduledSql request structure.
                */
                class ModifyScheduledSqlRequest : public AbstractModel
                {
                public:
                    ModifyScheduledSqlRequest();
                    ~ModifyScheduledSqlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Source log topic
                     * @return SrcTopicId Source log topic
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置Source log topic
                     * @param _srcTopicId Source log topic
                     * 
                     */
                    void SetSrcTopicId(const std::string& _srcTopicId);

                    /**
                     * 判断参数 SrcTopicId 是否已赋值
                     * @return SrcTopicId 是否已赋值
                     * 
                     */
                    bool SrcTopicIdHasBeenSet() const;

                    /**
                     * 获取Task start status. 1: Enabled, 2: Disabled
                     * @return EnableFlag Task start status. 1: Enabled, 2: Disabled
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置Task start status. 1: Enabled, 2: Disabled
                     * @param _enableFlag Task start status. 1: Enabled, 2: Disabled
                     * 
                     */
                    void SetEnableFlag(const int64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     * 
                     */
                    bool EnableFlagHasBeenSet() const;

                    /**
                     * 获取Target log topic for scheduled SQL analysis
                     * @return DstResource Target log topic for scheduled SQL analysis
                     * 
                     */
                    ScheduledSqlResouceInfo GetDstResource() const;

                    /**
                     * 设置Target log topic for scheduled SQL analysis
                     * @param _dstResource Target log topic for scheduled SQL analysis
                     * 
                     */
                    void SetDstResource(const ScheduledSqlResouceInfo& _dstResource);

                    /**
                     * 判断参数 DstResource 是否已赋值
                     * @return DstResource 是否已赋值
                     * 
                     */
                    bool DstResourceHasBeenSet() const;

                    /**
                     * 获取Queries statements
                     * @return ScheduledSqlContent Queries statements
                     * 
                     */
                    std::string GetScheduledSqlContent() const;

                    /**
                     * 设置Queries statements
                     * @param _scheduledSqlContent Queries statements
                     * 
                     */
                    void SetScheduledSqlContent(const std::string& _scheduledSqlContent);

                    /**
                     * 判断参数 ScheduledSqlContent 是否已赋值
                     * @return ScheduledSqlContent 是否已赋值
                     * 
                     */
                    bool ScheduledSqlContentHasBeenSet() const;

                    /**
                     * 获取Scheduling interval (minutes)
                     * @return ProcessPeriod Scheduling interval (minutes)
                     * 
                     */
                    int64_t GetProcessPeriod() const;

                    /**
                     * 设置Scheduling interval (minutes)
                     * @param _processPeriod Scheduling interval (minutes)
                     * 
                     */
                    void SetProcessPeriod(const int64_t& _processPeriod);

                    /**
                     * 判断参数 ProcessPeriod 是否已赋值
                     * @return ProcessPeriod 是否已赋值
                     * 
                     */
                    bool ProcessPeriodHasBeenSet() const;

                    /**
                     * 获取Time window for a single query. Example: last 15 minutes
                     * @return ProcessTimeWindow Time window for a single query. Example: last 15 minutes
                     * 
                     */
                    std::string GetProcessTimeWindow() const;

                    /**
                     * 设置Time window for a single query. Example: last 15 minutes
                     * @param _processTimeWindow Time window for a single query. Example: last 15 minutes
                     * 
                     */
                    void SetProcessTimeWindow(const std::string& _processTimeWindow);

                    /**
                     * 判断参数 ProcessTimeWindow 是否已赋值
                     * @return ProcessTimeWindow 是否已赋值
                     * 
                     */
                    bool ProcessTimeWindowHasBeenSet() const;

                    /**
                     * 获取Execution delay (seconds)
                     * @return ProcessDelay Execution delay (seconds)
                     * 
                     */
                    int64_t GetProcessDelay() const;

                    /**
                     * 设置Execution delay (seconds)
                     * @param _processDelay Execution delay (seconds)
                     * 
                     */
                    void SetProcessDelay(const int64_t& _processDelay);

                    /**
                     * 判断参数 ProcessDelay 是否已赋值
                     * @return ProcessDelay 是否已赋值
                     * 
                     */
                    bool ProcessDelayHasBeenSet() const;

                    /**
                     * 获取Region information of source topic ID 
                     * @return SrcTopicRegion Region information of source topic ID 
                     * 
                     */
                    std::string GetSrcTopicRegion() const;

                    /**
                     * 设置Region information of source topic ID 
                     * @param _srcTopicRegion Region information of source topic ID 
                     * 
                     */
                    void SetSrcTopicRegion(const std::string& _srcTopicRegion);

                    /**
                     * 判断参数 SrcTopicRegion 是否已赋值
                     * @return SrcTopicRegion 是否已赋值
                     * 
                     */
                    bool SrcTopicRegionHasBeenSet() const;

                    /**
                     * 获取Task Name
                     * @return Name Task Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task Name
                     * @param _name Task Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Syntax rules. Default value: 0. 0: Lucene syntax, 1: CQL syntax
                     * @return SyntaxRule Syntax rules. Default value: 0. 0: Lucene syntax, 1: CQL syntax
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置Syntax rules. Default value: 0. 0: Lucene syntax, 1: CQL syntax
                     * @param _syntaxRule Syntax rules. Default value: 0. 0: Lucene syntax, 1: CQL syntax
                     * 
                     */
                    void SetSyntaxRule(const uint64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * 
                     */
                    bool SyntaxRuleHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Source log topic
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * Task start status. 1: Enabled, 2: Disabled
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * Target log topic for scheduled SQL analysis
                     */
                    ScheduledSqlResouceInfo m_dstResource;
                    bool m_dstResourceHasBeenSet;

                    /**
                     * Queries statements
                     */
                    std::string m_scheduledSqlContent;
                    bool m_scheduledSqlContentHasBeenSet;

                    /**
                     * Scheduling interval (minutes)
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * Time window for a single query. Example: last 15 minutes
                     */
                    std::string m_processTimeWindow;
                    bool m_processTimeWindowHasBeenSet;

                    /**
                     * Execution delay (seconds)
                     */
                    int64_t m_processDelay;
                    bool m_processDelayHasBeenSet;

                    /**
                     * Region information of source topic ID 
                     */
                    std::string m_srcTopicRegion;
                    bool m_srcTopicRegionHasBeenSet;

                    /**
                     * Task Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Syntax rules. Default value: 0. 0: Lucene syntax, 1: CQL syntax
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSCHEDULEDSQLREQUEST_H_
