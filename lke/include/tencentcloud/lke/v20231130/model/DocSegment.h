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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DOCSEGMENT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DOCSEGMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Document fragment.
                */
                class DocSegment : public AbstractModel
                {
                public:
                    DocSegment();
                    ~DocSegment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Fragment ID.
                     * @return Id Fragment ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Fragment ID.
                     * @param _id Fragment ID.
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
                     * 获取Business ID.
                     * @return BusinessId Business ID.
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置Business ID.
                     * @param _businessId Business ID.
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取File type (markdown, word, txt).
                     * @return FileType File type (markdown, word, txt).
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File type (markdown, word, txt).
                     * @param _fileType File type (markdown, word, txt).
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取Document segment type (segment, table).
                     * @return SegmentType Document segment type (segment, table).
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置Document segment type (segment, table).
                     * @param _segmentType Document segment type (segment, table).
                     * 
                     */
                    void SetSegmentType(const std::string& _segmentType);

                    /**
                     * 判断参数 SegmentType 是否已赋值
                     * @return SegmentType 是否已赋值
                     * 
                     */
                    bool SegmentTypeHasBeenSet() const;

                    /**
                     * 获取Title.
                     * @return Title Title.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Title.
                     * @param _title Title.
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Paragraph content.
                     * @return PageContent Paragraph content.
                     * 
                     */
                    std::string GetPageContent() const;

                    /**
                     * 设置Paragraph content.
                     * @param _pageContent Paragraph content.
                     * 
                     */
                    void SetPageContent(const std::string& _pageContent);

                    /**
                     * 判断参数 PageContent 是否已赋值
                     * @return PageContent 是否已赋值
                     * 
                     */
                    bool PageContentHasBeenSet() const;

                    /**
                     * 获取Original paragraph.
                     * @return OrgData Original paragraph.
                     * 
                     */
                    std::string GetOrgData() const;

                    /**
                     * 设置Original paragraph.
                     * @param _orgData Original paragraph.
                     * 
                     */
                    void SetOrgData(const std::string& _orgData);

                    /**
                     * 判断参数 OrgData 是否已赋值
                     * @return OrgData 是否已赋值
                     * 
                     */
                    bool OrgDataHasBeenSet() const;

                    /**
                     * 获取Article ID.
                     * @return DocId Article ID.
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置Article ID.
                     * @param _docId Article ID.
                     * 
                     */
                    void SetDocId(const std::string& _docId);

                    /**
                     * 判断参数 DocId 是否已赋值
                     * @return DocId 是否已赋值
                     * 
                     */
                    bool DocIdHasBeenSet() const;

                    /**
                     * 获取Document business ID.
                     * @return DocBizId Document business ID.
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置Document business ID.
                     * @param _docBizId Document business ID.
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取Document URL.
                     * @return DocUrl Document URL.
                     * 
                     */
                    std::string GetDocUrl() const;

                    /**
                     * 设置Document URL.
                     * @param _docUrl Document URL.
                     * 
                     */
                    void SetDocUrl(const std::string& _docUrl);

                    /**
                     * 判断参数 DocUrl 是否已赋值
                     * @return DocUrl 是否已赋值
                     * 
                     */
                    bool DocUrlHasBeenSet() const;

                private:

                    /**
                     * Fragment ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Business ID.
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * File type (markdown, word, txt).
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Document segment type (segment, table).
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                    /**
                     * Title.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Paragraph content.
                     */
                    std::string m_pageContent;
                    bool m_pageContentHasBeenSet;

                    /**
                     * Original paragraph.
                     */
                    std::string m_orgData;
                    bool m_orgDataHasBeenSet;

                    /**
                     * Article ID.
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * Document business ID.
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * Document URL.
                     */
                    std::string m_docUrl;
                    bool m_docUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DOCSEGMENT_H_
