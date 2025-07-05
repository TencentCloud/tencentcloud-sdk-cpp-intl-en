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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeDocument response structure.
                */
                class DescribeDocumentResponse : public AbstractModel
                {
                public:
                    DescribeDocumentResponse();
                    ~DescribeDocumentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The document ID.
                     * @return DocumentId The document ID.
                     * 
                     */
                    std::string GetDocumentId() const;

                    /**
                     * 判断参数 DocumentId 是否已赋值
                     * @return DocumentId 是否已赋值
                     * 
                     */
                    bool DocumentIdHasBeenSet() const;

                    /**
                     * 获取The document’s original URL.
                     * @return DocumentUrl The document’s original URL.
                     * 
                     */
                    std::string GetDocumentUrl() const;

                    /**
                     * 判断参数 DocumentUrl 是否已赋值
                     * @return DocumentUrl 是否已赋值
                     * 
                     */
                    bool DocumentUrlHasBeenSet() const;

                    /**
                     * 获取The document title.
                     * @return DocumentName The document title.
                     * 
                     */
                    std::string GetDocumentName() const;

                    /**
                     * 判断参数 DocumentName 是否已赋值
                     * @return DocumentName 是否已赋值
                     * 
                     */
                    bool DocumentNameHasBeenSet() const;

                    /**
                     * 获取The user ID of the document’s owner.
                     * @return Owner The user ID of the document’s owner.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取The application ID.
                     * @return SdkAppId The application ID.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The document access type.
                     * @return Permission The document access type.
                     * 
                     */
                    uint64_t GetPermission() const;

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取The transcoding result. If the file is not transcoded, this parameter will be empty. If it is successfully transcoded, this parameter will be the URL of the transcoded file. If transcoding fails, this parameter will indicate the error code.
                     * @return TranscodeResult The transcoding result. If the file is not transcoded, this parameter will be empty. If it is successfully transcoded, this parameter will be the URL of the transcoded file. If transcoding fails, this parameter will indicate the error code.
                     * 
                     */
                    std::string GetTranscodeResult() const;

                    /**
                     * 判断参数 TranscodeResult 是否已赋值
                     * @return TranscodeResult 是否已赋值
                     * 
                     */
                    bool TranscodeResultHasBeenSet() const;

                    /**
                     * 获取The transcoding type.
                     * @return TranscodeType The transcoding type.
                     * 
                     */
                    uint64_t GetTranscodeType() const;

                    /**
                     * 判断参数 TranscodeType 是否已赋值
                     * @return TranscodeType 是否已赋值
                     * 
                     */
                    bool TranscodeTypeHasBeenSet() const;

                    /**
                     * 获取The transcoding progress. Value range: 0-100.
                     * @return TranscodeProgress The transcoding progress. Value range: 0-100.
                     * 
                     */
                    uint64_t GetTranscodeProgress() const;

                    /**
                     * 判断参数 TranscodeProgress 是否已赋值
                     * @return TranscodeProgress 是否已赋值
                     * 
                     */
                    bool TranscodeProgressHasBeenSet() const;

                    /**
                     * 获取The transcoding status. 0: The file is not transcoded. 1: The file is being transcoded. 2: Transcoding failed. 3: Transcoding is successful.
                     * @return TranscodeState The transcoding status. 0: The file is not transcoded. 1: The file is being transcoded. 2: Transcoding failed. 3: Transcoding is successful.
                     * 
                     */
                    uint64_t GetTranscodeState() const;

                    /**
                     * 判断参数 TranscodeState 是否已赋值
                     * @return TranscodeState 是否已赋值
                     * 
                     */
                    bool TranscodeStateHasBeenSet() const;

                    /**
                     * 获取The error message for failed transcoding.
                     * @return TranscodeInfo The error message for failed transcoding.
                     * 
                     */
                    std::string GetTranscodeInfo() const;

                    /**
                     * 判断参数 TranscodeInfo 是否已赋值
                     * @return TranscodeInfo 是否已赋值
                     * 
                     */
                    bool TranscodeInfoHasBeenSet() const;

                    /**
                     * 获取The document type.
                     * @return DocumentType The document type.
                     * 
                     */
                    std::string GetDocumentType() const;

                    /**
                     * 判断参数 DocumentType 是否已赋值
                     * @return DocumentType 是否已赋值
                     * 
                     */
                    bool DocumentTypeHasBeenSet() const;

                    /**
                     * 获取The document size (bytes).
                     * @return DocumentSize The document size (bytes).
                     * 
                     */
                    uint64_t GetDocumentSize() const;

                    /**
                     * 判断参数 DocumentSize 是否已赋值
                     * @return DocumentSize 是否已赋值
                     * 
                     */
                    bool DocumentSizeHasBeenSet() const;

                    /**
                     * 获取The time (Unix timestamp) when the document was last updated.
                     * @return UpdateTime The time (Unix timestamp) when the document was last updated.
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * The document ID.
                     */
                    std::string m_documentId;
                    bool m_documentIdHasBeenSet;

                    /**
                     * The document’s original URL.
                     */
                    std::string m_documentUrl;
                    bool m_documentUrlHasBeenSet;

                    /**
                     * The document title.
                     */
                    std::string m_documentName;
                    bool m_documentNameHasBeenSet;

                    /**
                     * The user ID of the document’s owner.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * The application ID.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The document access type.
                     */
                    uint64_t m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * The transcoding result. If the file is not transcoded, this parameter will be empty. If it is successfully transcoded, this parameter will be the URL of the transcoded file. If transcoding fails, this parameter will indicate the error code.
                     */
                    std::string m_transcodeResult;
                    bool m_transcodeResultHasBeenSet;

                    /**
                     * The transcoding type.
                     */
                    uint64_t m_transcodeType;
                    bool m_transcodeTypeHasBeenSet;

                    /**
                     * The transcoding progress. Value range: 0-100.
                     */
                    uint64_t m_transcodeProgress;
                    bool m_transcodeProgressHasBeenSet;

                    /**
                     * The transcoding status. 0: The file is not transcoded. 1: The file is being transcoded. 2: Transcoding failed. 3: Transcoding is successful.
                     */
                    uint64_t m_transcodeState;
                    bool m_transcodeStateHasBeenSet;

                    /**
                     * The error message for failed transcoding.
                     */
                    std::string m_transcodeInfo;
                    bool m_transcodeInfoHasBeenSet;

                    /**
                     * The document type.
                     */
                    std::string m_documentType;
                    bool m_documentTypeHasBeenSet;

                    /**
                     * The document size (bytes).
                     */
                    uint64_t m_documentSize;
                    bool m_documentSizeHasBeenSet;

                    /**
                     * The time (Unix timestamp) when the document was last updated.
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTRESPONSE_H_
