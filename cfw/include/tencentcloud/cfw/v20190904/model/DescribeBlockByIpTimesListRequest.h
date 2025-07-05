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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKBYIPTIMESLISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKBYIPTIMESLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeBlockByIpTimesList request structure.
                */
                class DescribeBlockByIpTimesListRequest : public AbstractModel
                {
                public:
                    DescribeBlockByIpTimesListRequest();
                    ~DescribeBlockByIpTimesListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * 获取IP search criteria
                     * @return Ip IP search criteria
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP search criteria
                     * @param _ip IP search criteria
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
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
                     * 获取Direction
                     * @return Direction Direction
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置Direction
                     * @param _direction Direction
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Inter-VPC firewall toggle edge ID
                     * @return EdgeId Inter-VPC firewall toggle edge ID
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置Inter-VPC firewall toggle edge ID
                     * @param _edgeId Inter-VPC firewall toggle edge ID
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取Log source. move: inter-VPC firewall
                     * @return LogSource Log source. move: inter-VPC firewall
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置Log source. move: inter-VPC firewall
                     * @param _logSource Log source. move: inter-VPC firewall
                     * 
                     */
                    void SetLogSource(const std::string& _logSource);

                    /**
                     * 判断参数 LogSource 是否已赋值
                     * @return LogSource 是否已赋值
                     * 
                     */
                    bool LogSourceHasBeenSet() const;

                    /**
                     * 获取Source
                     * @return Source Source
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Source
                     * @param _source Source
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Zone Region
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Region
                     * @param _zone Region
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * IP search criteria
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Direction
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Inter-VPC firewall toggle edge ID
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * Log source. move: inter-VPC firewall
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * Source
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKBYIPTIMESLISTREQUEST_H_
