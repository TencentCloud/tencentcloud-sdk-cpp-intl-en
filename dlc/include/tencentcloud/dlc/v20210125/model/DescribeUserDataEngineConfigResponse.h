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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERDATAENGINECONFIGRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERDATAENGINECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineConfigInstanceInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeUserDataEngineConfig response structure.
                */
                class DescribeUserDataEngineConfigResponse : public AbstractModel
                {
                public:
                    DescribeUserDataEngineConfigResponse();
                    ~DescribeUserDataEngineConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of custom configuration items of the user's engine
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataEngineConfigInstanceInfos List of custom configuration items of the user's engine
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DataEngineConfigInstanceInfo> GetDataEngineConfigInstanceInfos() const;

                    /**
                     * 判断参数 DataEngineConfigInstanceInfos 是否已赋值
                     * @return DataEngineConfigInstanceInfos 是否已赋值
                     * 
                     */
                    bool DataEngineConfigInstanceInfosHasBeenSet() const;

                    /**
                     * 获取Total configuration items
                     * @return TotalCount Total configuration items
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of custom configuration items of the user's engine
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DataEngineConfigInstanceInfo> m_dataEngineConfigInstanceInfos;
                    bool m_dataEngineConfigInstanceInfosHasBeenSet;

                    /**
                     * Total configuration items
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERDATAENGINECONFIGRESPONSE_H_
