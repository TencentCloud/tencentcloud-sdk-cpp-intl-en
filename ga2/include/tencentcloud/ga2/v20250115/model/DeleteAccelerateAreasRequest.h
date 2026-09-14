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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_DELETEACCELERATEAREASREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_DELETEACCELERATEAREASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * DeleteAccelerateAreas request structure.
                */
                class DeleteAccelerateAreasRequest : public AbstractModel
                {
                public:
                    DeleteAccelerateAreasRequest();
                    ~DeleteAccelerateAreasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Global acceleration instance ID.
                     * @return GlobalAcceleratorId Global acceleration instance ID.
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置Global acceleration instance ID.
                     * @param _globalAcceleratorId Global acceleration instance ID.
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取Acceleration region ID.
                     * @return AcceleratorAreaIds Acceleration region ID.
                     * 
                     */
                    std::vector<std::string> GetAcceleratorAreaIds() const;

                    /**
                     * 设置Acceleration region ID.
                     * @param _acceleratorAreaIds Acceleration region ID.
                     * 
                     */
                    void SetAcceleratorAreaIds(const std::vector<std::string>& _acceleratorAreaIds);

                    /**
                     * 判断参数 AcceleratorAreaIds 是否已赋值
                     * @return AcceleratorAreaIds 是否已赋值
                     * 
                     */
                    bool AcceleratorAreaIdsHasBeenSet() const;

                private:

                    /**
                     * Global acceleration instance ID.
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * Acceleration region ID.
                     */
                    std::vector<std::string> m_acceleratorAreaIds;
                    bool m_acceleratorAreaIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_DELETEACCELERATEAREASREQUEST_H_
