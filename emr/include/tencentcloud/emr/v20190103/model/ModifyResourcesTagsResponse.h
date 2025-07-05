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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESTAGSRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESTAGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ClusterIDToFlowID.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyResourcesTags response structure.
                */
                class ModifyResourcesTagsResponse : public AbstractModel
                {
                public:
                    ModifyResourcesTagsResponse();
                    ~ModifyResourcesTagsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of resource IDs with successful modification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SuccessList List of resource IDs with successful modification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSuccessList() const;

                    /**
                     * 判断参数 SuccessList 是否已赋值
                     * @return SuccessList 是否已赋值
                     * 
                     */
                    bool SuccessListHasBeenSet() const;

                    /**
                     * 获取List of resource IDs with failed modification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailList List of resource IDs with failed modification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFailList() const;

                    /**
                     * 判断参数 FailList 是否已赋值
                     * @return FailList 是否已赋值
                     * 
                     */
                    bool FailListHasBeenSet() const;

                    /**
                     * 获取List of resource IDs with partial successful modification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PartSuccessList List of resource IDs with partial successful modification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPartSuccessList() const;

                    /**
                     * 判断参数 PartSuccessList 是否已赋值
                     * @return PartSuccessList 是否已赋值
                     * 
                     */
                    bool PartSuccessListHasBeenSet() const;

                    /**
                     * 获取Mapping list of cluster IDs and process IDs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterToFlowIdList Mapping list of cluster IDs and process IDs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ClusterIDToFlowID> GetClusterToFlowIdList() const;

                    /**
                     * 判断参数 ClusterToFlowIdList 是否已赋值
                     * @return ClusterToFlowIdList 是否已赋值
                     * 
                     */
                    bool ClusterToFlowIdListHasBeenSet() const;

                private:

                    /**
                     * List of resource IDs with successful modification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_successList;
                    bool m_successListHasBeenSet;

                    /**
                     * List of resource IDs with failed modification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_failList;
                    bool m_failListHasBeenSet;

                    /**
                     * List of resource IDs with partial successful modification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_partSuccessList;
                    bool m_partSuccessListHasBeenSet;

                    /**
                     * Mapping list of cluster IDs and process IDs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClusterIDToFlowID> m_clusterToFlowIdList;
                    bool m_clusterToFlowIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESTAGSRESPONSE_H_
