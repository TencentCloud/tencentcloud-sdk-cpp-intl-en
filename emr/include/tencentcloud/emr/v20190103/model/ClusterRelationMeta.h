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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERRELATIONMETA_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERRELATIONMETA_H_

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
                * Inter-cluster binding and usage information.
                */
                class ClusterRelationMeta : public AbstractModel
                {
                public:
                    ClusterRelationMeta();
                    ~ClusterRelationMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster type.
                     * @return ClusterType Cluster type.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster type.
                     * @param _clusterType Cluster type.
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Cluster ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterIdList Cluster ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetClusterIdList() const;

                    /**
                     * 设置Cluster ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterIdList Cluster ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterIdList(const std::vector<std::string>& _clusterIdList);

                    /**
                     * 判断参数 ClusterIdList 是否已赋值
                     * @return ClusterIdList 是否已赋值
                     * 
                     */
                    bool ClusterIdListHasBeenSet() const;

                private:

                    /**
                     * Cluster type.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Cluster ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_clusterIdList;
                    bool m_clusterIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERRELATIONMETA_H_
