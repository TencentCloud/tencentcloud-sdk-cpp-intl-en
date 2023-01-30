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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEK8SDETAILINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEK8SDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * K8s asset details
                */
                class ComplianceK8SDetailInfo : public AbstractModel
                {
                public:
                    ComplianceK8SDetailInfo();
                    ~ComplianceK8SDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取K8s cluster name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterName K8s cluster name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置K8s cluster name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ClusterName K8s cluster name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取K8s cluster version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterVersion K8s cluster version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置K8s cluster version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ClusterVersion K8s cluster version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     */
                    bool ClusterVersionHasBeenSet() const;

                private:

                    /**
                     * K8s cluster name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * K8s cluster version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEK8SDETAILINFO_H_
