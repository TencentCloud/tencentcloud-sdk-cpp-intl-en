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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESCORESREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESCORESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeScores request structure.
                */
                class DescribeScoresRequest : public AbstractModel
                {
                public:
                    DescribeScoresRequest();
                    ~DescribeScoresRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
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
                     * 获取Project ID
                     * @return ID Project ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Project ID
                     * @param _iD Project ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused.
                     * @return IsDemo This parameter has been disused.
                     * 
                     */
                    int64_t GetIsDemo() const;

                    /**
                     * 设置This parameter has been disused.
                     * @param _isDemo This parameter has been disused.
                     * 
                     */
                    void SetIsDemo(const int64_t& _isDemo);

                    /**
                     * 判断参数 IsDemo 是否已赋值
                     * @return IsDemo 是否已赋值
                     * 
                     */
                    bool IsDemoHasBeenSet() const;

                private:

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * This parameter has been disused.
                     */
                    int64_t m_isDemo;
                    bool m_isDemoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESCORESREQUEST_H_
