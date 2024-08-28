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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCENODE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCENODE_H_

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
                * Attack backtracking node
                */
                class AttackSourceNode : public AbstractModel
                {
                public:
                    AttackSourceNode();
                    ~AttackSourceNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event ID. If this parameter is left blank, no corresponding event exists.
                     * @return EventId Event ID. If this parameter is left blank, no corresponding event exists.
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置Event ID. If this parameter is left blank, no corresponding event exists.
                     * @param _eventId Event ID. If this parameter is left blank, no corresponding event exists.
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取BRUTEFORCE: password cracking; MALWARE: Trojan; BASH: high-risk command; RISK_DNS: malicious request; LOGIN: cross-region log-in; HOST: host node; TIME_ORDER: general node.
                     * @return EventType BRUTEFORCE: password cracking; MALWARE: Trojan; BASH: high-risk command; RISK_DNS: malicious request; LOGIN: cross-region log-in; HOST: host node; TIME_ORDER: general node.
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置BRUTEFORCE: password cracking; MALWARE: Trojan; BASH: high-risk command; RISK_DNS: malicious request; LOGIN: cross-region log-in; HOST: host node; TIME_ORDER: general node.
                     * @param _eventType BRUTEFORCE: password cracking; MALWARE: Trojan; BASH: high-risk command; RISK_DNS: malicious request; LOGIN: cross-region log-in; HOST: host node; TIME_ORDER: general node.
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Node IP address. When the node is HOST, the value is the IP address of this node.
                     * @return Ip Node IP address. When the node is HOST, the value is the IP address of this node.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Node IP address. When the node is HOST, the value is the IP address of this node.
                     * @param _ip Node IP address. When the node is HOST, the value is the IP address of this node.
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
                     * 获取Level. 0: prompt; 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
                     * @return Level Level. 0: prompt; 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Level. 0: prompt; 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
                     * @param _level Level. 0: prompt; 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Node ID
                     * @return NodeId Node ID
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node ID
                     * @param _nodeId Node ID
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

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
                     * 获取General node description
                     * @return NodeDesc General node description
                     * 
                     */
                    std::string GetNodeDesc() const;

                    /**
                     * 设置General node description
                     * @param _nodeDesc General node description
                     * 
                     */
                    void SetNodeDesc(const std::string& _nodeDesc);

                    /**
                     * 判断参数 NodeDesc 是否已赋值
                     * @return NodeDesc 是否已赋值
                     * 
                     */
                    bool NodeDescHasBeenSet() const;

                    /**
                     * 获取Timeline number. Nodes with the same number belong to the same timeline.
                     * @return TimeLineNum Timeline number. Nodes with the same number belong to the same timeline.
                     * 
                     */
                    uint64_t GetTimeLineNum() const;

                    /**
                     * 设置Timeline number. Nodes with the same number belong to the same timeline.
                     * @param _timeLineNum Timeline number. Nodes with the same number belong to the same timeline.
                     * 
                     */
                    void SetTimeLineNum(const uint64_t& _timeLineNum);

                    /**
                     * 判断参数 TimeLineNum 是否已赋值
                     * @return TimeLineNum 是否已赋值
                     * 
                     */
                    bool TimeLineNumHasBeenSet() const;

                    /**
                     * 获取Node details
                     * @return NodeDetail Node details
                     * 
                     */
                    std::string GetNodeDetail() const;

                    /**
                     * 设置Node details
                     * @param _nodeDetail Node details
                     * 
                     */
                    void SetNodeDetail(const std::string& _nodeDetail);

                    /**
                     * 判断参数 NodeDetail 是否已赋值
                     * @return NodeDetail 是否已赋值
                     * 
                     */
                    bool NodeDetailHasBeenSet() const;

                private:

                    /**
                     * Event ID. If this parameter is left blank, no corresponding event exists.
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * BRUTEFORCE: password cracking; MALWARE: Trojan; BASH: high-risk command; RISK_DNS: malicious request; LOGIN: cross-region log-in; HOST: host node; TIME_ORDER: general node.
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Node IP address. When the node is HOST, the value is the IP address of this node.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Level. 0: prompt; 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Node ID
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * General node description
                     */
                    std::string m_nodeDesc;
                    bool m_nodeDescHasBeenSet;

                    /**
                     * Timeline number. Nodes with the same number belong to the same timeline.
                     */
                    uint64_t m_timeLineNum;
                    bool m_timeLineNumHasBeenSet;

                    /**
                     * Node details
                     */
                    std::string m_nodeDetail;
                    bool m_nodeDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCENODE_H_
