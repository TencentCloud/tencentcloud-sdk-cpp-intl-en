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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREREPORTREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREREPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeCompareReport request structure.
                */
                class DescribeCompareReportRequest : public AbstractModel
                {
                public:
                    DescribeCompareReportRequest();
                    ~DescribeCompareReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Migration task ID
                     * @return JobId Migration task ID
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Migration task ID
                     * @param JobId Migration task ID
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Check task ID
                     * @return CompareTaskId Check task ID
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置Check task ID
                     * @param CompareTaskId Check task ID
                     */
                    void SetCompareTaskId(const std::string& _compareTaskId);

                    /**
                     * 判断参数 CompareTaskId 是否已赋值
                     * @return CompareTaskId 是否已赋值
                     */
                    bool CompareTaskIdHasBeenSet() const;

                    /**
                     * 获取Number of inconsistent objects to be returned
                     * @return DifferenceLimit Number of inconsistent objects to be returned
                     */
                    uint64_t GetDifferenceLimit() const;

                    /**
                     * 设置Number of inconsistent objects to be returned
                     * @param DifferenceLimit Number of inconsistent objects to be returned
                     */
                    void SetDifferenceLimit(const uint64_t& _differenceLimit);

                    /**
                     * 判断参数 DifferenceLimit 是否已赋值
                     * @return DifferenceLimit 是否已赋值
                     */
                    bool DifferenceLimitHasBeenSet() const;

                    /**
                     * 获取Offset of inconsistent objects
                     * @return DifferenceOffset Offset of inconsistent objects
                     */
                    uint64_t GetDifferenceOffset() const;

                    /**
                     * 设置Offset of inconsistent objects
                     * @param DifferenceOffset Offset of inconsistent objects
                     */
                    void SetDifferenceOffset(const uint64_t& _differenceOffset);

                    /**
                     * 判断参数 DifferenceOffset 是否已赋值
                     * @return DifferenceOffset 是否已赋值
                     */
                    bool DifferenceOffsetHasBeenSet() const;

                    /**
                     * 获取Search criterion: Inconsistent database name
                     * @return DifferenceDB Search criterion: Inconsistent database name
                     */
                    std::string GetDifferenceDB() const;

                    /**
                     * 设置Search criterion: Inconsistent database name
                     * @param DifferenceDB Search criterion: Inconsistent database name
                     */
                    void SetDifferenceDB(const std::string& _differenceDB);

                    /**
                     * 判断参数 DifferenceDB 是否已赋值
                     * @return DifferenceDB 是否已赋值
                     */
                    bool DifferenceDBHasBeenSet() const;

                    /**
                     * 获取Search criterion: Inconsistent table name
                     * @return DifferenceTable Search criterion: Inconsistent table name
                     */
                    std::string GetDifferenceTable() const;

                    /**
                     * 设置Search criterion: Inconsistent table name
                     * @param DifferenceTable Search criterion: Inconsistent table name
                     */
                    void SetDifferenceTable(const std::string& _differenceTable);

                    /**
                     * 判断参数 DifferenceTable 是否已赋值
                     * @return DifferenceTable 是否已赋值
                     */
                    bool DifferenceTableHasBeenSet() const;

                    /**
                     * 获取Number of unchecked objects to be returned
                     * @return SkippedLimit Number of unchecked objects to be returned
                     */
                    uint64_t GetSkippedLimit() const;

                    /**
                     * 设置Number of unchecked objects to be returned
                     * @param SkippedLimit Number of unchecked objects to be returned
                     */
                    void SetSkippedLimit(const uint64_t& _skippedLimit);

                    /**
                     * 判断参数 SkippedLimit 是否已赋值
                     * @return SkippedLimit 是否已赋值
                     */
                    bool SkippedLimitHasBeenSet() const;

                    /**
                     * 获取Offset of unchecked objects
                     * @return SkippedOffset Offset of unchecked objects
                     */
                    uint64_t GetSkippedOffset() const;

                    /**
                     * 设置Offset of unchecked objects
                     * @param SkippedOffset Offset of unchecked objects
                     */
                    void SetSkippedOffset(const uint64_t& _skippedOffset);

                    /**
                     * 判断参数 SkippedOffset 是否已赋值
                     * @return SkippedOffset 是否已赋值
                     */
                    bool SkippedOffsetHasBeenSet() const;

                    /**
                     * 获取Search criterion: Unchecked database name
                     * @return SkippedDB Search criterion: Unchecked database name
                     */
                    std::string GetSkippedDB() const;

                    /**
                     * 设置Search criterion: Unchecked database name
                     * @param SkippedDB Search criterion: Unchecked database name
                     */
                    void SetSkippedDB(const std::string& _skippedDB);

                    /**
                     * 判断参数 SkippedDB 是否已赋值
                     * @return SkippedDB 是否已赋值
                     */
                    bool SkippedDBHasBeenSet() const;

                    /**
                     * 获取Search criterion: Unchecked table name
                     * @return SkippedTable Search criterion: Unchecked table name
                     */
                    std::string GetSkippedTable() const;

                    /**
                     * 设置Search criterion: Unchecked table name
                     * @param SkippedTable Search criterion: Unchecked table name
                     */
                    void SetSkippedTable(const std::string& _skippedTable);

                    /**
                     * 判断参数 SkippedTable 是否已赋值
                     * @return SkippedTable 是否已赋值
                     */
                    bool SkippedTableHasBeenSet() const;

                private:

                    /**
                     * Migration task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Check task ID
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * Number of inconsistent objects to be returned
                     */
                    uint64_t m_differenceLimit;
                    bool m_differenceLimitHasBeenSet;

                    /**
                     * Offset of inconsistent objects
                     */
                    uint64_t m_differenceOffset;
                    bool m_differenceOffsetHasBeenSet;

                    /**
                     * Search criterion: Inconsistent database name
                     */
                    std::string m_differenceDB;
                    bool m_differenceDBHasBeenSet;

                    /**
                     * Search criterion: Inconsistent table name
                     */
                    std::string m_differenceTable;
                    bool m_differenceTableHasBeenSet;

                    /**
                     * Number of unchecked objects to be returned
                     */
                    uint64_t m_skippedLimit;
                    bool m_skippedLimitHasBeenSet;

                    /**
                     * Offset of unchecked objects
                     */
                    uint64_t m_skippedOffset;
                    bool m_skippedOffsetHasBeenSet;

                    /**
                     * Search criterion: Unchecked database name
                     */
                    std::string m_skippedDB;
                    bool m_skippedDBHasBeenSet;

                    /**
                     * Search criterion: Unchecked table name
                     */
                    std::string m_skippedTable;
                    bool m_skippedTableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREREPORTREQUEST_H_
