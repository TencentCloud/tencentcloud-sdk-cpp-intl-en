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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VPRRATINGSTAGE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VPRRATINGSTAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * VRP rating stage
                */
                class VPRRatingStage : public AbstractModel
                {
                public:
                    VPRRatingStage();
                    ~VPRRatingStage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Stage name (for example: threat activity level, exploitability, vulnerability severity)
                     * @return Stage Stage name (for example: threat activity level, exploitability, vulnerability severity)
                     * 
                     */
                    std::string GetStage() const;

                    /**
                     * 设置Stage name (for example: threat activity level, exploitability, vulnerability severity)
                     * @param _stage Stage name (for example: threat activity level, exploitability, vulnerability severity)
                     * 
                     */
                    void SetStage(const std::string& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取Rating result of this stage
                     * @return Result Rating result of this stage
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置Rating result of this stage
                     * @param _result Rating result of this stage
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * Stage name (for example: threat activity level, exploitability, vulnerability severity)
                     */
                    std::string m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * Rating result of this stage
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VPRRATINGSTAGE_H_
