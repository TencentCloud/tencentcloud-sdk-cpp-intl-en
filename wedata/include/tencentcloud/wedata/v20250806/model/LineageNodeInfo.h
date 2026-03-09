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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGENODEINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGENODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/LineageResource.h>
#include <tencentcloud/wedata/v20250806/model/LineageRelation.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * LineageNodeInfo lineage relationship entity.
                */
                class LineageNodeInfo : public AbstractModel
                {
                public:
                    LineageNodeInfo();
                    ~LineageNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Current resource.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Resource Current resource.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LineageResource GetResource() const;

                    /**
                     * 设置Current resource.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resource Current resource.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResource(const LineageResource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Relationship.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Relation Relationship.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LineageRelation GetRelation() const;

                    /**
                     * 设置Relationship.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _relation Relationship.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRelation(const LineageRelation& _relation);

                    /**
                     * 判断参数 Relation 是否已赋值
                     * @return Relation 是否已赋值
                     * 
                     */
                    bool RelationHasBeenSet() const;

                    /**
                     * 获取Upstream quantity.
                     * @return DownStreamCount Upstream quantity.
                     * 
                     */
                    int64_t GetDownStreamCount() const;

                    /**
                     * 设置Upstream quantity.
                     * @param _downStreamCount Upstream quantity.
                     * 
                     */
                    void SetDownStreamCount(const int64_t& _downStreamCount);

                    /**
                     * 判断参数 DownStreamCount 是否已赋值
                     * @return DownStreamCount 是否已赋值
                     * 
                     */
                    bool DownStreamCountHasBeenSet() const;

                    /**
                     * 获取Downstream quantity.
                     * @return UpStreamCount Downstream quantity.
                     * 
                     */
                    int64_t GetUpStreamCount() const;

                    /**
                     * 设置Downstream quantity.
                     * @param _upStreamCount Downstream quantity.
                     * 
                     */
                    void SetUpStreamCount(const int64_t& _upStreamCount);

                    /**
                     * 判断参数 UpStreamCount 是否已赋值
                     * @return UpStreamCount 是否已赋值
                     * 
                     */
                    bool UpStreamCountHasBeenSet() const;

                private:

                    /**
                     * Current resource.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LineageResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Relationship.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LineageRelation m_relation;
                    bool m_relationHasBeenSet;

                    /**
                     * Upstream quantity.
                     */
                    int64_t m_downStreamCount;
                    bool m_downStreamCountHasBeenSet;

                    /**
                     * Downstream quantity.
                     */
                    int64_t m_upStreamCount;
                    bool m_upStreamCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGENODEINFO_H_
