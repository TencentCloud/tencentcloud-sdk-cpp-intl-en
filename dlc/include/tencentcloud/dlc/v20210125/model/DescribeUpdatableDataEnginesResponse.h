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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUPDATABLEDATAENGINESRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUPDATABLEDATAENGINESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineBasicInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeUpdatableDataEngines response structure.
                */
                class DescribeUpdatableDataEnginesResponse : public AbstractModel
                {
                public:
                    DescribeUpdatableDataEnginesResponse();
                    ~DescribeUpdatableDataEnginesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Basic cluster information
                     * @return DataEngineBasicInfos Basic cluster information
                     * 
                     */
                    std::vector<DataEngineBasicInfo> GetDataEngineBasicInfos() const;

                    /**
                     * 判断参数 DataEngineBasicInfos 是否已赋值
                     * @return DataEngineBasicInfos 是否已赋值
                     * 
                     */
                    bool DataEngineBasicInfosHasBeenSet() const;

                    /**
                     * 获取Number of clusters
                     * @return TotalCount Number of clusters
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Basic cluster information
                     */
                    std::vector<DataEngineBasicInfo> m_dataEngineBasicInfos;
                    bool m_dataEngineBasicInfosHasBeenSet;

                    /**
                     * Number of clusters
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUPDATABLEDATAENGINESRESPONSE_H_
