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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERREADONLYVALUE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERREADONLYVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * List of cluster read-only switches
                */
                class ClusterReadOnlyValue : public AbstractModel
                {
                public:
                    ClusterReadOnlyValue();
                    ~ClusterReadOnlyValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取Read-only switch value
                     * @return ReadOnlyValue Read-only switch value
                     * 
                     */
                    std::string GetReadOnlyValue() const;

                    /**
                     * 设置Read-only switch value
                     * @param _readOnlyValue Read-only switch value
                     * 
                     */
                    void SetReadOnlyValue(const std::string& _readOnlyValue);

                    /**
                     * 判断参数 ReadOnlyValue 是否已赋值
                     * @return ReadOnlyValue 是否已赋值
                     * 
                     */
                    bool ReadOnlyValueHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Read-only switch value
                     */
                    std::string m_readOnlyValue;
                    bool m_readOnlyValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERREADONLYVALUE_H_
