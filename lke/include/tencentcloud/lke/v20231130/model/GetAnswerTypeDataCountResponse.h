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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETANSWERTYPEDATACOUNTRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETANSWERTYPEDATACOUNTRESPONSE_H_

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
                * GetAnswerTypeDataCount response structure.
                */
                class GetAnswerTypeDataCountResponse : public AbstractModel
                {
                public:
                    GetAnswerTypeDataCountResponse();
                    ~GetAnswerTypeDataCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of messages.
                     * @return Total Total number of messages.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Total number of direct responses by the large model.
                     * @return ModelReplyCount Total number of direct responses by the large model.
                     * 
                     */
                    uint64_t GetModelReplyCount() const;

                    /**
                     * 判断参数 ModelReplyCount 是否已赋值
                     * @return ModelReplyCount 是否已赋值
                     * 
                     */
                    bool ModelReplyCountHasBeenSet() const;

                    /**
                     * 获取Total number of knowledge-based responses.
                     * @return KnowledgeCount Total number of knowledge-based responses.
                     * 
                     */
                    uint64_t GetKnowledgeCount() const;

                    /**
                     * 判断参数 KnowledgeCount 是否已赋值
                     * @return KnowledgeCount 是否已赋值
                     * 
                     */
                    bool KnowledgeCountHasBeenSet() const;

                    /**
                     * 获取Total number of task flow responses.
                     * @return TaskFlowCount Total number of task flow responses.
                     * 
                     */
                    uint64_t GetTaskFlowCount() const;

                    /**
                     * 判断参数 TaskFlowCount 是否已赋值
                     * @return TaskFlowCount 是否已赋值
                     * 
                     */
                    bool TaskFlowCountHasBeenSet() const;

                    /**
                     * 获取Total number of search engine responses.
                     * @return SearchEngineCount Total number of search engine responses.
                     * 
                     */
                    uint64_t GetSearchEngineCount() const;

                    /**
                     * 判断参数 SearchEngineCount 是否已赋值
                     * @return SearchEngineCount 是否已赋值
                     * 
                     */
                    bool SearchEngineCountHasBeenSet() const;

                    /**
                     * 获取Total number of image understanding responses.
                     * @return ImageUnderstandingCount Total number of image understanding responses.
                     * 
                     */
                    uint64_t GetImageUnderstandingCount() const;

                    /**
                     * 判断参数 ImageUnderstandingCount 是否已赋值
                     * @return ImageUnderstandingCount 是否已赋值
                     * 
                     */
                    bool ImageUnderstandingCountHasBeenSet() const;

                    /**
                     * 获取Total number of responses to rejected questions.
                     * @return RejectCount Total number of responses to rejected questions.
                     * 
                     */
                    uint64_t GetRejectCount() const;

                    /**
                     * 判断参数 RejectCount 是否已赋值
                     * @return RejectCount 是否已赋值
                     * 
                     */
                    bool RejectCountHasBeenSet() const;

                    /**
                     * 获取Total number of sensitive responses.
                     * @return SensitiveCount Total number of sensitive responses.
                     * 
                     */
                    uint64_t GetSensitiveCount() const;

                    /**
                     * 判断参数 SensitiveCount 是否已赋值
                     * @return SensitiveCount 是否已赋值
                     * 
                     */
                    bool SensitiveCountHasBeenSet() const;

                    /**
                     * 获取Total number of responses for concurrency exceeded.
                     * @return ConcurrentLimitCount Total number of responses for concurrency exceeded.
                     * 
                     */
                    uint64_t GetConcurrentLimitCount() const;

                    /**
                     * 判断参数 ConcurrentLimitCount 是否已赋值
                     * @return ConcurrentLimitCount 是否已赋值
                     * 
                     */
                    bool ConcurrentLimitCountHasBeenSet() const;

                    /**
                     * 获取Total number of unknown question responses.
                     * @return UnknownIssuesCount Total number of unknown question responses.
                     * 
                     */
                    uint64_t GetUnknownIssuesCount() const;

                    /**
                     * 判断参数 UnknownIssuesCount 是否已赋值
                     * @return UnknownIssuesCount 是否已赋值
                     * 
                     */
                    bool UnknownIssuesCountHasBeenSet() const;

                private:

                    /**
                     * Total number of messages.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Total number of direct responses by the large model.
                     */
                    uint64_t m_modelReplyCount;
                    bool m_modelReplyCountHasBeenSet;

                    /**
                     * Total number of knowledge-based responses.
                     */
                    uint64_t m_knowledgeCount;
                    bool m_knowledgeCountHasBeenSet;

                    /**
                     * Total number of task flow responses.
                     */
                    uint64_t m_taskFlowCount;
                    bool m_taskFlowCountHasBeenSet;

                    /**
                     * Total number of search engine responses.
                     */
                    uint64_t m_searchEngineCount;
                    bool m_searchEngineCountHasBeenSet;

                    /**
                     * Total number of image understanding responses.
                     */
                    uint64_t m_imageUnderstandingCount;
                    bool m_imageUnderstandingCountHasBeenSet;

                    /**
                     * Total number of responses to rejected questions.
                     */
                    uint64_t m_rejectCount;
                    bool m_rejectCountHasBeenSet;

                    /**
                     * Total number of sensitive responses.
                     */
                    uint64_t m_sensitiveCount;
                    bool m_sensitiveCountHasBeenSet;

                    /**
                     * Total number of responses for concurrency exceeded.
                     */
                    uint64_t m_concurrentLimitCount;
                    bool m_concurrentLimitCountHasBeenSet;

                    /**
                     * Total number of unknown question responses.
                     */
                    uint64_t m_unknownIssuesCount;
                    bool m_unknownIssuesCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETANSWERTYPEDATACOUNTRESPONSE_H_
