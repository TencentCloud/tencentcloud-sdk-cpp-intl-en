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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SPARKAPPLICATIONSLIST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SPARKAPPLICATIONSLIST_H_

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
                * Spark task list.
                */
                class SparkApplicationsList : public AbstractModel
                {
                public:
                    SparkApplicationsList();
                    ~SparkApplicationsList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application ID.
                     * @return ID Application ID.
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置Application ID.
                     * @param _iD Application ID.
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
                     * 获取Application name.
                     * @return Name Application name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Application name.
                     * @param _name Application name.
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

                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

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
                     * 获取Duration.
                     * @return Duration Duration.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Duration.
                     * @param _duration Duration.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Status.
                     * @return State Status.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Status.
                     * @param _state Status.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Type.
                     * @return ApplicationType Type.
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置Type.
                     * @param _applicationType Type.
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取Number of cores multiplied by seconds.
                     * @return CoreSeconds Number of cores multiplied by seconds.
                     * 
                     */
                    int64_t GetCoreSeconds() const;

                    /**
                     * 设置Number of cores multiplied by seconds.
                     * @param _coreSeconds Number of cores multiplied by seconds.
                     * 
                     */
                    void SetCoreSeconds(const int64_t& _coreSeconds);

                    /**
                     * 判断参数 CoreSeconds 是否已赋值
                     * @return CoreSeconds 是否已赋值
                     * 
                     */
                    bool CoreSecondsHasBeenSet() const;

                    /**
                     * 获取Memory MB multiplied by seconds.
                     * @return MemorySeconds Memory MB multiplied by seconds.
                     * 
                     */
                    std::string GetMemorySeconds() const;

                    /**
                     * 设置Memory MB multiplied by seconds.
                     * @param _memorySeconds Memory MB multiplied by seconds.
                     * 
                     */
                    void SetMemorySeconds(const std::string& _memorySeconds);

                    /**
                     * 判断参数 MemorySeconds 是否已赋值
                     * @return MemorySeconds 是否已赋值
                     * 
                     */
                    bool MemorySecondsHasBeenSet() const;

                    /**
                     * 获取Insight result.
                     * @return Insight Insight result.
                     * 
                     */
                    std::string GetInsight() const;

                    /**
                     * 设置Insight result.
                     * @param _insight Insight result.
                     * 
                     */
                    void SetInsight(const std::string& _insight);

                    /**
                     * 判断参数 Insight 是否已赋值
                     * @return Insight 是否已赋值
                     * 
                     */
                    bool InsightHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Application name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * User.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Start time.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Duration.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Status.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Type.
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * Number of cores multiplied by seconds.
                     */
                    int64_t m_coreSeconds;
                    bool m_coreSecondsHasBeenSet;

                    /**
                     * Memory MB multiplied by seconds.
                     */
                    std::string m_memorySeconds;
                    bool m_memorySecondsHasBeenSet;

                    /**
                     * Insight result.
                     */
                    std::string m_insight;
                    bool m_insightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SPARKAPPLICATIONSLIST_H_
