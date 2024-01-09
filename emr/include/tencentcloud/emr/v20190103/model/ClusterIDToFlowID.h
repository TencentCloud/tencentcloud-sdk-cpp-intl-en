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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERIDTOFLOWID_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERIDTOFLOWID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Mapping of cluster ID and process ID
                */
                class ClusterIDToFlowID : public AbstractModel
                {
                public:
                    ClusterIDToFlowID();
                    ~ClusterIDToFlowID() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster IDNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId Cluster IDNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster IDNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterId Cluster IDNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowId Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFlowId() const;

                    /**
                     * 设置Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _flowId Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFlowId(const uint64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * Cluster IDNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERIDTOFLOWID_H_
