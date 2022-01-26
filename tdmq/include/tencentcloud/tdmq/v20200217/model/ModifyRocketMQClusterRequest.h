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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQCLUSTERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyRocketMQCluster request structure.
                */
                class ModifyRocketMQClusterRequest : public AbstractModel
                {
                public:
                    ModifyRocketMQClusterRequest();
                    ~ModifyRocketMQClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取RocketMQ cluster ID
                     * @return ClusterId RocketMQ cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置RocketMQ cluster ID
                     * @param ClusterId RocketMQ cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取3–64 letters, digits, hyphens, and underscores
                     * @return ClusterName 3–64 letters, digits, hyphens, and underscores
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置3–64 letters, digits, hyphens, and underscores
                     * @param ClusterName 3–64 letters, digits, hyphens, and underscores
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Remarks (up to 128 characters)
                     * @return Remark Remarks (up to 128 characters)
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks (up to 128 characters)
                     * @param Remark Remarks (up to 128 characters)
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * RocketMQ cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 3–64 letters, digits, hyphens, and underscores
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Remarks (up to 128 characters)
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQCLUSTERREQUEST_H_
