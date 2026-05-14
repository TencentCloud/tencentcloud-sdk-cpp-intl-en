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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYNODE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Position.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>
#include <tencentcloud/apm/v20210622/model/Resource.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Topology graph edge node
                */
                class TopologyNode : public AbstractModel
                {
                public:
                    TopologyNode();
                    ~TopologyNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Node type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Kind Node type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置Node type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kind Node type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取Node name
                     * @return Name Node name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Node name
                     * @param _name Node name
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
                     * 获取Node weight
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Weight Node weight
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetWeight() const;

                    /**
                     * 设置Node weight
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weight Node weight
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
                     * 获取Node color
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Color Node color
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置Node color
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _color Node color
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
                     * 获取Node type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Node type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Node type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Node type.
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
                     * 获取Node ID
                     * @return Id Node ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Node ID
                     * @param _id Node ID
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
                     * 获取Node size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Size Node size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置Node size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _size Node size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Indicate whether the node is a component
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsModule Indicate whether the node is a component
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsModule() const;

                    /**
                     * 设置Indicate whether the node is a component
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isModule Indicate whether the node is a component
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsModule(const bool& _isModule);

                    /**
                     * 判断参数 IsModule 是否已赋值
                     * @return IsModule 是否已赋值
                     * 
                     */
                    bool IsModuleHasBeenSet() const;

                    /**
                     * 获取Node location information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Position Node location information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Position GetPosition() const;

                    /**
                     * 设置Node location information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _position Node location information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPosition(const Position& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取Node tags
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Node tags
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置Node tags
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Node tags
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether the node supports drill-down.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CanDrillDown Whether the node supports drill-down.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetCanDrillDown() const;

                    /**
                     * 设置Whether the node supports drill-down.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _canDrillDown Whether the node supports drill-down.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCanDrillDown(const bool& _canDrillDown);

                    /**
                     * 判断参数 CanDrillDown 是否已赋值
                     * @return CanDrillDown 是否已赋值
                     * 
                     */
                    bool CanDrillDownHasBeenSet() const;

                    /**
                     * 获取Resource layer information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Resource Resource layer information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 设置Resource layer information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resource Resource layer information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResource(const Resource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Name of the topology node view.
                     * @return NodeView Name of the topology node view.
                     * 
                     */
                    std::string GetNodeView() const;

                    /**
                     * 设置Name of the topology node view.
                     * @param _nodeView Name of the topology node view.
                     * 
                     */
                    void SetNodeView(const std::string& _nodeView);

                    /**
                     * 判断参数 NodeView 是否已赋值
                     * @return NodeView 是否已赋值
                     * 
                     */
                    bool NodeViewHasBeenSet() const;

                    /**
                     * 获取Message consumption time of the MQ consumer, in ms.
                     * @return ConsumerDuration Message consumption time of the MQ consumer, in ms.
                     * 
                     */
                    double GetConsumerDuration() const;

                    /**
                     * 设置Message consumption time of the MQ consumer, in ms.
                     * @param _consumerDuration Message consumption time of the MQ consumer, in ms.
                     * 
                     */
                    void SetConsumerDuration(const double& _consumerDuration);

                    /**
                     * 判断参数 ConsumerDuration 是否已赋值
                     * @return ConsumerDuration 是否已赋值
                     * 
                     */
                    bool ConsumerDurationHasBeenSet() const;

                    /**
                     * 获取Error rate of the MQ consumers, in %.
                     * @return ConsumerErrRate Error rate of the MQ consumers, in %.
                     * 
                     */
                    double GetConsumerErrRate() const;

                    /**
                     * 设置Error rate of the MQ consumers, in %.
                     * @param _consumerErrRate Error rate of the MQ consumers, in %.
                     * 
                     */
                    void SetConsumerErrRate(const double& _consumerErrRate);

                    /**
                     * 判断参数 ConsumerErrRate 是否已赋值
                     * @return ConsumerErrRate 是否已赋值
                     * 
                     */
                    bool ConsumerErrRateHasBeenSet() const;

                    /**
                     * 获取Throughput of the message queue (MQ) consumer.
                     * @return ConsumerQps Throughput of the message queue (MQ) consumer.
                     * 
                     */
                    double GetConsumerQps() const;

                    /**
                     * 设置Throughput of the message queue (MQ) consumer.
                     * @param _consumerQps Throughput of the message queue (MQ) consumer.
                     * 
                     */
                    void SetConsumerQps(const double& _consumerQps);

                    /**
                     * 判断参数 ConsumerQps 是否已赋值
                     * @return ConsumerQps 是否已赋值
                     * 
                     */
                    bool ConsumerQpsHasBeenSet() const;

                    /**
                     * 获取Application ID.
                     * @return ServiceId Application ID.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Application ID.
                     * @param _serviceId Application ID.
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * Error rate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_errRate;
                    bool m_errRateHasBeenSet;

                    /**
                     * Node type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Node name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Node weight
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Node color
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * response time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * throughput
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * Node type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Node ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Node size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Indicate whether the node is a component
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isModule;
                    bool m_isModuleHasBeenSet;

                    /**
                     * Node location information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Position m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * Node tags
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether the node supports drill-down.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_canDrillDown;
                    bool m_canDrillDownHasBeenSet;

                    /**
                     * Resource layer information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Name of the topology node view.
                     */
                    std::string m_nodeView;
                    bool m_nodeViewHasBeenSet;

                    /**
                     * Message consumption time of the MQ consumer, in ms.
                     */
                    double m_consumerDuration;
                    bool m_consumerDurationHasBeenSet;

                    /**
                     * Error rate of the MQ consumers, in %.
                     */
                    double m_consumerErrRate;
                    bool m_consumerErrRateHasBeenSet;

                    /**
                     * Throughput of the message queue (MQ) consumer.
                     */
                    double m_consumerQps;
                    bool m_consumerQpsHasBeenSet;

                    /**
                     * Application ID.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYNODE_H_
