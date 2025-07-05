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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DELETEDATAENGINEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DELETEDATAENGINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DeleteDataEngine request structure.
                */
                class DeleteDataEngineRequest : public AbstractModel
                {
                public:
                    DeleteDataEngineRequest();
                    ~DeleteDataEngineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Delete the name array of virtual clusters.
                     * @return DataEngineNames Delete the name array of virtual clusters.
                     * 
                     */
                    std::vector<std::string> GetDataEngineNames() const;

                    /**
                     * 设置Delete the name array of virtual clusters.
                     * @param _dataEngineNames Delete the name array of virtual clusters.
                     * 
                     */
                    void SetDataEngineNames(const std::vector<std::string>& _dataEngineNames);

                    /**
                     * 判断参数 DataEngineNames 是否已赋值
                     * @return DataEngineNames 是否已赋值
                     * 
                     */
                    bool DataEngineNamesHasBeenSet() const;

                private:

                    /**
                     * Delete the name array of virtual clusters.
                     */
                    std::vector<std::string> m_dataEngineNames;
                    bool m_dataEngineNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DELETEDATAENGINEREQUEST_H_
