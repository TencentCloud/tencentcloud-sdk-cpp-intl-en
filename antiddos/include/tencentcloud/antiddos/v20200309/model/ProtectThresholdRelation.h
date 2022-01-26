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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTECTTHRESHOLDRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTECTTHRESHOLDRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>
#include <tencentcloud/antiddos/v20200309/model/ListenerCcThreholdConfig.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Protection threshold configuration information
                */
                class ProtectThresholdRelation : public AbstractModel
                {
                public:
                    ProtectThresholdRelation();
                    ~ProtectThresholdRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DDoS protection level:
`low`: loose protection
`middle`: medium protection
`high`: strict protection
]
                     * @return DDoSLevel DDoS protection level:
`low`: loose protection
`middle`: medium protection
`high`: strict protection
]
                     */
                    std::string GetDDoSLevel() const;

                    /**
                     * 设置DDoS protection level:
`low`: loose protection
`middle`: medium protection
`high`: strict protection
]
                     * @param DDoSLevel DDoS protection level:
`low`: loose protection
`middle`: medium protection
`high`: strict protection
]
                     */
                    void SetDDoSLevel(const std::string& _dDoSLevel);

                    /**
                     * 判断参数 DDoSLevel 是否已赋值
                     * @return DDoSLevel 是否已赋值
                     */
                    bool DDoSLevelHasBeenSet() const;

                    /**
                     * 获取DDoS cleansing threshold (in Mbps)
                     * @return DDoSThreshold DDoS cleansing threshold (in Mbps)
                     */
                    uint64_t GetDDoSThreshold() const;

                    /**
                     * 设置DDoS cleansing threshold (in Mbps)
                     * @param DDoSThreshold DDoS cleansing threshold (in Mbps)
                     */
                    void SetDDoSThreshold(const uint64_t& _dDoSThreshold);

                    /**
                     * 判断参数 DDoSThreshold 是否已赋值
                     * @return DDoSThreshold 是否已赋值
                     */
                    bool DDoSThresholdHasBeenSet() const;

                    /**
                     * 获取DDoS AI protection switch:
`on`: enabled
`off`: disabled
]
                     * @return DDoSAI DDoS AI protection switch:
`on`: enabled
`off`: disabled
]
                     */
                    std::string GetDDoSAI() const;

                    /**
                     * 设置DDoS AI protection switch:
`on`: enabled
`off`: disabled
]
                     * @param DDoSAI DDoS AI protection switch:
`on`: enabled
`off`: disabled
]
                     */
                    void SetDDoSAI(const std::string& _dDoSAI);

                    /**
                     * 判断参数 DDoSAI 是否已赋值
                     * @return DDoSAI 是否已赋值
                     */
                    bool DDoSAIHasBeenSet() const;

                    /**
                     * 获取CC cleansing switch
`0`: disabled
`1`: enabled
]
                     * @return CCEnable CC cleansing switch
`0`: disabled
`1`: enabled
]
                     */
                    uint64_t GetCCEnable() const;

                    /**
                     * 设置CC cleansing switch
`0`: disabled
`1`: enabled
]
                     * @param CCEnable CC cleansing switch
`0`: disabled
`1`: enabled
]
                     */
                    void SetCCEnable(const uint64_t& _cCEnable);

                    /**
                     * 判断参数 CCEnable 是否已赋值
                     * @return CCEnable 是否已赋值
                     */
                    bool CCEnableHasBeenSet() const;

                    /**
                     * 获取CC cleansing threshold (in QPS)
                     * @return CCThreshold CC cleansing threshold (in QPS)
                     */
                    uint64_t GetCCThreshold() const;

                    /**
                     * 设置CC cleansing threshold (in QPS)
                     * @param CCThreshold CC cleansing threshold (in QPS)
                     */
                    void SetCCThreshold(const uint64_t& _cCThreshold);

                    /**
                     * 判断参数 CCThreshold 是否已赋值
                     * @return CCThreshold 是否已赋值
                     */
                    bool CCThresholdHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance configured
                     * @return InstanceDetailList Anti-DDoS instance configured
                     */
                    std::vector<InstanceRelation> GetInstanceDetailList() const;

                    /**
                     * 设置Anti-DDoS instance configured
                     * @param InstanceDetailList Anti-DDoS instance configured
                     */
                    void SetInstanceDetailList(const std::vector<InstanceRelation>& _instanceDetailList);

                    /**
                     * 判断参数 InstanceDetailList 是否已赋值
                     * @return InstanceDetailList 是否已赋值
                     */
                    bool InstanceDetailListHasBeenSet() const;

                    /**
                     * 获取Domain name and protocol protection thresholds
                     * @return ListenerCcThresholdList Domain name and protocol protection thresholds
                     */
                    std::vector<ListenerCcThreholdConfig> GetListenerCcThresholdList() const;

                    /**
                     * 设置Domain name and protocol protection thresholds
                     * @param ListenerCcThresholdList Domain name and protocol protection thresholds
                     */
                    void SetListenerCcThresholdList(const std::vector<ListenerCcThreholdConfig>& _listenerCcThresholdList);

                    /**
                     * 判断参数 ListenerCcThresholdList 是否已赋值
                     * @return ListenerCcThresholdList 是否已赋值
                     */
                    bool ListenerCcThresholdListHasBeenSet() const;

                private:

                    /**
                     * DDoS protection level:
`low`: loose protection
`middle`: medium protection
`high`: strict protection
]
                     */
                    std::string m_dDoSLevel;
                    bool m_dDoSLevelHasBeenSet;

                    /**
                     * DDoS cleansing threshold (in Mbps)
                     */
                    uint64_t m_dDoSThreshold;
                    bool m_dDoSThresholdHasBeenSet;

                    /**
                     * DDoS AI protection switch:
`on`: enabled
`off`: disabled
]
                     */
                    std::string m_dDoSAI;
                    bool m_dDoSAIHasBeenSet;

                    /**
                     * CC cleansing switch
`0`: disabled
`1`: enabled
]
                     */
                    uint64_t m_cCEnable;
                    bool m_cCEnableHasBeenSet;

                    /**
                     * CC cleansing threshold (in QPS)
                     */
                    uint64_t m_cCThreshold;
                    bool m_cCThresholdHasBeenSet;

                    /**
                     * Anti-DDoS instance configured
                     */
                    std::vector<InstanceRelation> m_instanceDetailList;
                    bool m_instanceDetailListHasBeenSet;

                    /**
                     * Domain name and protocol protection thresholds
                     */
                    std::vector<ListenerCcThreholdConfig> m_listenerCcThresholdList;
                    bool m_listenerCcThresholdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTECTTHRESHOLDRELATION_H_
