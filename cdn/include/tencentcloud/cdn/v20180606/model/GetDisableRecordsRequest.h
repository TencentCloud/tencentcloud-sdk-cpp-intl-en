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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_GETDISABLERECORDSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_GETDISABLERECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * GetDisableRecords request structure.
                */
                class GetDisableRecordsRequest : public AbstractModel
                {
                public:
                    GetDisableRecordsRequest();
                    ~GetDisableRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the URL to be queried
                     * @return Url Specifies the URL to be queried
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Specifies the URL to be queried
                     * @param _url Specifies the URL to be queried
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Starting time, such as `2018-12-12 10:24:00`
                     * @return StartTime Starting time, such as `2018-12-12 10:24:00`
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Starting time, such as `2018-12-12 10:24:00`
                     * @param _startTime Starting time, such as `2018-12-12 10:24:00`
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
                     * 获取End time, such as `2018-12-14 10:24:00`
                     * @return EndTime End time, such as `2018-12-14 10:24:00`
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time, such as `2018-12-14 10:24:00`
                     * @param _endTime End time, such as `2018-12-14 10:24:00`
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
                     * 获取Current URL status
disable: The URL remains disabled, and accessing it will return an error 403
enable: The URL is enabled (unblocked) and can be normally accessed
                     * @return Status Current URL status
disable: The URL remains disabled, and accessing it will return an error 403
enable: The URL is enabled (unblocked) and can be normally accessed
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Current URL status
disable: The URL remains disabled, and accessing it will return an error 403
enable: The URL is enabled (unblocked) and can be normally accessed
                     * @param _status Current URL status
disable: The URL remains disabled, and accessing it will return an error 403
enable: The URL is enabled (unblocked) and can be normally accessed
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
                     * 获取Offset for paginated queries. Default value: 0
                     * @return Offset Offset for paginated queries. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset for paginated queries. Default value: 0
                     * @param _offset Offset for paginated queries. Default value: 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Pagination limit. Default value: 20.
                     * @return Limit Pagination limit. Default value: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination limit. Default value: 20.
                     * @param _limit Pagination limit. Default value: 20.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Task ID. The task ID and start time cannot be both left empty.
                     * @return TaskId Task ID. The task ID and start time cannot be both left empty.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID. The task ID and start time cannot be both left empty.
                     * @param _taskId Task ID. The task ID and start time cannot be both left empty.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the URL to be queried
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Starting time, such as `2018-12-12 10:24:00`
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, such as `2018-12-14 10:24:00`
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Current URL status
disable: The URL remains disabled, and accessing it will return an error 403
enable: The URL is enabled (unblocked) and can be normally accessed
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Offset for paginated queries. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination limit. Default value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Task ID. The task ID and start time cannot be both left empty.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_GETDISABLERECORDSREQUEST_H_
