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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_ADVICE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_ADVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Suggestions for scaling group configurations.
                */
                class Advice : public AbstractModel
                {
                public:
                    Advice();
                    ~Advice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Problem Description
                     * @return Problem Problem Description
                     * 
                     */
                    std::string GetProblem() const;

                    /**
                     * 设置Problem Description
                     * @param _problem Problem Description
                     * 
                     */
                    void SetProblem(const std::string& _problem);

                    /**
                     * 判断参数 Problem 是否已赋值
                     * @return Problem 是否已赋值
                     * 
                     */
                    bool ProblemHasBeenSet() const;

                    /**
                     * 获取Problem Details
                     * @return Detail Problem Details
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置Problem Details
                     * @param _detail Problem Details
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Recommended resolutions
                     * @return Solution Recommended resolutions
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Recommended resolutions
                     * @param _solution Recommended resolutions
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取Scaling suggestion warning level. Valid values:
<li>WARNING: warning.</li>
<li>CRITICAL: critical.</li>
                     * @return Level Scaling suggestion warning level. Valid values:
<li>WARNING: warning.</li>
<li>CRITICAL: critical.</li>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Scaling suggestion warning level. Valid values:
<li>WARNING: warning.</li>
<li>CRITICAL: critical.</li>
                     * @param _level Scaling suggestion warning level. Valid values:
<li>WARNING: warning.</li>
<li>CRITICAL: critical.</li>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * Problem Description
                     */
                    std::string m_problem;
                    bool m_problemHasBeenSet;

                    /**
                     * Problem Details
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Recommended resolutions
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * Scaling suggestion warning level. Valid values:
<li>WARNING: warning.</li>
<li>CRITICAL: critical.</li>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_ADVICE_H_
