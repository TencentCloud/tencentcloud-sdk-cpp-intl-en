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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_PIPELINEINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_PIPELINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Mongo output aggregation settings. Default value: Change Event.
                */
                class PipelineInfo : public AbstractModel
                {
                public:
                    PipelineInfo();
                    ~PipelineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Aggregation operators: $addFields, $match, $project, $replaceRoot, $redact, $replaceWith, $set, $unset. $replaceWith, $set, $unset are available options for subscription instances that are version 4.2 or higher.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AggOp Aggregation operators: $addFields, $match, $project, $replaceRoot, $redact, $replaceWith, $set, $unset. $replaceWith, $set, $unset are available options for subscription instances that are version 4.2 or higher.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAggOp() const;

                    /**
                     * 设置Aggregation operators: $addFields, $match, $project, $replaceRoot, $redact, $replaceWith, $set, $unset. $replaceWith, $set, $unset are available options for subscription instances that are version 4.2 or higher.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aggOp Aggregation operators: $addFields, $match, $project, $replaceRoot, $redact, $replaceWith, $set, $unset. $replaceWith, $set, $unset are available options for subscription instances that are version 4.2 or higher.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAggOp(const std::string& _aggOp);

                    /**
                     * 判断参数 AggOp 是否已赋值
                     * @return AggOp 是否已赋值
                     * 
                     */
                    bool AggOpHasBeenSet() const;

                    /**
                     * 获取Aggregation expression must be in json format.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AggCmd Aggregation expression must be in json format.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAggCmd() const;

                    /**
                     * 设置Aggregation expression must be in json format.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aggCmd Aggregation expression must be in json format.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAggCmd(const std::string& _aggCmd);

                    /**
                     * 判断参数 AggCmd 是否已赋值
                     * @return AggCmd 是否已赋值
                     * 
                     */
                    bool AggCmdHasBeenSet() const;

                private:

                    /**
                     * Aggregation operators: $addFields, $match, $project, $replaceRoot, $redact, $replaceWith, $set, $unset. $replaceWith, $set, $unset are available options for subscription instances that are version 4.2 or higher.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aggOp;
                    bool m_aggOpHasBeenSet;

                    /**
                     * Aggregation expression must be in json format.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aggCmd;
                    bool m_aggCmdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_PIPELINEINFO_H_
