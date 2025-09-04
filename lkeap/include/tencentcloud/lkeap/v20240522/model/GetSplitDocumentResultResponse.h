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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_GETSPLITDOCUMENTRESULTRESPONSE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_GETSPLITDOCUMENTRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/SplitDocumentFailedPage.h>
#include <tencentcloud/lkeap/v20240522/model/DocumentUsage.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * GetSplitDocumentResult response structure.
                */
                class GetSplitDocumentResultResponse : public AbstractModel
                {
                public:
                    GetSplitDocumentResultResponse();
                    ~GetSplitDocumentResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task status:
-Success: execution completed.
-Processing: executing.
-Pause: paused.
-Failed: execution failed.
-WaitExecute: pending execution.
                     * @return Status Task status:
-Success: execution completed.
-Processing: executing.
-Pause: paused.
-Failed: execution failed.
-WaitExecute: pending execution.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Temporary download URL for the splitting result. The file is a zip compressed package, and the URL is valid for 30 minutes. The compressed package contains the following folders: \*.md, \*.jsonl, \*mllm.json, images.
>**jsonl** structure description:.
- page_content: Used to generate an embedding library for retrieval purposes. The images in this field will be replaced with placeholders.
- org_data: The minimum semantic integrity block corresponding to page_content, used for Q&A model processing.
- big_data: The maximum semantic integrity block corresponding to page_content, also used for Q&A model processing.
                     * @return DocumentRecognizeResultUrl Temporary download URL for the splitting result. The file is a zip compressed package, and the URL is valid for 30 minutes. The compressed package contains the following folders: \*.md, \*.jsonl, \*mllm.json, images.
>**jsonl** structure description:.
- page_content: Used to generate an embedding library for retrieval purposes. The images in this field will be replaced with placeholders.
- org_data: The minimum semantic integrity block corresponding to page_content, used for Q&A model processing.
- big_data: The maximum semantic integrity block corresponding to page_content, also used for Q&A model processing.
                     * 
                     */
                    std::string GetDocumentRecognizeResultUrl() const;

                    /**
                     * 判断参数 DocumentRecognizeResultUrl 是否已赋值
                     * @return DocumentRecognizeResultUrl 是否已赋值
                     * 
                     */
                    bool DocumentRecognizeResultUrlHasBeenSet() const;

                    /**
                     * 获取Page number where document splitting fails.
                     * @return FailedPages Page number where document splitting fails.
                     * @deprecated
                     */
                    std::vector<SplitDocumentFailedPage> GetFailedPages() const;

                    /**
                     * 判断参数 FailedPages 是否已赋值
                     * @return FailedPages 是否已赋值
                     * @deprecated
                     */
                    bool FailedPagesHasBeenSet() const;

                    /**
                     * 获取Amount of the document split task.
                     * @return Usage Amount of the document split task.
                     * 
                     */
                    DocumentUsage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * Task status:
-Success: execution completed.
-Processing: executing.
-Pause: paused.
-Failed: execution failed.
-WaitExecute: pending execution.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Temporary download URL for the splitting result. The file is a zip compressed package, and the URL is valid for 30 minutes. The compressed package contains the following folders: \*.md, \*.jsonl, \*mllm.json, images.
>**jsonl** structure description:.
- page_content: Used to generate an embedding library for retrieval purposes. The images in this field will be replaced with placeholders.
- org_data: The minimum semantic integrity block corresponding to page_content, used for Q&A model processing.
- big_data: The maximum semantic integrity block corresponding to page_content, also used for Q&A model processing.
                     */
                    std::string m_documentRecognizeResultUrl;
                    bool m_documentRecognizeResultUrlHasBeenSet;

                    /**
                     * Page number where document splitting fails.
                     */
                    std::vector<SplitDocumentFailedPage> m_failedPages;
                    bool m_failedPagesHasBeenSet;

                    /**
                     * Amount of the document split task.
                     */
                    DocumentUsage m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_GETSPLITDOCUMENTRESULTRESPONSE_H_
