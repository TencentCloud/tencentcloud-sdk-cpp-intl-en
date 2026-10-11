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
                     * 获取List of successful resource IDs.
                     * @return SuccessList List of successful resource IDs.
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
                     * 获取List of failed resource IDs.
                     * @return FailList List of failed resource IDs.
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
                     * 获取List of partially successful resource IDs.
                     * @return PartSuccessList List of partially successful resource IDs.
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
                     * 获取Mapping list of cluster IDs and flow IDs.
                     * @return ClusterToFlowIdList Mapping list of cluster IDs and flow IDs.
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
                     * List of successful resource IDs.
                     */
                    std::vector<std::string> m_successList;
                    bool m_successListHasBeenSet;

                    /**
                     * List of failed resource IDs.
                     */
                    std::vector<std::string> m_failList;
                    bool m_failListHasBeenSet;

                    /**
                     * List of partially successful resource IDs.
                     */
                    std::vector<std::string> m_partSuccessList;
                    bool m_partSuccessListHasBeenSet;

                    /**
                     * Mapping list of cluster IDs and flow IDs.
                     */
                    std::vector<ClusterIDToFlowID> m_clusterToFlowIdList;
                    bool m_clusterToFlowIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESTAGSRESPONSE_H_
