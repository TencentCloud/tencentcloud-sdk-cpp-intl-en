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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMREVENTLISTREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMREVENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeEMREventList request structure.
                */
                class DescribeEMREventListRequest : public AbstractModel
                {
                public:
                    DescribeEMREventListRequest();
                    ~DescribeEMREventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return InstanceId Cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _instanceId Cluster ID.
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
                     * 获取Start time for event query.
                     * @return StartTime Start time for event query.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time for event query.
                     * @param _startTime Start time for event query.
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
                     * 获取End time for event query.
                     * @return EndTime End time for event query.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time for event query.
                     * @param _endTime End time for event query.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Event-triggered IP address.
                     * @return Host Event-triggered IP address.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Event-triggered IP address.
                     * @param _host Event-triggered IP address.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Service role of the affected event.
                     * @return Role Service role of the affected event.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Service role of the affected event.
                     * @param _role Service role of the affected event.
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Event name.
                     * @return Name Event name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Event name.
                     * @param _name Event name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Offset of the event list.
                     * @return Offset Offset of the event list.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset of the event list.
                     * @param _offset Offset of the event list.
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
                     * 获取Limit of the event list.
                     * @return Limit Limit of the event list.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit of the event list.
                     * @param _limit Limit of the event list.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time for event query.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time for event query.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Event-triggered IP address.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Service role of the affected event.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Event name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Offset of the event list.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit of the event list.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMREVENTLISTREQUEST_H_
