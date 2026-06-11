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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TOOLCALL_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TOOLCALL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ToolCallFunction.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Model-generated tool call
                */
                class ToolCall : public AbstractModel
                {
                public:
                    ToolCall();
                    ~ToolCall() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Tool call id</p>
                     * @return Id <p>Tool call id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Tool call id</p>
                     * @param _id <p>Tool call id</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Invocation type of the tool, currently only support function</p>
                     * @return Type <p>Invocation type of the tool, currently only support function</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Invocation type of the tool, currently only support function</p>
                     * @param _type <p>Invocation type of the tool, currently only support function</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Specific function call</p>
                     * @return Function <p>Specific function call</p>
                     * 
                     */
                    ToolCallFunction GetFunction() const;

                    /**
                     * 设置<p>Specific function call</p>
                     * @param _function <p>Specific function call</p>
                     * 
                     */
                    void SetFunction(const ToolCallFunction& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取<p>Index value</p>
                     * @return Index <p>Index value</p>
                     * 
                     */
                    uint64_t GetIndex() const;

                    /**
                     * 设置<p>Index value</p>
                     * @param _index <p>Index value</p>
                     * 
                     */
                    void SetIndex(const uint64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * <p>Tool call id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Invocation type of the tool, currently only support function</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Specific function call</p>
                     */
                    ToolCallFunction m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * <p>Index value</p>
                     */
                    uint64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TOOLCALL_H_
