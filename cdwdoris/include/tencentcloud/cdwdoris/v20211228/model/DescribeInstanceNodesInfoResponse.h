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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCENODESINFORESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCENODESINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/NodeInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeInstanceNodesInfo response structure.
                */
                class DescribeInstanceNodesInfoResponse : public AbstractModel
                {
                public:
                    DescribeInstanceNodesInfoResponse();
                    ~DescribeInstanceNodesInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Be node
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BeNodes Be node
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBeNodes() const;

                    /**
                     * 判断参数 BeNodes 是否已赋值
                     * @return BeNodes 是否已赋值
                     * 
                     */
                    bool BeNodesHasBeenSet() const;

                    /**
                     * 获取Fe node
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FeNodes Fe node
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFeNodes() const;

                    /**
                     * 判断参数 FeNodes 是否已赋值
                     * @return FeNodes 是否已赋值
                     * 
                     */
                    bool FeNodesHasBeenSet() const;

                    /**
                     * 获取Fe master node
                     * @return FeMaster Fe master node
                     * 
                     */
                    std::string GetFeMaster() const;

                    /**
                     * 判断参数 FeMaster 是否已赋值
                     * @return FeMaster 是否已赋值
                     * 
                     */
                    bool FeMasterHasBeenSet() const;

                    /**
                     * 获取Be node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BeNodeInfos Be node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NodeInfo> GetBeNodeInfos() const;

                    /**
                     * 判断参数 BeNodeInfos 是否已赋值
                     * @return BeNodeInfos 是否已赋值
                     * 
                     */
                    bool BeNodeInfosHasBeenSet() const;

                    /**
                     * 获取Fe node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FeNodeInfos Fe node information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NodeInfo> GetFeNodeInfos() const;

                    /**
                     * 判断参数 FeNodeInfos 是否已赋值
                     * @return FeNodeInfos 是否已赋值
                     * 
                     */
                    bool FeNodeInfosHasBeenSet() const;

                private:

                    /**
                     * Be node
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_beNodes;
                    bool m_beNodesHasBeenSet;

                    /**
                     * Fe node
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_feNodes;
                    bool m_feNodesHasBeenSet;

                    /**
                     * Fe master node
                     */
                    std::string m_feMaster;
                    bool m_feMasterHasBeenSet;

                    /**
                     * Be node information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeInfo> m_beNodeInfos;
                    bool m_beNodeInfosHasBeenSet;

                    /**
                     * Fe node information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeInfo> m_feNodeInfos;
                    bool m_feNodeInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCENODESINFORESPONSE_H_
