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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEINSTANCETYPECONFIGRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEINSTANCETYPECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/InstanceTypeConfig.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeInstanceTypeConfig response structure.
                */
                class DescribeInstanceTypeConfigResponse : public AbstractModel
                {
                public:
                    DescribeInstanceTypeConfigResponse();
                    ~DescribeInstanceTypeConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number
                     * @return TotalCount Total number
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
                     * 获取Model configuration information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceTypeConfigSet Model configuration information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<InstanceTypeConfig> GetInstanceTypeConfigSet() const;

                    /**
                     * 判断参数 InstanceTypeConfigSet 是否已赋值
                     * @return InstanceTypeConfigSet 是否已赋值
                     * 
                     */
                    bool InstanceTypeConfigSetHasBeenSet() const;

                private:

                    /**
                     * Total number
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Model configuration information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InstanceTypeConfig> m_instanceTypeConfigSet;
                    bool m_instanceTypeConfigSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEINSTANCETYPECONFIGRESPONSE_H_
