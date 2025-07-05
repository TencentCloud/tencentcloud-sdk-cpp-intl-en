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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGDETAILREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGDETAILREQUEST_H_

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
                * DescribeInstanceLogDetail request structure.
                */
                class DescribeInstanceLogDetailRequest : public AbstractModel
                {
                public:
                    DescribeInstanceLogDetailRequest();
                    ~DescribeInstanceLogDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Data Timestamp
                     * @return CurRunDate Data Timestamp
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置Data Timestamp
                     * @param _curRunDate Data Timestamp
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取Server Ip
                     * @return BrokerIp Server Ip
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置Server Ip
                     * @param _brokerIp Server Ip
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取File Name
                     * @return OriginFileName File Name
                     * 
                     */
                    std::string GetOriginFileName() const;

                    /**
                     * 设置File Name
                     * @param _originFileName File Name
                     * 
                     */
                    void SetOriginFileName(const std::string& _originFileName);

                    /**
                     * 判断参数 OriginFileName 是否已赋值
                     * @return OriginFileName 是否已赋值
                     * 
                     */
                    bool OriginFileNameHasBeenSet() const;

                    /**
                     * 获取Starting Row
                     * @return StartCount Starting Row
                     * 
                     */
                    int64_t GetStartCount() const;

                    /**
                     * 设置Starting Row
                     * @param _startCount Starting Row
                     * 
                     */
                    void SetStartCount(const int64_t& _startCount);

                    /**
                     * 判断参数 StartCount 是否已赋值
                     * @return StartCount 是否已赋值
                     * 
                     */
                    bool StartCountHasBeenSet() const;

                    /**
                     * 获取Number of Rows Per Query
                     * @return LineCount Number of Rows Per Query
                     * 
                     */
                    int64_t GetLineCount() const;

                    /**
                     * 设置Number of Rows Per Query
                     * @param _lineCount Number of Rows Per Query
                     * 
                     */
                    void SetLineCount(const int64_t& _lineCount);

                    /**
                     * 判断参数 LineCount 是否已赋值
                     * @return LineCount 是否已赋值
                     * 
                     */
                    bool LineCountHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Data Timestamp
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * Server Ip
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * File Name
                     */
                    std::string m_originFileName;
                    bool m_originFileNameHasBeenSet;

                    /**
                     * Starting Row
                     */
                    int64_t m_startCount;
                    bool m_startCountHasBeenSet;

                    /**
                     * Number of Rows Per Query
                     */
                    int64_t m_lineCount;
                    bool m_lineCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGDETAILREQUEST_H_
