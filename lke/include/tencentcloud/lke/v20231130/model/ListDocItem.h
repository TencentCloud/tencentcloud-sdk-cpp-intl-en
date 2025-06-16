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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTDOCITEM_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTDOCITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttrLabel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Description of document list details.
                */
                class ListDocItem : public AbstractModel
                {
                public:
                    ListDocItem();
                    ~ListDocItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Document ID.
                     * @return DocBizId Document ID.
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置Document ID.
                     * @param _docBizId Document ID.
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
                     * 获取File name.
                     * @return FileName File name.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File name.
                     * @param _fileName File name.
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
                     * 获取The new document name after renaming. This name remains until the document is published after the renaming submission.
                     * @return NewName The new document name after renaming. This name remains until the document is published after the renaming submission.
                     * 
                     */
                    std::string GetNewName() const;

                    /**
                     * 设置The new document name after renaming. This name remains until the document is published after the renaming submission.
                     * @param _newName The new document name after renaming. This name remains until the document is published after the renaming submission.
                     * 
                     */
                    void SetNewName(const std::string& _newName);

                    /**
                     * 判断参数 NewName 是否已赋值
                     * @return NewName 是否已赋值
                     * 
                     */
                    bool NewNameHasBeenSet() const;

                    /**
                     * 获取File type.
                     * @return FileType File type.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File type.
                     * @param _fileType File type.
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
                     * 获取COS path.
                     * @return CosUrl COS path.
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 设置COS path.
                     * @param _cosUrl COS path.
                     * 
                     */
                    void SetCosUrl(const std::string& _cosUrl);

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Document status.
                     * @return Status Document status.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Document status.
                     * @param _status Document status.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Document status description.
                     * @return StatusDesc Document status description.
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Document status description.
                     * @param _statusDesc Document status description.
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Reason.
                     * @return Reason Reason.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reason.
                     * @param _reason Reason.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Whether to refer to an answer.
                     * @return IsRefer Whether to refer to an answer.
                     * 
                     */
                    bool GetIsRefer() const;

                    /**
                     * 设置Whether to refer to an answer.
                     * @param _isRefer Whether to refer to an answer.
                     * 
                     */
                    void SetIsRefer(const bool& _isRefer);

                    /**
                     * 判断参数 IsRefer 是否已赋值
                     * @return IsRefer 是否已赋值
                     * 
                     */
                    bool IsReferHasBeenSet() const;

                    /**
                     * 获取Quantity of Q&A pairs.
                     * @return QaNum Quantity of Q&A pairs.
                     * 
                     */
                    int64_t GetQaNum() const;

                    /**
                     * 设置Quantity of Q&A pairs.
                     * @param _qaNum Quantity of Q&A pairs.
                     * 
                     */
                    void SetQaNum(const int64_t& _qaNum);

                    /**
                     * 判断参数 QaNum 是否已赋值
                     * @return QaNum 是否已赋值
                     * 
                     */
                    bool QaNumHasBeenSet() const;

                    /**
                     * 获取Whether it has been deleted.
                     * @return IsDeleted Whether it has been deleted.
                     * 
                     */
                    bool GetIsDeleted() const;

                    /**
                     * 设置Whether it has been deleted.
                     * @param _isDeleted Whether it has been deleted.
                     * 
                     */
                    void SetIsDeleted(const bool& _isDeleted);

                    /**
                     * 判断参数 IsDeleted 是否已赋值
                     * @return IsDeleted 是否已赋值
                     * 
                     */
                    bool IsDeletedHasBeenSet() const;

                    /**
                     * 获取Document source.
                     * @return Source Document source.
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置Document source.
                     * @param _source Document source.
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Document source description.
                     * @return SourceDesc Document source description.
                     * 
                     */
                    std::string GetSourceDesc() const;

                    /**
                     * 设置Document source description.
                     * @param _sourceDesc Document source description.
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
                     * 获取Whether regeneration is allowed.
                     * @return IsAllowRestart Whether regeneration is allowed.
                     * 
                     */
                    bool GetIsAllowRestart() const;

                    /**
                     * 设置Whether regeneration is allowed.
                     * @param _isAllowRestart Whether regeneration is allowed.
                     * 
                     */
                    void SetIsAllowRestart(const bool& _isAllowRestart);

                    /**
                     * 判断参数 IsAllowRestart 是否已赋值
                     * @return IsAllowRestart 是否已赋值
                     * 
                     */
                    bool IsAllowRestartHasBeenSet() const;

                    /**
                     * 获取Whether the Q&A has been deleted.
                     * @return IsDeletedQa Whether the Q&A has been deleted.
                     * 
                     */
                    bool GetIsDeletedQa() const;

                    /**
                     * 设置Whether the Q&A has been deleted.
                     * @param _isDeletedQa Whether the Q&A has been deleted.
                     * 
                     */
                    void SetIsDeletedQa(const bool& _isDeletedQa);

                    /**
                     * 判断参数 IsDeletedQa 是否已赋值
                     * @return IsDeletedQa 是否已赋值
                     * 
                     */
                    bool IsDeletedQaHasBeenSet() const;

                    /**
                     * 获取Whether the Q&A is being generated.
                     * @return IsCreatingQa Whether the Q&A is being generated.
                     * 
                     */
                    bool GetIsCreatingQa() const;

                    /**
                     * 设置Whether the Q&A is being generated.
                     * @param _isCreatingQa Whether the Q&A is being generated.
                     * 
                     */
                    void SetIsCreatingQa(const bool& _isCreatingQa);

                    /**
                     * 判断参数 IsCreatingQa 是否已赋值
                     * @return IsCreatingQa 是否已赋值
                     * 
                     */
                    bool IsCreatingQaHasBeenSet() const;

                    /**
                     * 获取Whether deletion is allowed.
                     * @return IsAllowDelete Whether deletion is allowed.
                     * 
                     */
                    bool GetIsAllowDelete() const;

                    /**
                     * 设置Whether deletion is allowed.
                     * @param _isAllowDelete Whether deletion is allowed.
                     * 
                     */
                    void SetIsAllowDelete(const bool& _isAllowDelete);

                    /**
                     * 判断参数 IsAllowDelete 是否已赋值
                     * @return IsAllowDelete 是否已赋值
                     * 
                     */
                    bool IsAllowDeleteHasBeenSet() const;

                    /**
                     * 获取Whether to allow operation reference switch.
                     * @return IsAllowRefer Whether to allow operation reference switch.
                     * 
                     */
                    bool GetIsAllowRefer() const;

                    /**
                     * 设置Whether to allow operation reference switch.
                     * @param _isAllowRefer Whether to allow operation reference switch.
                     * 
                     */
                    void SetIsAllowRefer(const bool& _isAllowRefer);

                    /**
                     * 判断参数 IsAllowRefer 是否已赋值
                     * @return IsAllowRefer 是否已赋值
                     * 
                     */
                    bool IsAllowReferHasBeenSet() const;

                    /**
                     * 获取Whether Q&A has been generated.
                     * @return IsCreatedQa Whether Q&A has been generated.
                     * 
                     */
                    bool GetIsCreatedQa() const;

                    /**
                     * 设置Whether Q&A has been generated.
                     * @param _isCreatedQa Whether Q&A has been generated.
                     * 
                     */
                    void SetIsCreatedQa(const bool& _isCreatedQa);

                    /**
                     * 判断参数 IsCreatedQa 是否已赋值
                     * @return IsCreatedQa 是否已赋值
                     * 
                     */
                    bool IsCreatedQaHasBeenSet() const;

                    /**
                     * 获取Document character count.
                     * @return DocCharSize Document character count.
                     * 
                     */
                    std::string GetDocCharSize() const;

                    /**
                     * 设置Document character count.
                     * @param _docCharSize Document character count.
                     * 
                     */
                    void SetDocCharSize(const std::string& _docCharSize);

                    /**
                     * 判断参数 DocCharSize 是否已赋值
                     * @return DocCharSize 是否已赋值
                     * 
                     */
                    bool DocCharSizeHasBeenSet() const;

                    /**
                     * 获取Applicable range of attribute label.
                     * @return AttrRange Applicable range of attribute label.
                     * 
                     */
                    uint64_t GetAttrRange() const;

                    /**
                     * 设置Applicable range of attribute label.
                     * @param _attrRange Applicable range of attribute label.
                     * 
                     */
                    void SetAttrRange(const uint64_t& _attrRange);

                    /**
                     * 判断参数 AttrRange 是否已赋值
                     * @return AttrRange 是否已赋值
                     * 
                     */
                    bool AttrRangeHasBeenSet() const;

                    /**
                     * 获取Attribute label.
                     * @return AttrLabels Attribute label.
                     * 
                     */
                    std::vector<AttrLabel> GetAttrLabels() const;

                    /**
                     * 设置Attribute label.
                     * @param _attrLabels Attribute label.
                     * 
                     */
                    void SetAttrLabels(const std::vector<AttrLabel>& _attrLabels);

                    /**
                     * 判断参数 AttrLabels 是否已赋值
                     * @return AttrLabels 是否已赋值
                     * 
                     */
                    bool AttrLabelsHasBeenSet() const;

                    /**
                     * 获取Whether editing is allowed.
                     * @return IsAllowEdit Whether editing is allowed.
                     * 
                     */
                    bool GetIsAllowEdit() const;

                    /**
                     * 设置Whether editing is allowed.
                     * @param _isAllowEdit Whether editing is allowed.
                     * 
                     */
                    void SetIsAllowEdit(const bool& _isAllowEdit);

                    /**
                     * 判断参数 IsAllowEdit 是否已赋值
                     * @return IsAllowEdit 是否已赋值
                     * 
                     */
                    bool IsAllowEditHasBeenSet() const;

                    /**
                     * 获取External reference URL type, 0: system URL; 1: custom URL.
When the value is 1, the WebUrl field cannot be empty; otherwise, it will not take effect.
                     * @return ReferUrlType External reference URL type, 0: system URL; 1: custom URL.
When the value is 1, the WebUrl field cannot be empty; otherwise, it will not take effect.
                     * 
                     */
                    uint64_t GetReferUrlType() const;

                    /**
                     * 设置External reference URL type, 0: system URL; 1: custom URL.
When the value is 1, the WebUrl field cannot be empty; otherwise, it will not take effect.
                     * @param _referUrlType External reference URL type, 0: system URL; 1: custom URL.
When the value is 1, the WebUrl field cannot be empty; otherwise, it will not take effect.
                     * 
                     */
                    void SetReferUrlType(const uint64_t& _referUrlType);

                    /**
                     * 判断参数 ReferUrlType 是否已赋值
                     * @return ReferUrlType 是否已赋值
                     * 
                     */
                    bool ReferUrlTypeHasBeenSet() const;

                    /**
                     * 获取Web page URL (or custom URL) .
                     * @return WebUrl Web page URL (or custom URL) .
                     * 
                     */
                    std::string GetWebUrl() const;

                    /**
                     * 设置Web page URL (or custom URL) .
                     * @param _webUrl Web page URL (or custom URL) .
                     * 
                     */
                    void SetWebUrl(const std::string& _webUrl);

                    /**
                     * 判断参数 WebUrl 是否已赋值
                     * @return WebUrl 是否已赋值
                     * 
                     */
                    bool WebUrlHasBeenSet() const;

                    /**
                     * 获取Effective start time, unix timestamp.
                     * @return ExpireStart Effective start time, unix timestamp.
                     * 
                     */
                    std::string GetExpireStart() const;

                    /**
                     * 设置Effective start time, unix timestamp.
                     * @param _expireStart Effective start time, unix timestamp.
                     * 
                     */
                    void SetExpireStart(const std::string& _expireStart);

                    /**
                     * 判断参数 ExpireStart 是否已赋值
                     * @return ExpireStart 是否已赋值
                     * 
                     */
                    bool ExpireStartHasBeenSet() const;

                    /**
                     * 获取Effective end time, unix timestamp. 0 indicates permanent validity.
                     * @return ExpireEnd Effective end time, unix timestamp. 0 indicates permanent validity.
                     * 
                     */
                    std::string GetExpireEnd() const;

                    /**
                     * 设置Effective end time, unix timestamp. 0 indicates permanent validity.
                     * @param _expireEnd Effective end time, unix timestamp. 0 indicates permanent validity.
                     * 
                     */
                    void SetExpireEnd(const std::string& _expireEnd);

                    /**
                     * 判断参数 ExpireEnd 是否已赋值
                     * @return ExpireEnd 是否已赋值
                     * 
                     */
                    bool ExpireEndHasBeenSet() const;

                    /**
                     * 获取Whether retries are allowed, 0: no, 1: yes.
                     * @return IsAllowRetry Whether retries are allowed, 0: no, 1: yes.
                     * 
                     */
                    bool GetIsAllowRetry() const;

                    /**
                     * 设置Whether retries are allowed, 0: no, 1: yes.
                     * @param _isAllowRetry Whether retries are allowed, 0: no, 1: yes.
                     * 
                     */
                    void SetIsAllowRetry(const bool& _isAllowRetry);

                    /**
                     * 判断参数 IsAllowRetry 是否已赋值
                     * @return IsAllowRetry 是否已赋值
                     * 
                     */
                    bool IsAllowRetryHasBeenSet() const;

                    /**
                     * 获取0: document comparison processing; 1: Q&A generation from document.
                     * @return Processing 0: document comparison processing; 1: Q&A generation from document.
                     * 
                     */
                    std::vector<int64_t> GetProcessing() const;

                    /**
                     * 设置0: document comparison processing; 1: Q&A generation from document.
                     * @param _processing 0: document comparison processing; 1: Q&A generation from document.
                     * 
                     */
                    void SetProcessing(const std::vector<int64_t>& _processing);

                    /**
                     * 判断参数 Processing 是否已赋值
                     * @return Processing 是否已赋值
                     * 
                     */
                    bool ProcessingHasBeenSet() const;

                    /**
                     * 获取Time when the document was created and stored into the database.
                     * @return CreateTime Time when the document was created and stored into the database.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Time when the document was created and stored into the database.
                     * @param _createTime Time when the document was created and stored into the database.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取ID of the document's category.
                     * @return CateBizId ID of the document's category.
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置ID of the document's category.
                     * @param _cateBizId ID of the document's category.
                     * 
                     */
                    void SetCateBizId(const std::string& _cateBizId);

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                    /**
                     * 获取User-defined ID of the document.
                     * @return CustomerKnowledgeId User-defined ID of the document.
                     * 
                     */
                    std::string GetCustomerKnowledgeId() const;

                    /**
                     * 设置User-defined ID of the document.
                     * @param _customerKnowledgeId User-defined ID of the document.
                     * 
                     */
                    void SetCustomerKnowledgeId(const std::string& _customerKnowledgeId);

                    /**
                     * 判断参数 CustomerKnowledgeId 是否已赋值
                     * @return CustomerKnowledgeId 是否已赋值
                     * 
                     */
                    bool CustomerKnowledgeIdHasBeenSet() const;

                    /**
                     * 获取Attribute label of the document. 0: Do not perform external user permission verification.
                     * @return AttributeFlags Attribute label of the document. 0: Do not perform external user permission verification.
                     * 
                     */
                    std::vector<uint64_t> GetAttributeFlags() const;

                    /**
                     * 设置Attribute label of the document. 0: Do not perform external user permission verification.
                     * @param _attributeFlags Attribute label of the document. 0: Do not perform external user permission verification.
                     * 
                     */
                    void SetAttributeFlags(const std::vector<uint64_t>& _attributeFlags);

                    /**
                     * 判断参数 AttributeFlags 是否已赋值
                     * @return AttributeFlags 是否已赋值
                     * 
                     */
                    bool AttributeFlagsHasBeenSet() const;

                private:

                    /**
                     * Document ID.
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * File name.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * The new document name after renaming. This name remains until the document is published after the renaming submission.
                     */
                    std::string m_newName;
                    bool m_newNameHasBeenSet;

                    /**
                     * File type.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * COS path.
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Document status.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Document status description.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Reason.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Whether to refer to an answer.
                     */
                    bool m_isRefer;
                    bool m_isReferHasBeenSet;

                    /**
                     * Quantity of Q&A pairs.
                     */
                    int64_t m_qaNum;
                    bool m_qaNumHasBeenSet;

                    /**
                     * Whether it has been deleted.
                     */
                    bool m_isDeleted;
                    bool m_isDeletedHasBeenSet;

                    /**
                     * Document source.
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Document source description.
                     */
                    std::string m_sourceDesc;
                    bool m_sourceDescHasBeenSet;

                    /**
                     * Whether regeneration is allowed.
                     */
                    bool m_isAllowRestart;
                    bool m_isAllowRestartHasBeenSet;

                    /**
                     * Whether the Q&A has been deleted.
                     */
                    bool m_isDeletedQa;
                    bool m_isDeletedQaHasBeenSet;

                    /**
                     * Whether the Q&A is being generated.
                     */
                    bool m_isCreatingQa;
                    bool m_isCreatingQaHasBeenSet;

                    /**
                     * Whether deletion is allowed.
                     */
                    bool m_isAllowDelete;
                    bool m_isAllowDeleteHasBeenSet;

                    /**
                     * Whether to allow operation reference switch.
                     */
                    bool m_isAllowRefer;
                    bool m_isAllowReferHasBeenSet;

                    /**
                     * Whether Q&A has been generated.
                     */
                    bool m_isCreatedQa;
                    bool m_isCreatedQaHasBeenSet;

                    /**
                     * Document character count.
                     */
                    std::string m_docCharSize;
                    bool m_docCharSizeHasBeenSet;

                    /**
                     * Applicable range of attribute label.
                     */
                    uint64_t m_attrRange;
                    bool m_attrRangeHasBeenSet;

                    /**
                     * Attribute label.
                     */
                    std::vector<AttrLabel> m_attrLabels;
                    bool m_attrLabelsHasBeenSet;

                    /**
                     * Whether editing is allowed.
                     */
                    bool m_isAllowEdit;
                    bool m_isAllowEditHasBeenSet;

                    /**
                     * External reference URL type, 0: system URL; 1: custom URL.
When the value is 1, the WebUrl field cannot be empty; otherwise, it will not take effect.
                     */
                    uint64_t m_referUrlType;
                    bool m_referUrlTypeHasBeenSet;

                    /**
                     * Web page URL (or custom URL) .
                     */
                    std::string m_webUrl;
                    bool m_webUrlHasBeenSet;

                    /**
                     * Effective start time, unix timestamp.
                     */
                    std::string m_expireStart;
                    bool m_expireStartHasBeenSet;

                    /**
                     * Effective end time, unix timestamp. 0 indicates permanent validity.
                     */
                    std::string m_expireEnd;
                    bool m_expireEndHasBeenSet;

                    /**
                     * Whether retries are allowed, 0: no, 1: yes.
                     */
                    bool m_isAllowRetry;
                    bool m_isAllowRetryHasBeenSet;

                    /**
                     * 0: document comparison processing; 1: Q&A generation from document.
                     */
                    std::vector<int64_t> m_processing;
                    bool m_processingHasBeenSet;

                    /**
                     * Time when the document was created and stored into the database.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * ID of the document's category.
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * User-defined ID of the document.
                     */
                    std::string m_customerKnowledgeId;
                    bool m_customerKnowledgeIdHasBeenSet;

                    /**
                     * Attribute label of the document. 0: Do not perform external user permission verification.
                     */
                    std::vector<uint64_t> m_attributeFlags;
                    bool m_attributeFlagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTDOCITEM_H_
