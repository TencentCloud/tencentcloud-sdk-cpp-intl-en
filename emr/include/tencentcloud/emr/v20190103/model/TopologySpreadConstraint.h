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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TOPOLOGYSPREADCONSTRAINT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TOPOLOGYSPREADCONSTRAINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/LabelSelector.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Scheduling topology distribution.
                */
                class TopologySpreadConstraint : public AbstractModel
                {
                public:
                    TopologySpreadConstraint();
                    ~TopologySpreadConstraint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Maximum deviation value.</p>
                     * @return MaxSkew <p>Maximum deviation value.</p>
                     * 
                     */
                    int64_t GetMaxSkew() const;

                    /**
                     * 设置<p>Maximum deviation value.</p>
                     * @param _maxSkew <p>Maximum deviation value.</p>
                     * 
                     */
                    void SetMaxSkew(const int64_t& _maxSkew);

                    /**
                     * 判断参数 MaxSkew 是否已赋值
                     * @return MaxSkew 是否已赋值
                     * 
                     */
                    bool MaxSkewHasBeenSet() const;

                    /**
                     * 获取<p>Topology domain key.</p>
                     * @return TopologyKey <p>Topology domain key.</p>
                     * 
                     */
                    std::string GetTopologyKey() const;

                    /**
                     * 设置<p>Topology domain key.</p>
                     * @param _topologyKey <p>Topology domain key.</p>
                     * 
                     */
                    void SetTopologyKey(const std::string& _topologyKey);

                    /**
                     * 判断参数 TopologyKey 是否已赋值
                     * @return TopologyKey 是否已赋值
                     * 
                     */
                    bool TopologyKeyHasBeenSet() const;

                    /**
                     * 获取<p>Handling policy, which is used when constraints are not met.</p>
                     * @return WhenUnsatisfiable <p>Handling policy, which is used when constraints are not met.</p>
                     * 
                     */
                    std::string GetWhenUnsatisfiable() const;

                    /**
                     * 设置<p>Handling policy, which is used when constraints are not met.</p>
                     * @param _whenUnsatisfiable <p>Handling policy, which is used when constraints are not met.</p>
                     * 
                     */
                    void SetWhenUnsatisfiable(const std::string& _whenUnsatisfiable);

                    /**
                     * 判断参数 WhenUnsatisfiable 是否已赋值
                     * @return WhenUnsatisfiable 是否已赋值
                     * 
                     */
                    bool WhenUnsatisfiableHasBeenSet() const;

                    /**
                     * 获取<p>Tag selector.</p>
                     * @return LabelSelector <p>Tag selector.</p>
                     * 
                     */
                    LabelSelector GetLabelSelector() const;

                    /**
                     * 设置<p>Tag selector.</p>
                     * @param _labelSelector <p>Tag selector.</p>
                     * 
                     */
                    void SetLabelSelector(const LabelSelector& _labelSelector);

                    /**
                     * 判断参数 LabelSelector 是否已赋值
                     * @return LabelSelector 是否已赋值
                     * 
                     */
                    bool LabelSelectorHasBeenSet() const;

                    /**
                     * 获取<p>Minimum number of topology domains.</p>
                     * @return MinDomains <p>Minimum number of topology domains.</p>
                     * 
                     */
                    int64_t GetMinDomains() const;

                    /**
                     * 设置<p>Minimum number of topology domains.</p>
                     * @param _minDomains <p>Minimum number of topology domains.</p>
                     * 
                     */
                    void SetMinDomains(const int64_t& _minDomains);

                    /**
                     * 判断参数 MinDomains 是否已赋值
                     * @return MinDomains 是否已赋值
                     * 
                     */
                    bool MinDomainsHasBeenSet() const;

                    /**
                     * 获取<p>Node affinity policy.</p>
                     * @return NodeAffinityPolicy <p>Node affinity policy.</p>
                     * 
                     */
                    std::string GetNodeAffinityPolicy() const;

                    /**
                     * 设置<p>Node affinity policy.</p>
                     * @param _nodeAffinityPolicy <p>Node affinity policy.</p>
                     * 
                     */
                    void SetNodeAffinityPolicy(const std::string& _nodeAffinityPolicy);

                    /**
                     * 判断参数 NodeAffinityPolicy 是否已赋值
                     * @return NodeAffinityPolicy 是否已赋值
                     * 
                     */
                    bool NodeAffinityPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Node taint policy.</p>
                     * @return NodeTaintsPolicy <p>Node taint policy.</p>
                     * 
                     */
                    std::string GetNodeTaintsPolicy() const;

                    /**
                     * 设置<p>Node taint policy.</p>
                     * @param _nodeTaintsPolicy <p>Node taint policy.</p>
                     * 
                     */
                    void SetNodeTaintsPolicy(const std::string& _nodeTaintsPolicy);

                    /**
                     * 判断参数 NodeTaintsPolicy 是否已赋值
                     * @return NodeTaintsPolicy 是否已赋值
                     * 
                     */
                    bool NodeTaintsPolicyHasBeenSet() const;

                    /**
                     * 获取<p>List of tag keys to be matched.</p>
                     * @return MatchLabelKeys <p>List of tag keys to be matched.</p>
                     * 
                     */
                    std::vector<std::string> GetMatchLabelKeys() const;

                    /**
                     * 设置<p>List of tag keys to be matched.</p>
                     * @param _matchLabelKeys <p>List of tag keys to be matched.</p>
                     * 
                     */
                    void SetMatchLabelKeys(const std::vector<std::string>& _matchLabelKeys);

                    /**
                     * 判断参数 MatchLabelKeys 是否已赋值
                     * @return MatchLabelKeys 是否已赋值
                     * 
                     */
                    bool MatchLabelKeysHasBeenSet() const;

                private:

                    /**
                     * <p>Maximum deviation value.</p>
                     */
                    int64_t m_maxSkew;
                    bool m_maxSkewHasBeenSet;

                    /**
                     * <p>Topology domain key.</p>
                     */
                    std::string m_topologyKey;
                    bool m_topologyKeyHasBeenSet;

                    /**
                     * <p>Handling policy, which is used when constraints are not met.</p>
                     */
                    std::string m_whenUnsatisfiable;
                    bool m_whenUnsatisfiableHasBeenSet;

                    /**
                     * <p>Tag selector.</p>
                     */
                    LabelSelector m_labelSelector;
                    bool m_labelSelectorHasBeenSet;

                    /**
                     * <p>Minimum number of topology domains.</p>
                     */
                    int64_t m_minDomains;
                    bool m_minDomainsHasBeenSet;

                    /**
                     * <p>Node affinity policy.</p>
                     */
                    std::string m_nodeAffinityPolicy;
                    bool m_nodeAffinityPolicyHasBeenSet;

                    /**
                     * <p>Node taint policy.</p>
                     */
                    std::string m_nodeTaintsPolicy;
                    bool m_nodeTaintsPolicyHasBeenSet;

                    /**
                     * <p>List of tag keys to be matched.</p>
                     */
                    std::vector<std::string> m_matchLabelKeys;
                    bool m_matchLabelKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TOPOLOGYSPREADCONSTRAINT_H_
