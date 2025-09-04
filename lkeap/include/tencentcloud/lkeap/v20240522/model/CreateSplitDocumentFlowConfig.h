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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATESPLITDOCUMENTFLOWCONFIG_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATESPLITDOCUMENTFLOWCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * Configuration information for creating intelligent document splitting task.
                */
                class CreateSplitDocumentFlowConfig : public AbstractModel
                {
                public:
                    CreateSplitDocumentFlowConfig();
                    ~CreateSplitDocumentFlowConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The form in which tables in a Markdown file are returned.
- 0: returned as MD.
- 1: returned as HTML.
                     * @return TableResultType The form in which tables in a Markdown file are returned.
- 0: returned as MD.
- 1: returned as HTML.
                     * @deprecated
                     */
                    std::string GetTableResultType() const;

                    /**
                     * 设置The form in which tables in a Markdown file are returned.
- 0: returned as MD.
- 1: returned as HTML.
                     * @param _tableResultType The form in which tables in a Markdown file are returned.
- 0: returned as MD.
- 1: returned as HTML.
                     * @deprecated
                     */
                    void SetTableResultType(const std::string& _tableResultType);

                    /**
                     * 判断参数 TableResultType 是否已赋值
                     * @return TableResultType 是否已赋值
                     * @deprecated
                     */
                    bool TableResultTypeHasBeenSet() const;

                    /**
                     * 获取The format of the returned results of intelligent document parsing.
- 0: only returns full-text MD.
- 1: only returns the OCR original Json for each page.
- 2: only returns the MD of each page.
- 3: returns the full-text MD and the original OCR Json of each page.
- 4: returns full-text MD and MD of each page.
The default value is 3 (returns the full-text MD and the original OCR Json of each page).
                     * @return ResultType The format of the returned results of intelligent document parsing.
- 0: only returns full-text MD.
- 1: only returns the OCR original Json for each page.
- 2: only returns the MD of each page.
- 3: returns the full-text MD and the original OCR Json of each page.
- 4: returns full-text MD and MD of each page.
The default value is 3 (returns the full-text MD and the original OCR Json of each page).
                     * @deprecated
                     */
                    std::string GetResultType() const;

                    /**
                     * 设置The format of the returned results of intelligent document parsing.
- 0: only returns full-text MD.
- 1: only returns the OCR original Json for each page.
- 2: only returns the MD of each page.
- 3: returns the full-text MD and the original OCR Json of each page.
- 4: returns full-text MD and MD of each page.
The default value is 3 (returns the full-text MD and the original OCR Json of each page).
                     * @param _resultType The format of the returned results of intelligent document parsing.
- 0: only returns full-text MD.
- 1: only returns the OCR original Json for each page.
- 2: only returns the MD of each page.
- 3: returns the full-text MD and the original OCR Json of each page.
- 4: returns full-text MD and MD of each page.
The default value is 3 (returns the full-text MD and the original OCR Json of each page).
                     * @deprecated
                     */
                    void SetResultType(const std::string& _resultType);

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     * @deprecated
                     */
                    bool ResultTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable mllm.
                     * @return EnableMllm Whether to enable mllm.
                     * 
                     */
                    bool GetEnableMllm() const;

                    /**
                     * 设置Whether to enable mllm.
                     * @param _enableMllm Whether to enable mllm.
                     * 
                     */
                    void SetEnableMllm(const bool& _enableMllm);

                    /**
                     * 判断参数 EnableMllm 是否已赋值
                     * @return EnableMllm 是否已赋值
                     * 
                     */
                    bool EnableMllmHasBeenSet() const;

                    /**
                     * 获取Max segment length.
                     * @return MaxChunkSize Max segment length.
                     * 
                     */
                    int64_t GetMaxChunkSize() const;

                    /**
                     * 设置Max segment length.
                     * @param _maxChunkSize Max segment length.
                     * 
                     */
                    void SetMaxChunkSize(const int64_t& _maxChunkSize);

                    /**
                     * 判断参数 MaxChunkSize 是否已赋值
                     * @return MaxChunkSize 是否已赋值
                     * 
                     */
                    bool MaxChunkSizeHasBeenSet() const;

                private:

                    /**
                     * The form in which tables in a Markdown file are returned.
- 0: returned as MD.
- 1: returned as HTML.
                     */
                    std::string m_tableResultType;
                    bool m_tableResultTypeHasBeenSet;

                    /**
                     * The format of the returned results of intelligent document parsing.
- 0: only returns full-text MD.
- 1: only returns the OCR original Json for each page.
- 2: only returns the MD of each page.
- 3: returns the full-text MD and the original OCR Json of each page.
- 4: returns full-text MD and MD of each page.
The default value is 3 (returns the full-text MD and the original OCR Json of each page).
                     */
                    std::string m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * Whether to enable mllm.
                     */
                    bool m_enableMllm;
                    bool m_enableMllmHasBeenSet;

                    /**
                     * Max segment length.
                     */
                    int64_t m_maxChunkSize;
                    bool m_maxChunkSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATESPLITDOCUMENTFLOWCONFIG_H_
