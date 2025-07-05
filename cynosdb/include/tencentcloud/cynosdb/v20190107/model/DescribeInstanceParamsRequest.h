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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCEPARAMSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCEPARAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeInstanceParams request structure.
                */
                class DescribeInstanceParamsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceParamsRequest();
                    ~DescribeInstanceParamsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Instance ID, which supports batch query.
                     * @return InstanceIds Instance ID, which supports batch query.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID, which supports batch query.
                     * @param _instanceIds Instance ID, which supports batch query.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Search condition for a parameter name, which supports fuzzy search.
                     * @return ParamKeyword Search condition for a parameter name, which supports fuzzy search.
                     * 
                     */
                    std::string GetParamKeyword() const;

                    /**
                     * 设置Search condition for a parameter name, which supports fuzzy search.
                     * @param _paramKeyword Search condition for a parameter name, which supports fuzzy search.
                     * 
                     */
                    void SetParamKeyword(const std::string& _paramKeyword);

                    /**
                     * 判断参数 ParamKeyword 是否已赋值
                     * @return ParamKeyword 是否已赋值
                     * 
                     */
                    bool ParamKeywordHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Instance ID, which supports batch query.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Search condition for a parameter name, which supports fuzzy search.
                     */
                    std::string m_paramKeyword;
                    bool m_paramKeywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCEPARAMSREQUEST_H_
