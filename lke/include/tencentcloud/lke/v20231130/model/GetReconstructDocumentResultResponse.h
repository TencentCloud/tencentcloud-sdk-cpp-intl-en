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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ReconstructDocumentFailedPage.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
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
                     * 获取Task status: success - execution completed; processing - executing; failed - execution failed; waitexecute - waiting to execute.
                     * @return Status Task status: success - execution completed; processing - executing; failed - execution failed; waitexecute - waiting to execute.
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
                     * 获取The result file of this document parsing task, stored in the download url of Tencent Cloud cos. The valid period of the download url is 10 minutes.
                     * @return DocumentRecognizeResultUrl The result file of this document parsing task, stored in the download url of Tencent Cloud cos. The valid period of the download url is 10 minutes.
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
                     * 获取Page number information where document parsing failed this time.
                     * @return FailedPages Page number information where document parsing failed this time.
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
                     * Task status: success - execution completed; processing - executing; failed - execution failed; waitexecute - waiting to execute.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The result file of this document parsing task, stored in the download url of Tencent Cloud cos. The valid period of the download url is 10 minutes.
                     */
                    std::string m_documentRecognizeResultUrl;
                    bool m_documentRecognizeResultUrlHasBeenSet;

                    /**
                     * Page number information where document parsing failed this time.
                     */
                    std::vector<ReconstructDocumentFailedPage> m_failedPages;
                    bool m_failedPagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_
