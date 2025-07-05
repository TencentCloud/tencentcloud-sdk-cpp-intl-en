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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBESTREAMINGESTRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBESTREAMINGESTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeStreamIngest response structure.
                */
                class DescribeStreamIngestResponse : public AbstractModel
                {
                public:
                    DescribeStreamIngestResponse();
                    ~DescribeStreamIngestResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task status information. InProgress: Indicates that the current task is in progress. NotExist: Indicates that the current task does not exist. Example value: InProgress
                     * @return Status Task status information. InProgress: Indicates that the current task is in progress. NotExist: Indicates that the current task does not exist. Example value: InProgress
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Task status information. InProgress: Indicates that the current task is in progress. NotExist: Indicates that the current task does not exist. Example value: InProgress
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBESTREAMINGESTRESPONSE_H_
