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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCMETADATA_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Document metadata
                */
                class DocMetadata : public AbstractModel
                {
                public:
                    DocMetadata();
                    ~DocMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Number of characters in the document</p>
                     * @return DocCharCount <p>Number of characters in the document</p>
                     * 
                     */
                    std::string GetDocCharCount() const;

                    /**
                     * 设置<p>Number of characters in the document</p>
                     * @param _docCharCount <p>Number of characters in the document</p>
                     * 
                     */
                    void SetDocCharCount(const std::string& _docCharCount);

                    /**
                     * 判断参数 DocCharCount 是否已赋值
                     * @return DocCharCount 是否已赋值
                     * 
                     */
                    bool DocCharCountHasBeenSet() const;

                    /**
                     * 获取<p>File name.</p>
                     * @return FileName <p>File name.</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>File name.</p>
                     * @param _fileName <p>File name.</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>File size (byte)</p>
                     * @return FileSize <p>File size (byte)</p>
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置<p>File size (byte)</p>
                     * @param _fileSize <p>File size (byte)</p>
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取<p>File type/extension</p>
                     * @return FileType <p>File type/extension</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>File type/extension</p>
                     * @param _fileType <p>File type/extension</p>
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
                     * 获取<p>List of metadata reference field names (used to display which categories and properties of a document are set as metadata)</p>
                     * @return RefFieldNameList <p>List of metadata reference field names (used to display which categories and properties of a document are set as metadata)</p>
                     * 
                     */
                    std::vector<std::string> GetRefFieldNameList() const;

                    /**
                     * 设置<p>List of metadata reference field names (used to display which categories and properties of a document are set as metadata)</p>
                     * @param _refFieldNameList <p>List of metadata reference field names (used to display which categories and properties of a document are set as metadata)</p>
                     * 
                     */
                    void SetRefFieldNameList(const std::vector<std::string>& _refFieldNameList);

                    /**
                     * 判断参数 RefFieldNameList 是否已赋值
                     * @return RefFieldNameList 是否已赋值
                     * 
                     */
                    bool RefFieldNameListHasBeenSet() const;

                    /**
                     * 获取<p>Source description.</p>
                     * @return SourceDesc <p>Source description.</p>
                     * 
                     */
                    std::string GetSourceDesc() const;

                    /**
                     * 设置<p>Source description.</p>
                     * @param _sourceDesc <p>Source description.</p>
                     * 
                     */
                    void SetSourceDesc(const std::string& _sourceDesc);

                    /**
                     * 判断参数 SourceDesc 是否已赋值
                     * @return SourceDesc 是否已赋值
                     * 
                     */
                    bool SourceDescHasBeenSet() const;

                    /**
                     * 获取<p>Document source type: 1=local upload, 2=webpage link, 3=COS integration, 4=import from external sources<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOC_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_SOURCE_TYPE_LOCAL</td><td>1</td><td>Local upload</td></tr><tr><td>DOC_SOURCE_TYPE_URL</td><td>2</td><td>Webpage link</td></tr><tr><td>DOC_SOURCE_TYPE_COS</td><td>3</td><td>COS integration</td></tr><tr><td>DOC_SOURCE_TYPE_IMPORT</td><td>4</td><td>Import from external sources</td></tr></tbody></table></p>
                     * @return SourceType <p>Document source type: 1=local upload, 2=webpage link, 3=COS integration, 4=import from external sources<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOC_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_SOURCE_TYPE_LOCAL</td><td>1</td><td>Local upload</td></tr><tr><td>DOC_SOURCE_TYPE_URL</td><td>2</td><td>Webpage link</td></tr><tr><td>DOC_SOURCE_TYPE_COS</td><td>3</td><td>COS integration</td></tr><tr><td>DOC_SOURCE_TYPE_IMPORT</td><td>4</td><td>Import from external sources</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置<p>Document source type: 1=local upload, 2=webpage link, 3=COS integration, 4=import from external sources<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOC_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_SOURCE_TYPE_LOCAL</td><td>1</td><td>Local upload</td></tr><tr><td>DOC_SOURCE_TYPE_URL</td><td>2</td><td>Webpage link</td></tr><tr><td>DOC_SOURCE_TYPE_COS</td><td>3</td><td>COS integration</td></tr><tr><td>DOC_SOURCE_TYPE_IMPORT</td><td>4</td><td>Import from external sources</td></tr></tbody></table></p>
                     * @param _sourceType <p>Document source type: 1=local upload, 2=webpage link, 3=COS integration, 4=import from external sources<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOC_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_SOURCE_TYPE_LOCAL</td><td>1</td><td>Local upload</td></tr><tr><td>DOC_SOURCE_TYPE_URL</td><td>2</td><td>Webpage link</td></tr><tr><td>DOC_SOURCE_TYPE_COS</td><td>3</td><td>COS integration</td></tr><tr><td>DOC_SOURCE_TYPE_IMPORT</td><td>4</td><td>Import from external sources</td></tr></tbody></table></p>
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Number of characters in the document</p>
                     */
                    std::string m_docCharCount;
                    bool m_docCharCountHasBeenSet;

                    /**
                     * <p>File name.</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>File size (byte)</p>
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>File type/extension</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>List of metadata reference field names (used to display which categories and properties of a document are set as metadata)</p>
                     */
                    std::vector<std::string> m_refFieldNameList;
                    bool m_refFieldNameListHasBeenSet;

                    /**
                     * <p>Source description.</p>
                     */
                    std::string m_sourceDesc;
                    bool m_sourceDescHasBeenSet;

                    /**
                     * <p>Document source type: 1=local upload, 2=webpage link, 3=COS integration, 4=import from external sources<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOC_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_SOURCE_TYPE_LOCAL</td><td>1</td><td>Local upload</td></tr><tr><td>DOC_SOURCE_TYPE_URL</td><td>2</td><td>Webpage link</td></tr><tr><td>DOC_SOURCE_TYPE_COS</td><td>3</td><td>COS integration</td></tr><tr><td>DOC_SOURCE_TYPE_IMPORT</td><td>4</td><td>Import from external sources</td></tr></tbody></table></p>
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCMETADATA_H_
