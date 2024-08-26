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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSHISTORYREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeClusterConfigsHistory request structure.
                */
                class DescribeClusterConfigsHistoryRequest : public AbstractModel
                {
                public:
                    DescribeClusterConfigsHistoryRequest();
                    ~DescribeClusterConfigsHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return InstanceId Cluster ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID
                     * @param _instanceId Cluster ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Pagination parameters. The first page is 0, and the second page is 10.
                     * @return Offset Pagination parameters. The first page is 0, and the second page is 10.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination parameters. The first page is 0, and the second page is 10.
                     * @param _offset Pagination parameters. The first page is 0, and the second page is 10.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Pagination parameters. The pagination step length is 10 by default.
                     * @return Limit Pagination parameters. The pagination step length is 10 by default.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination parameters. The pagination step length is 10 by default.
                     * @param _limit Pagination parameters. The pagination step length is 10 by default.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Start of the time range for configuration modification history
                     * @return StartTime Start of the time range for configuration modification history
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start of the time range for configuration modification history
                     * @param _startTime Start of the time range for configuration modification history
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
                     * 获取End of the time range for configuration modification history
                     * @return EndTime End of the time range for configuration modification history
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End of the time range for configuration modification history
                     * @param _endTime End of the time range for configuration modification history
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
                     * 获取Configuration file name array to be queried. If it is empty, all historical records will be queried. Currently supported configuration file names are as follows:
apache_hdfs_broker.conf; be.conf; fe.conf; core-site.xml; hdfs-site.xml; odbcinst.ini
                     * @return ConfigFileNames Configuration file name array to be queried. If it is empty, all historical records will be queried. Currently supported configuration file names are as follows:
apache_hdfs_broker.conf; be.conf; fe.conf; core-site.xml; hdfs-site.xml; odbcinst.ini
                     * 
                     */
                    std::vector<std::string> GetConfigFileNames() const;

                    /**
                     * 设置Configuration file name array to be queried. If it is empty, all historical records will be queried. Currently supported configuration file names are as follows:
apache_hdfs_broker.conf; be.conf; fe.conf; core-site.xml; hdfs-site.xml; odbcinst.ini
                     * @param _configFileNames Configuration file name array to be queried. If it is empty, all historical records will be queried. Currently supported configuration file names are as follows:
apache_hdfs_broker.conf; be.conf; fe.conf; core-site.xml; hdfs-site.xml; odbcinst.ini
                     * 
                     */
                    void SetConfigFileNames(const std::vector<std::string>& _configFileNames);

                    /**
                     * 判断参数 ConfigFileNames 是否已赋值
                     * @return ConfigFileNames 是否已赋值
                     * 
                     */
                    bool ConfigFileNamesHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Pagination parameters. The first page is 0, and the second page is 10.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination parameters. The pagination step length is 10 by default.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Start of the time range for configuration modification history
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End of the time range for configuration modification history
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Configuration file name array to be queried. If it is empty, all historical records will be queried. Currently supported configuration file names are as follows:
apache_hdfs_broker.conf; be.conf; fe.conf; core-site.xml; hdfs-site.xml; odbcinst.ini
                     */
                    std::vector<std::string> m_configFileNames;
                    bool m_configFileNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSHISTORYREQUEST_H_
