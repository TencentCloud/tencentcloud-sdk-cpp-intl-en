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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNCONTENT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Node operation content
                */
                class NodeRunContent : public AbstractModel
                {
                public:
                    NodeRunContent();
                    ~NodeRunContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input variable information
                     * @return Input Input variable information
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置Input variable information
                     * @param _input Input variable information
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output variable information
                     * @return Output Output variable information
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置Output variable information
                     * @param _output Output variable information
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Original output information. Only partial nodes have a value, such as tool nodes and code nodes.
                     * @return OriginalOutput Original output information. Only partial nodes have a value, such as tool nodes and code nodes.
                     * 
                     */
                    std::string GetOriginalOutput() const;

                    /**
                     * 设置Original output information. Only partial nodes have a value, such as tool nodes and code nodes.
                     * @param _originalOutput Original output information. Only partial nodes have a value, such as tool nodes and code nodes.
                     * 
                     */
                    void SetOriginalOutput(const std::string& _originalOutput);

                    /**
                     * 判断参数 OriginalOutput 是否已赋值
                     * @return OriginalOutput 是否已赋值
                     * 
                     */
                    bool OriginalOutputHasBeenSet() const;

                    /**
                     * 获取URLs of the complete node Input content. (This field has a value only when the Input content exceeds the limit.)
                     * @return InputRef URLs of the complete node Input content. (This field has a value only when the Input content exceeds the limit.)
                     * 
                     */
                    std::string GetInputRef() const;

                    /**
                     * 设置URLs of the complete node Input content. (This field has a value only when the Input content exceeds the limit.)
                     * @param _inputRef URLs of the complete node Input content. (This field has a value only when the Input content exceeds the limit.)
                     * 
                     */
                    void SetInputRef(const std::string& _inputRef);

                    /**
                     * 判断参数 InputRef 是否已赋值
                     * @return InputRef 是否已赋值
                     * 
                     */
                    bool InputRefHasBeenSet() const;

                    /**
                     * 获取URLs of the complete node Output. This field has a value only when the Output exceeds the limit.
                     * @return OutputRef URLs of the complete node Output. This field has a value only when the Output exceeds the limit.
                     * 
                     */
                    std::string GetOutputRef() const;

                    /**
                     * 设置URLs of the complete node Output. This field has a value only when the Output exceeds the limit.
                     * @param _outputRef URLs of the complete node Output. This field has a value only when the Output exceeds the limit.
                     * 
                     */
                    void SetOutputRef(const std::string& _outputRef);

                    /**
                     * 判断参数 OutputRef 是否已赋值
                     * @return OutputRef 是否已赋值
                     * 
                     */
                    bool OutputRefHasBeenSet() const;

                    /**
                     * 获取URLs of the complete original output content of the task. (This field has a value only when the TaskOutput content exceeds the limit.)
                     * @return OriginalOutputRef URLs of the complete original output content of the task. (This field has a value only when the TaskOutput content exceeds the limit.)
                     * 
                     */
                    std::string GetOriginalOutputRef() const;

                    /**
                     * 设置URLs of the complete original output content of the task. (This field has a value only when the TaskOutput content exceeds the limit.)
                     * @param _originalOutputRef URLs of the complete original output content of the task. (This field has a value only when the TaskOutput content exceeds the limit.)
                     * 
                     */
                    void SetOriginalOutputRef(const std::string& _originalOutputRef);

                    /**
                     * 判断参数 OriginalOutputRef 是否已赋值
                     * @return OriginalOutputRef 是否已赋值
                     * 
                     */
                    bool OriginalOutputRefHasBeenSet() const;

                private:

                    /**
                     * Input variable information
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output variable information
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Original output information. Only partial nodes have a value, such as tool nodes and code nodes.
                     */
                    std::string m_originalOutput;
                    bool m_originalOutputHasBeenSet;

                    /**
                     * URLs of the complete node Input content. (This field has a value only when the Input content exceeds the limit.)
                     */
                    std::string m_inputRef;
                    bool m_inputRefHasBeenSet;

                    /**
                     * URLs of the complete node Output. This field has a value only when the Output exceeds the limit.
                     */
                    std::string m_outputRef;
                    bool m_outputRefHasBeenSet;

                    /**
                     * URLs of the complete original output content of the task. (This field has a value only when the TaskOutput content exceeds the limit.)
                     */
                    std::string m_originalOutputRef;
                    bool m_originalOutputRefHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNCONTENT_H_
