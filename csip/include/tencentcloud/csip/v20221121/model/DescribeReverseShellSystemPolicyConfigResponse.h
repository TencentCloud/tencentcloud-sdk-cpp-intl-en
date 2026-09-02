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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEREVERSESHELLSYSTEMPOLICYCONFIGRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEREVERSESHELLSYSTEMPOLICYCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeReverseShellSystemPolicyConfig response structure.
                */
                class DescribeReverseShellSystemPolicyConfigResponse : public AbstractModel
                {
                public:
                    DescribeReverseShellSystemPolicyConfigResponse();
                    ~DescribeReverseShellSystemPolicyConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Intranet alert display</p>
                     * @return InnerNetAlarmShow <p>Intranet alert display</p>
                     * 
                     */
                    bool GetInnerNetAlarmShow() const;

                    /**
                     * 判断参数 InnerNetAlarmShow 是否已赋值
                     * @return InnerNetAlarmShow 是否已赋值
                     * 
                     */
                    bool InnerNetAlarmShowHasBeenSet() const;

                    /**
                     * 获取<p>Display internal ip</p>
                     * @return InnerIPShow <p>Display internal ip</p>
                     * 
                     */
                    bool GetInnerIPShow() const;

                    /**
                     * 判断参数 InnerIPShow 是否已赋值
                     * @return InnerIPShow 是否已赋值
                     * 
                     */
                    bool InnerIPShowHasBeenSet() const;

                    /**
                     * 获取<p>Scope of servers</p>
                     * @return CWPScope <p>Scope of servers</p>
                     * 
                     */
                    int64_t GetCWPScope() const;

                    /**
                     * 判断参数 CWPScope 是否已赋值
                     * @return CWPScope 是否已赋值
                     * 
                     */
                    bool CWPScopeHasBeenSet() const;

                    /**
                     * 获取<p>Specified host instance_id list</p>
                     * @return InstanceIDs <p>Specified host instance_id list</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>Host instance id exclusion list</p>
                     * @return ExcludeInstanceIDs <p>Host instance id exclusion list</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIDs() const;

                    /**
                     * 判断参数 ExcludeInstanceIDs 是否已赋值
                     * @return ExcludeInstanceIDs 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>Tag ID list</p>
                     * @return TagIDs <p>Tag ID list</p>
                     * 
                     */
                    std::vector<std::string> GetTagIDs() const;

                    /**
                     * 判断参数 TagIDs 是否已赋值
                     * @return TagIDs 是否已赋值
                     * 
                     */
                    bool TagIDsHasBeenSet() const;

                    /**
                     * 获取<p>Scope of containers</p>
                     * @return TCSSScope <p>Scope of containers</p>
                     * 
                     */
                    int64_t GetTCSSScope() const;

                    /**
                     * 判断参数 TCSSScope 是否已赋值
                     * @return TCSSScope 是否已赋值
                     * 
                     */
                    bool TCSSScopeHasBeenSet() const;

                    /**
                     * 获取<p>Specify the cluster ID list</p>
                     * @return ClusterIDs <p>Specify the cluster ID list</p>
                     * 
                     */
                    std::vector<std::string> GetClusterIDs() const;

                    /**
                     * 判断参数 ClusterIDs 是否已赋值
                     * @return ClusterIDs 是否已赋值
                     * 
                     */
                    bool ClusterIDsHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID exclusion list</p>
                     * @return ExcludeClusterIDs <p>Cluster ID exclusion list</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeClusterIDs() const;

                    /**
                     * 判断参数 ExcludeClusterIDs 是否已赋值
                     * @return ExcludeClusterIDs 是否已赋值
                     * 
                     */
                    bool ExcludeClusterIDsHasBeenSet() const;

                private:

                    /**
                     * <p>Intranet alert display</p>
                     */
                    bool m_innerNetAlarmShow;
                    bool m_innerNetAlarmShowHasBeenSet;

                    /**
                     * <p>Display internal ip</p>
                     */
                    bool m_innerIPShow;
                    bool m_innerIPShowHasBeenSet;

                    /**
                     * <p>Scope of servers</p>
                     */
                    int64_t m_cWPScope;
                    bool m_cWPScopeHasBeenSet;

                    /**
                     * <p>Specified host instance_id list</p>
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                    /**
                     * <p>Host instance id exclusion list</p>
                     */
                    std::vector<std::string> m_excludeInstanceIDs;
                    bool m_excludeInstanceIDsHasBeenSet;

                    /**
                     * <p>Tag ID list</p>
                     */
                    std::vector<std::string> m_tagIDs;
                    bool m_tagIDsHasBeenSet;

                    /**
                     * <p>Scope of containers</p>
                     */
                    int64_t m_tCSSScope;
                    bool m_tCSSScopeHasBeenSet;

                    /**
                     * <p>Specify the cluster ID list</p>
                     */
                    std::vector<std::string> m_clusterIDs;
                    bool m_clusterIDsHasBeenSet;

                    /**
                     * <p>Cluster ID exclusion list</p>
                     */
                    std::vector<std::string> m_excludeClusterIDs;
                    bool m_excludeClusterIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEREVERSESHELLSYSTEMPOLICYCONFIGRESPONSE_H_
