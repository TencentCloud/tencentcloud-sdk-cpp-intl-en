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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEBACKUPSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEBACKUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceBackups request structure.
                */
                class DescribeInstanceBackupsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceBackupsRequest();
                    ~DescribeInstanceBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>List size of output backup per page. Default size is 20, maximum value is 100.</p>
                     * @return Limit <p>List size of output backup per page. Default size is 20, maximum value is 100.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>List size of output backup per page. Default size is 20, maximum value is 100.</p>
                     * @param _limit <p>List size of output backup per page. Default size is 20, maximum value is 100.</p>
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
                     * 获取<p>Pagination offset, integer multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
                     * @return Offset <p>Pagination offset, integer multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset, integer multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
                     * @param _offset <p>Pagination offset, integer multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
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
                     * 获取<p>Instance ID to be operated. You can get it from the InstanceId in the return value from the DescribeInstance API.</p>
                     * @return InstanceId <p>Instance ID to be operated. You can get it from the InstanceId in the return value from the DescribeInstance API.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID to be operated. You can get it from the InstanceId in the return value from the DescribeInstance API.</p>
                     * @param _instanceId <p>Instance ID to be operated. You can get it from the InstanceId in the return value from the DescribeInstance API.</p>
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
                     * 获取<p>Start time, for example, in the format of 2017-02-08 16:46:34. Query the backup list of instances that started backup during the [beginTime, endTime] period, with a maximum query span of 30 days.</p>
                     * @return BeginTime <p>Start time, for example, in the format of 2017-02-08 16:46:34. Query the backup list of instances that started backup during the [beginTime, endTime] period, with a maximum query span of 30 days.</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>Start time, for example, in the format of 2017-02-08 16:46:34. Query the backup list of instances that started backup during the [beginTime, endTime] period, with a maximum query span of 30 days.</p>
                     * @param _beginTime <p>Start time, for example, in the format of 2017-02-08 16:46:34. Query the backup list of instances that started backup during the [beginTime, endTime] period, with a maximum query span of 30 days.</p>
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time, in the format of 2017-02-08 19:09:26. Query the backup list of instances that started backup within the period of [beginTime, endTime]. The maximum query time span is 30 days.</p>
                     * @return EndTime <p>End time, in the format of 2017-02-08 19:09:26. Query the backup list of instances that started backup within the period of [beginTime, endTime]. The maximum query time span is 30 days.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time, in the format of 2017-02-08 19:09:26. Query the backup list of instances that started backup within the period of [beginTime, endTime]. The maximum query time span is 30 days.</p>
                     * @param _endTime <p>End time, in the format of 2017-02-08 19:09:26. Query the backup list of instances that started backup within the period of [beginTime, endTime]. The maximum query time span is 30 days.</p>
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
                     * 获取<p>Backup task status:<br>1: Backup is in progress.<br>2: Backup is normal.<br>3: Backup is switching to RDB file processing.<br>4: RDB switch completed.<br>-1: Backup has expired.<br>-2: Backup has been deleted.</p>
                     * @return Status <p>Backup task status:<br>1: Backup is in progress.<br>2: Backup is normal.<br>3: Backup is switching to RDB file processing.<br>4: RDB switch completed.<br>-1: Backup has expired.<br>-2: Backup has been deleted.</p>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置<p>Backup task status:<br>1: Backup is in progress.<br>2: Backup is normal.<br>3: Backup is switching to RDB file processing.<br>4: RDB switch completed.<br>-1: Backup has expired.<br>-2: Backup has been deleted.</p>
                     * @param _status <p>Backup task status:<br>1: Backup is in progress.<br>2: Backup is normal.<br>3: Backup is switching to RDB file processing.<br>4: RDB switch completed.<br>-1: Backup has expired.<br>-2: Backup has been deleted.</p>
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Instance name, supports name fuzzy search based on instance name.</p>
                     * @return InstanceName <p>Instance name, supports name fuzzy search based on instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name, supports name fuzzy search based on instance name.</p>
                     * @param _instanceName <p>Instance name, supports name fuzzy search based on instance name.</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * <p>List size of output backup per page. Default size is 20, maximum value is 100.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Pagination offset, integer multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Instance ID to be operated. You can get it from the InstanceId in the return value from the DescribeInstance API.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Start time, for example, in the format of 2017-02-08 16:46:34. Query the backup list of instances that started backup during the [beginTime, endTime] period, with a maximum query span of 30 days.</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>End time, in the format of 2017-02-08 19:09:26. Query the backup list of instances that started backup within the period of [beginTime, endTime]. The maximum query time span is 30 days.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Backup task status:<br>1: Backup is in progress.<br>2: Backup is normal.<br>3: Backup is switching to RDB file processing.<br>4: RDB switch completed.<br>-1: Backup has expired.<br>-2: Backup has been deleted.</p>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Instance name, supports name fuzzy search based on instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEBACKUPSREQUEST_H_
