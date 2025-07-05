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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETETOPICSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETETOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/TopicRecord.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DeleteTopics request structure.
                */
                class DeleteTopicsRequest : public AbstractModel
                {
                public:
                    DeleteTopicsRequest();
                    ~DeleteTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Topic set. Up to 20 topics can be deleted at a time.
                     * @return TopicSets Topic set. Up to 20 topics can be deleted at a time.
                     * 
                     */
                    std::vector<TopicRecord> GetTopicSets() const;

                    /**
                     * 设置Topic set. Up to 20 topics can be deleted at a time.
                     * @param _topicSets Topic set. Up to 20 topics can be deleted at a time.
                     * 
                     */
                    void SetTopicSets(const std::vector<TopicRecord>& _topicSets);

                    /**
                     * 判断参数 TopicSets 是否已赋值
                     * @return TopicSets 是否已赋值
                     * 
                     */
                    bool TopicSetsHasBeenSet() const;

                    /**
                     * 获取Pulsar cluster ID.
                     * @return ClusterId Pulsar cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar cluster ID.
                     * @param _clusterId Pulsar cluster ID.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Environment (namespace) name.
                     * @return EnvironmentId Environment (namespace) name.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment (namespace) name.
                     * @param _environmentId Environment (namespace) name.
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Whether to forcibly delete a topic. Default value: `false`.
                     * @return Force Whether to forcibly delete a topic. Default value: `false`.
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置Whether to forcibly delete a topic. Default value: `false`.
                     * @param _force Whether to forcibly delete a topic. Default value: `false`.
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * Topic set. Up to 20 topics can be deleted at a time.
                     */
                    std::vector<TopicRecord> m_topicSets;
                    bool m_topicSetsHasBeenSet;

                    /**
                     * Pulsar cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Environment (namespace) name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Whether to forcibly delete a topic. Default value: `false`.
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETETOPICSREQUEST_H_
