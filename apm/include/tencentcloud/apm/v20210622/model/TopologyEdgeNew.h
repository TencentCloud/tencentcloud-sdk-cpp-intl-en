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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYEDGENEW_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYEDGENEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Topology edge definition
                */
                class TopologyEdgeNew : public AbstractModel
                {
                public:
                    TopologyEdgeNew();
                    ~TopologyEdgeNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source node
                     * @return Source Source node
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Source node
                     * @param _source Source node
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
                     * 获取Edge ID
                     * @return Id Edge ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Edge ID
                     * @param _id Edge ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Edge weight
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Weight Edge weight
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetWeight() const;

                    /**
                     * 设置Edge weight
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weight Edge weight
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeight(const double& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Target node
                     * @return Target Target node
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Target node
                     * @param _target Target node
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取response time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Duration response time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置response time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _duration response time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Error rate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrRate Error rate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetErrRate() const;

                    /**
                     * 设置Error rate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errRate Error rate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrRate(const double& _errRate);

                    /**
                     * 判断参数 ErrRate 是否已赋值
                     * @return ErrRate 是否已赋值
                     * 
                     */
                    bool ErrRateHasBeenSet() const;

                    /**
                     * 获取throughput
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Qps throughput
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetQps() const;

                    /**
                     * 设置throughput
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qps throughput
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQps(const double& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取Edge type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Edge type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Edge type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Edge type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Edge color
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Color Edge color
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置Edge color
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _color Edge color
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取SQL call count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SqlRequestCount SQL call count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetSqlRequestCount() const;

                    /**
                     * 设置SQL call count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sqlRequestCount SQL call count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSqlRequestCount(const double& _sqlRequestCount);

                    /**
                     * 判断参数 SqlRequestCount 是否已赋值
                     * @return SqlRequestCount 是否已赋值
                     * 
                     */
                    bool SqlRequestCountHasBeenSet() const;

                    /**
                     * 获取SQL call error count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SqlErrorRequestCount SQL call error count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetSqlErrorRequestCount() const;

                    /**
                     * 设置SQL call error count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sqlErrorRequestCount SQL call error count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSqlErrorRequestCount(const double& _sqlErrorRequestCount);

                    /**
                     * 判断参数 SqlErrorRequestCount 是否已赋值
                     * @return SqlErrorRequestCount 是否已赋值
                     * 
                     */
                    bool SqlErrorRequestCountHasBeenSet() const;

                    /**
                     * 获取Source node type on the edge of the topology diagram. Application/MQ/DB.
                     * @return SourceComp Source node type on the edge of the topology diagram. Application/MQ/DB.
                     * 
                     */
                    std::string GetSourceComp() const;

                    /**
                     * 设置Source node type on the edge of the topology diagram. Application/MQ/DB.
                     * @param _sourceComp Source node type on the edge of the topology diagram. Application/MQ/DB.
                     * 
                     */
                    void SetSourceComp(const std::string& _sourceComp);

                    /**
                     * 判断参数 SourceComp 是否已赋值
                     * @return SourceComp 是否已赋值
                     * 
                     */
                    bool SourceCompHasBeenSet() const;

                    /**
                     * 获取Target node type on the edge of the topology diagram. Application/MQ/DB.
                     * @return TargetComp Target node type on the edge of the topology diagram. Application/MQ/DB.
                     * 
                     */
                    std::string GetTargetComp() const;

                    /**
                     * 设置Target node type on the edge of the topology diagram. Application/MQ/DB.
                     * @param _targetComp Target node type on the edge of the topology diagram. Application/MQ/DB.
                     * 
                     */
                    void SetTargetComp(const std::string& _targetComp);

                    /**
                     * 判断参数 TargetComp 是否已赋值
                     * @return TargetComp 是否已赋值
                     * 
                     */
                    bool TargetCompHasBeenSet() const;

                private:

                    /**
                     * Source node
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Edge ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Edge weight
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Target node
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * response time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Error rate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_errRate;
                    bool m_errRateHasBeenSet;

                    /**
                     * throughput
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * Edge type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Edge color
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * SQL call count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_sqlRequestCount;
                    bool m_sqlRequestCountHasBeenSet;

                    /**
                     * SQL call error count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_sqlErrorRequestCount;
                    bool m_sqlErrorRequestCountHasBeenSet;

                    /**
                     * Source node type on the edge of the topology diagram. Application/MQ/DB.
                     */
                    std::string m_sourceComp;
                    bool m_sourceCompHasBeenSet;

                    /**
                     * Target node type on the edge of the topology diagram. Application/MQ/DB.
                     */
                    std::string m_targetComp;
                    bool m_targetCompHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYEDGENEW_H_
