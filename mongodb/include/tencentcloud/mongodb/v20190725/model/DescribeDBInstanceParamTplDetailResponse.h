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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLDETAILRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceEnumParam.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceIntegerParam.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceTextParam.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceMultiParam.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceParamTplDetail response structure.
                */
                class DescribeDBInstanceParamTplDetailResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceParamTplDetailResponse();
                    ~DescribeDBInstanceParamTplDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Enumeration class parameter details list.
                     * @return InstanceEnumParams Enumeration class parameter details list.
                     * 
                     */
                    std::vector<InstanceEnumParam> GetInstanceEnumParams() const;

                    /**
                     * 判断参数 InstanceEnumParams 是否已赋值
                     * @return InstanceEnumParams 是否已赋值
                     * 
                     */
                    bool InstanceEnumParamsHasBeenSet() const;

                    /**
                     * 获取Integer parameter detail list.
                     * @return InstanceIntegerParams Integer parameter detail list.
                     * 
                     */
                    std::vector<InstanceIntegerParam> GetInstanceIntegerParams() const;

                    /**
                     * 判断参数 InstanceIntegerParams 是否已赋值
                     * @return InstanceIntegerParams 是否已赋值
                     * 
                     */
                    bool InstanceIntegerParamsHasBeenSet() const;

                    /**
                     * 获取Text parameter details list.
                     * @return InstanceTextParams Text parameter details list.
                     * 
                     */
                    std::vector<InstanceTextParam> GetInstanceTextParams() const;

                    /**
                     * 判断参数 InstanceTextParams 是否已赋值
                     * @return InstanceTextParams 是否已赋值
                     * 
                     */
                    bool InstanceTextParamsHasBeenSet() const;

                    /**
                     * 获取Multi-value parameter details list.
                     * @return InstanceMultiParams Multi-value parameter details list.
                     * 
                     */
                    std::vector<InstanceMultiParam> GetInstanceMultiParams() const;

                    /**
                     * 判断参数 InstanceMultiParams 是否已赋值
                     * @return InstanceMultiParams 是否已赋值
                     * 
                     */
                    bool InstanceMultiParamsHasBeenSet() const;

                    /**
                     * 获取Total number of parameters.
                     * @return TotalCount Total number of parameters.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Instance version supported by the template.
- MONGO_36_WT: Version of the MongoDB 3.6 WiredTiger storage engine.
- MONGO_40_WT: Version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: Version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: Version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: Version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
- MONGO_80_WT: version of the MongoDB 8.0 WiredTiger storage engine.
                     * @return MongoVersion Instance version supported by the template.
- MONGO_36_WT: Version of the MongoDB 3.6 WiredTiger storage engine.
- MONGO_40_WT: Version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: Version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: Version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: Version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
- MONGO_80_WT: version of the MongoDB 8.0 WiredTiger storage engine.
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     * 
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取Template adapts to cluster type.
- REPLSET: replica set instance.
- SHARD: shard instance.
-STANDALONE: Single-node instance.
                     * @return ClusterType Template adapts to cluster type.
- REPLSET: replica set instance.
- SHARD: shard instance.
-STANDALONE: Single-node instance.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Parameter template name.
                     * @return TplName Parameter template name.
                     * 
                     */
                    std::string GetTplName() const;

                    /**
                     * 判断参数 TplName 是否已赋值
                     * @return TplName 是否已赋值
                     * 
                     */
                    bool TplNameHasBeenSet() const;

                private:

                    /**
                     * Enumeration class parameter details list.
                     */
                    std::vector<InstanceEnumParam> m_instanceEnumParams;
                    bool m_instanceEnumParamsHasBeenSet;

                    /**
                     * Integer parameter detail list.
                     */
                    std::vector<InstanceIntegerParam> m_instanceIntegerParams;
                    bool m_instanceIntegerParamsHasBeenSet;

                    /**
                     * Text parameter details list.
                     */
                    std::vector<InstanceTextParam> m_instanceTextParams;
                    bool m_instanceTextParamsHasBeenSet;

                    /**
                     * Multi-value parameter details list.
                     */
                    std::vector<InstanceMultiParam> m_instanceMultiParams;
                    bool m_instanceMultiParamsHasBeenSet;

                    /**
                     * Total number of parameters.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Instance version supported by the template.
- MONGO_36_WT: Version of the MongoDB 3.6 WiredTiger storage engine.
- MONGO_40_WT: Version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: Version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: Version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: Version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
- MONGO_80_WT: version of the MongoDB 8.0 WiredTiger storage engine.
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * Template adapts to cluster type.
- REPLSET: replica set instance.
- SHARD: shard instance.
-STANDALONE: Single-node instance.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Parameter template name.
                     */
                    std::string m_tplName;
                    bool m_tplNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLDETAILRESPONSE_H_
