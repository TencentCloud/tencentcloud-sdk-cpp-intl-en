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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEOFFLINELOGRECORDSRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEOFFLINELOGRECORDSRESPONSE_H_

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
                * DescribeOfflineLogRecords response structure.
                */
                class DescribeOfflineLogRecordsResponse : public AbstractModel
                {
                public:
                    DescribeOfflineLogRecordsResponse();
                    ~DescribeOfflineLogRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取API call information
                     * @return Msg API call information
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取Array of record IDs
                     * @return RecordSet Array of record IDs
                     * 
                     */
                    std::vector<std::string> GetRecordSet() const;

                    /**
                     * 判断参数 RecordSet 是否已赋值
                     * @return RecordSet 是否已赋值
                     * 
                     */
                    bool RecordSetHasBeenSet() const;

                private:

                    /**
                     * API call information
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * Array of record IDs
                     */
                    std::vector<std::string> m_recordSet;
                    bool m_recordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEOFFLINELOGRECORDSRESPONSE_H_
