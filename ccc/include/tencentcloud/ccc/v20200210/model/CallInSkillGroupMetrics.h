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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CALLINSKILLGROUPMETRICS_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CALLINSKILLGROUPMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/CallInMetrics.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Inbound capability group metrics.
                */
                class CallInSkillGroupMetrics : public AbstractModel
                {
                public:
                    CallInSkillGroupMetrics();
                    ~CallInSkillGroupMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Skill group id.
                     * @return SkillGroupId Skill group id.
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置Skill group id.
                     * @param _skillGroupId Skill group id.
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取Data metrics.
                     * @return Metrics Data metrics.
                     * 
                     */
                    CallInMetrics GetMetrics() const;

                    /**
                     * 设置Data metrics.
                     * @param _metrics Data metrics.
                     * 
                     */
                    void SetMetrics(const CallInMetrics& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取Skill group name.
                     * @return Name Skill group name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Skill group name.
                     * @param _name Skill group name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Skill group id.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * Data metrics.
                     */
                    CallInMetrics m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Skill group name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CALLINSKILLGROUPMETRICS_H_
