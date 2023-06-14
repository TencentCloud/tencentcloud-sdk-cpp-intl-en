/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DOCUMENTINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DOCUMENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Document Information.
Used by actions: DescribeDocumentsByRoom.
                */
                class DocumentInfo : public AbstractModel
                {
                public:
                    DocumentInfo();
                    ~DocumentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The document ID. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DocumentId The document ID. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDocumentId() const;

                    /**
                     * 设置The document ID. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _documentId The document ID. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDocumentId(const std::string& _documentId);

                    /**
                     * 判断参数 DocumentId 是否已赋值
                     * @return DocumentId 是否已赋值
                     * 
                     */
                    bool DocumentIdHasBeenSet() const;

                    /**
                     * 获取The document’s original URL. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DocumentUrl The document’s original URL. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDocumentUrl() const;

                    /**
                     * 设置The document’s original URL. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _documentUrl The document’s original URL. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDocumentUrl(const std::string& _documentUrl);

                    /**
                     * 判断参数 DocumentUrl 是否已赋值
                     * @return DocumentUrl 是否已赋值
                     * 
                     */
                    bool DocumentUrlHasBeenSet() const;

                    /**
                     * 获取The document title. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DocumentName The document title. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDocumentName() const;

                    /**
                     * 设置The document title. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _documentName The document title. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDocumentName(const std::string& _documentName);

                    /**
                     * 判断参数 DocumentName 是否已赋值
                     * @return DocumentName 是否已赋值
                     * 
                     */
                    bool DocumentNameHasBeenSet() const;

                    /**
                     * 获取The user ID of the document’s owner. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Owner The user ID of the document’s owner. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置The user ID of the document’s owner. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _owner The user ID of the document’s owner. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取The application ID. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SdkAppId The application ID. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The application ID. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sdkAppId The application ID. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The document access type. 0: Private; 1: Public. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Permission The document access type. 0: Private; 1: Public. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPermission() const;

                    /**
                     * 设置The document access type. 0: Private; 1: Public. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _permission The document access type. 0: Private; 1: Public. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPermission(const uint64_t& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取The transcoding result. If the file is not transcoded, this parameter will be empty. If it is successfully transcoded, this parameter will be the URL of the transcoded file. If transcoding fails, this parameter will indicate the error code. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranscodeResult The transcoding result. If the file is not transcoded, this parameter will be empty. If it is successfully transcoded, this parameter will be the URL of the transcoded file. If transcoding fails, this parameter will indicate the error code. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTranscodeResult() const;

                    /**
                     * 设置The transcoding result. If the file is not transcoded, this parameter will be empty. If it is successfully transcoded, this parameter will be the URL of the transcoded file. If transcoding fails, this parameter will indicate the error code. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transcodeResult The transcoding result. If the file is not transcoded, this parameter will be empty. If it is successfully transcoded, this parameter will be the URL of the transcoded file. If transcoding fails, this parameter will indicate the error code. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTranscodeResult(const std::string& _transcodeResult);

                    /**
                     * 判断参数 TranscodeResult 是否已赋值
                     * @return TranscodeResult 是否已赋值
                     * 
                     */
                    bool TranscodeResultHasBeenSet() const;

                    /**
                     * 获取The transcoding type. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranscodeType The transcoding type. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTranscodeType() const;

                    /**
                     * 设置The transcoding type. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transcodeType The transcoding type. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTranscodeType(const uint64_t& _transcodeType);

                    /**
                     * 判断参数 TranscodeType 是否已赋值
                     * @return TranscodeType 是否已赋值
                     * 
                     */
                    bool TranscodeTypeHasBeenSet() const;

                    /**
                     * 获取The transcoding progress. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranscodeProgress The transcoding progress. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTranscodeProgress() const;

                    /**
                     * 设置The transcoding progress. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transcodeProgress The transcoding progress. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTranscodeProgress(const uint64_t& _transcodeProgress);

                    /**
                     * 判断参数 TranscodeProgress 是否已赋值
                     * @return TranscodeProgress 是否已赋值
                     * 
                     */
                    bool TranscodeProgressHasBeenSet() const;

                    /**
                     * 获取The transcoding status. 0: The file is not transcoded. 1: The file is being transcoded. 2: Transcoding failed. 3: Transcoding is successful. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranscodeState The transcoding status. 0: The file is not transcoded. 1: The file is being transcoded. 2: Transcoding failed. 3: Transcoding is successful. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTranscodeState() const;

                    /**
                     * 设置The transcoding status. 0: The file is not transcoded. 1: The file is being transcoded. 2: Transcoding failed. 3: Transcoding is successful. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transcodeState The transcoding status. 0: The file is not transcoded. 1: The file is being transcoded. 2: Transcoding failed. 3: Transcoding is successful. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTranscodeState(const uint64_t& _transcodeState);

                    /**
                     * 判断参数 TranscodeState 是否已赋值
                     * @return TranscodeState 是否已赋值
                     * 
                     */
                    bool TranscodeStateHasBeenSet() const;

                    /**
                     * 获取The error message for failed transcoding. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranscodeInfo The error message for failed transcoding. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTranscodeInfo() const;

                    /**
                     * 设置The error message for failed transcoding. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transcodeInfo The error message for failed transcoding. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTranscodeInfo(const std::string& _transcodeInfo);

                    /**
                     * 判断参数 TranscodeInfo 是否已赋值
                     * @return TranscodeInfo 是否已赋值
                     * 
                     */
                    bool TranscodeInfoHasBeenSet() const;

                    /**
                     * 获取The document type. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DocumentType The document type. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDocumentType() const;

                    /**
                     * 设置The document type. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _documentType The document type. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDocumentType(const std::string& _documentType);

                    /**
                     * 判断参数 DocumentType 是否已赋值
                     * @return DocumentType 是否已赋值
                     * 
                     */
                    bool DocumentTypeHasBeenSet() const;

                    /**
                     * 获取The document size (bytes). Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DocumentSize The document size (bytes). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDocumentSize() const;

                    /**
                     * 设置The document size (bytes). Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _documentSize The document size (bytes). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDocumentSize(const uint64_t& _documentSize);

                    /**
                     * 判断参数 DocumentSize 是否已赋值
                     * @return DocumentSize 是否已赋值
                     * 
                     */
                    bool DocumentSizeHasBeenSet() const;

                    /**
                     * 获取The time (Unix timestamp) when the document was last updated. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime The time (Unix timestamp) when the document was last updated. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置The time (Unix timestamp) when the document was last updated. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime The time (Unix timestamp) when the document was last updated. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取The number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Pages The number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPages() const;

                    /**
                     * 设置The number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pages The number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPages(const uint64_t& _pages);

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     * 
                     */
                    bool PagesHasBeenSet() const;

                    /**
                     * 获取The width. This parameter is valid only if static document transcoding is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Width The width. This parameter is valid only if static document transcoding is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置The width. This parameter is valid only if static document transcoding is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _width The width. This parameter is valid only if static document transcoding is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取The height. This parameter is valid only if static document transcoding is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Height The height. This parameter is valid only if static document transcoding is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置The height. This parameter is valid only if static document transcoding is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _height The height. This parameter is valid only if static document transcoding is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取The thumbnail. Only transcoded courseware has thumbnails.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Cover The thumbnail. Only transcoded courseware has thumbnails.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCover() const;

                    /**
                     * 设置The thumbnail. Only transcoded courseware has thumbnails.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cover The thumbnail. Only transcoded courseware has thumbnails.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCover(const std::string& _cover);

                    /**
                     * 判断参数 Cover 是否已赋值
                     * @return Cover 是否已赋值
                     * 
                     */
                    bool CoverHasBeenSet() const;

                private:

                    /**
                     * The document ID. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_documentId;
                    bool m_documentIdHasBeenSet;

                    /**
                     * The document’s original URL. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_documentUrl;
                    bool m_documentUrlHasBeenSet;

                    /**
                     * The document title. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_documentName;
                    bool m_documentNameHasBeenSet;

                    /**
                     * The user ID of the document’s owner. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * The application ID. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The document access type. 0: Private; 1: Public. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * The transcoding result. If the file is not transcoded, this parameter will be empty. If it is successfully transcoded, this parameter will be the URL of the transcoded file. If transcoding fails, this parameter will indicate the error code. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transcodeResult;
                    bool m_transcodeResultHasBeenSet;

                    /**
                     * The transcoding type. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_transcodeType;
                    bool m_transcodeTypeHasBeenSet;

                    /**
                     * The transcoding progress. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_transcodeProgress;
                    bool m_transcodeProgressHasBeenSet;

                    /**
                     * The transcoding status. 0: The file is not transcoded. 1: The file is being transcoded. 2: Transcoding failed. 3: Transcoding is successful. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_transcodeState;
                    bool m_transcodeStateHasBeenSet;

                    /**
                     * The error message for failed transcoding. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transcodeInfo;
                    bool m_transcodeInfoHasBeenSet;

                    /**
                     * The document type. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_documentType;
                    bool m_documentTypeHasBeenSet;

                    /**
                     * The document size (bytes). Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_documentSize;
                    bool m_documentSizeHasBeenSet;

                    /**
                     * The time (Unix timestamp) when the document was last updated. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * The number of pages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * The width. This parameter is valid only if static document transcoding is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The height. This parameter is valid only if static document transcoding is used.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The thumbnail. Only transcoded courseware has thumbnails.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cover;
                    bool m_coverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DOCUMENTINFO_H_
