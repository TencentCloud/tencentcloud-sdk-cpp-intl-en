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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTRECORDSRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTRECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/AlertRecord.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeAlertRecords response structure.
                */
                class DescribeAlertRecordsResponse : public AbstractModel
                {
                public:
                    DescribeAlertRecordsResponse();
                    ~DescribeAlertRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Alert records list.

Note: This field may return null, indicating that no valid value is found.
                     * @return AlertRecordSet Alert records list.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<AlertRecord> GetAlertRecordSet() const;

                    /**
                     * 判断参数 AlertRecordSet 是否已赋值
                     * @return AlertRecordSet 是否已赋值
                     * 
                     */
                    bool AlertRecordSetHasBeenSet() const;

                    /**
                     * 获取Total number of Alert records.

Note: This field may return null, indicating that no valid value is found.
                     * @return Total Total number of Alert records.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Alert records list.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<AlertRecord> m_alertRecordSet;
                    bool m_alertRecordSetHasBeenSet;

                    /**
                     * Total number of Alert records.

Note: This field may return null, indicating that no valid value is found.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTRECORDSRESPONSE_H_
