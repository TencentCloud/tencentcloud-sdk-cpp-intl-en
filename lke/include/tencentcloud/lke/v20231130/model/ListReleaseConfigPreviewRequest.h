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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTRELEASECONFIGPREVIEWREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTRELEASECONFIGPREVIEWREQUEST_H_

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
                * ListReleaseConfigPreview request structure.
                */
                class ListReleaseConfigPreviewRequest : public AbstractModel
                {
                public:
                    ListReleaseConfigPreviewRequest();
                    ~ListReleaseConfigPreviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Robot ID.
                     * @return BotBizId Robot ID.
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Robot ID.
                     * @param _botBizId Robot ID.
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
                     * 获取Release ticket ID.
                     * @return ReleaseBizId Release ticket ID.
                     * 
                     */
                    std::string GetReleaseBizId() const;

                    /**
                     * 设置Release ticket ID.
                     * @param _releaseBizId Release ticket ID.
                     * 
                     */
                    void SetReleaseBizId(const std::string& _releaseBizId);

                    /**
                     * 判断参数 ReleaseBizId 是否已赋值
                     * @return ReleaseBizId 是否已赋值
                     * 
                     */
                    bool ReleaseBizIdHasBeenSet() const;

                    /**
                     * 获取Status (1: newly-added; 2: updated; 3: deleted).
                     * @return Actions Status (1: newly-added; 2: updated; 3: deleted).
                     * 
                     */
                    std::vector<uint64_t> GetActions() const;

                    /**
                     * 设置Status (1: newly-added; 2: updated; 3: deleted).
                     * @param _actions Status (1: newly-added; 2: updated; 3: deleted).
                     * 
                     */
                    void SetActions(const std::vector<uint64_t>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

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

                private:

                    /**
                     * Robot ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

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
                     * Query content.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Release ticket ID.
                     */
                    std::string m_releaseBizId;
                    bool m_releaseBizIdHasBeenSet;

                    /**
                     * Status (1: newly-added; 2: updated; 3: deleted).
                     */
                    std::vector<uint64_t> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Release status.
                     */
                    std::vector<uint64_t> m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTRELEASECONFIGPREVIEWREQUEST_H_
