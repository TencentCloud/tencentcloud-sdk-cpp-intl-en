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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMSGRECORDLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMSGRECORDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>
#include <tencentcloud/adp/v20260520/model/Sort.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeMsgRecordList request structure.
                */
                class DescribeMsgRecordListRequest : public AbstractModel
                {
                public:
                    DescribeMsgRecordListRequest();
                    ~DescribeMsgRecordListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Application ID</p>
                     * @return AppId <p>Application ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Application ID</p>
                     * @param _appId <p>Application ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<ul><li><strong>ChannelType</strong> : 0-all 2-experience page (Tencent Cloud) 3-web debugging page (Tencent Cloud) 4-experience page (phone number) 5-dialogue API connection 6-application evaluation 7-debug API 10000-WeChat service account 10001-WeChat Subscription Account 10002-WeCom app 10004-WeChat Customer Service 10005-WeChat mini program 10006-Tencent Yuanqi 10007-App Treasure 10009-WeCom intelligent bot 10014-WeCom intelligent bot 10011-LINE 10012-Telegram 10013-DingTalk chatbot 10016-Lark chatbot 30000-scheduled task 30001-trigger </li><li><strong>FeedbackType</strong> : feedback type, -1-all 0-not rated 1-like 2-dislike </li><li><strong>QueryType</strong> : retrieval type (take value as agreed by the platform), SessionId-sessionID Question-question Answer-reply Intent-intent User-user </li><li><strong>Query</strong> : filter criteria corresponding to QueryType </li><li><strong>CategoryId</strong> : category ID </li><li><strong>ReplyMethod</strong> : reply type 0-all reply types 1-reply to rejected questions 2-direct QA reply 3-review failure reply 4-knowledge polish reply 6-workflow reply 8-image understanding reply 9-search engine reply 10-large model direct reply 11-fallback response </li><li><strong>StartTime</strong> : start time, unix second-level timestamp </li><li><strong>EndTime</strong> : end time, unix second-level timestamp </li><li><strong>Cursor</strong> : cursor. For the previous page, take PrevCursor from the response; for the next page, take NextCursor from the response. </li><li><strong>Direction</strong> : direction. next: next page, prev: previous page</li><li><strong>CallResult</strong> : call result: 0-all / 1-success / 2-failure / 3-canceled by the user </li><li><strong>FailReason</strong> : failure reason 0-all 1-review failure 2-QPM limit reached 3-TPM limit reached 4-concurrency limit reached 5-system exception </li><li><strong>Intent</strong> : intent</li></ul>
                     * @return FilterList <ul><li><strong>ChannelType</strong> : 0-all 2-experience page (Tencent Cloud) 3-web debugging page (Tencent Cloud) 4-experience page (phone number) 5-dialogue API connection 6-application evaluation 7-debug API 10000-WeChat service account 10001-WeChat Subscription Account 10002-WeCom app 10004-WeChat Customer Service 10005-WeChat mini program 10006-Tencent Yuanqi 10007-App Treasure 10009-WeCom intelligent bot 10014-WeCom intelligent bot 10011-LINE 10012-Telegram 10013-DingTalk chatbot 10016-Lark chatbot 30000-scheduled task 30001-trigger </li><li><strong>FeedbackType</strong> : feedback type, -1-all 0-not rated 1-like 2-dislike </li><li><strong>QueryType</strong> : retrieval type (take value as agreed by the platform), SessionId-sessionID Question-question Answer-reply Intent-intent User-user </li><li><strong>Query</strong> : filter criteria corresponding to QueryType </li><li><strong>CategoryId</strong> : category ID </li><li><strong>ReplyMethod</strong> : reply type 0-all reply types 1-reply to rejected questions 2-direct QA reply 3-review failure reply 4-knowledge polish reply 6-workflow reply 8-image understanding reply 9-search engine reply 10-large model direct reply 11-fallback response </li><li><strong>StartTime</strong> : start time, unix second-level timestamp </li><li><strong>EndTime</strong> : end time, unix second-level timestamp </li><li><strong>Cursor</strong> : cursor. For the previous page, take PrevCursor from the response; for the next page, take NextCursor from the response. </li><li><strong>Direction</strong> : direction. next: next page, prev: previous page</li><li><strong>CallResult</strong> : call result: 0-all / 1-success / 2-failure / 3-canceled by the user </li><li><strong>FailReason</strong> : failure reason 0-all 1-review failure 2-QPM limit reached 3-TPM limit reached 4-concurrency limit reached 5-system exception </li><li><strong>Intent</strong> : intent</li></ul>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<ul><li><strong>ChannelType</strong> : 0-all 2-experience page (Tencent Cloud) 3-web debugging page (Tencent Cloud) 4-experience page (phone number) 5-dialogue API connection 6-application evaluation 7-debug API 10000-WeChat service account 10001-WeChat Subscription Account 10002-WeCom app 10004-WeChat Customer Service 10005-WeChat mini program 10006-Tencent Yuanqi 10007-App Treasure 10009-WeCom intelligent bot 10014-WeCom intelligent bot 10011-LINE 10012-Telegram 10013-DingTalk chatbot 10016-Lark chatbot 30000-scheduled task 30001-trigger </li><li><strong>FeedbackType</strong> : feedback type, -1-all 0-not rated 1-like 2-dislike </li><li><strong>QueryType</strong> : retrieval type (take value as agreed by the platform), SessionId-sessionID Question-question Answer-reply Intent-intent User-user </li><li><strong>Query</strong> : filter criteria corresponding to QueryType </li><li><strong>CategoryId</strong> : category ID </li><li><strong>ReplyMethod</strong> : reply type 0-all reply types 1-reply to rejected questions 2-direct QA reply 3-review failure reply 4-knowledge polish reply 6-workflow reply 8-image understanding reply 9-search engine reply 10-large model direct reply 11-fallback response </li><li><strong>StartTime</strong> : start time, unix second-level timestamp </li><li><strong>EndTime</strong> : end time, unix second-level timestamp </li><li><strong>Cursor</strong> : cursor. For the previous page, take PrevCursor from the response; for the next page, take NextCursor from the response. </li><li><strong>Direction</strong> : direction. next: next page, prev: previous page</li><li><strong>CallResult</strong> : call result: 0-all / 1-success / 2-failure / 3-canceled by the user </li><li><strong>FailReason</strong> : failure reason 0-all 1-review failure 2-QPM limit reached 3-TPM limit reached 4-concurrency limit reached 5-system exception </li><li><strong>Intent</strong> : intent</li></ul>
                     * @param _filterList <ul><li><strong>ChannelType</strong> : 0-all 2-experience page (Tencent Cloud) 3-web debugging page (Tencent Cloud) 4-experience page (phone number) 5-dialogue API connection 6-application evaluation 7-debug API 10000-WeChat service account 10001-WeChat Subscription Account 10002-WeCom app 10004-WeChat Customer Service 10005-WeChat mini program 10006-Tencent Yuanqi 10007-App Treasure 10009-WeCom intelligent bot 10014-WeCom intelligent bot 10011-LINE 10012-Telegram 10013-DingTalk chatbot 10016-Lark chatbot 30000-scheduled task 30001-trigger </li><li><strong>FeedbackType</strong> : feedback type, -1-all 0-not rated 1-like 2-dislike </li><li><strong>QueryType</strong> : retrieval type (take value as agreed by the platform), SessionId-sessionID Question-question Answer-reply Intent-intent User-user </li><li><strong>Query</strong> : filter criteria corresponding to QueryType </li><li><strong>CategoryId</strong> : category ID </li><li><strong>ReplyMethod</strong> : reply type 0-all reply types 1-reply to rejected questions 2-direct QA reply 3-review failure reply 4-knowledge polish reply 6-workflow reply 8-image understanding reply 9-search engine reply 10-large model direct reply 11-fallback response </li><li><strong>StartTime</strong> : start time, unix second-level timestamp </li><li><strong>EndTime</strong> : end time, unix second-level timestamp </li><li><strong>Cursor</strong> : cursor. For the previous page, take PrevCursor from the response; for the next page, take NextCursor from the response. </li><li><strong>Direction</strong> : direction. next: next page, prev: previous page</li><li><strong>CallResult</strong> : call result: 0-all / 1-success / 2-failure / 3-canceled by the user </li><li><strong>FailReason</strong> : failure reason 0-all 1-review failure 2-QPM limit reached 3-TPM limit reached 4-concurrency limit reached 5-system exception </li><li><strong>Intent</strong> : intent</li></ul>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                    /**
                     * 获取<p>Page number, starting from 0. If not passed, it is processed as 0.</p>
                     * @return PageNumber <p>Page number, starting from 0. If not passed, it is processed as 0.</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number, starting from 0. If not passed, it is processed as 0.</p>
                     * @param _pageNumber <p>Page number, starting from 0. If not passed, it is processed as 0.</p>
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
                     * 获取<p>Number of items per page. Maximum value: 100. If not specified or set to 0, the default pagination size is used.</p>
                     * @return PageSize <p>Number of items per page. Maximum value: 100. If not specified or set to 0, the default pagination size is used.</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>Number of items per page. Maximum value: 100. If not specified or set to 0, the default pagination size is used.</p>
                     * @param _pageSize <p>Number of items per page. Maximum value: 100. If not specified or set to 0, the default pagination size is used.</p>
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
                     * 获取<p>Sort condition. Supports sorting by CreateTime only</p>
                     * @return Sort <p>Sort condition. Supports sorting by CreateTime only</p>
                     * 
                     */
                    Sort GetSort() const;

                    /**
                     * 设置<p>Sort condition. Supports sorting by CreateTime only</p>
                     * @param _sort <p>Sort condition. Supports sorting by CreateTime only</p>
                     * 
                     */
                    void SetSort(const Sort& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * <p>Application ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <ul><li><strong>ChannelType</strong> : 0-all 2-experience page (Tencent Cloud) 3-web debugging page (Tencent Cloud) 4-experience page (phone number) 5-dialogue API connection 6-application evaluation 7-debug API 10000-WeChat service account 10001-WeChat Subscription Account 10002-WeCom app 10004-WeChat Customer Service 10005-WeChat mini program 10006-Tencent Yuanqi 10007-App Treasure 10009-WeCom intelligent bot 10014-WeCom intelligent bot 10011-LINE 10012-Telegram 10013-DingTalk chatbot 10016-Lark chatbot 30000-scheduled task 30001-trigger </li><li><strong>FeedbackType</strong> : feedback type, -1-all 0-not rated 1-like 2-dislike </li><li><strong>QueryType</strong> : retrieval type (take value as agreed by the platform), SessionId-sessionID Question-question Answer-reply Intent-intent User-user </li><li><strong>Query</strong> : filter criteria corresponding to QueryType </li><li><strong>CategoryId</strong> : category ID </li><li><strong>ReplyMethod</strong> : reply type 0-all reply types 1-reply to rejected questions 2-direct QA reply 3-review failure reply 4-knowledge polish reply 6-workflow reply 8-image understanding reply 9-search engine reply 10-large model direct reply 11-fallback response </li><li><strong>StartTime</strong> : start time, unix second-level timestamp </li><li><strong>EndTime</strong> : end time, unix second-level timestamp </li><li><strong>Cursor</strong> : cursor. For the previous page, take PrevCursor from the response; for the next page, take NextCursor from the response. </li><li><strong>Direction</strong> : direction. next: next page, prev: previous page</li><li><strong>CallResult</strong> : call result: 0-all / 1-success / 2-failure / 3-canceled by the user </li><li><strong>FailReason</strong> : failure reason 0-all 1-review failure 2-QPM limit reached 3-TPM limit reached 4-concurrency limit reached 5-system exception </li><li><strong>Intent</strong> : intent</li></ul>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>Page number, starting from 0. If not passed, it is processed as 0.</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Number of items per page. Maximum value: 100. If not specified or set to 0, the default pagination size is used.</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Sort condition. Supports sorting by CreateTime only</p>
                     */
                    Sort m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMSGRECORDLISTREQUEST_H_
