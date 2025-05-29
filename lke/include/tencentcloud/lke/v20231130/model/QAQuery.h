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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_QAQUERY_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_QAQUERY_H_

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
                * Q&A query parameter.
                */
                class QAQuery : public AbstractModel
                {
                public:
                    QAQuery();
                    ~QAQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Page number.




                     * @return PageNumber Page number.




                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number.




                     * @param _pageNumber Page number.




                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of items per page.

                     * @return PageSize Number of items per page.

                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page.

                     * @param _pageSize Number of items per page.

                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

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
                     * 获取Query content.

                     * @return Query Query content.

                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query content.

                     * @param _query Query content.

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
                     * 获取Verification status.

                     * @return AcceptStatus Verification status.

                     * 
                     */
                    std::vector<uint64_t> GetAcceptStatus() const;

                    /**
                     * 设置Verification status.

                     * @param _acceptStatus Verification status.

                     * 
                     */
                    void SetAcceptStatus(const std::vector<uint64_t>& _acceptStatus);

                    /**
                     * 判断参数 AcceptStatus 是否已赋值
                     * @return AcceptStatus 是否已赋值
                     * 
                     */
                    bool AcceptStatusHasBeenSet() const;

                    /**
                     * 获取Release status.

                     * @return ReleaseStatus Release status.

                     * 
                     */
                    std::vector<uint64_t> GetReleaseStatus() const;

                    /**
                     * 设置Release status.

                     * @param _releaseStatus Release status.

                     * 
                     */
                    void SetReleaseStatus(const std::vector<uint64_t>& _releaseStatus);

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
                     * 获取Q&A ID.
                     * @return QaBizId Q&A ID.
                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置Q&A ID.
                     * @param _qaBizId Q&A ID.
                     * 
                     */
                    void SetQaBizId(const std::string& _qaBizId);

                    /**
                     * 判断参数 QaBizId 是否已赋值
                     * @return QaBizId 是否已赋值
                     * 
                     */
                    bool QaBizIdHasBeenSet() const;

                    /**
                     * 获取Source.


                     * @return Source Source.


                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置Source.


                     * @param _source Source.


                     * 
                     */
                    void SetSource(const uint64_t& _source);

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
                     * 获取Query type: filename, attribute label.
                     * @return QueryType Query type: filename, attribute label.
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置Query type: filename, attribute label.
                     * @param _queryType Query type: filename, attribute label.
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
                     * Page number.




                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of items per page.

                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Query content.

                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Category ID.

                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * Verification status.

                     */
                    std::vector<uint64_t> m_acceptStatus;
                    bool m_acceptStatusHasBeenSet;

                    /**
                     * Release status.

                     */
                    std::vector<uint64_t> m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                    /**
                     * Document ID.

                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * Q&A ID.
                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * Source.


                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Query an answer.

                     */
                    std::string m_queryAnswer;
                    bool m_queryAnswerHasBeenSet;

                    /**
                     * Query type: filename, attribute label.
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QAQUERY_H_
