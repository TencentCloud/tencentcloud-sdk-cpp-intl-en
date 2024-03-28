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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPROTECTEDTELCDRREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPROTECTEDTELCDRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeProtectedTelCdr request structure.
                */
                class DescribeProtectedTelCdrRequest : public AbstractModel
                {
                public:
                    DescribeProtectedTelCdrRequest();
                    ~DescribeProtectedTelCdrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start timestamp. Unix second-level timestamp.
                     * @return StartTimeStamp Start timestamp. Unix second-level timestamp.
                     * 
                     */
                    int64_t GetStartTimeStamp() const;

                    /**
                     * 设置Start timestamp. Unix second-level timestamp.
                     * @param _startTimeStamp Start timestamp. Unix second-level timestamp.
                     * 
                     */
                    void SetStartTimeStamp(const int64_t& _startTimeStamp);

                    /**
                     * 判断参数 StartTimeStamp 是否已赋值
                     * @return StartTimeStamp 是否已赋值
                     * 
                     */
                    bool StartTimeStampHasBeenSet() const;

                    /**
                     * 获取End timestamp. Unix second-level timestamp.
                     * @return EndTimeStamp End timestamp. Unix second-level timestamp.
                     * 
                     */
                    int64_t GetEndTimeStamp() const;

                    /**
                     * 设置End timestamp. Unix second-level timestamp.
                     * @param _endTimeStamp End timestamp. Unix second-level timestamp.
                     * 
                     */
                    void SetEndTimeStamp(const int64_t& _endTimeStamp);

                    /**
                     * 判断参数 EndTimeStamp 是否已赋值
                     * @return EndTimeStamp 是否已赋值
                     * 
                     */
                    bool EndTimeStampHasBeenSet() const;

                    /**
                     * 获取For the Application ID, go to https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId For the Application ID, go to https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置For the Application ID, go to https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId For the Application ID, go to https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Page size, upper limit 100.
                     * @return PageSize Page size, upper limit 100.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Page size, upper limit 100.
                     * @param _pageSize Page size, upper limit 100.
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
                     * 获取Page number starting from 0.
                     * @return PageNumber Page number starting from 0.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number starting from 0.
                     * @param _pageNumber Page number starting from 0.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * Start timestamp. Unix second-level timestamp.
                     */
                    int64_t m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * End timestamp. Unix second-level timestamp.
                     */
                    int64_t m_endTimeStamp;
                    bool m_endTimeStampHasBeenSet;

                    /**
                     * For the Application ID, go to https://console.cloud.tencent.com/ccc.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Page size, upper limit 100.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number starting from 0.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPROTECTEDTELCDRREQUEST_H_
