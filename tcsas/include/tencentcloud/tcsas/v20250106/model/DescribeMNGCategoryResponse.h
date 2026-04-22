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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGCATEGORYRESPONSE_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGCATEGORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/MNGTypeDefine.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * DescribeMNGCategory response structure.
                */
                class DescribeMNGCategoryResponse : public AbstractModel
                {
                public:
                    DescribeMNGCategoryResponse();
                    ~DescribeMNGCategoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Response data</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data <p>Response data</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MNGTypeDefine> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>Response data</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MNGTypeDefine> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGCATEGORYRESPONSE_H_
