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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_LIFECYCLERULE_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_LIFECYCLERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20201112/model/Transition.h>
#include <tencentcloud/chdfs/v20201112/model/Summary.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * Lifecycle rule
                */
                class LifeCycleRule : public AbstractModel
                {
                public:
                    LifeCycleRule();
                    ~LifeCycleRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Lifecycle rule ID
                     * @return LifeCycleRuleId Lifecycle rule ID
                     * 
                     */
                    uint64_t GetLifeCycleRuleId() const;

                    /**
                     * 设置Lifecycle rule ID
                     * @param _lifeCycleRuleId Lifecycle rule ID
                     * 
                     */
                    void SetLifeCycleRuleId(const uint64_t& _lifeCycleRuleId);

                    /**
                     * 判断参数 LifeCycleRuleId 是否已赋值
                     * @return LifeCycleRuleId 是否已赋值
                     * 
                     */
                    bool LifeCycleRuleIdHasBeenSet() const;

                    /**
                     * 获取Lifecycle rule name
                     * @return LifeCycleRuleName Lifecycle rule name
                     * 
                     */
                    std::string GetLifeCycleRuleName() const;

                    /**
                     * 设置Lifecycle rule name
                     * @param _lifeCycleRuleName Lifecycle rule name
                     * 
                     */
                    void SetLifeCycleRuleName(const std::string& _lifeCycleRuleName);

                    /**
                     * 判断参数 LifeCycleRuleName 是否已赋值
                     * @return LifeCycleRuleName 是否已赋值
                     * 
                     */
                    bool LifeCycleRuleNameHasBeenSet() const;

                    /**
                     * 获取Lifecycle rule path (directory or file)
                     * @return Path Lifecycle rule path (directory or file)
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Lifecycle rule path (directory or file)
                     * @param _path Lifecycle rule path (directory or file)
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取List of lifecycle rule transitions
                     * @return Transitions List of lifecycle rule transitions
                     * 
                     */
                    std::vector<Transition> GetTransitions() const;

                    /**
                     * 设置List of lifecycle rule transitions
                     * @param _transitions List of lifecycle rule transitions
                     * 
                     */
                    void SetTransitions(const std::vector<Transition>& _transitions);

                    /**
                     * 判断参数 Transitions 是否已赋值
                     * @return Transitions 是否已赋值
                     * 
                     */
                    bool TransitionsHasBeenSet() const;

                    /**
                     * 获取Lifecycle rule status (1: enabled; 2: disabled)
                     * @return Status Lifecycle rule status (1: enabled; 2: disabled)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Lifecycle rule status (1: enabled; 2: disabled)
                     * @param _status Lifecycle rule status (1: enabled; 2: disabled)
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Detailed storage usage of the current lifecycle rule path
                     * @return Summary Detailed storage usage of the current lifecycle rule path
                     * 
                     */
                    Summary GetSummary() const;

                    /**
                     * 设置Detailed storage usage of the current lifecycle rule path
                     * @param _summary Detailed storage usage of the current lifecycle rule path
                     * 
                     */
                    void SetSummary(const Summary& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取Update time of `Summary`
                     * @return LastSummaryTime Update time of `Summary`
                     * 
                     */
                    std::string GetLastSummaryTime() const;

                    /**
                     * 设置Update time of `Summary`
                     * @param _lastSummaryTime Update time of `Summary`
                     * 
                     */
                    void SetLastSummaryTime(const std::string& _lastSummaryTime);

                    /**
                     * 判断参数 LastSummaryTime 是否已赋值
                     * @return LastSummaryTime 是否已赋值
                     * 
                     */
                    bool LastSummaryTimeHasBeenSet() const;

                private:

                    /**
                     * Lifecycle rule ID
                     */
                    uint64_t m_lifeCycleRuleId;
                    bool m_lifeCycleRuleIdHasBeenSet;

                    /**
                     * Lifecycle rule name
                     */
                    std::string m_lifeCycleRuleName;
                    bool m_lifeCycleRuleNameHasBeenSet;

                    /**
                     * Lifecycle rule path (directory or file)
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * List of lifecycle rule transitions
                     */
                    std::vector<Transition> m_transitions;
                    bool m_transitionsHasBeenSet;

                    /**
                     * Lifecycle rule status (1: enabled; 2: disabled)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Detailed storage usage of the current lifecycle rule path
                     */
                    Summary m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * Update time of `Summary`
                     */
                    std::string m_lastSummaryTime;
                    bool m_lastSummaryTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_LIFECYCLERULE_H_
