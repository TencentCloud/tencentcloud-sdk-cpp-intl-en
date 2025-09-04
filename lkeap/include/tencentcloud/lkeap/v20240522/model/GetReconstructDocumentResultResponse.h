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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_

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
                * GetReconstructDocumentResult response structure.
                */
                class GetReconstructDocumentResultResponse : public AbstractModel
                {
                public:
                    GetReconstructDocumentResultResponse();
                    ~GetReconstructDocumentResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task status.
-Success: execution completed.
-Processing: executing.
-Pause: paused.
-Failed: execution failed.
-WaitExecute: pending execution.
                     * @return Status Task status.
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
                     * 获取Temporary download URL for the parsing result. The file is a zip compressed package, and the URL is valid for 30 minutes.
                     * @return DocumentRecognizeResultUrl Temporary download URL for the parsing result. The file is a zip compressed package, and the URL is valid for 30 minutes.
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

                private:

                    /**
                     * Task status.
-Success: execution completed.
-Processing: executing.
-Pause: paused.
-Failed: execution failed.
-WaitExecute: pending execution.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Temporary download URL for the parsing result. The file is a zip compressed package, and the URL is valid for 30 minutes.
                     */
                    std::string m_documentRecognizeResultUrl;
                    bool m_documentRecognizeResultUrlHasBeenSet;

                    /**
                     * Page number where document parsing fails.
                     */
                    std::vector<ReconstructDocumentFailedPage> m_failedPages;
                    bool m_failedPagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_
