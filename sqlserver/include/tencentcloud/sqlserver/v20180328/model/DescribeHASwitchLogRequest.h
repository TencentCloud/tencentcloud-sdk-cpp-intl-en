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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEHASWITCHLOGREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEHASWITCHLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeHASwitchLog request structure.
                */
                class DescribeHASwitchLogRequest : public AbstractModel
                {
                public:
                    DescribeHASwitchLogRequest();
                    ~DescribeHASwitchLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Start time (yyyy-MM-dd HH:mm:ss).
                     * @return StartTime Start time (yyyy-MM-dd HH:mm:ss).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time (yyyy-MM-dd HH:mm:ss).
                     * @param _startTime Start time (yyyy-MM-dd HH:mm:ss).
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
                     * 获取End time (yyyy-MM-dd HH:mm:ss).
                     * @return EndTime End time (yyyy-MM-dd HH:mm:ss).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time (yyyy-MM-dd HH:mm:ss).
                     * @param _endTime End time (yyyy-MM-dd HH:mm:ss).
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
                     * 获取Switch mode. 0 - system automatic switch; 1 - manual switch. Check all switch modes by default if the parameter is left unspecified.
                     * @return SwitchType Switch mode. 0 - system automatic switch; 1 - manual switch. Check all switch modes by default if the parameter is left unspecified.
                     * 
                     */
                    uint64_t GetSwitchType() const;

                    /**
                     * 设置Switch mode. 0 - system automatic switch; 1 - manual switch. Check all switch modes by default if the parameter is left unspecified.
                     * @param _switchType Switch mode. 0 - system automatic switch; 1 - manual switch. Check all switch modes by default if the parameter is left unspecified.
                     * 
                     */
                    void SetSwitchType(const uint64_t& _switchType);

                    /**
                     * 判断参数 SwitchType 是否已赋值
                     * @return SwitchType 是否已赋值
                     * 
                     */
                    bool SwitchTypeHasBeenSet() const;

                    /**
                     * 获取Pagination size.
                     * @return Limit Pagination size.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination size.
                     * @param _limit Pagination size.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination number.
                     * @return Offset Pagination number.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination number.
                     * @param _offset Pagination number.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time (yyyy-MM-dd HH:mm:ss).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time (yyyy-MM-dd HH:mm:ss).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Switch mode. 0 - system automatic switch; 1 - manual switch. Check all switch modes by default if the parameter is left unspecified.
                     */
                    uint64_t m_switchType;
                    bool m_switchTypeHasBeenSet;

                    /**
                     * Pagination size.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination number.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEHASWITCHLOGREQUEST_H_
