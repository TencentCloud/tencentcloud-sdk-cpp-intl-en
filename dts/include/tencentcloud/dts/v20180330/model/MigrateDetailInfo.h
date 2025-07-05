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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEDETAILINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/MigrateStepDetailInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * Describes the specific migration process
                */
                class MigrateDetailInfo : public AbstractModel
                {
                public:
                    MigrateDetailInfo();
                    ~MigrateDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of steps
                     * @return StepAll Total number of steps
                     * 
                     */
                    int64_t GetStepAll() const;

                    /**
                     * 设置Total number of steps
                     * @param _stepAll Total number of steps
                     * 
                     */
                    void SetStepAll(const int64_t& _stepAll);

                    /**
                     * 判断参数 StepAll 是否已赋值
                     * @return StepAll 是否已赋值
                     * 
                     */
                    bool StepAllHasBeenSet() const;

                    /**
                     * 获取Current step
                     * @return StepNow Current step
                     * 
                     */
                    int64_t GetStepNow() const;

                    /**
                     * 设置Current step
                     * @param _stepNow Current step
                     * 
                     */
                    void SetStepNow(const int64_t& _stepNow);

                    /**
                     * 判断参数 StepNow 是否已赋值
                     * @return StepNow 是否已赋值
                     * 
                     */
                    bool StepNowHasBeenSet() const;

                    /**
                     * 获取Overall progress, such as "10"
                     * @return Progress Overall progress, such as "10"
                     * 
                     */
                    std::string GetProgress() const;

                    /**
                     * 设置Overall progress, such as "10"
                     * @param _progress Overall progress, such as "10"
                     * 
                     */
                    void SetProgress(const std::string& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Progress of current step, such as "1"
                     * @return CurrentStepProgress Progress of current step, such as "1"
                     * 
                     */
                    std::string GetCurrentStepProgress() const;

                    /**
                     * 设置Progress of current step, such as "1"
                     * @param _currentStepProgress Progress of current step, such as "1"
                     * 
                     */
                    void SetCurrentStepProgress(const std::string& _currentStepProgress);

                    /**
                     * 判断参数 CurrentStepProgress 是否已赋值
                     * @return CurrentStepProgress 是否已赋值
                     * 
                     */
                    bool CurrentStepProgressHasBeenSet() const;

                    /**
                     * 获取Master/slave lag in MB, which is valid during incremental sync and currently supported by TencentDB for Redis and MySQL
                     * @return MasterSlaveDistance Master/slave lag in MB, which is valid during incremental sync and currently supported by TencentDB for Redis and MySQL
                     * 
                     */
                    int64_t GetMasterSlaveDistance() const;

                    /**
                     * 设置Master/slave lag in MB, which is valid during incremental sync and currently supported by TencentDB for Redis and MySQL
                     * @param _masterSlaveDistance Master/slave lag in MB, which is valid during incremental sync and currently supported by TencentDB for Redis and MySQL
                     * 
                     */
                    void SetMasterSlaveDistance(const int64_t& _masterSlaveDistance);

                    /**
                     * 判断参数 MasterSlaveDistance 是否已赋值
                     * @return MasterSlaveDistance 是否已赋值
                     * 
                     */
                    bool MasterSlaveDistanceHasBeenSet() const;

                    /**
                     * 获取Master/slave lag in seconds, which is valid during incremental sync and currently supported by TencentDB for MySQL
                     * @return SecondsBehindMaster Master/slave lag in seconds, which is valid during incremental sync and currently supported by TencentDB for MySQL
                     * 
                     */
                    int64_t GetSecondsBehindMaster() const;

                    /**
                     * 设置Master/slave lag in seconds, which is valid during incremental sync and currently supported by TencentDB for MySQL
                     * @param _secondsBehindMaster Master/slave lag in seconds, which is valid during incremental sync and currently supported by TencentDB for MySQL
                     * 
                     */
                    void SetSecondsBehindMaster(const int64_t& _secondsBehindMaster);

                    /**
                     * 判断参数 SecondsBehindMaster 是否已赋值
                     * @return SecondsBehindMaster 是否已赋值
                     * 
                     */
                    bool SecondsBehindMasterHasBeenSet() const;

                    /**
                     * 获取Step information
                     * @return StepInfo Step information
                     * 
                     */
                    std::vector<MigrateStepDetailInfo> GetStepInfo() const;

                    /**
                     * 设置Step information
                     * @param _stepInfo Step information
                     * 
                     */
                    void SetStepInfo(const std::vector<MigrateStepDetailInfo>& _stepInfo);

                    /**
                     * 判断参数 StepInfo 是否已赋值
                     * @return StepInfo 是否已赋值
                     * 
                     */
                    bool StepInfoHasBeenSet() const;

                private:

                    /**
                     * Total number of steps
                     */
                    int64_t m_stepAll;
                    bool m_stepAllHasBeenSet;

                    /**
                     * Current step
                     */
                    int64_t m_stepNow;
                    bool m_stepNowHasBeenSet;

                    /**
                     * Overall progress, such as "10"
                     */
                    std::string m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Progress of current step, such as "1"
                     */
                    std::string m_currentStepProgress;
                    bool m_currentStepProgressHasBeenSet;

                    /**
                     * Master/slave lag in MB, which is valid during incremental sync and currently supported by TencentDB for Redis and MySQL
                     */
                    int64_t m_masterSlaveDistance;
                    bool m_masterSlaveDistanceHasBeenSet;

                    /**
                     * Master/slave lag in seconds, which is valid during incremental sync and currently supported by TencentDB for MySQL
                     */
                    int64_t m_secondsBehindMaster;
                    bool m_secondsBehindMasterHasBeenSet;

                    /**
                     * Step information
                     */
                    std::vector<MigrateStepDetailInfo> m_stepInfo;
                    bool m_stepInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEDETAILINFO_H_
