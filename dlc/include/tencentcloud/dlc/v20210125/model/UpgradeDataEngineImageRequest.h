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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPGRADEDATAENGINEIMAGEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPGRADEDATAENGINEIMAGEREQUEST_H_

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
                * UpgradeDataEngineImage request structure.
                */
                class UpgradeDataEngineImageRequest : public AbstractModel
                {
                public:
                    UpgradeDataEngineImageRequest();
                    ~UpgradeDataEngineImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Engine ID
                     * @return DataEngineId Engine ID
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置Engine ID
                     * @param _dataEngineId Engine ID
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                private:

                    /**
                     * Engine ID
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPGRADEDATAENGINEIMAGEREQUEST_H_
