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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTSSERESPONSE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTSSERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/ReconstructDocumentFailedPage.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * ReconstructDocumentSSE response structure.
                */
                class ReconstructDocumentSSEResponse : public AbstractModel
                {
                public:
                    ReconstructDocumentSSEResponse();
                    ~ReconstructDocumentSSEResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID. The unique identifier of the current request.
                     * @return TaskId Task ID. The unique identifier of the current request.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Response type. 1: return progress information; 2: return parsing result.
                     * @return ResponseType Response type. 1: return progress information; 2: return parsing result.
                     * 
                     */
                    std::string GetResponseType() const;

                    /**
                     * 判断参数 ResponseType 是否已赋值
                     * @return ResponseType 是否已赋值
                     * 
                     */
                    bool ResponseTypeHasBeenSet() const;

                    /**
                     * 获取Progress. Value range: 0 to 100.
                     * @return Progress Progress. Value range: 0 to 100.
                     * 
                     */
                    std::string GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Progress information.
                     * @return ProgressMessage Progress information.
                     * 
                     */
                    std::string GetProgressMessage() const;

                    /**
                     * 判断参数 ProgressMessage 是否已赋值
                     * @return ProgressMessage 是否已赋值
                     * 
                     */
                    bool ProgressMessageHasBeenSet() const;

                    /**
                     * 获取Temporary download URL for the document parsing result. The file is a zip compressed package, and the URL is valid for 30 minutes. The compressed package contains the following folders: \*.md, \*.jsonl, \*mllm.json, images.
                     * @return DocumentRecognizeResultUrl Temporary download URL for the document parsing result. The file is a zip compressed package, and the URL is valid for 30 minutes. The compressed package contains the following folders: \*.md, \*.jsonl, \*mllm.json, images.
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
                     * 获取Page number where document parsing fails.
                     * @return FailedPages Page number where document parsing fails.
                     * 
                     */
                    std::vector<ReconstructDocumentFailedPage> GetFailedPages() const;

                    /**
                     * 判断参数 FailedPages 是否已赋值
                     * @return FailedPages 是否已赋值
                     * 
                     */
                    bool FailedPagesHasBeenSet() const;

                    /**
                     * 获取
                     * @return FailPageNum 
                     * 
                     */
                    int64_t GetFailPageNum() const;

                    /**
                     * 判断参数 FailPageNum 是否已赋值
                     * @return FailPageNum 是否已赋值
                     * 
                     */
                    bool FailPageNumHasBeenSet() const;

                    /**
                     * 获取
                     * @return SuccessPageNum 
                     * 
                     */
                    int64_t GetSuccessPageNum() const;

                    /**
                     * 判断参数 SuccessPageNum 是否已赋值
                     * @return SuccessPageNum 是否已赋值
                     * 
                     */
                    bool SuccessPageNumHasBeenSet() const;

                private:

                    /**
                     * Task ID. The unique identifier of the current request.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Response type. 1: return progress information; 2: return parsing result.
                     */
                    std::string m_responseType;
                    bool m_responseTypeHasBeenSet;

                    /**
                     * Progress. Value range: 0 to 100.
                     */
                    std::string m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Progress information.
                     */
                    std::string m_progressMessage;
                    bool m_progressMessageHasBeenSet;

                    /**
                     * Temporary download URL for the document parsing result. The file is a zip compressed package, and the URL is valid for 30 minutes. The compressed package contains the following folders: \*.md, \*.jsonl, \*mllm.json, images.
                     */
                    std::string m_documentRecognizeResultUrl;
                    bool m_documentRecognizeResultUrlHasBeenSet;

                    /**
                     * Page number where document parsing fails.
                     */
                    std::vector<ReconstructDocumentFailedPage> m_failedPages;
                    bool m_failedPagesHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_failPageNum;
                    bool m_failPageNumHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_successPageNum;
                    bool m_successPageNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTSSERESPONSE_H_
