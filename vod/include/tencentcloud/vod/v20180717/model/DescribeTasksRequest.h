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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TimeRange.h>
#include <tencentcloud/vod/v20180717/model/SortBy.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeTasks request structure.
                */
                class DescribeTasksRequest : public AbstractModel
                {
                public:
                    DescribeTasksRequest();
                    ~DescribeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services on or after December 25, 2023, when accessing resources in VOD applications (whether the default application or a newly created application), this field must be set to the application ID.</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services on or after December 25, 2023, when accessing resources in VOD applications (whether the default application or a newly created application), this field must be set to the application ID.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services on or after December 25, 2023, when accessing resources in VOD applications (whether the default application or a newly created application), this field must be set to the application ID.</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services on or after December 25, 2023, when accessing resources in VOD applications (whether the default application or a newly created application), this field must be set to the application ID.</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Filter criteria: task status. Available values: WAITING, PROCESSING, FINISH.</p>
                     * @return Status <p>Filter criteria: task status. Available values: WAITING, PROCESSING, FINISH.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Filter criteria: task status. Available values: WAITING, PROCESSING, FINISH.</p>
                     * @param _status <p>Filter criteria: task status. Available values: WAITING, PROCESSING, FINISH.</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Filter criteria: file ID.</p>
                     * @return FileId <p>Filter criteria: file ID.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>Filter criteria: file ID.</p>
                     * @param _fileId <p>Filter criteria: file ID.</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>Filter condition: task creation time.</p>
                     * @return CreateTime <p>Filter condition: task creation time.</p>
                     * 
                     */
                    TimeRange GetCreateTime() const;

                    /**
                     * 设置<p>Filter condition: task creation time.</p>
                     * @param _createTime <p>Filter condition: task creation time.</p>
                     * 
                     */
                    void SetCreateTime(const TimeRange& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Filter condition: task end time.</p>
                     * @return FinishTime <p>Filter condition: task end time.</p>
                     * 
                     */
                    TimeRange GetFinishTime() const;

                    /**
                     * 设置<p>Filter condition: task end time.</p>
                     * @param _finishTime <p>Filter condition: task end time.</p>
                     * 
                     */
                    void SetFinishTime(const TimeRange& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>Sorting method. Optional Sort.Field:</p><li> CreateTime: task creation time.</li><li>FinishTime: task end time.</li>
                     * @return Sort <p>Sorting method. Optional Sort.Field:</p><li> CreateTime: task creation time.</li><li>FinishTime: task end time.</li>
                     * 
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置<p>Sorting method. Optional Sort.Field:</p><li> CreateTime: task creation time.</li><li>FinishTime: task end time.</li>
                     * @param _sort <p>Sorting method. Optional Sort.Field:</p><li> CreateTime: task creation time.</li><li>FinishTime: task end time.</li>
                     * 
                     */
                    void SetSort(const SortBy& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * @return Limit <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * @param _limit <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.</p>
                     * @return ScrollToken <p>Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.</p>
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 设置<p>Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.</p>
                     * @param _scrollToken <p>Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.</p>
                     * 
                     */
                    void SetScrollToken(const std::string& _scrollToken);

                    /**
                     * 判断参数 ScrollToken 是否已赋值
                     * @return ScrollToken 是否已赋值
                     * 
                     */
                    bool ScrollTokenHasBeenSet() const;

                private:

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services on or after December 25, 2023, when accessing resources in VOD applications (whether the default application or a newly created application), this field must be set to the application ID.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Filter criteria: task status. Available values: WAITING, PROCESSING, FINISH.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Filter criteria: file ID.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Filter condition: task creation time.</p>
                     */
                    TimeRange m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Filter condition: task end time.</p>
                     */
                    TimeRange m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>Sorting method. Optional Sort.Field:</p><li> CreateTime: task creation time.</li><li>FinishTime: task end time.</li>
                     */
                    SortBy m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.</p>
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKSREQUEST_H_
