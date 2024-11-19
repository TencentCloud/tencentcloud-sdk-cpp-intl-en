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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_PROGRAMALERTCOUNTS_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_PROGRAMALERTCOUNTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Channel Linear Assembly Program Aggregation Alarm Information
                */
                class ProgramAlertCounts : public AbstractModel
                {
                public:
                    ProgramAlertCounts();
                    ~ProgramAlertCounts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Program ID.
                     * @return ProgramId Program ID.
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置Program ID.
                     * @param _programId Program ID.
                     * 
                     */
                    void SetProgramId(const std::string& _programId);

                    /**
                     * 判断参数 ProgramId 是否已赋值
                     * @return ProgramId 是否已赋值
                     * 
                     */
                    bool ProgramIdHasBeenSet() const;

                    /**
                     * 获取Program name.
                     * @return ProgramName Program name.
                     * 
                     */
                    std::string GetProgramName() const;

                    /**
                     * 设置Program name.
                     * @param _programName Program name.
                     * 
                     */
                    void SetProgramName(const std::string& _programName);

                    /**
                     * 判断参数 ProgramName 是否已赋值
                     * @return ProgramName 是否已赋值
                     * 
                     */
                    bool ProgramNameHasBeenSet() const;

                    /**
                     * 获取Alarm classification.
                     * @return Category Alarm classification.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Alarm classification.
                     * @param _category Alarm classification.
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取The number of occurrences
                     * @return Count The number of occurrences
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置The number of occurrences
                     * @param _count The number of occurrences
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return LastModifiedTime Update time.
                     * 
                     */
                    uint64_t GetLastModifiedTime() const;

                    /**
                     * 设置Update time.
                     * @param _lastModifiedTime Update time.
                     * 
                     */
                    void SetLastModifiedTime(const uint64_t& _lastModifiedTime);

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     * 
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * Program ID.
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                    /**
                     * Program name.
                     */
                    std::string m_programName;
                    bool m_programNameHasBeenSet;

                    /**
                     * Alarm classification.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * The number of occurrences
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Update time.
                     */
                    uint64_t m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_PROGRAMALERTCOUNTS_H_
