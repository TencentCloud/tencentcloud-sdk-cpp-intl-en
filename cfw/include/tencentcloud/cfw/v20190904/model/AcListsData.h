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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ACLISTSDATA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ACLISTSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Access control list rule
                */
                class AcListsData : public AbstractModel
                {
                public:
                    AcListsData();
                    ~AcListsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
                     * @return Id Rule ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID
                     * @param Id Rule ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Access source
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SourceIp Access source
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置Access source
Note: This field may return `null`, indicating that no valid value was found.
                     * @param SourceIp Access source
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取Access destination
Note: This field may return `null`, indicating that no valid value was found.
                     * @return TargetIp Access destination
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetTargetIp() const;

                    /**
                     * 设置Access destination
Note: This field may return `null`, indicating that no valid value was found.
                     * @param TargetIp Access destination
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetTargetIp(const std::string& _targetIp);

                    /**
                     * 判断参数 TargetIp 是否已赋值
                     * @return TargetIp 是否已赋值
                     */
                    bool TargetIpHasBeenSet() const;

                    /**
                     * 获取Protocol
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Protocol Protocol
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Protocol Protocol
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Port
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Port Port
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Port Port
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Policy
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Strategy Policy
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t GetStrategy() const;

                    /**
                     * 设置Policy
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Strategy Policy
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetStrategy(const uint64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Description
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Detail Description
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置Description
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Detail Description
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Hit count
                     * @return Count Hit count
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Hit count
                     * @param Count Hit count
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Priority
                     * @return OrderIndex Priority
                     */
                    uint64_t GetOrderIndex() const;

                    /**
                     * 设置Priority
                     * @param OrderIndex Priority
                     */
                    void SetOrderIndex(const uint64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取Alert rule ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @return LogId Alert rule ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置Alert rule ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @param LogId Alert rule ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     */
                    bool LogIdHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Access source
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * Access destination
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_targetIp;
                    bool m_targetIpHasBeenSet;

                    /**
                     * Protocol
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Policy
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Description
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Hit count
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Priority
                     */
                    uint64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * Alert rule ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ACLISTSDATA_H_
