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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREALTIMETASKMETRICOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREALTIMETASKMETRICOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeRealTimeTaskMetricOverview response structure.
                */
                class DescribeRealTimeTaskMetricOverviewResponse : public AbstractModel
                {
                public:
                    DescribeRealTimeTaskMetricOverviewResponse();
                    ~DescribeRealTimeTaskMetricOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total Read Records
                     * @return TotalRecordNumOfRead Total Read Records
                     * 
                     */
                    uint64_t GetTotalRecordNumOfRead() const;

                    /**
                     * 判断参数 TotalRecordNumOfRead 是否已赋值
                     * @return TotalRecordNumOfRead 是否已赋值
                     * 
                     */
                    bool TotalRecordNumOfReadHasBeenSet() const;

                    /**
                     * 获取Total Read Bytes
                     * @return TotalRecordByteNumOfRead Total Read Bytes
                     * 
                     */
                    uint64_t GetTotalRecordByteNumOfRead() const;

                    /**
                     * 判断参数 TotalRecordByteNumOfRead 是否已赋值
                     * @return TotalRecordByteNumOfRead 是否已赋值
                     * 
                     */
                    bool TotalRecordByteNumOfReadHasBeenSet() const;

                    /**
                     * 获取Total Write Records
                     * @return TotalRecordNumOfWrite Total Write Records
                     * 
                     */
                    uint64_t GetTotalRecordNumOfWrite() const;

                    /**
                     * 判断参数 TotalRecordNumOfWrite 是否已赋值
                     * @return TotalRecordNumOfWrite 是否已赋值
                     * 
                     */
                    bool TotalRecordNumOfWriteHasBeenSet() const;

                    /**
                     * 获取Total Write Bytes Unit: bytes
                     * @return TotalRecordByteNumOfWrite Total Write Bytes Unit: bytes
                     * 
                     */
                    uint64_t GetTotalRecordByteNumOfWrite() const;

                    /**
                     * 判断参数 TotalRecordByteNumOfWrite 是否已赋值
                     * @return TotalRecordByteNumOfWrite 是否已赋值
                     * 
                     */
                    bool TotalRecordByteNumOfWriteHasBeenSet() const;

                    /**
                     * 获取Total Dirty Record Data
                     * @return TotalDirtyRecordNum Total Dirty Record Data
                     * 
                     */
                    uint64_t GetTotalDirtyRecordNum() const;

                    /**
                     * 判断参数 TotalDirtyRecordNum 是否已赋值
                     * @return TotalDirtyRecordNum 是否已赋值
                     * 
                     */
                    bool TotalDirtyRecordNumHasBeenSet() const;

                    /**
                     * 获取Total Dirty Bytes Unit: bytes
                     * @return TotalDirtyRecordByte Total Dirty Bytes Unit: bytes
                     * 
                     */
                    uint64_t GetTotalDirtyRecordByte() const;

                    /**
                     * 判断参数 TotalDirtyRecordByte 是否已赋值
                     * @return TotalDirtyRecordByte 是否已赋值
                     * 
                     */
                    bool TotalDirtyRecordByteHasBeenSet() const;

                    /**
                     * 获取Execution Duration Unit: s
                     * @return TotalDuration Execution Duration Unit: s
                     * 
                     */
                    uint64_t GetTotalDuration() const;

                    /**
                     * 判断参数 TotalDuration 是否已赋值
                     * @return TotalDuration 是否已赋值
                     * 
                     */
                    bool TotalDurationHasBeenSet() const;

                    /**
                     * 获取Start Running Time
                     * @return BeginRunTime Start Running Time
                     * 
                     */
                    std::string GetBeginRunTime() const;

                    /**
                     * 判断参数 BeginRunTime 是否已赋值
                     * @return BeginRunTime 是否已赋值
                     * 
                     */
                    bool BeginRunTimeHasBeenSet() const;

                    /**
                     * 获取Current Running Time
                     * @return EndRunTime Current Running Time
                     * 
                     */
                    std::string GetEndRunTime() const;

                    /**
                     * 判断参数 EndRunTime 是否已赋值
                     * @return EndRunTime 是否已赋值
                     * 
                     */
                    bool EndRunTimeHasBeenSet() const;

                private:

                    /**
                     * Total Read Records
                     */
                    uint64_t m_totalRecordNumOfRead;
                    bool m_totalRecordNumOfReadHasBeenSet;

                    /**
                     * Total Read Bytes
                     */
                    uint64_t m_totalRecordByteNumOfRead;
                    bool m_totalRecordByteNumOfReadHasBeenSet;

                    /**
                     * Total Write Records
                     */
                    uint64_t m_totalRecordNumOfWrite;
                    bool m_totalRecordNumOfWriteHasBeenSet;

                    /**
                     * Total Write Bytes Unit: bytes
                     */
                    uint64_t m_totalRecordByteNumOfWrite;
                    bool m_totalRecordByteNumOfWriteHasBeenSet;

                    /**
                     * Total Dirty Record Data
                     */
                    uint64_t m_totalDirtyRecordNum;
                    bool m_totalDirtyRecordNumHasBeenSet;

                    /**
                     * Total Dirty Bytes Unit: bytes
                     */
                    uint64_t m_totalDirtyRecordByte;
                    bool m_totalDirtyRecordByteHasBeenSet;

                    /**
                     * Execution Duration Unit: s
                     */
                    uint64_t m_totalDuration;
                    bool m_totalDurationHasBeenSet;

                    /**
                     * Start Running Time
                     */
                    std::string m_beginRunTime;
                    bool m_beginRunTimeHasBeenSet;

                    /**
                     * Current Running Time
                     */
                    std::string m_endRunTime;
                    bool m_endRunTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREALTIMETASKMETRICOVERVIEWRESPONSE_H_
