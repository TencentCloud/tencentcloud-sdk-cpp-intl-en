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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEUPGRADERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEUPGRADERESPONSE_H_

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
                * CheckDataEngineImageCanBeUpgrade response structure.
                */
                class CheckDataEngineImageCanBeUpgradeResponse : public AbstractModel
                {
                public:
                    CheckDataEngineImageCanBeUpgradeResponse();
                    ~CheckDataEngineImageCanBeUpgradeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the minor version of the cluster image that can be updated under the major version
                     * @return ChildImageVersionId ID of the minor version of the cluster image that can be updated under the major version
                     * 
                     */
                    std::string GetChildImageVersionId() const;

                    /**
                     * 判断参数 ChildImageVersionId 是否已赋值
                     * @return ChildImageVersionId 是否已赋值
                     * 
                     */
                    bool ChildImageVersionIdHasBeenSet() const;

                    /**
                     * 获取Whether it can be updated
                     * @return IsUpgrade Whether it can be updated
                     * 
                     */
                    bool GetIsUpgrade() const;

                    /**
                     * 判断参数 IsUpgrade 是否已赋值
                     * @return IsUpgrade 是否已赋值
                     * 
                     */
                    bool IsUpgradeHasBeenSet() const;

                private:

                    /**
                     * ID of the minor version of the cluster image that can be updated under the major version
                     */
                    std::string m_childImageVersionId;
                    bool m_childImageVersionIdHasBeenSet;

                    /**
                     * Whether it can be updated
                     */
                    bool m_isUpgrade;
                    bool m_isUpgradeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEUPGRADERESPONSE_H_
