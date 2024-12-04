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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSUBSCRIBEOBJECTSREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSUBSCRIBEOBJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/ModifiedSubscribeObject.h>
#include <tencentcloud/dts/v20211206/model/DistributeRule.h>
#include <tencentcloud/dts/v20211206/model/PipelineInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifySubscribeObjects request structure.
                */
                class ModifySubscribeObjectsRequest : public AbstractModel
                {
                public:
                    ModifySubscribeObjectsRequest();
                    ~ModifySubscribeObjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data subscription instance ID
                     * @return SubscribeId Data subscription instance ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置Data subscription instance ID
                     * @param _subscribeId Data subscription instance ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取Data subscription type. Valid values for non-mongo task: 0 (full instance update); 1 (data update); 2 (structure update); 3 (data + structure update). Valid values for mongo task: 0 (full instance update); 4 (subscribe to a table); 5 (subscribe to a collection).
                     * @return SubscribeObjectType Data subscription type. Valid values for non-mongo task: 0 (full instance update); 1 (data update); 2 (structure update); 3 (data + structure update). Valid values for mongo task: 0 (full instance update); 4 (subscribe to a table); 5 (subscribe to a collection).
                     * 
                     */
                    int64_t GetSubscribeObjectType() const;

                    /**
                     * 设置Data subscription type. Valid values for non-mongo task: 0 (full instance update); 1 (data update); 2 (structure update); 3 (data + structure update). Valid values for mongo task: 0 (full instance update); 4 (subscribe to a table); 5 (subscribe to a collection).
                     * @param _subscribeObjectType Data subscription type. Valid values for non-mongo task: 0 (full instance update); 1 (data update); 2 (structure update); 3 (data + structure update). Valid values for mongo task: 0 (full instance update); 4 (subscribe to a table); 5 (subscribe to a collection).
                     * 
                     */
                    void SetSubscribeObjectType(const int64_t& _subscribeObjectType);

                    /**
                     * 判断参数 SubscribeObjectType 是否已赋值
                     * @return SubscribeObjectType 是否已赋值
                     * 
                     */
                    bool SubscribeObjectTypeHasBeenSet() const;

                    /**
                     * 获取Modified subscription database table information. It will replace the original subscription object, this field is required unless SubscribeObjectType = 0 or 2.
                     * @return Objects Modified subscription database table information. It will replace the original subscription object, this field is required unless SubscribeObjectType = 0 or 2.
                     * 
                     */
                    std::vector<ModifiedSubscribeObject> GetObjects() const;

                    /**
                     * 设置Modified subscription database table information. It will replace the original subscription object, this field is required unless SubscribeObjectType = 0 or 2.
                     * @param _objects Modified subscription database table information. It will replace the original subscription object, this field is required unless SubscribeObjectType = 0 or 2.
                     * 
                     */
                    void SetObjects(const std::vector<ModifiedSubscribeObject>& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取Kafka partitioning policy. If left blank, it will remain unchanged by default. If filled, it will replace the original policy.
                     * @return DistributeRules Kafka partitioning policy. If left blank, it will remain unchanged by default. If filled, it will replace the original policy.
                     * 
                     */
                    std::vector<DistributeRule> GetDistributeRules() const;

                    /**
                     * 设置Kafka partitioning policy. If left blank, it will remain unchanged by default. If filled, it will replace the original policy.
                     * @param _distributeRules Kafka partitioning policy. If left blank, it will remain unchanged by default. If filled, it will replace the original policy.
                     * 
                     */
                    void SetDistributeRules(const std::vector<DistributeRule>& _distributeRules);

                    /**
                     * 判断参数 DistributeRules 是否已赋值
                     * @return DistributeRules 是否已赋值
                     * 
                     */
                    bool DistributeRulesHasBeenSet() const;

                    /**
                     * 获取Default partitioning policy. Data that does not meet the regex in DistributeRules will be partitioned according to the default partitioning policy.Default strategies supported by non-mongo products: table - partitioned by table name, pk - partitioned by table name + primary key. Mongo's default strategy only supports: collection-partitioned by collection name.This field is used in conjunction with DistributeRules. If DistributeRules is configured, this field is also required. If this field is configured, it is considered as configuring a DistributeRules, and the original partitioning policy will also be overwritten.
                     * @return DefaultRuleType Default partitioning policy. Data that does not meet the regex in DistributeRules will be partitioned according to the default partitioning policy.Default strategies supported by non-mongo products: table - partitioned by table name, pk - partitioned by table name + primary key. Mongo's default strategy only supports: collection-partitioned by collection name.This field is used in conjunction with DistributeRules. If DistributeRules is configured, this field is also required. If this field is configured, it is considered as configuring a DistributeRules, and the original partitioning policy will also be overwritten.
                     * 
                     */
                    std::string GetDefaultRuleType() const;

                    /**
                     * 设置Default partitioning policy. Data that does not meet the regex in DistributeRules will be partitioned according to the default partitioning policy.Default strategies supported by non-mongo products: table - partitioned by table name, pk - partitioned by table name + primary key. Mongo's default strategy only supports: collection-partitioned by collection name.This field is used in conjunction with DistributeRules. If DistributeRules is configured, this field is also required. If this field is configured, it is considered as configuring a DistributeRules, and the original partitioning policy will also be overwritten.
                     * @param _defaultRuleType Default partitioning policy. Data that does not meet the regex in DistributeRules will be partitioned according to the default partitioning policy.Default strategies supported by non-mongo products: table - partitioned by table name, pk - partitioned by table name + primary key. Mongo's default strategy only supports: collection-partitioned by collection name.This field is used in conjunction with DistributeRules. If DistributeRules is configured, this field is also required. If this field is configured, it is considered as configuring a DistributeRules, and the original partitioning policy will also be overwritten.
                     * 
                     */
                    void SetDefaultRuleType(const std::string& _defaultRuleType);

                    /**
                     * 判断参数 DefaultRuleType 是否已赋值
                     * @return DefaultRuleType 是否已赋值
                     * 
                     */
                    bool DefaultRuleTypeHasBeenSet() const;

                    /**
                     * 获取Mongo output aggregation settings, optional for Mongo tasks. If left blank, no modification will be made by default.
                     * @return PipelineInfo Mongo output aggregation settings, optional for Mongo tasks. If left blank, no modification will be made by default.
                     * 
                     */
                    std::vector<PipelineInfo> GetPipelineInfo() const;

                    /**
                     * 设置Mongo output aggregation settings, optional for Mongo tasks. If left blank, no modification will be made by default.
                     * @param _pipelineInfo Mongo output aggregation settings, optional for Mongo tasks. If left blank, no modification will be made by default.
                     * 
                     */
                    void SetPipelineInfo(const std::vector<PipelineInfo>& _pipelineInfo);

                    /**
                     * 判断参数 PipelineInfo 是否已赋值
                     * @return PipelineInfo 是否已赋值
                     * 
                     */
                    bool PipelineInfoHasBeenSet() const;

                private:

                    /**
                     * Data subscription instance ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * Data subscription type. Valid values for non-mongo task: 0 (full instance update); 1 (data update); 2 (structure update); 3 (data + structure update). Valid values for mongo task: 0 (full instance update); 4 (subscribe to a table); 5 (subscribe to a collection).
                     */
                    int64_t m_subscribeObjectType;
                    bool m_subscribeObjectTypeHasBeenSet;

                    /**
                     * Modified subscription database table information. It will replace the original subscription object, this field is required unless SubscribeObjectType = 0 or 2.
                     */
                    std::vector<ModifiedSubscribeObject> m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * Kafka partitioning policy. If left blank, it will remain unchanged by default. If filled, it will replace the original policy.
                     */
                    std::vector<DistributeRule> m_distributeRules;
                    bool m_distributeRulesHasBeenSet;

                    /**
                     * Default partitioning policy. Data that does not meet the regex in DistributeRules will be partitioned according to the default partitioning policy.Default strategies supported by non-mongo products: table - partitioned by table name, pk - partitioned by table name + primary key. Mongo's default strategy only supports: collection-partitioned by collection name.This field is used in conjunction with DistributeRules. If DistributeRules is configured, this field is also required. If this field is configured, it is considered as configuring a DistributeRules, and the original partitioning policy will also be overwritten.
                     */
                    std::string m_defaultRuleType;
                    bool m_defaultRuleTypeHasBeenSet;

                    /**
                     * Mongo output aggregation settings, optional for Mongo tasks. If left blank, no modification will be made by default.
                     */
                    std::vector<PipelineInfo> m_pipelineInfo;
                    bool m_pipelineInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSUBSCRIBEOBJECTSREQUEST_H_
