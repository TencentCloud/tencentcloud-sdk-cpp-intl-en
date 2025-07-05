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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Input parameter type of video content recognition
                */
                class AiRecognitionTaskInput : public AbstractModel
                {
                public:
                    AiRecognitionTaskInput();
                    ~AiRecognitionTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intelligent video recognition template ID.
                     * @return Definition Intelligent video recognition template ID.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Intelligent video recognition template ID.
                     * @param _definition Intelligent video recognition template ID.
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取User extension field, which does not need to be filled in for general scenarios.
                     * @return UserExtPara User extension field, which does not need to be filled in for general scenarios.
                     * 
                     */
                    std::string GetUserExtPara() const;

                    /**
                     * 设置User extension field, which does not need to be filled in for general scenarios.
                     * @param _userExtPara User extension field, which does not need to be filled in for general scenarios.
                     * 
                     */
                    void SetUserExtPara(const std::string& _userExtPara);

                    /**
                     * 判断参数 UserExtPara 是否已赋值
                     * @return UserExtPara 是否已赋值
                     * 
                     */
                    bool UserExtParaHasBeenSet() const;

                private:

                    /**
                     * Intelligent video recognition template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * User extension field, which does not need to be filled in for general scenarios.
                     */
                    std::string m_userExtPara;
                    bool m_userExtParaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKINPUT_H_
