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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
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
                     * 获取Filter condition: Task status. Available values: WAITING (Waiting), PROCESSING (Processing), FINISH (Completed).
                     * @return Status Filter condition: Task status. Available values: WAITING (Waiting), PROCESSING (Processing), FINISH (Completed).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Filter condition: Task status. Available values: WAITING (Waiting), PROCESSING (Processing), FINISH (Completed).
                     * @param _status Filter condition: Task status. Available values: WAITING (Waiting), PROCESSING (Processing), FINISH (Completed).
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
                     * 获取Filter criteria: file ID.
                     * @return FileId Filter criteria: file ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Filter criteria: file ID.
                     * @param _fileId Filter criteria: file ID.
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
                     * 获取Filter condition: Task creation time.
                     * @return CreateTime Filter condition: Task creation time.
                     * 
                     */
                    TimeRange GetCreateTime() const;

                    /**
                     * 设置Filter condition: Task creation time.
                     * @param _createTime Filter condition: Task creation time.
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
                     * 获取Filter condition: Task end time.
                     * @return FinishTime Filter condition: Task end time.
                     * 
                     */
                    TimeRange GetFinishTime() const;

                    /**
                     * 设置Filter condition: Task end time.
                     * @param _finishTime Filter condition: Task end time.
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
                     * 获取Sorting method. Selectable fields for Sort.Field:
<li> CreateTime Task creation time.</li>
<li>FinishTime Task end time.</li>
                     * @return Sort Sorting method. Selectable fields for Sort.Field:
<li> CreateTime Task creation time.</li>
<li>FinishTime Task end time.</li>
                     * 
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置Sorting method. Selectable fields for Sort.Field:
<li> CreateTime Task creation time.</li>
<li>FinishTime Task end time.</li>
                     * @param _sort Sorting method. Selectable fields for Sort.Field:
<li> CreateTime Task creation time.</li>
<li>FinishTime Task end time.</li>
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
                     * 获取Number of returned entries. Default value: 10. Maximum value: 100.
                     * @return Limit Number of returned entries. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Default value: 10. Maximum value: 100.
                     * @param _limit Number of returned entries. Default value: 10. Maximum value: 100.
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
                     * 获取Pagination identifier, used for batch pulling: When a single request cannot retrieve all data, the interface will return ScrollToken. Carry over in next request, will start obtaining from the next record.
                     * @return ScrollToken Pagination identifier, used for batch pulling: When a single request cannot retrieve all data, the interface will return ScrollToken. Carry over in next request, will start obtaining from the next record.
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 设置Pagination identifier, used for batch pulling: When a single request cannot retrieve all data, the interface will return ScrollToken. Carry over in next request, will start obtaining from the next record.
                     * @param _scrollToken Pagination identifier, used for batch pulling: When a single request cannot retrieve all data, the interface will return ScrollToken. Carry over in next request, will start obtaining from the next record.
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
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Filter condition: Task status. Available values: WAITING (Waiting), PROCESSING (Processing), FINISH (Completed).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Filter criteria: file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Filter condition: Task creation time.
                     */
                    TimeRange m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Filter condition: Task end time.
                     */
                    TimeRange m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * Sorting method. Selectable fields for Sort.Field:
<li> CreateTime Task creation time.</li>
<li>FinishTime Task end time.</li>
                     */
                    SortBy m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination identifier, used for batch pulling: When a single request cannot retrieve all data, the interface will return ScrollToken. Carry over in next request, will start obtaining from the next record.
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKSREQUEST_H_
