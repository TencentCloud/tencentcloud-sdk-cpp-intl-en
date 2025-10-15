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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKCODE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKCODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Task code.
                */
                class TaskCode : public AbstractModel
                {
                public:
                    TaskCode();
                    ~TaskCode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the code content.
                     * @return CodeContent Specifies the code content.
                     * 
                     */
                    std::string GetCodeContent() const;

                    /**
                     * 设置Specifies the code content.
                     * @param _codeContent Specifies the code content.
                     * 
                     */
                    void SetCodeContent(const std::string& _codeContent);

                    /**
                     * 判断参数 CodeContent 是否已赋值
                     * @return CodeContent 是否已赋值
                     * 
                     */
                    bool CodeContentHasBeenSet() const;

                    /**
                     * 获取Specifies the size of the code file in bytes.
                     * @return CodeFileSize Specifies the size of the code file in bytes.
                     * 
                     */
                    uint64_t GetCodeFileSize() const;

                    /**
                     * 设置Specifies the size of the code file in bytes.
                     * @param _codeFileSize Specifies the size of the code file in bytes.
                     * 
                     */
                    void SetCodeFileSize(const uint64_t& _codeFileSize);

                    /**
                     * 判断参数 CodeFileSize 是否已赋值
                     * @return CodeFileSize 是否已赋值
                     * 
                     */
                    bool CodeFileSizeHasBeenSet() const;

                private:

                    /**
                     * Specifies the code content.
                     */
                    std::string m_codeContent;
                    bool m_codeContentHasBeenSet;

                    /**
                     * Specifies the size of the code file in bytes.
                     */
                    uint64_t m_codeFileSize;
                    bool m_codeFileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKCODE_H_
