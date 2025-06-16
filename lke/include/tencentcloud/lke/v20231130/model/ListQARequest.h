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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTQAREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTQAREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ListQA request structure.
                */
                class ListQARequest : public AbstractModel
                {
                public:
                    ListQARequest();
                    ~ListQARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return BotBizId Application ID.
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _botBizId Application ID.
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取Page number.
                     * @return PageNumber Page number.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number.
                     * @param _pageNumber Page number.
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Page size.
                     * @return PageSize Page size.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size.
                     * @param _pageSize Page size.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Query a question.
                     * @return Query Query a question.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query a question.
                     * @param _query Query a question.
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Verification status (1: not verified 2: adopted 3: not adopted).
                     * @return AcceptStatus Verification status (1: not verified 2: adopted 3: not adopted).
                     * 
                     */
                    std::vector<int64_t> GetAcceptStatus() const;

                    /**
                     * 设置Verification status (1: not verified 2: adopted 3: not adopted).
                     * @param _acceptStatus Verification status (1: not verified 2: adopted 3: not adopted).
                     * 
                     */
                    void SetAcceptStatus(const std::vector<int64_t>& _acceptStatus);

                    /**
                     * 判断参数 AcceptStatus 是否已赋值
                     * @return AcceptStatus 是否已赋值
                     * 
                     */
                    bool AcceptStatusHasBeenSet() const;

                    /**
                     * 获取Release status (2: pending release; 3: releasing; 4: released; 7: under review; 8: review failed; 9: under manual appeal; 11: manual appeal failed; 12: expired; 13: excessive invalid; 14: excessive invalid recovered).
                     * @return ReleaseStatus Release status (2: pending release; 3: releasing; 4: released; 7: under review; 8: review failed; 9: under manual appeal; 11: manual appeal failed; 12: expired; 13: excessive invalid; 14: excessive invalid recovered).
                     * 
                     */
                    std::vector<int64_t> GetReleaseStatus() const;

                    /**
                     * 设置Release status (2: pending release; 3: releasing; 4: released; 7: under review; 8: review failed; 9: under manual appeal; 11: manual appeal failed; 12: expired; 13: excessive invalid; 14: excessive invalid recovered).
                     * @param _releaseStatus Release status (2: pending release; 3: releasing; 4: released; 7: under review; 8: review failed; 9: under manual appeal; 11: manual appeal failed; 12: expired; 13: excessive invalid; 14: excessive invalid recovered).
                     * 
                     */
                    void SetReleaseStatus(const std::vector<int64_t>& _releaseStatus);

                    /**
                     * 判断参数 ReleaseStatus 是否已赋值
                     * @return ReleaseStatus 是否已赋值
                     * 
                     */
                    bool ReleaseStatusHasBeenSet() const;

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
                     * 获取Source (1: generated from document; 2: import in batches; 3: manually added).
                     * @return Source Source (1: generated from document; 2: import in batches; 3: manually added).
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置Source (1: generated from document; 2: import in batches; 3: manually added).
                     * @param _source Source (1: generated from document; 2: import in batches; 3: manually added).
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
                     * 获取Query an answer.
                     * @return QueryAnswer Query an answer.
                     * 
                     */
                    std::string GetQueryAnswer() const;

                    /**
                     * 设置Query an answer.
                     * @param _queryAnswer Query an answer.
                     * 
                     */
                    void SetQueryAnswer(const std::string& _queryAnswer);

                    /**
                     * 判断参数 QueryAnswer 是否已赋值
                     * @return QueryAnswer 是否已赋值
                     * 
                     */
                    bool QueryAnswerHasBeenSet() const;

                    /**
                     * 获取Category ID.
                     * @return CateBizId Category ID.
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置Category ID.
                     * @param _cateBizId Category ID.
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
                     * 获取Q&A business ID list.
                     * @return QaBizIds Q&A business ID list.
                     * 
                     */
                    std::vector<std::string> GetQaBizIds() const;

                    /**
                     * 设置Q&A business ID list.
                     * @param _qaBizIds Q&A business ID list.
                     * 
                     */
                    void SetQaBizIds(const std::vector<std::string>& _qaBizIds);

                    /**
                     * 判断参数 QaBizIds 是否已赋值
                     * @return QaBizIds 是否已赋值
                     * 
                     */
                    bool QaBizIdsHasBeenSet() const;

                    /**
                     * 获取Query type: filename; attribute label.
                     * @return QueryType Query type: filename; attribute label.
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置Query type: filename; attribute label.
                     * @param _queryType Query type: filename; attribute label.
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Page number.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page size.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Query a question.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Verification status (1: not verified 2: adopted 3: not adopted).
                     */
                    std::vector<int64_t> m_acceptStatus;
                    bool m_acceptStatusHasBeenSet;

                    /**
                     * Release status (2: pending release; 3: releasing; 4: released; 7: under review; 8: review failed; 9: under manual appeal; 11: manual appeal failed; 12: expired; 13: excessive invalid; 14: excessive invalid recovered).
                     */
                    std::vector<int64_t> m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                    /**
                     * Document ID.
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * Source (1: generated from document; 2: import in batches; 3: manually added).
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Query an answer.
                     */
                    std::string m_queryAnswer;
                    bool m_queryAnswerHasBeenSet;

                    /**
                     * Category ID.
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * Q&A business ID list.
                     */
                    std::vector<std::string> m_qaBizIds;
                    bool m_qaBizIdsHasBeenSet;

                    /**
                     * Query type: filename; attribute label.
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTQAREQUEST_H_
