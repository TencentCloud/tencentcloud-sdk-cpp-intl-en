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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SECURITYBUTLERINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SECURITYBUTLERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * List of security manager information
                */
                class SecurityButlerInfo : public AbstractModel
                {
                public:
                    SecurityButlerInfo();
                    ~SecurityButlerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data ID
                     * @return Id Data ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Data ID
                     * @param _id Data ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Order ID
                     * @return OrderId Order ID
                     * 
                     */
                    uint64_t GetOrderId() const;

                    /**
                     * 设置Order ID
                     * @param _orderId Order ID
                     * 
                     */
                    void SetOrderId(const uint64_t& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取cvm id
                     * @return Quuid cvm id
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置cvm id
                     * @param _quuid cvm id
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Service status. 0: in service; 1: expired; 2: terminated.
                     * @return Status Service status. 0: in service; 1: expired; 2: terminated.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Service status. 0: in service; 1: expired; 2: terminated.
                     * @param _status Service status. 0: in service; 1: expired; 2: terminated.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Service start time
                     * @return StartTime Service start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Service start time
                     * @param _startTime Service start time
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
                     * 获取Service end time
                     * @return EndTime Service end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Service end time
                     * @param _endTime Service end time
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
                     * 获取Host name
                     * @return HostName Host name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name
                     * @param _hostName Host name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Host IP address
                     * @return HostIp Host IP address
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host IP address
                     * @param _hostIp Host IP address
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Host UUID
                     * @return Uuid Host UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
                     * @param _uuid Host UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Number of host risks
                     * @return RiskCount Number of host risks
                     * 
                     */
                    uint64_t GetRiskCount() const;

                    /**
                     * 设置Number of host risks
                     * @param _riskCount Number of host risks
                     * 
                     */
                    void SetRiskCount(const uint64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                private:

                    /**
                     * Data ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Order ID
                     */
                    uint64_t m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * cvm id
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Service status. 0: in service; 1: expired; 2: terminated.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Service start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Service end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Host IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Number of host risks
                     */
                    uint64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SECURITYBUTLERINFO_H_
