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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_SUMMARYOUTPUT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_SUMMARYOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Knowledge summary output configuration.
                */
                class SummaryOutput : public AbstractModel
                {
                public:
                    SummaryOutput();
                    ~SummaryOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Output method: 1. streaming; 2. non-streaming.
                     * @return Method Output method: 1. streaming; 2. non-streaming.
                     * 
                     */
                    uint64_t GetMethod() const;

                    /**
                     * 设置Output method: 1. streaming; 2. non-streaming.
                     * @param _method Output method: 1. streaming; 2. non-streaming.
                     * 
                     */
                    void SetMethod(const uint64_t& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Output requirement 1: text summary. 2: customized requirement.
                     * @return Requirement Output requirement 1: text summary. 2: customized requirement.
                     * 
                     */
                    uint64_t GetRequirement() const;

                    /**
                     * 设置Output requirement 1: text summary. 2: customized requirement.
                     * @param _requirement Output requirement 1: text summary. 2: customized requirement.
                     * 
                     */
                    void SetRequirement(const uint64_t& _requirement);

                    /**
                     * 判断参数 Requirement 是否已赋值
                     * @return Requirement 是否已赋值
                     * 
                     */
                    bool RequirementHasBeenSet() const;

                    /**
                     * 获取Custom requirement command.
                     * @return RequireCommand Custom requirement command.
                     * 
                     */
                    std::string GetRequireCommand() const;

                    /**
                     * 设置Custom requirement command.
                     * @param _requireCommand Custom requirement command.
                     * 
                     */
                    void SetRequireCommand(const std::string& _requireCommand);

                    /**
                     * 判断参数 RequireCommand 是否已赋值
                     * @return RequireCommand 是否已赋值
                     * 
                     */
                    bool RequireCommandHasBeenSet() const;

                private:

                    /**
                     * Output method: 1. streaming; 2. non-streaming.
                     */
                    uint64_t m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Output requirement 1: text summary. 2: customized requirement.
                     */
                    uint64_t m_requirement;
                    bool m_requirementHasBeenSet;

                    /**
                     * Custom requirement command.
                     */
                    std::string m_requireCommand;
                    bool m_requireCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_SUMMARYOUTPUT_H_
