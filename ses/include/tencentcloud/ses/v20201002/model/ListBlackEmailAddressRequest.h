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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTBLACKEMAILADDRESSREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTBLACKEMAILADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListBlackEmailAddress request structure.
                */
                class ListBlackEmailAddressRequest : public AbstractModel
                {
                public:
                    ListBlackEmailAddressRequest();
                    ~ListBlackEmailAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start date in the format of `YYYY-MM-DD`
                     * @return StartDate Start date in the format of `YYYY-MM-DD`
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置Start date in the format of `YYYY-MM-DD`
                     * @param _startDate Start date in the format of `YYYY-MM-DD`
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取End date in the format of `YYYY-MM-DD`
                     * @return EndDate End date in the format of `YYYY-MM-DD`
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置End date in the format of `YYYY-MM-DD`
                     * @param _endDate End date in the format of `YYYY-MM-DD`
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取Common parameter. It must be used with `Offset`.
                     * @return Limit Common parameter. It must be used with `Offset`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Common parameter. It must be used with `Offset`.
                     * @param _limit Common parameter. It must be used with `Offset`.
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
                     * 获取Common parameter. It must be used with `Limit`. Maximum value of `Limit`: `100`.
                     * @return Offset Common parameter. It must be used with `Limit`. Maximum value of `Limit`: `100`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Common parameter. It must be used with `Limit`. Maximum value of `Limit`: `100`.
                     * @param _offset Common parameter. It must be used with `Limit`. Maximum value of `Limit`: `100`.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取You can specify an email address to query.
                     * @return EmailAddress You can specify an email address to query.
                     * 
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置You can specify an email address to query.
                     * @param _emailAddress You can specify an email address to query.
                     * 
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     * 
                     */
                    bool EmailAddressHasBeenSet() const;

                    /**
                     * 获取You can specify a task ID to query.
                     * @return TaskID You can specify a task ID to query.
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置You can specify a task ID to query.
                     * @param _taskID You can specify a task ID to query.
                     * 
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                private:

                    /**
                     * Start date in the format of `YYYY-MM-DD`
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * End date in the format of `YYYY-MM-DD`
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * Common parameter. It must be used with `Offset`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Common parameter. It must be used with `Limit`. Maximum value of `Limit`: `100`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * You can specify an email address to query.
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                    /**
                     * You can specify a task ID to query.
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTBLACKEMAILADDRESSREQUEST_H_
