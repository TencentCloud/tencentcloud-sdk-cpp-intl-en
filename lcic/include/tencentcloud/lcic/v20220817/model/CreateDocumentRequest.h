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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEDOCUMENTREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEDOCUMENTREQUEST_H_

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
                * CreateDocument request structure.
                */
                class CreateDocumentRequest : public AbstractModel
                {
                public:
                    CreateDocumentRequest();
                    ~CreateDocumentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取LCIC SdkAppId
                     * @return SdkAppId LCIC SdkAppId
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置LCIC SdkAppId
                     * @param _sdkAppId LCIC SdkAppId
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
                     * 获取Document URL	
                     * @return DocumentUrl Document URL	
                     * 
                     */
                    std::string GetDocumentUrl() const;

                    /**
                     * 设置Document URL	
                     * @param _documentUrl Document URL	
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
                     * 获取Document name	
                     * @return DocumentName Document name	
                     * 
                     */
                    std::string GetDocumentName() const;

                    /**
                     * 设置Document name	
                     * @param _documentName Document name	
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
                     * 获取Document owner ID	
                     * @return Owner Document owner ID	
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Document owner ID	
                     * @param _owner Document owner ID	
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
                     * 获取Transcoding type. Valid values: `0`: No transcoding required (default); `1`: Documents that need to be transcoded: ppt, pptx, pdf, doc, docx; `2`: Videos that need to be transcoded: mp4, 3pg, mpeg, avi, flv, wmv, rm, h264, etc.; `2`: Audio that needs to be transcoded: mp3, wav, wma, aac, flac, opus
                     * @return TranscodeType Transcoding type. Valid values: `0`: No transcoding required (default); `1`: Documents that need to be transcoded: ppt, pptx, pdf, doc, docx; `2`: Videos that need to be transcoded: mp4, 3pg, mpeg, avi, flv, wmv, rm, h264, etc.; `2`: Audio that needs to be transcoded: mp3, wav, wma, aac, flac, opus
                     * 
                     */
                    uint64_t GetTranscodeType() const;

                    /**
                     * 设置Transcoding type. Valid values: `0`: No transcoding required (default); `1`: Documents that need to be transcoded: ppt, pptx, pdf, doc, docx; `2`: Videos that need to be transcoded: mp4, 3pg, mpeg, avi, flv, wmv, rm, h264, etc.; `2`: Audio that needs to be transcoded: mp3, wav, wma, aac, flac, opus
                     * @param _transcodeType Transcoding type. Valid values: `0`: No transcoding required (default); `1`: Documents that need to be transcoded: ppt, pptx, pdf, doc, docx; `2`: Videos that need to be transcoded: mp4, 3pg, mpeg, avi, flv, wmv, rm, h264, etc.; `2`: Audio that needs to be transcoded: mp3, wav, wma, aac, flac, opus
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
                     * 获取Permission. Valid values: `0`: Private document (default); `1`: Public document
                     * @return Permission Permission. Valid values: `0`: Private document (default); `1`: Public document
                     * 
                     */
                    uint64_t GetPermission() const;

                    /**
                     * 设置Permission. Valid values: `0`: Private document (default); `1`: Public document
                     * @param _permission Permission. Valid values: `0`: Private document (default); `1`: Public document
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
                     * 获取Document extension
                     * @return DocumentType Document extension
                     * 
                     */
                    std::string GetDocumentType() const;

                    /**
                     * 设置Document extension
                     * @param _documentType Document extension
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
                     * 获取Document size, in bytes
                     * @return DocumentSize Document size, in bytes
                     * 
                     */
                    uint64_t GetDocumentSize() const;

                    /**
                     * 设置Document size, in bytes
                     * @param _documentSize Document size, in bytes
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
                     * 获取Whether or not to enable automatic processing for unsupported elements. Default: off. The automatically processed elements are as follows: 1. Ink: Remove unsupported ink (e.g. WPS Ink) 2. Auto Page Turn: Remove all auto page turn settings on the PPT and set it to mouse click to turn the page 3. Corrupted Audio/Video: Remove references to corrupted audio/video on the PPT
                     * @return AutoHandleUnsupportedElement Whether or not to enable automatic processing for unsupported elements. Default: off. The automatically processed elements are as follows: 1. Ink: Remove unsupported ink (e.g. WPS Ink) 2. Auto Page Turn: Remove all auto page turn settings on the PPT and set it to mouse click to turn the page 3. Corrupted Audio/Video: Remove references to corrupted audio/video on the PPT
                     * 
                     */
                    bool GetAutoHandleUnsupportedElement() const;

                    /**
                     * 设置Whether or not to enable automatic processing for unsupported elements. Default: off. The automatically processed elements are as follows: 1. Ink: Remove unsupported ink (e.g. WPS Ink) 2. Auto Page Turn: Remove all auto page turn settings on the PPT and set it to mouse click to turn the page 3. Corrupted Audio/Video: Remove references to corrupted audio/video on the PPT
                     * @param _autoHandleUnsupportedElement Whether or not to enable automatic processing for unsupported elements. Default: off. The automatically processed elements are as follows: 1. Ink: Remove unsupported ink (e.g. WPS Ink) 2. Auto Page Turn: Remove all auto page turn settings on the PPT and set it to mouse click to turn the page 3. Corrupted Audio/Video: Remove references to corrupted audio/video on the PPT
                     * 
                     */
                    void SetAutoHandleUnsupportedElement(const bool& _autoHandleUnsupportedElement);

                    /**
                     * 判断参数 AutoHandleUnsupportedElement 是否已赋值
                     * @return AutoHandleUnsupportedElement 是否已赋值
                     * 
                     */
                    bool AutoHandleUnsupportedElementHasBeenSet() const;

                private:

                    /**
                     * LCIC SdkAppId
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Document URL	
                     */
                    std::string m_documentUrl;
                    bool m_documentUrlHasBeenSet;

                    /**
                     * Document name	
                     */
                    std::string m_documentName;
                    bool m_documentNameHasBeenSet;

                    /**
                     * Document owner ID	
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Transcoding type. Valid values: `0`: No transcoding required (default); `1`: Documents that need to be transcoded: ppt, pptx, pdf, doc, docx; `2`: Videos that need to be transcoded: mp4, 3pg, mpeg, avi, flv, wmv, rm, h264, etc.; `2`: Audio that needs to be transcoded: mp3, wav, wma, aac, flac, opus
                     */
                    uint64_t m_transcodeType;
                    bool m_transcodeTypeHasBeenSet;

                    /**
                     * Permission. Valid values: `0`: Private document (default); `1`: Public document
                     */
                    uint64_t m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * Document extension
                     */
                    std::string m_documentType;
                    bool m_documentTypeHasBeenSet;

                    /**
                     * Document size, in bytes
                     */
                    uint64_t m_documentSize;
                    bool m_documentSizeHasBeenSet;

                    /**
                     * Whether or not to enable automatic processing for unsupported elements. Default: off. The automatically processed elements are as follows: 1. Ink: Remove unsupported ink (e.g. WPS Ink) 2. Auto Page Turn: Remove all auto page turn settings on the PPT and set it to mouse click to turn the page 3. Corrupted Audio/Video: Remove references to corrupted audio/video on the PPT
                     */
                    bool m_autoHandleUnsupportedElement;
                    bool m_autoHandleUnsupportedElementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEDOCUMENTREQUEST_H_
