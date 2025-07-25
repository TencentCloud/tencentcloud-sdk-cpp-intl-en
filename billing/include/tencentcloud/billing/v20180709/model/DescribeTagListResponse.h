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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBETAGLISTRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBETAGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/TagDataInfo.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeTagList response structure.
                */
                class DescribeTagListResponse : public AbstractModel
                {
                public:
                    DescribeTagListResponse();
                    ~DescribeTagListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of records.
                     * @return RecordNum Total number of records.
                     * 
                     */
                    uint64_t GetRecordNum() const;

                    /**
                     * 判断参数 RecordNum 是否已赋值
                     * @return RecordNum 是否已赋值
                     * 
                     */
                    bool RecordNumHasBeenSet() const;

                    /**
                     * 获取Tag information.
                     * @return Data Tag information.
                     * 
                     */
                    std::vector<TagDataInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Total number of records.
                     */
                    uint64_t m_recordNum;
                    bool m_recordNumHasBeenSet;

                    /**
                     * Tag information.
                     */
                    std::vector<TagDataInfo> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBETAGLISTRESPONSE_H_
