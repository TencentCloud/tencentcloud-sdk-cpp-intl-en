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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEALARMVERTEXIDREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEALARMVERTEXIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAlarmVertexId request structure.
                */
                class DescribeAlarmVertexIdRequest : public AbstractModel
                {
                public:
                    DescribeAlarmVertexIdRequest();
                    ~DescribeAlarmVertexIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Machine UUID
                     * @return Uuid Machine UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Machine UUID
                     * @param _uuid Machine UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Start timestamp
                     * @return StartTime Start timestamp
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start timestamp
                     * @param _startTime Start timestamp
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End timestamp
                     * @return EndTime End timestamp
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End timestamp
                     * @param _endTime End timestamp
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Machine UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Start timestamp
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End timestamp
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEALARMVERTEXIDREQUEST_H_
