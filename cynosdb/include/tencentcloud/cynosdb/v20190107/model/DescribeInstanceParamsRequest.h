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
                     * 获取Instance ID. Support batch querying.
                     * @return InstanceIds Instance ID. Support batch querying.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID. Support batch querying.
                     * @param _instanceIds Instance ID. Support batch querying.
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
                     * 获取Parameter name search criteria. Fuzzy matching is supported.
                     * @return ParamKeyword Parameter name search criteria. Fuzzy matching is supported.
                     * 
                     */
                    std::string GetParamKeyword() const;

                    /**
                     * 设置Parameter name search criteria. Fuzzy matching is supported.
                     * @param _paramKeyword Parameter name search criteria. Fuzzy matching is supported.
                     * 
                     */
                    void SetParamKeyword(const std::string& _paramKeyword);

                    /**
                     * 判断参数 ParamKeyword 是否已赋值
                     * @return ParamKeyword 是否已赋值
                     * 
                     */
                    bool ParamKeywordHasBeenSet() const;

                    /**
                     * 获取Whether it is a global parameter
                     * @return IsGlobal Whether it is a global parameter
                     * 
                     */
                    std::string GetIsGlobal() const;

                    /**
                     * 设置Whether it is a global parameter
                     * @param _isGlobal Whether it is a global parameter
                     * 
                     */
                    void SetIsGlobal(const std::string& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Instance ID. Support batch querying.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Parameter name search criteria. Fuzzy matching is supported.
                     */
                    std::string m_paramKeyword;
                    bool m_paramKeywordHasBeenSet;

                    /**
                     * Whether it is a global parameter
                     */
                    std::string m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCEPARAMSREQUEST_H_
