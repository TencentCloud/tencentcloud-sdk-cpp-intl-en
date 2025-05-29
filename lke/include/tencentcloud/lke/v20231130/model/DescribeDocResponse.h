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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEDOCRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEDOCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDoc response structure.
                */
                class DescribeDocResponse : public AbstractModel
                {
                public:
                    DescribeDocResponse();
                    ~DescribeDocResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Document ID.
                     * @return DocBizId Document ID.
                     * 
                     */
                    std::string GetDocBizId() const;

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
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File type.
                     * @return FileType File type.
                     * 
                     */
                    std::string GetFileType() const;

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
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Document status : 1: not generated; 2: generating; 3: generation successful; 4: generation failed; 5: deleting; 6: deleted successfully; 7: under review; 8: review failed; 9: review successful; 10: pending release; 11: releasing; 12: released; 13: learning; 14: learning failed; 15: updating; 16: update failed; 17: parsing; 18: parsing failed; 19: import failed; 20: expired; 21: excessive invalid; 22: excessive invalid recovered.
                     * @return Status Document status : 1: not generated; 2: generating; 3: generation successful; 4: generation failed; 5: deleting; 6: deleted successfully; 7: under review; 8: review failed; 9: review successful; 10: pending release; 11: releasing; 12: released; 13: learning; 14: learning failed; 15: updating; 16: update failed; 17: parsing; 18: parsing failed; 19: import failed; 20: expired; 21: excessive invalid; 22: excessive invalid recovered.
                     * 
                     */
                    int64_t GetStatus() const;

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
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Reason for generation failure.
                     * @return Reason Reason for generation failure.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Whether to refer in the answer.
                     * @return IsRefer Whether to refer in the answer.
                     * 
                     */
                    bool GetIsRefer() const;

                    /**
                     * 判断参数 IsRefer 是否已赋值
                     * @return IsRefer 是否已赋值
                     * 
                     */
                    bool IsReferHasBeenSet() const;

                    /**
                     * 获取Number of Q&A pairs.
                     * @return QaNum Number of Q&A pairs.
                     * 
                     */
                    int64_t GetQaNum() const;

                    /**
                     * 判断参数 QaNum 是否已赋值
                     * @return QaNum 是否已赋值
                     * 
                     */
                    bool QaNumHasBeenSet() const;

                    /**
                     * 获取Whether to delete.
                     * @return IsDeleted Whether to delete.
                     * 
                     */
                    bool GetIsDeleted() const;

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
                     * 判断参数 IsAllowRestart 是否已赋值
                     * @return IsAllowRestart 是否已赋值
                     * 
                     */
                    bool IsAllowRestartHasBeenSet() const;

                    /**
                     * 获取Whether Q&A has been deleted.
                     * @return IsDeletedQa Whether Q&A has been deleted.
                     * 
                     */
                    bool GetIsDeletedQa() const;

                    /**
                     * 判断参数 IsDeletedQa 是否已赋值
                     * @return IsDeletedQa 是否已赋值
                     * 
                     */
                    bool IsDeletedQaHasBeenSet() const;

                    /**
                     * 获取Whether Q&A is being generated.
                     * @return IsCreatingQa Whether Q&A is being generated.
                     * 
                     */
                    bool GetIsCreatingQa() const;

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
                     * 判断参数 DocCharSize 是否已赋值
                     * @return DocCharSize 是否已赋值
                     * 
                     */
                    bool DocCharSizeHasBeenSet() const;

                    /**
                     * 获取Whether editing is allowed.
                     * @return IsAllowEdit Whether editing is allowed.
                     * 
                     */
                    bool GetIsAllowEdit() const;

                    /**
                     * 判断参数 IsAllowEdit 是否已赋值
                     * @return IsAllowEdit 是否已赋值
                     * 
                     */
                    bool IsAllowEditHasBeenSet() const;

                    /**
                     * 获取Applicable scope of labels 1: all, 2: by condition range.
                     * @return AttrRange Applicable scope of labels 1: all, 2: by condition range.
                     * 
                     */
                    int64_t GetAttrRange() const;

                    /**
                     * 判断参数 AttrRange 是否已赋值
                     * @return AttrRange 是否已赋值
                     * 
                     */
                    bool AttrRangeHasBeenSet() const;

                    /**
                     * 获取Label.
                     * @return AttrLabels Label.
                     * 
                     */
                    std::vector<AttrLabel> GetAttrLabels() const;

                    /**
                     * 判断参数 AttrLabels 是否已赋值
                     * @return AttrLabels 是否已赋值
                     * 
                     */
                    bool AttrLabelsHasBeenSet() const;

                    /**
                     * 获取Category ID.
                     * @return CateBizId Category ID.
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

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
                     * Document status : 1: not generated; 2: generating; 3: generation successful; 4: generation failed; 5: deleting; 6: deleted successfully; 7: under review; 8: review failed; 9: review successful; 10: pending release; 11: releasing; 12: released; 13: learning; 14: learning failed; 15: updating; 16: update failed; 17: parsing; 18: parsing failed; 19: import failed; 20: expired; 21: excessive invalid; 22: excessive invalid recovered.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Document status description.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Reason for generation failure.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Whether to refer in the answer.
                     */
                    bool m_isRefer;
                    bool m_isReferHasBeenSet;

                    /**
                     * Number of Q&A pairs.
                     */
                    int64_t m_qaNum;
                    bool m_qaNumHasBeenSet;

                    /**
                     * Whether to delete.
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
                     * Whether Q&A has been deleted.
                     */
                    bool m_isDeletedQa;
                    bool m_isDeletedQaHasBeenSet;

                    /**
                     * Whether Q&A is being generated.
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
                     * Whether editing is allowed.
                     */
                    bool m_isAllowEdit;
                    bool m_isAllowEditHasBeenSet;

                    /**
                     * Applicable scope of labels 1: all, 2: by condition range.
                     */
                    int64_t m_attrRange;
                    bool m_attrRangeHasBeenSet;

                    /**
                     * Label.
                     */
                    std::vector<AttrLabel> m_attrLabels;
                    bool m_attrLabelsHasBeenSet;

                    /**
                     * Category ID.
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEDOCRESPONSE_H_
