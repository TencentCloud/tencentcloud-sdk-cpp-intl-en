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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULERESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ModuleItem.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeModule response structure.
                */
                class DescribeModuleResponse : public AbstractModel
                {
                public:
                    DescribeModuleResponse();
                    ~DescribeModuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of eligible modules.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Number of eligible modules.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of module details.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ModuleItemSet List of module details.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ModuleItem> GetModuleItemSet() const;

                    /**
                     * 判断参数 ModuleItemSet 是否已赋值
                     * @return ModuleItemSet 是否已赋值
                     * 
                     */
                    bool ModuleItemSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible modules.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of module details.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ModuleItem> m_moduleItemSet;
                    bool m_moduleItemSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULERESPONSE_H_
